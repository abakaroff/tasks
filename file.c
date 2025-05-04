/*
 * Задание: Создать файл с заданным именем и записать в него N первых
 * положительных четных чисел (2, 4, 6, ...)
 * Дата: 03.05.25
 * Контрольный пример:
 *   Вход: "numbers.txt" 5
 *   Выход: файл numbers.txt с содержимым "2 4 6 8 10"
 * Время выполнения: 20 минут
 */

 #include <stdio.h>

 int main() {
     char filename[100];
     int n;
 
     printf("Введите имя файла: ");
     scanf("%99s", filename);
     printf("Введите количество чисел N (>1): ");
     scanf("%d", &n);
 
     if (n <= 1) {
         return 1;
     }
 
     // Открытие файла для записи
     FILE *file = fopen(filename, "w");
     if (file == NULL) {
         printf("Ошибка при создании файла\n");
         return 1;
     }
 
     for (int i = 1; i <= n; i++) {
         fprintf(file, "%d ", 2 * i);
     }
 
     fclose(file);
 
     printf("Файл '%s' успешно создан с %d четными числами\n", filename, n);
     return 0;
 }