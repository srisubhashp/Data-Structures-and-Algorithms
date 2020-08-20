//https://www.youtube.com/watch?v=D7y_hoT_YZI
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
    
    int getLen(ListNode* head){
    if(head==NULL)
        return 0;
    return 1+getLen(head->next);
}
    ListNode* middleNode(ListNode* head) {
        
        if(head->next==NULL)
            return head;
        int len=getLen(head);
        int middle=(len%2==0)?len/2+1:(len+1)/2;
        do{
            head=head->next;
        }while(middle-->2);
        return head;
}
    

};