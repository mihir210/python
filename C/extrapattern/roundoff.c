#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    
    scanf("%[^\n]", s);
    
    for (int i; *(s+i)!='\0'; i++) {
        if (*(s+i)==' ') {
        *(s+i)='\n';
        }
    }
    
    puts(s);
    
    return 0;
}