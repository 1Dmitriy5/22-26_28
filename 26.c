#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data;
	struct Node* next;
};


struct Node* first = NULL;

void printList() {
	struct Node* ptr = first;
	while (ptr != NULL) {
		printf("(%d) -> ", ptr->data);
		ptr = ptr->next;
	}
	printf("NULL\n");
}

int deleteFromHead() {
	int value = first->data;
	struct Node* delNode = first;
	first = first->next;
	free(delNode);
	return value;
}


void addToHead(int value) {
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

	newNode->next = first;
	newNode->data = value;

	first = newNode;
}

int contains(int value) {
	struct Node* ptr = first;
	while (ptr != NULL) {
		if (ptr->data == value) {
			return 1;
		}
		ptr = ptr->next;
	}
	return 0;
}

void clearList() {
	while (first != NULL)
	{
		struct Node* delNode = first;
		first = first->next;
		free(delNode);
	}
}

int sum() {
	struct Node* ptr = first;
	int s = 0;
	while (ptr != NULL) {
		s += ptr->data;
		ptr = ptr->next;
	}
	return s;
}

int cnt() {
	struct Node* ptr = first;
	int c = 0;
	while (ptr != NULL) {
		if (ptr->data % 2 == 0) {
			c += 1;
		}
		ptr = ptr->next;
	}
	return c;
}

void od10() {
	struct Node* ptr = first;
	while (ptr != NULL) {
		if (ptr->data % 2 != 0) {
			ptr->data = ptr->data * 10;
		}
		ptr = ptr->next;
	}
}

void elem10(int i) {
	struct Node* ptr = first;
	int index = 0;
	while (ptr != NULL) {
		if (index == i) {
			ptr->data = ptr->data * 100;
			return;
		}
		ptr = ptr->next;
		index++;
	}
}

void left(int i) {
	struct Node* ptr = first;
	int in = 0;
	for (int j = 0; j < i; j++) {
		ptr->data = ptr->data * 10;
		ptr = ptr->next;

	}
	return;
}

void main() {
	//1

	first = NULL;
	printList();

	addToHead(10);
	addToHead(100);
	addToHead(400);
	addToHead(300);
	addToHead(200);
	printList();
	int x1 = deleteFromHead();
	printList();
	printf("contains(800) = %d\n", contains(800));
	printf("contains(100) = %d\n", contains(100));
	clearList();
	printList();

	//2

	/*printList();
	addToHead(1);
	addToHead(3);
	addToHead(6);
	addToHead(9);
	addToHead(7);
	printList();
	printf("sum = %d\n", sum());
	clearList();
	printList();
	printf("sum = %d\n", sum());
	{
		int x;
		scanf("%d", &x);
	}*/

	//3

	/*printList();
	addToHead(1);
	addToHead(2);
	addToHead(6);
	addToHead(9);
	addToHead(7);
	addToHead(8);
	printList();
	printf("cnt = %d\n", cnt());
	clearList();
	printList();
	printf("cnt = %d\n", cnt());
	{
		int x;
		scanf("%d", &x);
	}*/

	//4

	/*printList();
	addToHead(1);
	addToHead(2);
	addToHead(6);
	addToHead(9);
	addToHead(7);
	addToHead(8);
	printList();
	od10();
	printList();
	clearList();
	printList();
	{
		int x;
		scanf("%d", &x);
	}*/

	//5

	//printList();
	//addToHead(1);
	//addToHead(2);
	//addToHead(6);
	//addToHead(9);
	//addToHead(7);
	//addToHead(8);
	//printList();
	//elem10(0);
	//printList();
	//elem10(2);
	//printList();
	//elem10(0);
	//printList();
	//{
	//	int x;
	//	scanf("%d", &x);
	//}

	//6

	/*printList();
	addToHead(1);
	addToHead(2);
	addToHead(6);
	addToHead(9);
	addToHead(7);
	addToHead(8);
	printList();
	left(1);
	printList();
	left(2);
	printList();
	left(4);
	printList();
	{
		int x;
		scanf("%d", &x);
	}*/
}