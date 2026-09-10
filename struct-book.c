  1 #include<stdio.h>
  2 struct book{
  3     int id;
  4     char name[30];
  5     char author[30];
  6     int price;
  7 };
  8 void main(){
  9     struct book b;
 10     printf("ener book id \n");
 11     scanf("%d",&b.id);
 12     printf("enter the book name \n");
 13     scanf("%s",b.name);
 14     printf("enter the author name \n");
 15     scanf("%s",b.author);
 16     printf("enter the price \n");
 17     scanf("%d",&b.price);
 18
 19     printf("BOOK DETAILS \n");
 20     printf("BOOK ID = %d \n",b.id);
 21     printf("BOOK NAME = %s \n",b.name);
 22     printf("BOOK AUTHOR = %s \n",b.author);
 23     printf("BOOK PRICE = %d \n",b.price);
 24 }
 25
