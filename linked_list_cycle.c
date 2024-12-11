// Logic

bool hasCycle(struct ListNode *head) 
{
    struct ListNode *temp1=(struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode *temp2=(struct ListNode*)malloc(sizeof(struct ListNode));
    temp1=head;
    if(head==NULL)return false;
    temp2=head->next;
    while(temp2!=NULL)
    {
        if(temp1==temp2)return true;
        temp1=temp1->next;
        temp2=temp2->next;
        if(temp2==NULL) return false;
        temp2=temp2->next;
    }
    return false;
}
