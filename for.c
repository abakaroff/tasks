/*
 * Задание: Найти сумму факториалов 1! + 2! + ... + N! для заданного N (>0)
 * Использовать вещественные числа для избежания переполнения
 * Дата: 04.05.25
 * Контрольный пример:
 *   N = 1 → 1
 *   N = 3 → 9 (1! + 2! + 3! = 1 + 2 + 6)
 *   N = 5 → 153 (1 + 2 + 6 + 24 + 120)
 * Время выполнения: 15 минут
 */

 #include <stdio.h>

 double sumOfFactorials(int N) {
     double sum = 0.0;
     double factorial = 1.0; // Текущее значение факториала (0! = 1)
     
     // Вычисляем сумму факториалов в одном цикле
     for (int i = 1; i <= N; i++) {
         factorial *= i;    // Вычисляем i! как (i-1)! * i
         sum += factorial;  // Добавляем к сумме
     }
     
     return sum;
 }
 
 int main() {
     int N;
     
     printf("Введите целое число N (>0): ");
     scanf("%d", &N);
     
     if (N <= 0) {
         printf("Ошибка: N должно быть >0\n");
         return 1;
     }
     
     double result = sumOfFactorials(N);
     
     // Для целых значений выводим без дробной части
     if (result == (long long)result) {
         printf("Сумма факториалов от 1! до %d! = %.0f\n", N, result);
     } else {
         printf("Сумма факториалов от 1! до %d! = %g\n", N, result);
     }
     
     printf("N = 1 → %.0f\n", sumOfFactorials(1));
     printf("N = 3 → %.0f\n", sumOfFactorials(3));
     printf("N = 5 → %.0f\n", sumOfFactorials(5));
     printf("N = 10 → %g\n", sumOfFactorials(10));
     
     return 0;
 }