
#include <stdio.h>
#include <stdlib.h>

typedef struct list
{
	int data;
	struct list *next;
}list;

void create_linked_list(int arr[3]);
void push_linked_list(int arr);

void create_linked_list(int arr[3]) {
	for (int i = 0; i < 3; ++i)
	{
		push_linked_list(arr[i]);
	}
}

void push_linked_list(int arr) {
	list* temp = (list*)malloc(sizeof(int));
	list* head = NULL;
	list* p = NULL;
	for (int i = 0; i < 3; ++i)
	{
		temp->data = arr;
		temp->next = NULL;
		if (head == NULL) {
			head = temp;
		} else {
			p = head;
			while (p->next != NULL) {
				p = p->next;
				p->next = temp;
			}
		}	
	}
	list * current = temp;
    while (current != NULL) {
        printf("%d->", current->data);
        current = current->next;
    }
}

int main(int argc, char const *argv[]) {
	int arr[3] = {10, 20, 30}; 
	create_linked_list(arr);
	return 0;
}