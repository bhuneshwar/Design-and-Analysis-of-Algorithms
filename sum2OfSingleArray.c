#include<stdio.h>
#include<stdlib.h>
void main(){
	int n,l,h,mid,key,new_key;
		printf("checking sum of two elements\n");
		printf("Enter the length of the array\n");
		scanf("%d",&n);
	int a[n],i;
       	printf("Enter the element of the increasing sorted array\n");
	for(i=0;i<n;i++)
    	scanf("%d",&a[i]);

		printf("Enter the sum you want to search\n");
		scanf("%d",&key);
	for(i=0;i<n;i++){
	    new_key=key-a[i];	
		l=1;
		h=n;
		mid=(l+h)/2;
	while(l<=h){
		if(a[mid]==new_key){
			printf("sum exist\n");
			
			exit(0);
		}
		else if(a[mid]<new_key){
			l=mid+1;
		}
		else{
			h=mid-1;
		}
	mid=(l+h)/2;
}
}
	if(l>h)
	printf("sum not found\n");
	
	
	
}

















