class Solution {
public:
   int max(vector<int>piles)
   {
    int maxi = piles[0];
    for(int i =1;i<piles.size();i++)
    {
        if(piles[i]>maxi)
        {
            maxi = piles[i];
        }
    }
    return maxi;
   }
   int fun(vector<int>piles,int guess)
   {
     int h =0;
     for(int i =0;i<piles.size();i++)
     {
        h = h+piles[i]/guess;
        if(piles[i]%guess!=0)
        {
            h++;
        }

     }
     return h;
   }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low =1;
        int res =0;
        int high = max(piles);
        while(low<=high)
        {
            int mid = (low+high)/2;
            int hour = fun(piles,mid);
            if(hour<=h)
            {
                res = mid ;
                high = mid-1;
            }
            else
            {
                low = mid+1;
                

            }
        }
        return res;
    }
};
