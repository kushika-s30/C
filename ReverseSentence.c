#include <stdio.h>
void reverseSentence();
int main()
{
    char c,c1;
    printf("Enter sentence");
    reverseSentence();
    
    return 0;
}
void reverseSentence() {
    char c;
    scanf("%c", &c);
    if (c != '\n') {
        reverseSentence();
        printf("%c", c);
    }
}
