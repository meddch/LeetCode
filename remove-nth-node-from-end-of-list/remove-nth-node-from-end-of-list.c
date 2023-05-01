/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    int length = 1;
    struct ListNode* temp = head;
    while (temp->next != NULL) {
        length += 1;
        temp = temp->next;
    }
    if (length == 1) {
        head = NULL;
        return head;
    }
    struct ListNode* ptr;
    temp = head;
     if (n == 1) {
        for (int i = 1; i <= length - 1; i += 1) {
        ptr = temp;
        temp = temp->next;
        }
        free(temp);
        ptr->next = NULL;
        return head;
    }
    else if (n > 1 && n < length) {
        for (int i = 1; i <= (length - n); i += 1) {
        ptr = temp;
        temp = temp->next;
        }
        ptr->next = temp->next;
        free(temp);
        ptr = head;
        return head;
    }
    else {
        head = head->next;
        free(temp);
        return head;
    }
    return head;
}