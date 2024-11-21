//LC1822
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans=1;
        for(int num:nums){
            if(num<0)   ans*=-1;
            if(num==0)  return 0;
        }

        if(ans>0)   return 1;
        else return -1;
    }
};
