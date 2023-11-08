class Solution {
public:
    int maxArea(vector<int>& height) {
int a=0,l,r,p;
int b=height.size()-1;
int max=0;
while(a<b){
l=height[a];
r=height[b];
p=min(l,r)*(b-a);
if(p>max){
    max=p;
}
if(l<r)a++;
else
b--;
}

return max;}
};