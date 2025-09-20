#include<bits/stdc++.h>
using namespace std;
class Router {
public:
    int MAX_SIZE;
    unordered_map<string,vector<int>> packetStore;
    unordered_map<int,vector<int>> destTimeMap;
    queue<string> q;

    Router(int memoryLimit) {
        MAX_SIZE = memoryLimit;
    }
    
    string makeKey(int source, int destination, int timestamp)
    {
        return to_string(source) + "_" + to_string(destination) + "_" + to_string(timestamp);
    }

    bool addPacket(int source, int destination, int timestamp) {
        string key = makeKey(source, destination, timestamp);
        if(packetStore.find(key)!=packetStore.end()) return false;

        if(q.size()>=MAX_SIZE)
        {
            forwardPacket();
        }
        packetStore[key] = {source, destination, timestamp};
        q.push(key);
        destTimeMap[destination].push_back(timestamp);
        return true;
    }
    
    vector<int> forwardPacket() {
        if(packetStore.empty()) return {};
        string key = q.front();
        q.pop();
        vector<int> v = packetStore[key];
        packetStore.erase(key);
        destTimeMap[v[1]].erase(destTimeMap[v[1]].begin());
        return v;
    }
    
    int getCount(int destination, int startTime, int endTime) {
        auto it = destTimeMap.find(destination);
        if(it == destTimeMap.end() || it->second.empty()){
            return 0;
        }

        int i = lower_bound(begin(it->second), end(it->second), startTime) - begin(it->second);
        int j = upper_bound(begin(it->second), end(it->second), endTime) - begin(it->second);

        return j-i;
    }
};

/**
 * Your Router object will be instantiated and called as such:
 * Router* obj = new Router(memoryLimit);
 * bool param_1 = obj->addPacket(source,destination,timestamp);
 * vector<int> param_2 = obj->forwardPacket();
 * int param_3 = obj->getCount(destination,startTime,endTime);
 */