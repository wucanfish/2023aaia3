//54
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int M=matrix.size(),N=matrix[0].size();
        vector<int> ans;

        int i=0,j=0;
        int d= 0; //0往右->1下->2左->3上
        int di[4]={0,1,0,-1};
        int dj[4]={1,0,-1,0};

        while(ans.size()<M*N){//長度不夠就繼續加
            ans.push_back(matrix[i][j]);
            matrix[i][j]=999;//標註
            int i2=i+di[d],j2=j+dj[d];
            if(i2<0||j2<0||i2>=M||j2>=N||matrix[i2][j2]==999){
                d=(d+1)%4;//轉彎
            }
            i=i+di[d];//換下一格
            j=j+dj[d];
        }
        return ans;
    }
};
