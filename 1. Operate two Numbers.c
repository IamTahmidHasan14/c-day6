#include <stdio.h>
int main()
{
    char operate;
    int num1, num2;
    float result=0.0f;
    printf("Enter [number 1] [+ - * / r] [number 2]\n");
    scanf("%d %c %d", &num1, &operate, &num2);
    switch(operate)
    {
        case '+': result = num1 + num2; break;
        case '-': result = num1 - num2; break;
        case '*': result = num1 * num2; break;
        case '/': result = num1 / num2; break;
        case 'r': result = num1 % num2; break;
        default: printf("Invalid operator");
    }
    printf("%d %c %d = %.2f", num1, operate, num2, result);
    return 0;
}
