#include<stdio.h>
#include<stdlib.h>
void main(){
	int n,l,h,mid,key,new_key;
	printf(" Searching for the sum\n");
	printf("Enter the length of the array\n");
	scanf("%d",&n);
	int a[n],i,b[n];
	printf("Enter the element of the increasing 1st sorted array\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
		printf("Enter the element of the increasing 2nd sorted array\n");
	for(i=0;i<n;i++)
	scanf("%d",&b[i]);

	printf("Enter the key which you want to search\n");
	scanf("%d",&key);
	
	for(i=0;i<n;i++){
		l=1;
	h=n;
	mid=(l+h)/2;
	new_key=key-a[i];
		while(l<=h){
		if(b[mid]==new_key){
			printf("sum Found\n");
			
			exit(0);
		}
		else if(b[mid]<new_key){
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

















