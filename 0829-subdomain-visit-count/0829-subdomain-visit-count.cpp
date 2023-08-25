class Solution {
public:
    vector<string> subdomainVisits(vector<string>& nums) {
        map<string,int>m;
     for(int p=0;p<nums.size();p++)
     {
        int n=0;
         string k=nums[p];

         for(int i=0;i<k.size();i++){
             if(k[i]==' ')
             break;
             n=n*10+(k[i]-'0');
         }
         for(int i=k.length()-1;i>=0;i--)
         {
             if(k[i]==' ')
             {
             string c=k.substr(i+1,k.length()-i);
             m[c]+=n;
             break;
             }
             else if(k[i]=='.')
             {
                 string c=k.substr(i+1,k.length()-i);
m[c]+=n;
             }
         }

    }
    vector<string>v;
    for(auto it :m){
        string y="";
        y+=to_string(it.second);
        y+=" ";
        y+=it.first;
        v.push_back(y);
    }
         
     return v;
    }
};