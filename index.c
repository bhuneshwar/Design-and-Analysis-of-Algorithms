#include<stdio.h>
#include<stdlib.h>>
int main(){
	int n,l,h,mid;
	printf("Program for index Search\n");
	printf("Enter the length of the array\n");
	scanf("%d",&n);
	int a[n],i;
	printf("Enter non decreasing element of array \n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	l=1;
	h=n;
	mid=(l+h)/2;

	
		while(l<=h){
			if(a[mid]==mid){
				printf("index Found\n");
			
				exit(0);
			}
			else if(a[mid]<mid){
				l=mid+1;
			}
			else{
			
				h=mid-1;
		   }
		   mid=(l+h)/2;
		
		
	}
	if(l>h)
	printf("index not found\n");
	
	
	
 return 0;	
}

















