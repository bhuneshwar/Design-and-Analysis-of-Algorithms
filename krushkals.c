#include<stdio.h>

void main()
{
	int n,i,j,im=0,v=0;
	printf("Enter no of vertices:");
	scanf("%d",&n);
	int G[n][n],MST[3][n-1];
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
	
	while(im<n-1)
	{
		int min=10000,m_i,m_j,q_i=-1,q_j=-2;
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(G[i][j]<min && G[i][j]>0)
				{
					min=G[i][j];
					m_i=i;
					m_j=j;
				}
			}
		}
		G[m_i][m_j]=-1;
		G[m_j][m_i]=-1;
		printf("%d %d\n",m_i,m_j);
		for(i=0;i<2;i++)
		{
			for(j=0;j<im;j++)
			{
				if(MST[i][j]==m_i)
				{
					q_i=MST[2][j];
				}
				if(MST[i][j]==m_j)
				{
					q_j=MST[2][j];
				}
			}
		}
		printf("%d %d\n",q_i,q_j);
		if(q_i!=q_j)
		{
			if(q_i==-1 && q_j==-2)
			{
				MST[2][im]=v;
				v++;
			}
		
			if(q_i!=-1 && q_j!=-2)
			{
				if(q_i!=q_j)
				{
					for(i=0;i<im;i++)
					{
						if(MST[2][i]==q_j)
						{
							MST[2][i]=q_i;
						}
					}
					MST[2][im]=q_i;
				}
			}
				
			if(q_i==-1 && q_j!=-2)
			{
				MST[2][im]=q_j;
			}
			if(q_j==-2 && q_i!=-1)
			{
				MST[2][im]=q_i;
			}
			
			MST[0][im]=m_i;
			MST[1][im]=m_j;
			im++;
		}
	}
	printf("\nMST is:\n");
	for(i=0;i<n-1;i++)
	{
		printf("%c->%c\n",(97+MST[0][i]),(97+MST[1][i]));
	}
}
