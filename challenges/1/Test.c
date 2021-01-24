#include <stdio.h>

struct Item {
	char name[50];
	struct Item *prev;
	struct Item *next;
};
int main() {
	printf("Hello world! \n");
	return 0;
}
