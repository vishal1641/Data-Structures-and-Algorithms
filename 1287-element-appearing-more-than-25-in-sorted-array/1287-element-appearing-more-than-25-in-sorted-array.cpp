class Solution {
public:
int findleft(int i,int j,vector<int>&arr,int it){
  int res=-1;  while(i<=j){
    int mid=(i+j)/2;
    if(arr[mid]==it){
        res=mid;
        j=mid-1;
    }
    else if(arr[mid]>it){
        j=mid-1;
    }
    else{
        i=mid+1;
    }}
    return res;
}
int findright(int i,int j,vector<int>&arr,int it){
  int res=-1;  while(i<=j){
    int mid=(i+j)/2;
    if(arr[mid]==it){
        res=mid;
        i=mid+1;
    }
    else if(arr[mid]>it){
        j=mid-1;
    }
    else{
        i=mid+1;
    }}
    return res;
}
    int findSpecialInteger(vector<int>& arr) {
       
        int n=arr.size();
      vector<int>a{arr[n/4],arr[n/2],arr[3*n/4]};
      for(auto it:a){
          int x=findleft(0,n-1,arr,it);
          int y=findright(0,n-1,arr,it);
          if(y-x+1>(n/4))
          return it;
      }
      return -1;
    }
};