class Solution {
public:
void number(string digits,int index,string output,vector<string>&ans,string m[]){
if(index>=digits.size()){
ans.push_back(output);
return;}
int n=digits[index]-'0';
string value=m[n];
for(int i=0;i<value.size();i++){
    output.push_back(value[i]);
    number(digits,index+1,output,ans,m);
    output.pop_back();
}




}
    vector<string> letterCombinations(string digits) {
      vector<string>ans;
      if(digits.length()==0)return ans;
      string output="";
      int index=0;
      string m[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
      number(digits,index,output,ans,m); 
return ans;
    }
};