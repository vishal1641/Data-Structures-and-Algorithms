class Solution {
public:
    int bestClosingTime(string customers) {
        int ans=INT_MAX;
        int res;
        int n=customers.size();
       vector<int>yes(n+1,0);
       vector<int>no(n+1,0);

        // for prefix sum of "N"

        for(int i=1;i<=n;i++){
            if(customers[i-1]=='N')
               no[i]=no[i-1]+1;
            else
            no[i]=no[i-1];   
        }
        // for suffix sum of "Y"

        if(customers[n-1]=='Y')
            yes[n]=1;
         for(int i=n-1;i>0;i--){
               if(customers[i-1]=='Y')
                 yes[i]=yes[i+1]+1;
                else
                yes[i]=yes[i+1];     
         }
         
         // Calculating the Penalty at each Index
        
         for(int i=0;i<n;i++){
                int penal=yes[i+1]+no[i];
                if(penal<ans){
                    res=i;
                   ans=min(ans,penal);
                }
               
        }
        if(no[n]<ans)
           return n;
        return res;
    }   
};