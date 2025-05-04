/*
 * Определение типа символа: цифра, латинская или русская буква
 * Дата: 03.05.25
 * Контрольные примеры:
 *   '7' → digit
 *   'A' → lat
 *   'Б' → rus
 * Время выполнения: 5 минут
 */

#include <stdio.h>
#include <ctype.h>

void checkCharType(char c) {
    if (isdigit(c)) {
        printf("digit\n");
    }
    else if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
        printf("lat\n");
    }
    else if ((c >= 'А' && c <= 'я') || c == 'Ё' || c == 'ё') {
        printf("rus\n");
    }
}

int main() {
    checkCharType('7');
    checkCharType('A');
    checkCharType('Б');
    checkCharType('ё');
    
    return 0;
}