 #include<stdio.h>
 int main(){
     int stack[100];
     int top=-1;
     int n,ch,val,i;

     printf("enter the size of stack = ");
     scanf("%d",&n);
     if(n<=0||n>100){
         printf("invalid size");
         return 1;
     }
     while(1){
         printf("\n STACK OPERATIONS");
         printf("\n1.PUSH \n 2.POP \n 3.DISPLAY \n 4.EXIT \n");
         printf("enter your choice =  ");
         scanf("%d",&ch);

         if(ch==1){
             if(top==n-1){
                 printf("STACK OVERFLOW");
             }
             else{
                 printf("Enter Value = ");
                 scanf("%d",&val);
                 top++;
                 stack[top]=val;
                 printf("%d Pushed \n ",val);
             }
         }
         else if(ch==2){
             if(top == -1){
                 printf("STACK UNDERFLOW");
             }
             else{
                 printf("%d POPPED \n",stack[top]);
                 top--;
             }
         }
         else if(ch==3){
             if(top == -1){
                 printf("STACK IS EMPTY");
             }
             else{
                 printf("STACK ELEMENTS ARE :\n");
                 for(i=top;i>=0;i--){
                     printf("%d\n",stack[i]);
                 }
             }
         }
         else if(ch == 4){
		break;
         }
         else{
             printf("Invalid Choice\n");
         }
     }
     return 0;
}

