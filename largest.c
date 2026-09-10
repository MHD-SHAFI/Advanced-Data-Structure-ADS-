  1 #include<stdio.h>
  2 int largest(int arr[],int n){
  3     int lar=arr[0];
  4     for(int i=0;i<n;i++){
  5         if(lar<arr[i]){
  6             lar=arr[i];
  7         }
  8     }
  9     return lar;
 10 }
 11
 12 void main(){
 13     int arr[20],n,i;
 14     printf("Enter the array limit \n");
 15     scanf("%d",&n);
 16     printf("enter the elements \n");
 17     for(i=0;i<n;i++){
 18         scanf("%d",&arr[i]);
 19     }
 20
 21     printf("  %d  ",largest(arr,n));
 22 }
 23
