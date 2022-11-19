#include <stdio.h>

int main() {
    char name[25];
    float basic = 0, da = 0, salary = 0;
    int code = 0;

    printf("Enter your name: ");
    scanf("%s", name);
    // scanf("%[^\n]", name);

    printf("Enter basic pay: ");
    scanf("%f", &basic);

    printf("Enter code: ");
    scanf("%d", &code);

    switch (code) {
        case 1: da = basic * 0.1; break;
        case 2: da = basic * 0.15; break;
        case 3: da = basic * 0.20; break;
        default: da = 0; break;
    }

    salary = basic + da;

    printf("Hi %s, your salary with %f DA is: %f\n", name, da, salary);

    return 0;
}