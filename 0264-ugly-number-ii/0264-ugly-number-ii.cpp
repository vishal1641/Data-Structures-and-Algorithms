class Solution {
public:
    int nthUglyNumber(int n) {
        priority_queue<long long int,vector<long long int>,greater<long long int>>pq;
        pq.push(1);
        long long count=0;
        long long x=0;
        set<long long int>s;
        while(count <n){
             x=pq.top();
            pq.pop();
            if(s.find(x*2)==s.end()){
                s.insert(x*2);
                pq.push(x*2);
            }
             if(s.find(x*3)==s.end()){
                s.insert(x*3);
                pq.push(x*3);
            }
             if(s.find(x*5)==s.end()){
                s.insert(x*5);
                pq.push(x*5);
            }
            count++;
        }
        return x;
    }
};