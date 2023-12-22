#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>


#define MAX_LEN 80
char s[MAX_LEN];

int toUpperAll(int c) {
	int new_c = c;
	if (c >= 'a' && c <= 'z')
		new_c = 'A' + (c - 'a');
	if (c >= 'а' && c <= 'п')
		new_c = 'А' + (c - 'а');
	if (c >= 'р' && c <= 'я')
		new_c = 'Р' + (c - 'р');
	if (c == 'ё') {
		new_c = 'Ё';
	}
	return new_c;
}

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	printf("Патрикеев Дмитрий\n");
	printf("ЛР23 Задача 2\n");

	FILE* fin = fopen("C:\\lab23\\text2.txt", "rt");
	if (fin == NULL) {
		printf("Входной файл не найден");
		return;
	}

	FILE* fout;
	fout = fopen("C:\\lab23\\out2.txt", "wt");
	if (fout == NULL) {
		printf("Выходной файл не создался");
		return;
	}

	while (!feof(fin)) {
		// загрузить строку
		if (fgets(s, MAX_LEN - 1, fin) != NULL) {
			// обработать загруженную строку
			for (int i = 0; s[i] != '\0'; i++) {

				s[i] = toUpperAll(s[i]);

			}
			// сохранить строку в выходной файл
			fprintf(fout, "%s", s);
			printf(">>%s<<\n", s);
		}
	}
	fclose(fin);
	fclose(fout);

	printf("ЛР23 Задача 2 FINISH\n");
}