class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>res;
        int start =0;
        int end = numbers.size()-1;
        while(start<end)
        {
            int sum = numbers[start]+numbers[end];
            if(sum==target)
            {
                res.push_back(start+1);
                res.push_back(end+1);
                start++;
                end--;
              while(start<end&&numbers[start]==numbers[start-1])
              {
                start++;
              }
               while(start<end&&numbers[end]==numbers[end+1])
              {
                end--;
              }
            }
            else if(sum<target)
            {
                start++;


            }
            else
            {
                end--;
            }
        
        }
        return res;
    }
};
