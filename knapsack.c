#include<stdio.h>
#include<stdlib.h>
void main(){
    int n,m,i,j,k;
    
     
    float sum3=0;
    printf("            Program for solving Knapsack problem            for OPTIMAL SOLUTION     \n");
    printf("Enter the capacity of knapsack\n");
    scanf("%d",&m);
    printf("Enter the weights in knapsack\n");
    scanf("%d",&n);
    int w[n],p[n],pr[n];
    float x[n],pw[n],max;
    printf("Enter each weights \n");
    for(i=0;i<n;i++)
    scanf("%d",&w[i]);
    printf("Enter each profits\n");
    for(i=0;i<n;i++)
    scanf("%d",&p[i]);
    
    
    
    
    for(i=0;i<n;i++)
       x[i]=0;
    
          for(i=0;i<n;i++){
              pw[i]=(float)p[i]/w[i];

          }
         
          
    for(i=0;i<n;i++)
      pr[i]=-1;
        
        for(i=0;i<n;i++){
         max=pw[0];
         for(j=0,k=0;j<n;j++){
        
           if(pw[j]>max){
          max=pw[j];
          k=j;
        }
           else
         continue;
          }
         pr[i]=k;
         pw[k]=0;
        
      }
           
    for(i=0;i<n;i++){
            
              if(m > w[pr[i]]){
                  x[pr[i]] = 1;
                  m = m - w[pr[i]];
                  
              }
              else {
              
                x[pr[i]] = (float)m/w[pr[i]];
                 break;
          }
                
        }
      for(i=0;i<n;i++)
      sum3=sum3+(p[i]*x[i]);
      
      printf("Final profit is:%f\n",sum3);        

}
