#include<stdio.h>
int main(){

 //if-else statement
int age;
printf(" enter your age:");
scanf ("%d", &age);
if (age>=18)
{printf("eligible for voting");
}
else{printf("not eligible for voting");
}

//else-if ladder
int marks;
printf("\n enter your marks:");
scanf("%d",&marks);

if (marks>=90)
{ printf("grade a");
}
else if(marks>=75)
{printf("grade b");
}
else if (marks>=50)
{
    printf("grade c");
}
else
{
    printf("fail");
}

//nested if statement
int Age;
printf("\n enter your age:");
scanf("%d",&Age);
if (Age>=18)
{ 
    if (Age<=60)
    {
        printf("you are an adult");
    }
}

//nested if-else statement
int AGE;
printf("\n enter your age:");
scanf("%d",&AGE);
if (AGE>=18)
{
    if (AGE<=60)
    {
        printf("you are an adult");
    }
    else{
        printf("you are an senior citizen");
    }
}
else{
    printf("you are under 18");
}

//switch statement
int day;
printf("\n enter day number");
scanf("%d",&day);
switch (day)
{
case 1 :
    printf("monday");
    break;
case 2 :
    printf("tuesday");
    break;
case 3 :
    printf("wednesday");
    break;
default:
   printf("invalid input");

}
    return 0;
}
