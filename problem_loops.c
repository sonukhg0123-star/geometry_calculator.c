#include<stdio.h>
int main(){
    //print numbers from 1 to 100 in different lines.
    for(int i=1; i<=100; i=i+1){
        printf("%d\n",i);
    }

    //print all the even numbers from 1 to 100.
    for (int i=2; i<=100; i=i+2){
        printf("%d\n",i);
    }
    //second method
    for (int i=1; i<=100; i=i+1){
        if(i%2==0){
            printf("%d",i);
        }
    }

    //print all  the odd numbers from 1to 100.
    for (int i=1; i<=100; i=i+2){
        printf("%d\n",i);
    }
    //second method
    for (int i=1; i<=100; i=i+1){
        if(i%2!=0){
            printf("%d\n",i);
        }
    }

    //print the table of 19.
    for(int i=19; i<=190; i=i+19){
        printf("%d\n",i);
    }
    //second method
    for (int i=1; i<=190; i=i+1){
        if(i%19==0){
            printf("%d\n",i);
        }
    }

    //print the table of n . here n is a integer which user will input
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    printf("\nMultiplication Table of %d:\n", n);
    for(int i = 1; i <= 10; i++) {
        printf(" %d\n", n * i);
    }
    
    // display this AP-1,3,5,7,9... upto in trems.
    int in;
   printf("enter a number:");
   scanf("%d",&in);
   for(int i=1; i <=2*in-1; i=i+2)
    {
        printf("\n%d",i);
    }

    //display this ap- 4,7,10,13,16...upto nn terms.
    int nn;
   printf("\nenter a number:");
   scanf("%d",&nn);
   for(int i=4; i <=2*nn-1; i=i+3)
    {
        printf("\n%d",i);
    }
    return 0;
}