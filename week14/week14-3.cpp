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
        ListNode* ans = new ListNode;//準備新答案
        ListNode* now = ans;//現在耖處理的node
        int carry=0;
        while(l1!=nullptr || l2!=nullptr){//先把list 1都複製到ans的now裡
            if(l1==nullptr){
                int here=l2->val+carry;
                carry=here/10;
                now->next=new ListNode(here%10);//新準備一個值
                now=now->next;//下一筆
                //l1=l1->next;//下一筆
                l2=l2->next;
            }
            else if(l2==nullptr){
                int here=l1->val+carry;
                carry=here/10;
                now->next=new ListNode(here%10);//新準備一個值
                now=now->next;//下一筆
                l1=l1->next;//下一筆
                //l2->next;
            }
            else{
            int here=l1->val+l2->val+carry;
            carry=here/10;
            now->next=new ListNode(here%10);//新準備一個值
            now=now->next;//下一筆
            l1=l1->next;//下一筆
            l2=l2->next;
            }
            if(carry > 0) now ->next=new ListNode(carry);
        }
        return ans->next;
    }
};
