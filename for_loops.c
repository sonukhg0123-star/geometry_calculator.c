#include<stdio.h>
int main(){
    for (int x=1; x<=7; x=x+2)
    {
        printf("\nhello sonu");
    }
    //print hello sonu n times.take n as input from user
    int n;
    printf("\nenter a number :");
    scanf("%d",&n);
    for(int i=1; i<=n;i=i+1){
        printf("hello sonu\n");
    }
   //display this gp-1,2,4,8,16,32...upto n terms
   int y;
   printf("\nenter a number:");
   scanf("%d",&y);
   int a=1;
   for(int i=1; i<=y; i++){
    printf("%d\n",a);
    a=a*2;
   }
   //display this ap- 100,97,94,91... upto all terms which are positive.
   int z;
    printf("\nenter a number :");
    scanf("%d",&z);
    int b=100;
    for(int i=1; i<=z;i++){
        printf("%d\n",b);
        b = b - 3;
    } 
    //wap to print odd numbers from 1 to 100 using continue statement.
    for(int i=1; i<=100; i++)
    {
        if(i%2==0){
            continue;
        }
        printf("%d\n",i);
    }
    //wap to print all the even numbers from 1 to 100 uusing continue statement.
    for(int i=1; i<=100; i++)
    {
        if(i%2!=0){
            continue;
        }
        printf("%d\n",i);
    }
    
    return 0;
}