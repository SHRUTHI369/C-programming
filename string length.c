#include <stdio.h>
int main() {
    char s[100];
    fgets(s,100,stdin);
    int i;

    for (i = 0; s[i] != '\0'; ++i);
    
    printf("Length of the string: %d", i);
    return 0;
}
