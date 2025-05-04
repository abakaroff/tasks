/*
 * Задание: По номеру месяца (1-12) определить время года
 * Дата: 03.05.25
 * Контрольный пример:
 *   Вход: 1 (январь)
 *   Выход: "зима"
 *   Вход: 4 (апрель)
 *   Выход: "весна"
 * Время выполнения: 10 минут
 */

 #include <stdio.h>

 const char* get_season(int month) {
     switch (month) {
         case 1: case 2: case 12:  // Декабрь, Январь, Февраль - зима
             return "зима";
         case 3: case 4: case 5:    // Март, Апрель, Май - весна
             return "весна";
         case 6: case 7: case 8:    // Июнь, Июль, Август - лето
             return "лето";
         case 9: case 10: case 11:  // Сентябрь, Октябрь, Ноябрь - осень
             return "осень";
         default:
             return "некорректный месяц";
     }
 }
 
 int main() {
     printf("Месяц 1: %s\n", get_season(1));   // зима
     printf("Месяц 4: %s\n", get_season(4));   // весна
     printf("Месяц 7: %s\n", get_season(7));   // лето
     printf("Месяц 10: %s\n", get_season(10)); // осень
     printf("Месяц 13: %s\n", get_season(13)); // обработка ошибки
 
     return 0;
 }