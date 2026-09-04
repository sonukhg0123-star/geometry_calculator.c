#include<stdio.h>
int main(){

    //wap to find numer is odd or even
    int n;
    printf("enter a number");
    scanf("%d",&n);
    if (n%2==0)
    {
        printf("this is even number");}
    
    else{
        printf("this is odd number");
    }

    // wap to determine whether the year is a leap year or not.
    int year;
    printf("\n enter a year:");
    scanf("%d",&year);
    if (year%4==0)
    {
        printf("this is a leap year");
    }
    else{
        printf("this is not a leap year");
    }

    //take a positive integer input and tell if it is divisible by 5 or not
    int x;
      printf("\n enter a number:");
      scanf("%d",&x);
      if(x%5==0)
      {
        printf("this number is divisible by 5");
      }
      else{
        printf("this number is not divisible by 5");
      }

      //take integer input and print the absolute value of that integer
      int y;
      printf("\nenter your number:");
      scanf("%d",&y);
      if(y<0)
      {
        y=y*(-1);
      }
      printf("the absolute value is:%d",y);

    //Write a program to find greatest of four numbers entered by the user
    int num1,num2,num3,num4;
    printf("\nenter first number");
    scanf("%d",&num1);
    printf("enter second number");
    scanf("%d",&num2);
    printf("enter third number");
    scanf("%d",&num3);
    printf("enter fourth number");
    scanf("%d", &num4);
    if(num1>=num2 && num1>=num3 && num1>=num4)
    {
        printf("the greatest number is: %d",num1);
    }
    else if(num2>=num3 && num2>=num4)
    {
        printf("the greatest number is: %d",num2);
    }
    else if(num3>=num4)
    {
        printf("the greatest number is: %d",num3);
    }
    else{
        printf("the greatest number is: %d",num4);
    }

    //Wap to determine whether a Character ehtered by the user is lowercase or not.
    char a;
    printf("enter a character:");
    scanf("%c",&a);
    if(a=='_')
    {
        printf("entered character is lowercase character");
    }
    else
    {
        printf("entered character is not a lowercase charater");
    }

    //wap to find out whether a student is pass or fail if it requires total 40% and at least 33% in each subject to pass.
    // assume 3 subjects and take marks as an input from a user 
    float math,phy,ch,total,percentage;
    printf("enter your mark for math:");
    scanf("%f",&math);
    printf("enter your mark for physic:");
    scanf("%f",&phy);
    printf("enter your mark for chemistry:");
    scanf("%f",&ch);
    total = math+phy+ch;
    percentage =(total/300)*100;
if(percentage>=40 && math>=33 && phy>=33 && ch>=33)
    {
        printf("you are pass");
        printf("\n your percentageis : %.2f%%",percentage);
    }
    else
    {
        printf("you are fail ");
        printf("\n your percentage is : %.2f%%",percentage);
    }
    return 0;
}