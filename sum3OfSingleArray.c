#include<stdio.h>
#include<stdlib.h>
void main(){
	int n,key; 
	printf("searching sum of three elements\n");
	printf("Enter the length of the array\n");
	scanf("%d",&n);
	int a[n],i,j,k;
	printf("Enter the element of non decreasing sorted array\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Enter the sum you want to search\n");
	scanf("%d",&key);
	for(i=0;i<n;i++){
		for(j=i+1,k=n-1;j<k;){
	     if(a[i]+a[j]+a[k]==key){
		 
		 		printf("Sum exist\n");
		 		exit(0);
		}
			else if(a[i]+a[j]+a[k]<key)
			j=j+1;
			
			else
			k=k-1;
            			
			
		}
		
	}
	if(j>k)
	printf("sum not exist\n");
    
    
	
	
	
}

















