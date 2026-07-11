class MyHashSet {
private:
    vector<int> vec;
public:
    MyHashSet() {}
    
    void add(int key) {
        if(find(vec.begin(), vec.end(), key)==vec.end())
            vec.push_back(key);
    }
    
    void remove(int key) {
        auto it = find(vec.begin(), vec.end(), key);
        if(find(vec.begin(), vec.end(), key)!=vec.end())
            vec.erase(it);
    }
    
    bool contains(int key) {
        return find(vec.begin(), vec.end(), key)!=vec.end();
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */