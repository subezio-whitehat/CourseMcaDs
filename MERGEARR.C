#include<stdio.h>
#include<conio.h>
void main()
{
int a[20],b[20],c[20],m,n,i,j,k=0;
clrscr();
printf("\nEnter the size of the first array\n");
scanf("%d",&m);
printf("\nEnter the sorted elements of first array\n");
for(i=0;i<m;i++)
{
scanf("%d",&a[i]);
}
printf("\nEnter the size of the second array\n");
scanf("%d",&n);
printf("\nEnter the sorted elements of second array\n");
for(i=0;i<n;i++)
{
scanf("%d",&b[i]);
}
i=0;
j=0;
while(i<m&&j<n)
{
if(a[i]<b[j])
{
c[k]=a[i];
i++;
}
else
{
c[k]=b[j];
j++;
}
k++;
}
if(j>=n)
{
while(i<m)
{
c[k]=a[i];
i++;
k++;
}
}
while(j<n)
{
c[k]=b[j];
j++;
k++;
}
printf("\nMerged array is");
for(i=0;i<m+n;i++)
{
printf("%d",c[i]);
}
getch();
}
