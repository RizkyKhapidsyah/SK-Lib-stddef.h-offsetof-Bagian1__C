
#include <stdio.h>
#include <stddef.h>
#include <conio.h>

/*
	Source by CPlusPlus
	Modified For Learn by RK
	I.D.E : VS2019
*/

struct foo {
	char a;
	char b[10];
	char c;
};

int main() {
	printf("offsetof(struct foo,a) is %d\n", (int)offsetof(struct foo, a));
	printf("offsetof(struct foo,b) is %d\n", (int)offsetof(struct foo, b));
	printf("offsetof(struct foo,c) is %d\n", (int)offsetof(struct foo, c));

	_getch();
	return 0;
}