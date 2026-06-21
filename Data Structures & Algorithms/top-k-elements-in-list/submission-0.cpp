class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>f;
        vector<int>res;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        for(int i =0;i<nums.size();i++)
        {
            f[nums[i]]++;
        }
        for(auto i:f)
        {
            int c = i.first;
            int a = i.second;
            pair<int,int>pairs = {a,c};
            if(pq.size()<k)
            {
                pq.push(pairs);
                continue;
            }
            pq.push(pairs);
            pq.pop();
        }
        while(!pq.empty())
        {
           res.push_back(pq.top().second);
           pq.pop();
        }
        return res;
    }
};
