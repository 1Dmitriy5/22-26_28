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
	printf("��������� �������\n");
	printf("��23 ������ 7\n");
	printf("��� ������� �������������� ��������,  �������� �������� �_� \n");


	// ������� ����
	FILE* fin = fopen("C:\\lab23\\text7.txt", "rt");
	if (fin == NULL) {
		printf("������� ���� �� ������");
		return;
	}

	// �������� ����
	FILE* fout;
	fout = fopen("C:\\lab23\\out7.txt", "wt");
	if (fout == NULL) {
		printf("�������� ���� �� ��������");
		return;
	}



	while (!feof(fin)) {
		// ��������� ������
		if (fgets(s, MAX_LEN - 1, fin) != NULL) {
			// ���������� ����������� ������
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
			// ��������� ������ � �������� ����
			fprintf(fout, "%s ", s);

		}

	}
	// ������� �����
	fclose(fin);
	fclose(fout);

	printf("��23 ������ 7 FINISH\n");
}