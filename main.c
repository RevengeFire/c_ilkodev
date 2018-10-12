#include <stdio.h>
#include <limits.h>

int main()
{
int a=15;
int b=-85;
printf("a --> %d, b --> %d ydi \n",a,b);
a +=b;
b = a - b;
a -=b;
printf("a --> %d, b --> %d oldu",a,b);

}
