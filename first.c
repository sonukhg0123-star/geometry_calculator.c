#include<stdio.h>
int main (){

//area of square
int side;
printf ("enter side of square: ");
scanf("%d",&side);
printf("area of square is: %d",side*side);

//area of circle
int r;
printf("\nenter r of circle: ");
scanf("%d",&r);
float pi=(3.14);
printf("area of circle is : %f",pi*r*r);

//area of rectangle
int w,l;
printf("\nenter width of rectangle: ");
scanf("%d",&w);
printf("enter length of rectangle: ");
scanf("%d",&l);
printf("area of rectangle is: %d",w*l);

//area of triangle
float b,h;
printf("\n enter base of triangle: ");
scanf("%f",&b);
printf("enter height of triangle: ");
scanf("%f",&h);
printf ("area of triangle is: %f",0.5*b*h);

//premiter of square
float a;
printf("\n enter area:");
scanf("%f",&a);
printf("premieter of square: %f",4*a );

//circumference of circle
 float re;
printf("\nenter radius of circle:");
scanf("%f",&re);
printf("circumference of circlef: %f ",2*3.14*r);

//volume of cube
float ab;
printf("\n enter a of cube:");
scanf("%f",&ab);
printf("volume of cube:%f",ab*ab*ab);

//volume of cubiod
float le,ba,hi;
printf("\nenter length of cubiod:");
scanf("%f",&le);
printf("enter base of cubiod:");
scanf("%f",&ba);
printf("enter height of cubiod:");
scanf("%f",&hi);
printf("volume of cubiod: %f",le*ba*hi);

//perimeter of recantangle
float la,bs;
printf("\n enter length of rectangle:");
scanf("%f",&la);
printf("enter base of rectangle:");
scanf("%f",&bs);
printf("perimeter of rectangle:%f",2*(la+bs));

//simple interest
float p,ra,t,si;
printf("\nenter principal:");
scanf("%f",&p);
printf("enter rate:");
scanf("%f",&ra);
printf("enter time:");
scanf("%f",&t);
si=(p*ra*t)/100;
printf("simple intrest is : %.2f",si);
return 0;
}
