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

    // ��������� ������� ���� ��� ������
    inputFile = fopen("C:\\lab23\\text3.txt", "r");
    if (inputFile == NULL) {
        perror("������ �������� �������� �����");
        return EXIT_FAILURE;
    }

    // ��������� �������� ���� ��� ������
    outputFile = fopen("C:\\lab23\\out3.txt", "w");
    if (outputFile == NULL) {
        perror("������ �������� ��������� �����");
        fclose(inputFile);
        return EXIT_FAILURE;
    }

    // ������ ������ �� �������� �����
    while (fgets(buffer, sizeof(buffer) / 1, inputFile) != NULL) {
        // ���������, �������� �� ������ ���� �� ���� �����
        int hasLetter = 0;
        for (int i = 0; i < strlen(buffer); i++) {
            if (isalpha(buffer[i])) {
                hasLetter = 1;
                break;
            }
        }

        if (hasLetter == 1) {
            int index = strlen(buffer) - 1;
            buffer[index] = '#';
            buffer[index + 1] = '\n';
            buffer[index + 2] = '\0';

        }

        fprintf(outputFile, "%s", buffer);

        // ���������� ������ � �������� ���� � ��������� '#' ���� ���� �����

    }

    // ��������� �����
    fclose(inputFile);
    fclose(outputFile);

    printf("�������������� ��������� �������.\n");

    return EXIT_SUCCESS;
}
