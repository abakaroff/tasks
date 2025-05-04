/*
 * Задание: Для целого числа >999 найти цифру в разряде сотен,
 * используя одну операцию деления нацело и одну операцию взятия остатка.
 * Дата: 04.05.25
 * Контрольный пример:
 *   1234 → 2
 *   9876 → 7
 *   1001 → 0
 * Время выполнения: 5 минут
 */

 #include <stdio.h>

 int getHundredsDigit(int number) {
     return (number / 100) % 10;
 }
 
 int main() {
     int number;
     
     scanf("%d", &number);
     
     if (number <= 999) {
         return 1;
     }
     
     int hundreds = getHundredsDigit(number);
     printf("%d\n", hundreds);
     
     printf("1234 → %d\n", getHundredsDigit(1234));
     printf("9876 → %d\n", getHundredsDigit(9876));
     printf("1001 → %d\n", getHundredsDigit(1001));
     printf("5000 → %d\n", getHundredsDigit(5000));
     
     return 0;
 }