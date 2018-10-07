#include<stdio.h>
#include<stdlib.h>
//definition of node of the Linked List
struct ListNode
{
  int val;
  struct ListNode *next;
};
void reverse_integer(int *a)
{
  int b=*a;
  int temp=0;
  while(b>0)
  {
    temp=b%10
    *a=(temp*10)
  }
}
//definition of a functiion that returns a pointer
struct ListNode* addTwoNumbers(struct ListNode *l1, struct ListNode *l2)
{
    int a=0;
    int b=0;
    int c=0;
    while(l1!=NULL)
    {
        a=(a*10)+(l1->val);
        l1=l1->next;
    }
    printf("%d\n",a);
    while(l2!=NULL)
    {
        b=(b*10)+(l2->val);
        l2=l2->next;
    }
    printf("%d\n",b );
    c=a+b;
    printf("%d\n",c );
    struct ListNode *F1;
    struct ListNode *ans;
    F1=(struct ListNode*)malloc(sizeof(struct ListNode));
    ans=F1;
    if(c==0)
    {
        ans->val=0;
        ans->next=NULL;
        return ans;
    }
    while (c>0)
    {
        F1->val=(c%10);
        printf("%d\n",F1->val);
        F1->next=(struct ListNode*)malloc(sizeof(struct ListNode));
        F1=F1->next;
        c=c/10;
    }
    F1->next=NULL;
    return ans;
}
int main()
{
  //create two linked list number with values 342 and 465 in the reverse order.
  struct ListNode *a1;
  a1=(struct ListNode*)malloc(sizeof(struct ListNode));
  struct ListNode *a2;
  a2=(struct ListNode*)malloc(sizeof(struct ListNode));
  struct ListNode *a3;
  a3=(struct ListNode*)malloc(sizeof(struct ListNode));
  struct ListNode *b1;
  b1=(struct ListNode*)malloc(sizeof(struct ListNode));
  struct ListNode *b2;
  b2=(struct ListNode*)malloc(sizeof(struct ListNode));
  struct ListNode *b3;
  b3=(struct ListNode*)malloc(sizeof(struct ListNode));
  struct ListNode *ans;
  a1->val=4;
  a1->next=a2;
  a2->val=6;
  a2->next=a3;
  a3->val=9;
  a3->next=NULL;
  b1->val=3;
  b1->next=b2;
  b2->val=2;
  b2->next=b3;
  b3->val=8;
  b3->next=NULL;
  ans=addTwoNumbers(a1,b1);
  //Traversing the linked list of the returned value.
  printf("The Elements of the Linked List are\n");
  while ((ans->next)!=NULL)
  {
    printf("%d\n",ans->val);
    ans=ans->next;
  }
  return 0;
}
