/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans = new ListNode;//�ǳƷs����
        ListNode* now = ans;//�{�b�f�B�z��node
        int carry=0;
        while(l1!=nullptr || l2!=nullptr){//����list 1���ƻs��ans��now��
            if(l1==nullptr){
                int here=l2->val+carry;
                carry=here/10;
                now->next=new ListNode(here%10);//�s�ǳƤ@�ӭ�
                now=now->next;//�U�@��
                //l1=l1->next;//�U�@��
                l2=l2->next;
            }
            else if(l2==nullptr){
                int here=l1->val+carry;
                carry=here/10;
                now->next=new ListNode(here%10);//�s�ǳƤ@�ӭ�
                now=now->next;//�U�@��
                l1=l1->next;//�U�@��
                //l2->next;
            }
            else{
            int here=l1->val+l2->val+carry;
            carry=here/10;
            now->next=new ListNode(here%10);//�s�ǳƤ@�ӭ�
            now=now->next;//�U�@��
            l1=l1->next;//�U�@��
            l2=l2->next;
            }
            if(carry > 0) now ->next=new ListNode(carry);
        }
        return ans->next;
    }
};
