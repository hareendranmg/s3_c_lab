#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* file;
    char string_from_file[20];

    file = fopen("demo_file.txt", "w+");
    fprintf(file, "Test written");
    fclose(file);

    file = fopen("demo_file.txt", "r");
    fscanf(file, "%*s %*s", string_from_file);

    printf("%s\n", string_from_file);

}