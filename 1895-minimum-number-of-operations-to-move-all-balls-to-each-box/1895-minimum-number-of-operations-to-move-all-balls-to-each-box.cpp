class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int>v;
        map<int,vector<int>>m;
        for(int i=0;i<boxes.size();i++){
            if(boxes[i]=='1')
            m[1].push_back(i);
        }
        for(int i=0;i<boxes.size();i++){
            int sum=0;
            for(int j=0;j<m[1].size();j++){
                sum+=abs(m[1][j]-i);
            }
            v.push_back(sum);
        }
        return v;
    }
};