/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::partition(ListNode* A, int B) 
{
    ListNode *d=new ListNode(0),*d1=new ListNode(0),*t=A,*p=d,*q=d1;
    while(t!=NULL)
    {
        if(t->val<B)
        {
            d->next=t;
            d=d->next;
        }
        else
        {
            d1->next=t;
            d1=d1->next;
        }
        t=t->next;
    }
    d1->next=NULL;
    d->next=q->next;
    return p->next;
}
