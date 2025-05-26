#include <stdio.h>

// 1. Функция вычисления длины строки
int strlen(char *str) {
    int count = 0;
    while (*str != '\0') {
        count++;
        str++;
    }
    return count;
}

// 2. Функция печати строки в обратном порядке
void print_reverse(char *str) {
    int length = strlen(str);
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
}

// 3. Функция переворота строки
void reverse_string(char *str) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }
}

// 4. Функция поиска первого вхождения символа
int first_index_of(char *str, char symbol) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == symbol) {
            return i;
        }
    }
    return -1;
}

// 5. Функция конкатенации строк
void my_strcat(char *dest, char *src) {
    while (*dest != '\0') {
        dest++;
    }
    while (*src != '\0') {
        *dest++ = *src++;
    }
    *dest = '\0';
}

// 6. Функция подсчета слов в строке
int count_words(char *str) {
    int count = 0;
    int in_word = 0;
    
    while (*str != '\0') {
        if (*str == ' ' || *str == '\t' || *str == '\n') {
            if (in_word) {
                in_word = 0;
                count++;
            }
        } else {
            in_word = 1;
        }
        str++;
    }
    
    if (in_word) {
        count++;
    }
    
    return count;
}

// 7. Функция склейки N строк через пробел
void concatenate_strings(char *result, char **strings, int n) {
    for (int i = 0; i < n; i++) {
        my_strcat(result, strings[i]);
        if (i < n - 1) {
            my_strcat(result, " ");
        }
    }
}

int main() {
    char str[] = "Hello World";
    char dest[100] = {0};
    int size = strlen(str);

    // 1. Длина строки
    printf("1. Length of '%s': %d\n", str, size);

    // 2. Печать в обратном порядке
    printf("2. Reverse print: ");
    print_reverse(str);

    // 3. Переворот строки
    char rev_str[100];
    my_strcpy(rev_str, str, size + 1);
    reverse_string(rev_str);
    printf("3. Reversed string: %s\n", rev_str);

    // 4. Индекс первого вхождения символа
    char symbol = 'o';
    int index = first_index_of(str, symbol);
    printf("4. First index of '%c': %d\n", symbol, index);

    // 5. Конкатенация строк
    char str2[] = " from C";
    my_strcat(dest, str);
    my_strcat(dest, str2);
    printf("5. Concatenated: %s\n", dest);

    // 6. Подсчет слов
    printf("6. Word count in '%s': %d\n", str, count_words(str));

    // 7. Склейка N строк через пробел
    char *strings[] = {"This", "is", "a", "test"};
    char result[100] = {0};
    concatenate_strings(result, strings, 4);
    printf("7. Concatenated strings: %s\n", result);

    return 0;
}
