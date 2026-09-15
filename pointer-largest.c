  1 #include<stdio.h>
  2 int largest(int *a,int *b){
  3     int largest;
  4     if(*a>*b){
  5         largest=*a;
  6     }
  7     else{
  8         largest=*b;
  9     }
 10     return largest;
 11 };
 12 void main(){
 13     int a,b;
 14     printf("Enter No 1 = ");
 15     scanf("%d",&a);
 16     printf("Enter No 2 = ");
 17     scanf("%d",&b);
 18     printf("Largest = %d \n",largest(&a,&b));
 19 }
 20
