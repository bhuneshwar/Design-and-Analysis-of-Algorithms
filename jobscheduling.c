#include<stdio.h>
#include<stdlib.h>
void main(){
    int n,i,j,k,max,max1;
    
     
    int sum=0;
    printf("                    Program for solving job scheduling Algorithm  problem            \n");
    printf("Enter the total jobs \n");
    scanf("%d",&n);
    
    int p[n],pr[n],p1[n],d[n];

    printf("Enter each profits\n");
    for(i=0;i<n;i++)
    scanf("%d",&p[i]);

     for(i=0;i<n;i++)
         p1[i]=p[i];

      printf("Enter deadline of the jobs corresponding to each jobs\n");
    for(i=0;i<n;i++)
    scanf("%d",&d[i]);
    
    max1=d[0];
    for(i=0;i<n;i++){
      if(d[i]>max1)
           max1=d[i];
       else
         continue; 

    }
    
   int job[n];
  for(i=0;i<n;i++)
    job[i]=-100;
    
   for(i=0;i<n;i++)
    pr[i]=-1;

    for(i=0;i<n;i++){
    max=p[0];
        k=0;
    for(j=0;j<n;j++){

    if(p[j]>max){
    max=p[j];
    k=j;
    }
    else
    continue;
    }
    pr[i]=k;
    p[k]=0;

    }

   for(i=0;i<n;i++){
     if(job[d[pr[i]]]==-100)
       job[d[pr[i]]]=pr[i];
     else{
      for(j=d[pr[i]]-1;j>=0;j--)
         if(job[j]==-100){
           job[j]=pr[i];    
           break;
         }
     }
       
  }

for(i=1;i<=max1;i++)
   sum+=p1[job[i]];

printf("\nNet Profit is: %d \n",sum);


}
