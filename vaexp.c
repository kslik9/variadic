#include <stdarg.h>  
int mul(int last, ...)
{
    int mul = 1; //assign a variable to 1 because we can't multipe with 0
    int i = 0;// a variable to keep track of number of arguments
    va_list(my_group); //creating a list
    va_start(my_group, last);//assign the last arg so the list start after it
    while (i < last)
    {
        mul = mul * va_arg(my_group,int); //multipe "mul" with every next param comes from the list
        i++;
    }
    va_end(my_group);// end the group
    return (mul);// return the result
}
#include <stdio.h>
int main()
{
    printf("%d", mul(2, 5, 5));//(2 = how much numbers we r gonna use , 5 = the first number to multipe to the second 5)
}