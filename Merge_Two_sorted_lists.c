struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode *l1=list1, *l2=list2;

    int n;
    if (l1 == NULL && l2==NULL){
        return l1;
    }
    else{
        struct ListNode *list3 = (struct ListNode*)malloc(sizeof(struct ListNode));
        struct ListNode *temp=list3;

        while(l1 != NULL && l2 !=NULL){
            if(l1->val < l2->val){
                temp->next = l1;
                temp = temp->next;
                l1 = l1->next;
            }
            else{
                temp->next = l2;
                temp = temp->next;
                l2 = l2->next;
            }
        }
        if (l1 != NULL)
            temp->next = l1;
        
        else
            temp->next = l2;
        
        return list3->next;
    }
    
}