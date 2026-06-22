class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int start=0;
        int end = numbers.size()-1;
        vector<int>res;
        while(start<end)
        {
            int sum = numbers[start]+numbers[end];
            if(sum == target)
            {
                return {start+1,end+1};
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
            else if(sum > target)
            {
                  end--;
            }
            else
            {
                start++;
            }
        }
    }
};
