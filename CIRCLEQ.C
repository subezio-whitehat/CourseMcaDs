#include<stdio.h>
#include<conio.h>
#define size 50
int queue[size],rear,front,max;
void insert();
void dequeue();
void display();
void main()
{
int choice;
 printf("\nEnter the size of array");
 scanf("%d",&max);
 printf("\nCircular Queue using array\n");
 printf("1.Insert\n2.Dequeue\n3.Display\n4.Exit\n");
 printf("----------------------------------------\n");
 do
 {
 printf("Enter your choice\n");
 scanf("%d",&choice);
 switch(choice)
 {
  case 1:
  insert();
  break;
  case 2:
  dequeue();
  break;
  case 3:
  display();
  break;
  case 4:
  printf("\nExit");
  break;
  default:
  printf("\nInvalid Chioce");
  }
  }while(choice<=4);
  getch();
  }
  void insert()
  {
  int item;
  printf("\nEnter the item to insert");
  scanf("%d",&item);
  if(front==0&&rear==max-1)
  {
  printf("\nThe queue is full");
  }
  if(front==-1)
  {
  rear=0;
  front=0;
  }
  else
  {
  if(rear==max-1)
  rear=0;
  else
  rear=rear+1;
  }
  queue[rear]=item;
  }

  void dequeue()
  {
  if(front==-1)
  {
  printf("\nThe queue is empty");
  }
  else
  {
  printf("\nThe deleted element is %d",queue[front]);
  if(front==rear)
  {
  front=rear=-1;
  }
  if(front==max-1)
  front=0;
  else
  front=front+1;
  }
  }
  void display()
  {
  int i;
  if(front==-1)
  {
  printf("\nThe queue is empty");
  }
  else
  {
  printf("\nThe elements in queue is");
  if(front<=rear)
  {
  for(i=front;i<=rear;i++)
  {
   printf("%d",queue[i]);
   printf("\t");
   }
   }
   else
   {
   for(i=front;i<=max;i++)
   printf("%d",queue[i]);
   for(i=0;i<=rear;i++)
   printf("%d",queue[i]);
   }
   }
   }


