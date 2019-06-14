
#include <stdio.h>
#include <stdlib.h>

typedef struct list
{
	int data;
	int index;
	struct list *next;
} list;

list* temp = NULL;
int key = 0;

void push_linked_list(int value) {
	list *head = (list*) malloc(sizeof(list));
	head->data = value;
	head->index = key;
	key++;
	head->next = temp;
	temp = head;
}

void print_linked_list() {
	list *ptr = temp;
	while(ptr != NULL) {
		printf("[E:%d,I:%d]->", ptr->data, ptr->index);
		ptr = ptr->next;
	}
	printf("\n");
}

list* delete_last_element() {
	list* temp_link = temp;
	temp = temp->next;
	key--;
	return temp_link;
}

int main(int argc, char const *argv[]) {
	push_linked_list(40);
	print_linked_list();
	push_linked_list(50);
	print_linked_list();
	push_linked_list(60);
	print_linked_list();
	delete_last_element();
	print_linked_list();
	push_linked_list(70);
	print_linked_list();
	return 0;
}