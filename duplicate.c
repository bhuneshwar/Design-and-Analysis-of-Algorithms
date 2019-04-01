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
	
	for(i=0;i<n;i++){
		if(a[i]==a[i+1]){
		
           printf("Duplicate Found\n");
           exit(0);
           
        	}
	   else
	  continue;
	
	
}

}















