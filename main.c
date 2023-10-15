#include <stdio.h>
#include <stdlib.h>

int get_max(int x, int y) {
    if (x>y) {
       return x;
} else {
       return y;
       }
}

int main(int argc, char *argv[]) {
    int a, b;
    
    a= 3;
    b= 10;
    
    printf("get_max result: %i\n", get_max(a,b));
    
    
  system("PAUSE");	
  return 0;
}
