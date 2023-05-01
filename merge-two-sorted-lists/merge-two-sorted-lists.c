struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
    struct ListNode* head=NULL;
    if(list1!=NULL && list2!=NULL)
    {
        if((list1->val)<=(list2->val))
        {
            head=list1;
            list1=list1->next;
        }
        else
        {
            head=list2;
            list2=list2->next;
        }
    }
    else if(list1!=NULL || list2!=NULL) return (list1!=NULL)?list1:list2;
    else return NULL;
    struct ListNode* n=head;
    while(list1!=NULL && list2!=NULL)
    {
        if((list1->val)<=list2->val)
        {
            n->next=list1;
            list1=list1->next;
        }
        else 
        {
            n->next=list2;
            list2=list2->next;
        }
        n=n->next;
    }
    n->next=(list1!=NULL)?list1:list2;
    return head;   
}