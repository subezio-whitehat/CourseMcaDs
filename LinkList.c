#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
}*newnode,*head,*tail,*temp;
void create();
void insert_begin();
void insert_end();
void insert_pos();
void delet_begin();
void delet_end();
void delet_pos();
void display();
void main(){
int choice;
clrscr();
head=NULL;
do{
printf("1-creation\n2-insert begining\n3-insert end\n");
printf("4-insert specified position\n5-delet begining\n");
printf("6-delet end\n7-delet specified position");
printf("\n8-display\n9-EXIT\nEnter your choice:");
scanf("%d",&choice);
switch(choice){
case 1:
      create();
      break;
case 2:
      insert_begin();
      break;
case 3:
      insert_end();
      break;
case 4:
      insert_pos();
      break;
case 5:
      delet_begin();
      break;
case 6:
      delet_end();
      break;
case 7:
      delet_pos();
      break;
case 8:
      display();
      break;
case 9:
      printf("\nEXIT");
      break;
default:
      printf("Invalid choice");

}
}
while(choice!=9);
getch();
}
void create(){
int value;
char ch;
do{
newnode=(struct node*)malloc(sizeof(struct node));
printf("\nEnter element:");
scanf("%d",&value);
newnode->data=value;
newnode->next=NULL;
if(head==NULL){
head=newnode;
tail=newnode;
}
else{
tail->next=newnode;
tail=newnode;
}
printf("\nY to continue N to stop");
scanf(" %c",&ch);
}
while(ch=='y');
}
void insert_begin(){
int value;
char ch;
if(head==NULL){
printf("\nList is empty");
}
else{
do{
newnode=(struct node*)malloc(sizeof (struct node));
printf("\nEnter element:");
scanf("%d",&value);
newnode->data=value;
newnode->next=head;
head=newnode;
printf("\nY to continue N to Stop");
scanf(" %c",&ch);
}
while(ch=='y');
}
}
void insert_end(){
int value;
char ch;
if(head==NULL){
printf("\nList is empty");
}
else{
do{
newnode=(struct node*)malloc(sizeof(struct node));
printf("\nEnter element:");
scanf("%d",&value);
newnode->data=value;
tail->next=newnode;
newnode->next=NULL;
tail=newnode;
printf("\nY to continue N to Stop");
scanf(" %c",&ch);
}
while(ch=='y');
}
}
void insert_pos(){
int value,i,pos;
char ch;
if(head==NULL){
printf("\nList is empty");
}
else{
do{
newnode=(struct node*)malloc(sizeof(struct node));
printf("\nEnter elements:");
scanf("%d",&value);
printf("\nEnter the position to insert:");
scanf("%d",&pos);
temp=head;
for(i=0;i<pos-1;i++){
temp=temp->next;
}
newnode->data=value;
newnode->next=temp->next;
temp->next=newnode;
printf("\nY to continue N for Stop");
scanf(" %c",&ch);
}
while(ch=='y');
}
}
void delet_begin(){
char ch;
if(head==NULL){
printf("\nList is empty\n");
}
else{
do{
temp=head;
head=head->next;
temp->next=NULL;
printf("\nY to continue N for stop");
scanf(" %c",&ch);
}
while(ch=='y');
}
}
void delet_end(){
char ch;
if(head==NULL){
printf("\nList is empty\n");
}
else{
do{
temp=head;
while(temp->next!=tail){
temp=temp->next;
}
temp->next=NULL;
tail=temp;
printf("\nY to continue N for stop");
scanf(" %c",&ch);
}
while(ch=='y');
}
}
void delet_pos(){
int i,pos;
char ch;
if(head==NULL){
printf("\nList is empty\n");
}
else{
do{
printf("\nStarting position 0 \nEnter position:");
scanf("%d",&pos);
temp=head;
for(i=0;i<pos-1;i++){
temp=temp->next;
}
temp->next=temp->next->next;
printf("\nY to continue N for stop");
scanf(" %c",&ch);
}
while(ch=='y');
}
}
void display(){
if(head==NULL){
printf("\nList is empty\n");
}
else{
temp=head;
printf("\nElements :\n");
while(temp!=NULL){
printf("%d\n",temp->data);
temp=temp->next;
}
}
}

