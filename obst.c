#include<stdio.h>
#include<stdlib.h>

int W(int i,int j,int *P,int *Q)
{
	if(i==j)
	return Q[j];
	else
	{
		return(P[j]+Q[j]+W(i,j-1,P,Q));
	}
}

int C(int i,int j,int* P,int* Q)
{
	if(i==j)
	{
		return 0;
	}
	else
	{
		int k,min=1000;
		for(k=i+1;k<=j;k++)
		{
			if(min>(C(i,k-1,P,Q)+C(k,j,P,Q)))
			{
				min=(C(i,k-1,P,Q)+C(k,j,P,Q));
			}
		}
		return (min+W(i,j,P,Q));
	}
}
void main()
{
	int i,j,n;
	printf("Enter no. of nodes:");
	scanf("%d",&n);
	
	n++;
	int* P;
	P=(int *)malloc(n*sizeof(int));
	
	P[0]=0;
	printf("P:");
	for(i=1;i<n;i++)
	scanf("%d",&P[i]);
	
	int* Q;
	Q=(int *)malloc(n*sizeof(int));
	
	printf("Q:");
	for(i=0;i<n;i++)
	scanf("%d",&Q[i]);
	
	int res=C(0,n-1,P,Q);
	printf("res:%d",res);
}
