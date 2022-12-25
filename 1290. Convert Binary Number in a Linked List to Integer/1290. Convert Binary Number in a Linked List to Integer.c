/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int getDecimalValue(struct ListNode* head){
    struct ListNode* link=head;
    struct ListNode* current=head;
    int len=0,val=0;
    while(link!= NULL){
        len++;
        
        link=link->next;
    }
    len--;
    for(int i=len;i>=0;i--){
        val+=(current->val * pow(2,i));
        current=current->next;
    }
    return val;

}