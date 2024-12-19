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
        while(l1!=nullptr){//先把list 1都複製到ans的now裡
            now->next=new ListNode(l1->val);//新準備一個值
            now=now->next;//下一筆
            l1=l1->next;//下一筆
        }
        return ans->next;
    }
};
