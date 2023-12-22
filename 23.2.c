#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>


#define MAX_LEN 80
char s[MAX_LEN];

int toUpperAll(int c) {
	int new_c = c;
	if (c >= 'a' && c <= 'z')
		new_c = 'A' + (c - 'a');
	if (c >= '�' && c <= '�')
		new_c = '�' + (c - '�');
	if (c >= '�' && c <= '�')
		new_c = '�' + (c - '�');
	if (c == '�') {
		new_c = '�';
	}
	return new_c;
}

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	printf("��������� �������\n");
	printf("��23 ������ 2\n");

	FILE* fin = fopen("C:\\lab23\\text2.txt", "rt");
	if (fin == NULL) {
		printf("������� ���� �� ������");
		return;
	}

	FILE* fout;
	fout = fopen("C:\\lab23\\out2.txt", "wt");
	if (fout == NULL) {
		printf("�������� ���� �� ��������");
		return;
	}

	while (!feof(fin)) {
		// ��������� ������
		if (fgets(s, MAX_LEN - 1, fin) != NULL) {
			// ���������� ����������� ������
			for (int i = 0; s[i] != '\0'; i++) {

				s[i] = toUpperAll(s[i]);

			}
			// ��������� ������ � �������� ����
			fprintf(fout, "%s", s);
			printf(">>%s<<\n", s);
		}
	}
	fclose(fin);
	fclose(fout);

	printf("��23 ������ 2 FINISH\n");
}