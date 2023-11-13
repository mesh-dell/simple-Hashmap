class MyHashMap {
public:
    int data[(int) 10e6];
    MyHashMap() {
        for (int i = 0; i < (int) 10e6; i++)
        {
            data[i] = -1;
        }
    }
    
    void put(int key, int value) {
        data[key] = value;
    }
    
    int get(int key) {
        int x = data[key];
        return x;
    }
    
    void remove(int key) {
        data[key] = -1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */