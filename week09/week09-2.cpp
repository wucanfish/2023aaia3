//LC1572
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int M=mat.size();
        int ans=0;
        for(int i=0;i<M;i++){
            ans+=(mat[i][i]+mat[i][M-1-i]);//左上右下右上左下
        }
        if(M%2==1)  ans -=mat[M/2][M/2];
        return ans;
    }
};
