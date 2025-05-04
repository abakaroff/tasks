/*
 * +While4°. Дано целое число N (> 0). 
 * Если оно является степенью числа 3, то вывести True, 
 * если не является — вывести False. 
 * Дата: 03.05.25
 * Контрольные примеры:
 *   True
 *   True
 *   True
 * Время выполнения: 5 минут
*/

#include <stdio.h>
#include <stdbool.h>

bool isPowerOfThree(int n) {
    if (n <= 0) return false;
    while (n % 3 == 0) {
        n /= 3;
    }
    return n == 1;
}

int main() {
    printf("1: %s\n", isPowerOfThree(1) ? "True" : "False");
    printf("3: %s\n", isPowerOfThree(3) ? "True" : "False");
    printf("9: %s\n", isPowerOfThree(9) ? "True" : "False");
    
    return 0;
}