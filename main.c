#include <stdio.h>
#include <stdlib.h>

int sumTwo (int a, int b)
{
    int result= a+b;
    return result;
    
}

    int main (int argc, char *argv[])
{
    int a, b;
    a=3;
    b=5;
    printf("sumTwo result: %i\n", sumTwo(a,b));
    
    
  system("PAUSE");	
  return 0;
}
