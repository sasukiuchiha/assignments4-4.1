#include <stdio.h>
#include <stdlib.h>
char *y[6];
char *x[6]={"i","like","this","program","very","much"};
int main()
{
    for(int i=0;i<=6;i++){

        reverse(y,x[i]);}

        char str1[50]; // size of char string
        printf ("Enter any string from the array of x: ");
        gets(str1); // use gets() function to take string

        printf ("\nBefore reversing the string: %s \n",str1);

        // call revstr() function
        revstr(str1);
        printf ("After reversing the string: %s", str1);
}

void reverse(char arr,char *x){
static z=5;
y[z]=x;
if(z==0){
    for(int i=0;i<6;i++){
        printf("%s ",y[i]);
    }
    printf("\n");
}
z--;

}

void revstr(char *str1)
{
    // declare variable
    int i, len, temp;
    len = strlen(str1); // use strlen() to get the length of str string

    // use for loop to iterate the string
    for (i = 0; i < len/2; i++)
    {
        // temp variable use to temporary hold the string
        temp = str1[i];
        str1[i] = str1[len - i - 1];
        str1[len - i - 1] = temp;
    }
}

