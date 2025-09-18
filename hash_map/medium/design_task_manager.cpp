#include<bits/stdc++.h>
using namespace std;
class TaskManager {

unordered_map<int, pair<int,int>> task_priority_user; // taskId → {priority, userId}
priority_queue<tuple<int,int,int>> pq; // {priority, taskId, userId}
public:
    TaskManager(vector<vector<int>>& tasks) {
        for(int i=0;i<tasks.size();i++)
        {
            auto &row = tasks[i];
            int userId = row[0];
            int taskId = row[1];
            int priority = row[2];
            task_priority_user.insert({taskId,{priority,userId}});
            pq.push({priority,taskId,userId});
        }
    }
    
    void add(int userId, int taskId, int priority) {
        task_priority_user.insert({taskId,{priority,userId}});
        pq.push({priority,taskId,userId});
    }
    
    void edit(int taskId, int newPriority) {
        int userId = task_priority_user[taskId].second;
        task_priority_user[taskId].first = newPriority;
        pq.push({newPriority,taskId,userId});
    }
    
    void rmv(int taskId) {
        task_priority_user.erase(taskId);  // lazy removal
    }
    
    int execTop() {
        while(!pq.empty())
        {
            auto [priority,taskId,userId] = pq.top();
            if(task_priority_user.count(taskId) && task_priority_user[taskId].first == priority)
            {
                pq.pop();
                task_priority_user.erase(taskId);
                return userId;
            }
            pq.pop(); // stale entry
        }
        return -1;
    }
};

/**
 * Your TaskManager object will be instantiated and called as such:
 * TaskManager* obj = new TaskManager(tasks);
 * obj->add(userId,taskId,priority);
 * obj->edit(taskId,newPriority);
 * obj->rmv(taskId);
 * int param_4 = obj->execTop();
 */