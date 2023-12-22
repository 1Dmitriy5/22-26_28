#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#define MAX_LEN 80
char s[MAX_LEN];
#include <stdlib.h>
#include <string.h>

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	printf("Патрикеев Дмитрий\n");
	printf("ЛР23 Задача 7\n");
	printf("Все символы арифметических операций,  заменить символом ‘_’ \n");


	// Входной файл
	FILE* fin = fopen("C:\\lab23\\text7.txt", "rt");
	if (fin == NULL) {
		printf("Входной файл не найден");
		return;
	}

	// Выходной файл
	FILE* fout;
	fout = fopen("C:\\lab23\\out7.txt", "wt");
	if (fout == NULL) {
		printf("Выходной файл не создался");
		return;
	}



	while (!feof(fin)) {
		// загрузить строку
		if (fgets(s, MAX_LEN - 1, fin) != NULL) {
			// обработать загруженную строку
			for (int i = 0; s[i] != '\0'; i++) {

				if (s[i] == '+') {
					s[i] = '_';
				}

				if (s[i] == '-') {
					s[i] = '_';
				}

				if (s[i] == '%') {
					s[i] = '_';
				}

				if (s[i] == '*') {
					s[i] = '_';
				}

			}
			// сохранить строку в выходной файл
			fprintf(fout, "%s ", s);

		}

	}
	// закрыли файлы
	fclose(fin);
	fclose(fout);

	printf("ЛР23 Задача 7 FINISH\n");
}