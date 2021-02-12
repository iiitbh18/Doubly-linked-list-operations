#include<stdio.h>
#include<stdlib.h>
struct node
{

    int info;
    struct node *next;
};
struct node *createlist(struct node *last);
void display(struct node *last);
struct node *addtoempty(struct node *last,int data);
struct node *addatbeg(struct node *last,int data);
struct node *addatend(struct node *last,int data);
struct node *addafter(struct node *last,int data);
struct node *addbefore(struct node *last,int data);
struct node *del(struct node *last,int data);
struct node *revers(struct node *last);

int main()
{
    int choice,data,item;
    struct node *last=NULL;
    while(1)
    {
        printf("1.create list\n");
        printf("2.display\n");
        printf("3.add to empty list\n");
        printf("4.add at beginning\n");
        printf("5.add at end\n");
        printf("6.add after\n");
        printf("7.add before\n");
        printf("8.delete\n");
        printf("9.reverse\n");
        printf("10.quit\n");
        printf("enter your choice\n");
        scanf("%d",&choice);

        switch(choice)
        {
       case 1:
        last=createlist(last);
        break;
       case 2:
        display(last);
        break;
       case 3:
        printf("enter the element to be inserted");
        scanf("%d",&data);
        last=addtoempty(last,data);
        break;
       case 4:
        printf("enter the element to be inserted");
        scanf("%d",&data);
        last=addatbeg(last,data);
        break;
       case 5:
        printf("enter the element to be inserted");
        scanf("%d",&data);
        last=addatend(last,data)
            break;
       case 6:
        printf("enter the element to be inserted");
        scanf("%d",&data);
        printf("enter the element after which to be insert");
        scanf("%d",&item);
        last=addafter(last,data,item)
        break;
       case 7:
        printf("enter the element to be inserted");
        scanf("%d",&data);
        printf("enter the element before we have to insert");
        scanf("%d",&item);
        break;
       case 8:
        printf("enter the element to be deleted");
        scanf("%d",&data);
        start=del(start,data);
        break;
       case 9:
        start=revers(start);
       case 10:
        exit(1);
       default:
        printf("wrong choice\n");

        }
    }
}

void display(struct node *start)
{
    struct node *p;
    if(start==NULL)
    {
        printf("list is empty")
        return;
    }
    p=start;
    printf("list is :\n");
    while(p!=NULL)
    {
        printf("%d",p->info);
        p=p->next;
    }
    printf("\n");
}
struct node *addtoempty(struct node *start,int data)
{
struct node *temp;
temp=(struct node *)malloc(sizeof(struct node));
temp->info=data;
temp->prev=NULL;
temp->next=NULL;
start=temp;
return start;
};
struct node *addatbeg(struct node *start,int data)
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->info=data;
    temp->prev=NULL;
    temp->next=start;
    start->prev=temp;
    start=temp;
    return start;
};
struct node *addatend(struct node *start,int data)
{
    struct node *temp,*p;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->info=data;
    p=start;
    while(p->next!=NULL)
        p=p->next;
    p->next=temp;
    temp->next=NULL;
    temp->prev=p;
    return start;
};
struct node *addafter(struct node *start,int data)
{
    struct node *temp,*p;
    temp=(struct node *)malloc(sizeof(structnode));
    temp->info=data;
    p=start;
    while(p!=NULL)
    {
        if(p->info==item)
        {
            temp->prev=p;
            temp->next=p->next;
            if(p->next!=NULL)
                p->next->prev=temp;
            p->next=temp;
            return start;
        }
        p=p->next;
    }
};
struct node *create(struct node *start,int data)
{
    int i,n,data;
    printf("enter the number of nodes :");
    scanf("%d",&n);
    start=NULL;
    if(n==0)
        return start;
    printf("enter the element to be inserted");
    scanf("%d",&data);
    start=addtoempty(start,data);
    for(i=2;i<=n;i++)
    {
        printf("enter the element to be inserted");
        scanf("%d",&data);
        start=addatend(start,data);
    }
    return start;
};





















