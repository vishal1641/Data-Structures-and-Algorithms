class Solution {
public:
bool check(vector<vector<char>>&board,int index,int i,int j,int row,int col,string &word){
    if(index==word.size())
    return true;
    if(i<0||i>=row||j<0||j>=col||board[i][j]!=word[index])
    return false;
    char temp = board[i][j];
        board[i][j] = '*';
        bool ans1 = check(board, index+1, i+1, j,row,col ,word);
        bool ans2 = check(board, index+1, i, j+1,row,col,word);
        bool ans3 = check(board,index+1,i-1, j,row,col,word);
        bool ans4 =check(board, index+1, i, j-1,row,col,word);
        board[i][j] = temp;
        return ans1 || ans2 || ans3 || ans4;
}
    bool exist(vector<vector<char>>& board, string word) {
        int row=board.size();
        int col=board[0].size();
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(check(board,0,i,j,row,col,word)==true)
                return true;
            }
        }
        return false;
    }
};