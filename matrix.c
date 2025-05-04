/*
 * Задание: Сформировать матрицу M×N, где элементы I-й строки равны 10·I
 * Дата: 03.05.25
 * Контрольный пример:
 *   Вход: M=3, N=4
 *   Выход:
 *     10  10  10  10
 *     20  20  20  20
 *     30  30  30  30
 * Время выполнения: 15 минут
 */

 #include <stdio.h>

 void createAndPrintMatrix(int rows, int cols) {
     int matrix[rows][cols];

     for (int i = 0; i < rows; i++) {
         for (int j = 0; j < cols; j++) {
             matrix[i][j] = 10 * (i + 1);
         }
     }

     for (int i = 0; i < rows; i++) {
         for (int j = 0; j < cols; j++) {
             printf("%4d", matrix[i][j]);
         }
         printf("\n");
     }
 }
 
 int main() {
     int m, n;

     printf("Введите количество строк M (>0): ");
     scanf("%d", &m);
     printf("Введите количество столбцов N (>0): ");
     scanf("%d", &n);
     
     if (m <= 0 || n <= 0) {
         return 1;
     }
     
     createAndPrintMatrix(m, n);
     
     printf("M=2, N=3:\n");
     createAndPrintMatrix(2, 3);
     printf("\nM=1, N=5:\n");
     createAndPrintMatrix(1, 5);
     
     return 0;
 }