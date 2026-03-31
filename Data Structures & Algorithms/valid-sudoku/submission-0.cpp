class Solution {
    bool isValid(char num,int i,int j,vector<vector<char>>& board)
    {
        for(int k = 0;k<9;k++)
        {
            if(k!=j && board[i][k]==num) return false;
            if(k!=i && board[k][j]==num) return false;
        }
        int startrow = (i/3)*3;
        int startcol = (j/3)*3;
        for(int k=startrow;k<startrow+3;k++)
        {
            for(int l=startcol;l<startcol+3;l++)
            {
                if(k!=i && l!=j && board[k][l]==num) return false;
            }
        }
        return true;
    }
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                char num = board[i][j];
                if(num=='.') continue;
                if(!isValid(num,i,j,board)) return false;
            }
        }
        return true;
    }
};
