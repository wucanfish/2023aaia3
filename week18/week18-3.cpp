

class Solution {
public:
    string addBinary(string a, string b) {
        int N1 = a.length(), N2 = b.length();
        vector<int> ans; //���Y�ۦp���}�C
        int carry = 0; // carry �i�쪺��
        for(int i=N1-1, j=N2-1; i>=0 || j>=0; i--, j--) {
            if(i<0) { //����a[i] �Χ��F, �u��b[j]
                int now = b[j] -'0' + carry;
                ans.push_back( now % 2);
                carry = now / 2;
            } else if(j<0) { //�k��b[i] �Χ��F, �u��a[j]
                int now = a[i] -'0' + carry;
                ans.push_back( now % 2);
                carry = now / 2;
            } else { //���䳣���B���� a[i] b[j] ����
                int now = a[i] -'0' + b[j] -'0' + carry;
                ans.push_back( now % 2);
                carry = now / 2;
            }
        }
        if(carry>0) ans.push_back(carry); //�̫�A�i��
        //for(int now : ans) cout << now; //���L�X�}�C�����G, �ּg���F
        //return "";

        int N = ans.size(); //���צ�N���
        string ans2(N, '0'); //�̫᪺���ץΦr��, ���׬ON, �̭��ȩ�'0'
        for(int i=N-1; i>=0; i--) { //�˹L�Ӫ��j��
            ans2[i] = ans[N-1-i] + '0'; //���, �ܦ��r����
        }
        return ans2;

    }
};
