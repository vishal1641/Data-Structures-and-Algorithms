class Solution {
public:
    int maxProduct(vector<int>& arr) {
        int maxi=INT_MIN,maxi2=INT_MIN;
    for(int i=0;i<arr.size();i++){
        if(arr[i]>=maxi){
            maxi2=maxi;
            maxi=arr[i];
        }
        else{
            if(arr[i]<maxi&&arr[i]>=maxi2)
            maxi2=arr[i];

        }
    }
    return (maxi2-1)*(maxi-1);
    }
};