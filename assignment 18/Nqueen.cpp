class Solution {
public:
   
    bool isSafe(vector<string> &s, int row, int col, int n)
    {
        for(int i= 0; i<= row; i++)
        {
            if(s[i][col]== 'Q')
                return false;
        }
        int i= row;
        int j= col;
        while(i>=0 && j>=0)
        {
            if(s[i][j]== 'Q')
            {
                return false;
            }
            i--;
            j--;
        }
        i= row;
        j= col;
        while(i>=0 && j<n)
        {
            if(s[i][j]== 'Q')
            {
                return false;
            }
            i--;
            j++;
        }
        return true;
    }
    void recursion(vector<string> &s, int r,int n, vector<vector<string>> &ans){
        
        if(r==n){
             ans.push_back(s);
            return;
        }
       for(int c=0;c<n;c++){
           if(isSafe(s,r,c,n)){
               s[r][c]='Q';
               recursion(s,r+1,n,ans);
               s[r][c]='.';
           }
       }
        
        
    }
    
    vector<vector<string>> solveNQueens(int n) {
         vector<vector<string>> ans;
        vector<string> s(n);
        string k(n,'.');
        for(int i=0;i<n;i++){
            s[i]=k;
        }
        int row=0;
        recursion(s,row,n,ans);
        return ans;
        
        
    }
};
