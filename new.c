#include<stdio.h>
int main(){
// Q-2 delivery charge if cart total >= 500, print "free delivery"; otherwise,add a
// 150 fee and print the new total.
int c;
printf("enter cart total:");
scanf("%d",&c);
if(c>=500){
    printf("free delivery");
}
else if(c<=499){
    printf("new total:%d",c+150);
}
return 0;
}
