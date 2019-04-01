#include <stdio.h>

int main()
{
int i,j,k=0,l=10000,n,s=0,t;
printf("Enter number of matrices");
scanf("%d",&n);
int a[2*n],c[n][n];
printf("Enter order of matrices");
for(i=0;i<n;i++)
{
scanf("%d %d",&a[i],&a[n+i]);
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
c[i][j]=0;
}
}
while(1>0)
{
k=k+1;
s=k;
for(i=0;i<n-k;i++)
{
s=k+i;
for(j=i;j<s;j++)
{
if(l>c[i][j]+c[j+1][s]+a[i]*a[n+j]*a[s+n])
l=c[i][j]+c[j+1][s]+a[i]*a[n+j]*a[s+n];
t=j;
}
c[i][s]=l;
l=10000;
}
if(c[0][n-1]!=0)
{
break;
}
}

printf("Minimum cost of matrix chain multiplication is %d",c[0][n-1]);
return 0;
}
