#define _CRT_SECURE_NO_EARNINGS
#include <stdio.h>
#include <ctype.h>
#include <Windows.h>


//void main() {
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//
//	char name[12];
//	printf("������� ���� ���:");
//	fgets(name, 11, stdin);
//	printf("����������� ���� %s\n", name);
//
//	{
//		int x;
//		scanf_s("%d", &x);
//	}
//}

//void main() {
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//
//	printf(" = ");
//	int ch = getchar();
//
//	for (int c = ch; c <= ch + 29; c++) {
//		printf("'%c' (%d)\n", c, c);
//	}
//	printf("\n\n\n");
//
//	{
//		int x;
//		scanf_s("%d", &x);
//	}
//}

//void main() {
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	char s[80];
//	printf("������:");
//	fgets(s, 79, stdin);
//
//	printf("\n�� ����� ������ s = \"%s\"", s);
//	int cnt = 0;
//	for (int i = 0; i < strlen(s); i++) {
//		if (s[i] == ' ') cnt++;
//	}
//
//	printf("\n� ��� %d ��������\n", cnt);
//
//	{
//		int x;
//		scanf_s("%d", &x);
//	}
//}
//
//void main() {
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	char s[80];
//	printf("������:");
//	fgets(s, 79, stdin);
//
//	printf("\n�� ����� ������ s = \"%s\"", s);
//	for (int i = 0; i < strlen(s); i++) {
//		if (s[i] == ' ') {
//			s[i] = '#';
//		}
//	}
//	printf("\n S = %s\n", s);
//	
//
//	{
//		int x;
//		scanf_s("%d", &x);
//	}
//}

//void main() {
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	char s[80];
//	printf("������:");
//	fgets(s, 79, stdin);
//
//	printf("\n�� ����� ������ s = \"%s\"", s);
//	for (int i = 0; i < strlen(s); i++) {
//		if (isdigit(s[i])) {
//			s[i] = '$';
//		}
//	}
//	printf("\n S = %s\n", s);
//	
//
//	{
//		int x;
//		scanf_s("%d", &x);
//	}
//}


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
	char s[80];
	printf("������:");
	fgets(s, 79, stdin);

	printf("\n�� ����� ������ s = \"%s\"", s);
	for (int i = 0; s[i] != '\0'; i++) {
		s[i] = toupper(s[i]);
	}
	for (int i = 0; s[i] != '\0'; i++) {
		s[i] = toUpperAll(s[i]);
	}
	printf("\n S = %s\n", s);


	{
		int x;
		scanf_s("%d", &x);
	}
}