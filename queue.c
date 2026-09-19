#include<stdio.h>
  int main(){
      int i,n,ch,v;
 
      printf("Enter the size of queue = ");
      scanf("%d",&n);
      if(n <= 0){
          printf("Invalid Size \n");
          return 1;
      }
 
     int queue[n];
      int f = -1,r = -1;
 
      while(1){
          printf("\n MENU \n 1.Enqueue \n 2.Dequeue \n 3.Display \n 4.Exit \n");
          printf("Enter Your Choice = ");
          scanf("%d",&ch);
 
          if(ch == 1){
              if(r == n-1){
                  printf("Queue is Full \n");
              }
              else{
                  printf("Enter the element : ");
                  scanf("%d",&v);
                  r=r+1;
                  queue[r]=v;
                  if(f == -1){
                      f=0;
                  }
              }
          }
 
          else if(ch == 2){
              if(f == -1||f>r){
                  printf("Queue is empty \n");
              }
              else{
                  printf("Deleted %d \n",queue[f]);
                  f=f+1;
              }
          }
 
          else if(ch == 3){
              if(f == -1||f>r){
                  printf("Queue is Empty \n");
              }
              else{
                  printf("Queue is : ");
                  for(i=f;i<=r;i++){
 		printf("%d",queue[i]);
                  }
                  printf("\n");
              }
          }
 
          else if(ch == 4){
              break;
          }
 
          else{
              printf("Invalid Choice \n");
          }
      }
      return 0;
  }
 
