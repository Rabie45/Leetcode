# 203. Remove Linked List Elements

## Explination:
- The task to remove spcific element from the linked list given by the user

## Algorithm:
- Make a loop while the linked list not finished
- If the value of the node equal the value given by user then check.
	- if this node is the head make the head equal to the next node.and make the prevouis equal to new head
	- else make the prevouis equal the next
- Else not equal go to the next node prevouis = current node
- Dont forget to move to the next node and return the list
