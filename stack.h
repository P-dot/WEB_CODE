#ifndef stack_h 
#define stack_h

#include <stdio.h>

typedef char *URL;

typedef struct* URL;

typedef struct node {
	URL url;
	struct node* next;
}

typedef struct stack {
	Node* head;
} Stack;

Node* CreateNode(URL url);
void DestructNde(Node* node);

CreateStack();
DestructStack(Stack* stack);

void Push(Stack* stack,URL url);
void Pop(Stack* stack);
URL Head(Stack* stack);
#endif 