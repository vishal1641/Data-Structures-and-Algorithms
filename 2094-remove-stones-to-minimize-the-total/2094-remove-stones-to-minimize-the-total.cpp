class Solution
{
    public:
        int minStoneSum(vector<int> &piles, int k)
        {
            priority_queue<int> q;
            int s=0;
         
            for (int i = 0; i < piles.size(); i++)
                q.push(piles[i]);
            while (k--)
            {
                int x = q.top();
                q.pop();
                q.push(x-x / 2);
               
            }
            while(q.size()!=0)
            {
                s+=q.top();
                q.pop();
            }
            return s;
        }
};