
#include <stdio.h>
#include <stdlib.h>

typedef struct list
{
	int data;
	struct list *next;
}list;

void create_linked_list(int arr[3]);
void push_linked_list(int arr);
void print_linked_list(list* head);

void create_linked_list(int arr[3]) {
	for (int i = 0; i < 3; ++i)
	{
		push_linked_list(arr[i]);
	}
}

void push_linked_list(int arr) {
	list* head = (list*)malloc(sizeof(int));
	for (int i = 0; i < 3; ++i)
	{
		head->data = arr;
		head->next = NULL;
		if (head == NULL) {
			printf("%s\n", "Errore");
		}
	}
	print_linked_list(head);
}

void print_linked_list(list* head) {
	while (head != NULL) {
		printf("%d->", head->data);
		head = head->next;
	}
}

int main(int argc, char const *argv[]) {
	int arr[3] = {10, 20, 30}; 
	create_linked_list(arr);
	push_linked_list(40);
	push_linked_list(50);
	push_linked_list(60);
	return 0;
}