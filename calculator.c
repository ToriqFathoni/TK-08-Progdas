#include <stdio.h>

int main() {
    char operasi;
    double num1, num2, result;
    
    printf("Masukkan simbol operasi (+, -, *, /): ");
    scanf("%c", &operasi);
    
    printf("Nomor pertama\t: ");
    scanf("%lf", &num1);
    
    printf("Nomor kedua\t: ");
    scanf("%lf", &num2);
    
    switch(operasi) {
        case '+':
            result = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf", num1, num2, result);
            break;
        case '/':
            if(num2 != 0) {
                result = num1 / num2;
                printf("%.2lf / %.2lf = %.2lf", num1, num2, result);
            } else {
                printf("Error: Division by zero");
            }
            break;
        default:
            printf("Error: Invalid operator");
    }
    
    return 0;
}