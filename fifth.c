#include <stdio.h>

int Length(char *str) {
    int length=0;
    while(*str++){
        length++;
    }
    return length;
}
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    printf("Length of string: %d\n",Length(str)-1);
    return 0;
}
