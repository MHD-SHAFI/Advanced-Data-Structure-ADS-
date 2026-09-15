  1 #include<stdio.h>
  2 struct student{
  3     int rollNo;
  4     char name[20];
  5     int sub1;
  6     int sub2;
  7     int sub3;
  8 };
  9 void main(){
 10     int sum,avg;
 11     struct student s;
 12     printf("enter the roll number = ");
 13     scanf("%d",&s.rollNo);
 14     printf("enter the name = ");
 15     scanf("%s",s.name);
 16     printf("enter Subject 1 Mark = ");
 17     scanf("%d",&s.sub1);
 18     printf("enter Subject 2 Mark = ");
 19     scanf("%d",&s.sub2);
 20     printf("enter Subject 3 Mark = ");
 21     scanf("%d",&s.sub3);
 22
 23     printf(" Roll No = %d \n",s.rollNo);
 24     printf(" Name = %s \n",s.name);
 25     printf(" Subject 1 Mark = %d \n",s.sub1);
 26     printf(" Subject 2 Mark = %d \n",s.sub2);
 27     printf(" Subject 3 Mark = %d \n",s.sub3);
 28     sum=s.sub1+s.sub2+s.sub3;
 29     avg=sum/3;
 30     printf(" Total Sum = %d \n",sum);
 31     printf(" Average Mark = %d \n",avg);
 32 }
 33
