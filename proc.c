/*
 * Задание: Описать процедуру PowerA3(A, B), вычисляющую третью степень числа A
 * и возвращающую результат через параметр B. Использовать для вычисления
 * третьих степеней пяти заданных чисел.
 * Дата: 03.05.25
 * Контрольный пример:
 *   2.0^3 = 8.00
 *   3.0^3 = 27.00
 *   4.0^3 = 64.00
 *   5.0^3 = 125.00
 *   1.5^3 = 3.38
 * Время выполнения: 5 минут
 */

 #include <stdio.h>

 void PowerA3(double A, double *B) {
     *B = A * A * A;
 }
 
 int main() {
     double numbers[] = {2.0, 3.0, 4.0, 5.0, 1.5};
     double result;
     int count = sizeof(numbers) / sizeof(numbers[0]);
     
     printf("Вычисление третьих степеней:\n");
     for (int i = 0; i < count; i++) {
         PowerA3(numbers[i], &result);
         printf("%5.2f^3 = %7.2f\n", numbers[i], result);
     }
     
     double test_num = 0.5;
     PowerA3(test_num, &result);
     printf("%5.2f^3 = %7.2f\n", test_num, result);
     
     test_num = 10.0;
     PowerA3(test_num, &result);
     printf("%5.2f^3 = %7.2f\n", test_num, result);
     
     return 0;
 }