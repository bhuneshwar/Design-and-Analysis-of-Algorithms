#include<stdio.h>
#include<stdlib.h>

int** APSP(int** A,int n,int iv,int** P)
{
	int i,j;
	int** N;
	N=(int**)malloc(n*sizeof(int*));
	for(i=0;i<n;i++)
	N[i]=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	{
		if(A[i][j]>(A[i][iv]+A[iv][j]))
		{
			N[i][j]=A[i][iv]+A[iv][j];
			P[i][j]=iv;
		}
		else
		{
			N[i][j]=A[i][j];
		}
	}
	if(iv==n-1)
	{
		return N;
	}
	else
	{
		iv++;
		APSP(N,n,iv,P);
	}
}

void PATH(int **P,int i,int j)
{
	printf("%d->",(i+1));
	if(P[i][j]==-1)
	{
		printf("%d\n",(j+1));
	}
	else
	{
		PATH(P,P[i][j],j);
	}
}

void main()
{
	int i,j,n;
	printf("Enter no. of vertices:");
	scanf("%d",&n);
	int** C;
	C=(int**)malloc(n*sizeof(int*));
	for(i=0;i<n;i++)
	C[i]=(int *)malloc(n*sizeof(int));
	
	printf("Enter cost adj. matrix:\n");
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	scanf("%d",&C[i][j]);
	
	int** Path;
	Path=(int**)malloc(n*sizeof(int*));
	for(i=0;i<n;i++)
	Path[i]=(int *)malloc(n*sizeof(int));
	
	for(i=0;i<n;i++)     //'-1'-> direct path
	for(j=0;j<n;j++)
	Path[i][j]=-1;
	
	int** Res;
	Res=(int**)malloc(n*sizeof(int*));
	for(i=0;i<n;i++)
	Res[i]=(int *)malloc(n*sizeof(int));
	
	Res=APSP(C,n,0,Path);
	
	printf("\nResult:\nS->D\tCost\tPath\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d->%d\t%d\t",(i+1),(j+1),Res[i][j]);
			PATH(Path,i,j);
		}
	}
}
