//LC1672
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int M=accounts.size();//�H��
        int N=accounts[0].size();//�h�ֱb��
        int ans=0;
        for(int i=0;i<M;i++){
            int total=0;
            for(int j=0;j<N;j++){
                total +=accounts[i][j];
            }
            if(total>ans)   ans=total;
        }
        return ans;
    }
};
