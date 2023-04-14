void deleteNode(struct ListNode* node) {
    node->val=node->next->val;
    node->next=node->next->next;
} 


void deleteNode(struct ListNode* node) {
    struct ListNode* l1=node;
    if(!l1)return;
    l1=l1->next;
    if(!l1)return 0;
    node->val=l1->val;
    node->next=l1->next;
    
}