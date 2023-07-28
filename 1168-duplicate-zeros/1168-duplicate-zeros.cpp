// class Solution {
// public:
//     void duplicateZeros(vector<int>& nums) {
//     vector<int>v;
//     int a=0;
//     for(int i=0;a!=nums.size();i++){
//         if(nums[i]!=0){
//   v[a]=nums[i];a++;}
//         else{
//             v[a]=0; a++;
//             v[a]=0;a++;
//         }
//     }
//     nums=v;
//     }
// };
class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        vector<int>v(arr.begin(),arr.end());
        int i=0;
        for(int j=0;j<v.size()&&i<v.size();j++)
        {
            if(v[j]==0)
            {
                arr[i]=0;
                if(i+1<v.size())
                {
                    arr[i+1]=0;
                }
                
                i+=2;
            }
            else
            {
                arr[i]=v[j];
                i++;
            }
        }
    }
};