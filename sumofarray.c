  1 #include<stdio.h>
  2 int sumarray(int n){
  3     int arr[n],sum=0,i;
  4     printf("enter %d  elements",n);
  5     for(i=0;i<n;i++){
  6         scanf("%d",&arr[i]);
  7     }
  8     for(i=0;i<n;i++){
  9         sum=sum+arr[i];
 10     }
 11
 12     return sum;
 13 }
 14
 15 int main(){
 16     int limit,result;
 17     printf("enter a limit \n");
 18     scanf("%d",&limit);
 19     result=sumarray(limit);
 20     printf("sum = %d\n",result);
 21     return 0;
 22
 23 }
 24
