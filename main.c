#include <stdlib.h>
#include <stdio.h>

void dynamicprint(const char * word);

int main()
{

    dynamicprint("Hello new commit");
    return 0 ;
}

void dynamicprint(const char * word)
{
    printf("%s" , word);
}


int sum(int a , int b)
{

    return a + b ; // this a new small function addes 
}

int sub(int a , int b)
{
    return a - b ;
}

int mul(int a , int b )
{
    return a * b ;
}