  1 #include<stdio.h>
  2 void swap(int *a,int *b){
  3     int temp;
  4     temp=*a;
  5     *a=*b;
  6     *b=temp;
  7 }
  8 void main(){
  9     int a,b;
 10     printf("enter first number \n");
 11     scanf("%d",&a);
 12     printf("enter second number \n");
 13     scanf("%d",&b);
 14     printf("\n Before swap\n");
 15     printf("No 1 = %d \n",a);
 16     printf("No 2 = %d \n",b);
 17     swap(&a,&b);
 18     printf("\nAfter Swap\n");
 19     printf("No 1 = %d \n",a);
 20     printf("No 2 = %d \n",b);
 21 }
 22
~
