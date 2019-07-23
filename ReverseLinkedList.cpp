/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* reverse(SinglyLinkedListNode* head) {

    SinglyLinkedListNode *nextNode = NULL;
    SinglyLinkedListNode *prevNode = NULL;
    SinglyLinkedListNode *currentNode = head;

    while(currentNode!=NULL)
    {
        nextNode = currentNode->next;
        currentNode->next = prevNode;
        prevNode = currentNode;
        currentNode = nextNode;
    }
    head = prevNode;

    return head;
}
