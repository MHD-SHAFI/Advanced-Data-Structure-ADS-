  1 #include<stdio.h>
  2 int facto(int n){
  3     int fact=1,i;
  4     for(i=1;i<=n;i++){
  5         fact=fact*i;
  6     }
  7     return fact;
  8 }
  9 int main(){
 10     int num;
 11     printf("enter the number");
 12     scanf("%d",&num);
 13     printf("factorial = %d ",facto(num));
 14     return 0;
 15 }
 16
