#include <stdio.h>
#include <stdlib.h>

int main() {
 int n;
 printf("enter the no of elements\n");
 scanf("%d",&n);
 int a[100],i,low=0,high=n-1;
 printf("enter the elements\n");
 for(i=0;i<=n;i++){
  scanf("%d",&a[i]);
 }
 quicksort(a,low,high);
 printf("sorted elements are\n");
 for(i=0;i<n;i++){
  printf("%d\n",a[i]);
 }
 return 0;
}
int quicksort(int a[],int low,int high){
 int k;
 if(low<high){
  k=partition(a,low,high);
  quicksort(a,low,k-1);
  quicksort(a,k+1,high);
 }
 return 0;
}
int partition(int a[],int low,int high){
 int pivot,i,j,k,t;
 pivot=a[low];
 i=low;
 j=high+1;
 while(i<=j){
  do{
   i=i+1;
  }while(pivot>=a[i]);
  do{
   j=j-1;
  }while(pivot<a[j]);
  if(i<j){
   k=a[i];
   a[i]=a[j];
   a[j]=k;
  }
 }
 t=a[j];
 a[j]=a[low];
 a[low]=t;
 return j;
}
