#include <stdio.h>
#include <stdlib.h>

struct Item {
	char name[50];
	struct Item *prev;
	struct Item *next;
};
int main() {
	struct Item *first = (struct Item *) malloc(sizeof(struct Item));
	first->name = "hello";
	printf("Hello world! \n");
	printf(first->name);
	return 0;
}
