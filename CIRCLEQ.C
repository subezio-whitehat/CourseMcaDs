#include<stdio.h>
#include<conio.h>
#define MAXSIZE 5
int cq[MAXSIZE],f=-1,r=-1;
void enque(int[],int);
void deque(int[]);
void display(int[]);
void main()
{
int ch,x;
do
{
printf("\nCircular Queue:\n1)insert\n2)delete\n3)dispaly\n4)exit");
printf("\nenter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("\nenter the element to be inserted:");
scanf("%d",&x);
enque(cq,x);
break;
case 2:
deque(cq);
break;
case 3:
display(cq);
break;
case 4:
break;
default:
printf("\ninvalid choice!");
}
}
while(ch!=4);
}
void enque(int cq[],int x)
{
if((f==0 && r==MAXSIZE-1) || (f==r+1))
{
printf("\nqueue is full");
return;
}
else if(r==-1)
{
r++;
f++;
}
else if(r==MAXSIZE-1 && f>0)
{
r=0;
}
else
{
r++;
}
cq[r]=x;
}
void deque(int cq[])
{
if(f==-1)
{
printf("\nqueue is empty");
}
else if(f==r)
{
printf("\ndeleted element",cq[f]);
f=-1;
r=-1;
}
else
{
printf("\ndeleted element",cq[f]);
f++;
}
}
void display(int cq[])
{
int i;
printf("\n");
if(f>r)
{
for(i=f;i<MAXSIZE;i++)
{
printf("%d",cq[i]);
}
for(i=r;i<r;i++)
{
printf("%d",cq[i]);
}
}
else
{
for(i=f;i<=r;i++)
{
printf("%d",cq[i]);
}
}
}
