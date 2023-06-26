class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int, int, greater<int> > m;
       int w=-1;
        int n=nums.size();
        for(int i=0;i<n;i++){
            m[nums[i]]++;

        }
       
        int max=INT_MIN;
        for(auto it:m){
            if(it.second>=max&& it.first%2==0){
           w=it.first;
            max=it.second;}
        }
        return w;
    }
};