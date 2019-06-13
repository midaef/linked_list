
#include <stdio.h>
#include <stdlib.h>

typedef struct list
{
	int data;
	struct list *next;
} list;

void push_linked_list(int );
void print_linked_list();
struct list* temp = NULL;

void push_linked_list(int value) {
	list *head = (list*) malloc(sizeof(list));
	head->data = value;
	head->next = temp;
	temp = head;
}

void print_linked_list() {
	struct list *ptr = temp;
	while(ptr != NULL) {
		printf("%d->", ptr->data);
		ptr = ptr->next;
	}
}


int main(int argc, char const *argv[]) {
	push_linked_list(40);
	push_linked_list(50);
	push_linked_list(60);
	print_linked_list();
	return 0;
}