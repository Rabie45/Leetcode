# 237. Delete Node in a Linked List
 ## Explination 
  - You have to remove the given node from the linked list without having the head of the linked list 
 
 ## Algorithm :
  - Check if there is only one node in the linked list || the node is the tail of the linked list
 
  -  IF not create new node have the address of the given node
  -  Make its value = the value of the next node (node->val=l1->val)
  -  Make the next address point to the next of the new node


