#include<stdio.h>
#include<conio.h>
struct disjointSet {
int parent[10];
int rank[10];
int n;
}
dis;

void makeset()
{
int i;
for(i=0;i<dis.n;i++)
dis.parent[i]=i;
dis.rank[i]=0;
}

void displayset()
{
int i;
printf("\nparent array\n");
for(i=0;i<dis.n;i++)
{
printf("%d",dis.parent[i]);
}
printf("\nrank of array\n");
for(i=0;i<dis.n;i++)
{
printf("%d",dis.rank[i]);
}
printf("\n");
}

int find(int x)
{
if(dis.parent[x]!=x)
{
dis.parent[x]=find(dis.parent[x]);
}
return dis.parent[x];
}

void Union(int x,int y)
{
int xset=find(x) , yset=find(y);
if(xset==yset)
return;
if(dis.rank[xset]<dis.rank[yset])
{
dis.parent[xset]=yset;
dis.rank[xset]=-1;
}
else if(dis.rank[xset]>dis.rank[yset])
{
dis.parent[yset]=xset;
dis.rank[yset]=-1;
}
else
{
dis.parent[yset]=xset;
dis.rank[xset]=dis.rank[xset]+1;
dis.rank[yset]=-1;
}
}
int main()
{
int x,y,n;
printf("\nenter number of elements :\n");
scanf("%d",&dis.n);
makeset();
int ch,w;
do{
printf("\n1.UNION\n2.FIND \n3.DISPLAY");
printf("\nenter choice :");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("\nenter elements to perform union :");
scanf("%d%d",&x,&y);
Union(x,y);
break;
case 2:
printf("\nenter elements to check if connected components :");
scanf("%d%d",&x,&y);
if(find(x)==find(y))
printf("\nconnected components !");
else
printf("\nnoi connected components !");
break;
case 3:
displayset();
break;
}
printf("\n do you want to continue ?(1/0)");
scanf("%d",&w);
}
while(w==1);
return 0;
}
