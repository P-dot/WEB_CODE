#include "stack.h"

#include <stdio.h>
#include <stdlib.h>

Node* CreateNode(URL url)
{
	Node* node = (Node *) malloc(sizeof(Node));
	node->url = url;
	node->next = NULL;
	return node;
}

void DestructNode(Node* node)
{
	node->next = NULL;
	free(node);
}

void Push(Stack* stack, URL url)
{
	Node* node = CreateNode(url);
	node->next = stack->head;
	stack->head = node;
}

void Pop(Stack* stack)
{
	if (stack->head != NULL) {
		Node* eliminate = stack->head;
		stack->head = stack->head->next;
		DestructNode(eliminate);
	}
}

URL Head(Stack* stack)
{
	if (stack->head == NULL)
		return NULL;
	else 
		return stack->head->url;
}



