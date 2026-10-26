#include <stdio.h>
void main(){
    int a[5],b[5],c[10],i,j,k,temp=0;
    printf("\n enter 5 elements for array 1 \n");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
  
    for(i=0;i<4;i++){
     for(j=0;j<4-i;j++){
       if(a[j]>a[j+1]){
         temp=a[j];
         a[j]=a[j+1];
         a[j+1]=temp;
       }
     }
    }
    printf("\n array a = \n");
    for(i=0;i<5;i++){
        printf(" %d ",a[i]);
    }
  
    printf("\n enter 5 elements for array 2 \n");
    for(i=0;i<5;i++){
        scanf("%d",&b[i]);
    }
    for(i=0;i<4;i++){
        for(j=0;j<4-i;j++){
            if(b[j]>b[j+1]){
                temp=b[j];
                b[j]=b[j+1];
                b[j+1]=temp;
            }
        }
    }
  
    printf("\n array b = \n");
    for(i=0;i<5;i++){
        printf(" %d ",b[i]);
    }
    printf("\n merged array of a and b : \n");
    i=0;
    j=0;
    k=0;
  
    while(i<5 && j<5){
        if(a[i]<b[j]){
            c[k]=a[i];
            k++;
            i++;
        } else{
            c[k]=b[j];
            k++;
            j++;
        }
    }
    while(i<5){
        c[k]=a[i];
        k++;
        j++;
    }
    while(j<5){
        c[k]=b[j];
        k++;
        j++;
    }
    for(i=0;i<10;i++){
        printf(" %d ",c[i]);
    }
}

