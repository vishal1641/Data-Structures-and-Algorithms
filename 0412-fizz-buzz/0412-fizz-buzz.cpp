class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string>v(n);
        for(int i=0;i<n;i++){
            if((i+1)%3==0&&(i+1)%5==0)
            v[i]="FizzBuzz";
            else if((i+1)%3==0)
            v[i]="Fizz";
            else if((i+1)%5==0)
            v[i]="Buzz";
             else{
                int k=i+1;
             v[i]=to_string(k);
             }
        }
        return v;
    }
};