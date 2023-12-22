#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#define MAX_LEN 80
char s[MAX_LEN];
#include <stdlib.h>
#include <string.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    FILE* inputFile, * outputFile;
    char buffer[1024];

    // Открываем входной файл для чтения
    inputFile = fopen("C:\\lab23\\text6.txt", "r");
    if (inputFile == NULL) {
        perror("Ошибка открытия входного файла");
        return EXIT_FAILURE;
    }

    // Открываем выходной файл для записи
    outputFile = fopen("C:\\lab23\\out6.txt", "w");
    if (outputFile == NULL) {
        perror("Ошибка открытия выходного файла");
        fclose(inputFile);
        return EXIT_FAILURE;
    }

    // Читаем строки из входного файла
    while (fgets(buffer, sizeof(buffer) / 1, inputFile) != NULL) {
        // Проверяем, содержит ли строка хотя бы одну букву
        int hasLetter = 0;
        for (int i = 0; i < strlen(buffer); i++) {
            if ((buffer[i]) == ';') {
                hasLetter = 1;
                break;
            }
        }
        int k = 0;
        for (int i = 0; buffer[i] != '\0'; i++) {
            if (buffer[i] == ';') {
                k++;
            }
        }

        if (hasLetter == 1) {
            int index = strlen(buffer) - 1;
            char countStr[10]; // предполагаем, что количество не превысит 10 символов
            sprintf(countStr, "%d", k);
            buffer[index] = countStr[0]; // присваиваем первый символ строки с количеством
            buffer[index + 1] = countStr[1];
            buffer[index + 2] = '\n';
            buffer[index + 3] = '\0';
        }


        fprintf(outputFile, "%s\n", buffer);
        // записываем строку в выходной файл и добавляем '#' если есть буквы

    }

    // Закрываем файлы
    fclose(inputFile);
    fclose(outputFile);

    printf("Преобразование завершено успешно.\n");

    return EXIT_SUCCESS;
}
