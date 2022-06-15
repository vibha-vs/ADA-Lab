#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>

void selsort(int n,int a[])
{
int i,j,t,small,pos;
for(i=0;i<n-1;i++)
{
pos=i;
small=a[i];
for(j=i+1;j<n;j++)
{
if(a[j]<small)
{
small=a[j];
pos=j;
}
}
t=a[i];
a[i]=a[pos];
a[pos]=t;
}
}


int main()
{
int a[15000],n,ch,temp;
long int i,j;
clock_t start,end;
while(1)
{
printf("\n1.For manual entry of N value and array elements\nTo display time taken for sorting number of elements N in the range 500 to 14500");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("\nEnter the number of elements\n");
scanf("%d",&n);
printf("\nEnter array elements\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
start=clock();
selsort(n,a);
end=clock();
printf("\nSorted array is:");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
printf("Time taken to sort %d numbers is %f secs",n,(((double)(end-start))/CLOCKS_PER_SEC));
break;

case 2:
n=500;
while(n<=14500)
{
for(i=0;i<n;i++)
a[i]=n-i;
start=clock();
selsort(n,a);
for(j=0;j<500000;j++)
{}
end=clock();
printf("\nTime taken to sort %d numbers is %f secs",n,(((double)((end-start))/CLOCKS_PER_SEC)));
n=n+1000;
}
break;

default:exit(0);
}
return 0;
}

}
