#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void push();
void pop();
void display();
struct node
{
int data;
struct node *next;
};
struct node *head=NULL;
void main()
{
int ch=0;
do
{
printf("\n!!!LINKED STACK OPERATIONS!!!\n");
printf("\n1)PUSH\n2)POP\n3)DISPLAY\n4)EXIT\n");
printf("\nenter your choice ?\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
{
push();
break;
}
case 2:
{
pop();
break;
}
case 3:
{
display();
break;
}
case 4:
{
exit(0);
}
default:
{
printf("\ninvalid choice!\n");
break;
}
}
}while(ch!=4);
}
void push()
{
int item;
struct node *ptr;
ptr=(struct node*)malloc(sizeof(struct node));
if(ptr==NULL)
{
printf("\noverflow condition!\n");
}
else
{
printf("\nenter value :\n");
scanf("%d",&item);
if(head==NULL)
{
ptr->data=item;
ptr->next=NULL;
head=ptr;
}
else
{
ptr->data=item;
ptr->next=head;
head=ptr;
}
printf("\nitem is pushed!\n");
}
}
void pop()
{
struct node *ptr;
if(head==NULL)
{
printf("\nunderflow condition!\n");
}
else
{
ptr=head;
head=ptr->next;
free(ptr);
printf("\nitem is popped!\n");
}
}
void display()
{
struct node *ptr;
ptr=head;
if(ptr==NULL)
{
printf("\nempty stack!\n");
}
else
{
printf("\n\printing values...\n");
while(ptr!=NULL)
{
printf("\n%d\n",ptr->data);
ptr=ptr->next;
}
}
}


