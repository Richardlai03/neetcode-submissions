class LRUCache {
public:
    int cap;
    LRUCache(int capacity) {
        this->cap = capacity;
    }
    unordered_map<int, pair<int, list<int>::iterator>> mp;
    list<int> ls;
    int get(int key) {
        if (mp.contains(key)) {
            ls.erase(mp[key].second);
            ls.push_back(key);
            mp[key].second = prev(ls.end());
            return mp[key].first;
        }
        return -1;
    }
    
    void put(int key, int value) {
        if (mp.contains(key)) {
            ls.erase(mp[key].second);
            ls.push_back(key);
            mp[key] = {value, prev(ls.end())};
        }
        else {
            ls.push_back(key);
            mp[key] = {value, prev(ls.end())};
        }
        if (mp.size() > cap) {
            int k = ls.front();
            ls.pop_front();
            mp.erase(k);    
        }
    }
};
