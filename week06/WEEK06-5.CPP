class Solution {
public:
    int maximumSwap(int num) {
        int ans=num;
        string s= to_string(num);
        //for(int i=0;i<s.length()-1;i++){
        for(int i=0;i<s.length()-1;i++){
            for(int j=i+1;j<s.length();j++){

                swap(s[i],s[j]);//交換s[i] s[j]
                ans=max(ans,stoi(s));//看看是否更大，更新
                swap(s[i],s[j]);

            }
        }


        return ans;
    }

};
