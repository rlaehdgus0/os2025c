#include <string>
#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    char var='Aadkjhasjdhas jdajkdjkadhjakdjakdkjkh dadakjmnj';
    printf("var1=%d var2=%c", var,var);
    putchar(var+2);
    int a = 8086;
    char b[199];
    printf("%d \n",a);
    printf("%o \n",a);
    printf("%x \n",a);
    printf("%f \n",a);
    printf("%e \n",a);
    gets(b);
    puts(b);
    a = 10 ^ 9;
    cout << a;
    return 0;
}

