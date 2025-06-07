class Solution {
public:
    int maxContainers(int n, int w, int maxWeight) {
       
        int a=maxWeight/w;
return a>n*n?n*n:a;


    }
};