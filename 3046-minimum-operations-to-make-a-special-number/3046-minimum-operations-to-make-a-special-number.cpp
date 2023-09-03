class Solution {
public:
    int minimumOperations(string num) {
        int n=num.size();
        int mini=INT_MAX;
       
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
            string k="";
            k+=num[i];k+=num[j];
               
                if(k=="00"||k=="25"||k=="75"||k=="50"){
                    int del=(j-i-1)+(n-j-1);
                     mini=min(mini,del);}
              
            }
        }
        if(mini!=INT_MAX)
        return mini;
        else
        {
            if(find(num.begin(),num.end(),'0')!=num.end())
            return num.size()-1;
            else return num.size();
        } 
    }
};