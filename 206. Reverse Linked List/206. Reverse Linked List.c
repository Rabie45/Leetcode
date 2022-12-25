/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head){
struct ListNode* link=head;
struct ListNode* current=head;
    int len=0; 
    while(link!= NULL){
        len++;
        link=link->next;
    }
//printf("%d\n",len);
    if(len<2)
    return head;

    int arr[len];
    for(int i=0;i<len;i++){
        arr[i]=current->val;
        current=current->next;
        //printf("%d\n",arr[i]);
    }
    current=head;
    len--;
    while(len>=0){
        current->val=arr[len];
        //printf("head->val%d\n",current->val);
        current=current->next;
        len--;
    }
   
    return head;

}