class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size(),sum=0;
         vector<int>v(n),v1(n);
         int max=0,max1=0;
for(int i=0;i<n;i++){
    if(height[i]>max){
    max=height[i];}
v[i]=max;
    }
    for(int i=n-1;i>=0;i--)
    {
    if(height[i]>max1)
    {
    max1=height[i];
    }
v1[i]=max1;
    }
    for(int i=0;i<n;i++){
        sum+=min(v[i],v1[i])-height[i];}
return sum;
             
    }
};