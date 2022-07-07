#include <stdio.h>
#include <stdlib.h>
//original program with no bones
int main()
{
    int x;
    printf("enter the value of x \n");
    scanf("%d",&x);
    printf("before calling edit x = %d \n",x);
    edit(&x);
    printf("after  calling edit x = %d \n",x);
    return 0;
}
void edit(int *x){

*x+=1;
}

//bonnnnnnnnnnnnnnnnnnnnnnnnnnnes under there

//the program with bones
/*
int main()
{
    int x[3];
    for(int i=0;i<3;i++){

    printf("enter the value of x \n");
    scanf("%d",&x[i]);}
    printf("before calling edit x = ");
    for(int i=0;i<3;i++){
    printf("%d,",x[i]);}
    printf("\n");
    printf("before calling edit x = ");
    for(int i=0;i<3;i++){
    printf("%d,",edit(x[i]));}
    printf("\n");
    printf("the value of array x = ");
    for(int i=0;i<3;i++){
    printf("%d,",x[i]);}
    return 0;
}
int edit(int x){

x+=1;
return x;}*/


