#include<stdio.h>
#include<conio.h>

void main()
{
	int n,i,j,k=1,r,cv;
	char p;
	printf("Enter no of vertices:");
	scanf("%d",&n);
	int G[n][n];
	printf("Enter graph:\n\t");
	for(i=0;i<n;i++)
	printf("%c\t",(97+i));
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("%c\t",(97+i));
		for(j=0;j<n;j++)
		{
			scanf("%d",&G[i][j]);
		}
	}
	
	printf("\nEnter source vertex(character):");
	p=getch();
	printf("%c\n",p);
	r=(int)p-97;
	
	int VIS[n],D[n];
	
	for(i=0;i<n;i++)
	{
		VIS[i]=0;
	}
	
	VIS[r]=1;D[r]=0;
	for(i=0;i<n;i++)
	{
		if(VIS[i]==0)
		{
			D[i]=G[r][i];
		}
	}
	int min=100;
	for(i=0;i<n;i++)
	{
		if(min>D[i]&&D[i]!=0)
		{
			min=D[i];
			cv=i;
		}
	}
	
	while(k<n)
	{
		VIS[cv]=1;
		min=100;
		for(i=0;i<n;i++)
		{
			if(VIS[i]==0)
			{
				D[i]=(D[i]>(D[cv]+G[cv][i])?(D[cv]+G[cv][i]):D[i]);
			}
		}
		for(i=0;i<n;i++)
		{
			if(VIS[i]==0)
			{
				if(min>D[i] && D[i]!=0)
				{
					min=D[i];
					cv=i;
				}
			}
		}
		k++;
	}
	printf("Shotest path lengths are:\n");
	for(i=0;i<n;i++)
	{
		printf("%c->%c: %d\n",(97+r),(97+i),D[i]);
	}
}
