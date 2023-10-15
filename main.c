#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int square( int a )
{
 return (a *a);
}
int main()
{
 int a = 2;
 a = square(a);
 printf("a=%i\n",a);
}
  system("PAUSE");	
  return 0;
}
