class Solution {
public:
    double findMedianSortedArrays(vector<int>& a, vector<int>& b) {
        vector<int>v;
        int n=a.size();
        int m=b.size();
        int i=0,j=0;
           while(i<n&&j<m){
               if(a[i]<=b[j])
               {v.push_back(a[i]);
               i++;}
               else{
                   v.push_back(b[j]);
                   j++;
               }
           }
           while(i<n){
               v.push_back(a[i]);
               i++;
           } while(j<m){
               v.push_back(b[j]);
               j++;
           }
           double res;
           if(v.size()%2    !=0){
           int s=0;
            int e=v.size()-1;
            int mid=s+(e-s)/2;
            res = v[mid];
            }
           else{
            int s=0;
            int e=v.size()-1;
            int mid=s+(e-s)/2;
           res=(v[mid] + v[mid+1])/2.0;
            }
            return res;
    }
};