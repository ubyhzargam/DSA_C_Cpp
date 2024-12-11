// Given the head of a linked list, rotate the list to the right by k places.

// Logic 
struct ListNode* rotateRight(struct ListNode* head, int k) 
{
    if(head==NULL||head->next==NULL)return head;
    int count=0;
    struct ListNode *temp=(struct ListNode*)malloc(sizeof(struct ListNode));
    temp=head;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    if(k==0||(k%count==0))return head;
    temp=head;
    int i=0;
    while(i<((count-1)-(k%count)))
    {
        temp=temp->next;
        i++;
    }
    struct ListNode *temp1=(struct ListNode*)malloc(sizeof(struct ListNode));
    temp1=temp->next;
    temp->next=NULL;
    temp=temp1;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=head;
    head=temp1;
    return head;
}
