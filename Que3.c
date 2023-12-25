#include<stdio.h>

void main(){
  int n,i;
  printf("Enter the array size:-");
  scanf("%d",&n);
  
  int a[n];
  printf("Enter array elements:-\n");
  
  for(i=0;i<n;i++)
  {
 	printf("Enter a[%d]:-",i);
 	scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
  printf("%d\n",a[i]*a[i]);}
  
 
 }

 
