#include <stdio.h>

void reverse_string(char name[]);

int main()
{
    char name[20];
    printf("Enter your name: ");
    scanf("%[^\n]", name);

    printf("Reverse of your name is: ");
    reverse_string(name);
}

void reverse_string(char name[])
{
    char rev[20];
    int len = 0, i, j;

    for(len = 0; name[len] != '\0'; len++)

    for (j = 0, i = len; i >= 0; j++, i--)
    {
        rev[j] = name[i];
    }

    rev[j] = '\0';
        
    printf("%s\n", rev);
}