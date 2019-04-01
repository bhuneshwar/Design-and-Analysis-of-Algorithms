#include<stdio.h>
#include<stdlib.h>
void main(){
	int n,l,h,mid,key;
	printf("Program for Binary Search\n");
	printf("Enter the length of the array\n");
	scanf("%d",&n);
	int a[n],i;
	printf("Enter the element of the increasing sorted array\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	l=1;
	h=n;
	mid=(l+h)/2;
	printf("Enter the key which you want to search\n");
	scanf("%d",&key);
	while(l<=h){
		if(a[mid]==key){
			printf("Element Found\n");
			exit(0);
		}
		else if(a[mid]<key){
			l=mid+1;
		}
		else{
			h=mid-1;
		}
	mid=(l+h)/2;
}
	if(l>h)
	printf("Element not found\n");
}

















