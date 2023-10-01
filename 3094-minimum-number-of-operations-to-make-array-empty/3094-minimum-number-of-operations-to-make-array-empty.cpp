class Solution {
public:
    int minOperations(vector<int>& nums) {
       unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++)
            m[nums[i]]++;
    
      
      
        int g=0;
        for(auto it: m)
        { 
             int z=it.second;
             
             if(z==1)
             return -1;
             if(z%3==0)
             g+=z/3;
             else
             {
                 if(z%3==1)
                 g+=z/3+1;
                 else if(z%3==2)
                 g+=z/3+1;
             }
       
        }
        return g;
    }
};