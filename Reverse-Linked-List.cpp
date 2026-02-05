1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 */
11class Solution {
12public:
13    ListNode* reverseList(ListNode* head) {
14        ListNode* prev=NULL;
15         ListNode* curr=head;
16         ListNode *next=NULL;
17
18         while(curr!=NULL){
19            next=curr->next;
20            curr->next=prev;
21
22            prev=curr;
23            curr=next;
24         }
25         return prev;
26    }
27};