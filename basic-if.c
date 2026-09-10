  1 #include<stdio.h>
  2 void main(){
  3     int a,b;
  4     printf("enter no.1");
  5     scanf("%d",&a);
  6     printf("enter no.2");
  7     scanf("%d",&b);
  8     if(a>b){
  9         printf("no.1 is greater \n",a);
 10     }
 11     else if(b>a){
 12         printf("no.2 is greater \n",b);
 13     }
 14     else{
 15         printf("both are equal");
 16     }
 17 }
 18
