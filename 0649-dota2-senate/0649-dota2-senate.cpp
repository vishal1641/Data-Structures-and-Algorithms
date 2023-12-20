class Solution {
public:
    string predictPartyVictory(string senate) {
       queue<int>a,b;
       for(int i=0;i<senate.size();i++){
           if(senate[i]=='R')
           a.push(i);
           else
           b.push(i);
       } int ri=0,di=0;
       while(!a.empty()&&!b.empty()){
            ri=a.front();
           a.pop();
            di=b.front();
           b.pop();
           if(ri<di){
               a.push(ri+senate.size());
           }
           else{
               b.push(di+senate.size());
           }
       } 
       return a.size()>b.size()?"Radiant":"Dire";
    }
};