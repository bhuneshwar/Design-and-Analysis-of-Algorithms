#include<stdio.h>
#include<stdlib.h>

void merging(int a[],int low,int mid,int high){
    int c[100],i,j,k;
    
    i=low;
    j=mid+1;
    k=low;
    
	while(i<=mid && j<=high){
		 if(a[i]<=a[j]){
		 	
	      c[k]=a[i];
		  i++;
		  k++;  
		}
		else{
			c[k]=a[j];
			k++;
			j++;
		}
   }
   
	while(i<=mid){
		
			c[k]=a[i];
			k++;
			i++;
		
		
	}
	
	while(j<=high){
		
			c[k]=a[j];
			k++;
			j++;
		
		
	}


	for(i=0;i<high+1;i++)
	a[i]=c[i];	
	
}

void mergeSort(int a[],int low,int high){
	
	  int mid;
	  	if(low<high){
		  
	   mid=(low+high)/2;
	   
	   mergeSort(a,low,mid);
	   mergeSort(a,mid+1,high);
	   merging(a,low,mid,high);
    }
}

		void main(){
			int low,high,n,i;
			printf("Program of merge sort\n");
			printf("Enter the size of the array\n");
			
			scanf("%d",&n);
			
			low=0;high=n-1;
			int a[n];
			printf("Enter the element of the array\n");
			for(i=0;i<n;i++)
			scanf("%d",&a[i]);
			printf("Original array is :\n");
			for(i=0;i<n;i++)
			printf(" %d ",a[i]);
			
			printf("\n");
			printf("Sorted array is\n");
			
			mergeSort(a,low,high);
		   
		 
		   for(i=0;i<n;i++)	
			printf(" %d ",a[i]);
			
			printf("\n");
		
		}
