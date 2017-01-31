#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <cstdlib>
#include <string.h>




int main() {


	//1		//Use the code presented at the lecture to create a BST containing numbers entered by the user(read numbers until the user enters a zero).
			//Print all elements in ascending order.Support multiple occurences of the same value by providing a counter for each element of the tree.
	
	/*
	typedef
		struct bstel {
		int data;
		struct bstel *left;
		struct bstel *right;
	} bn;
	int find(int key, struct bstel *node)
	{
		if (!node) return 0; // not found 
		if (key == node->data)
			return 1; /* found! 
		if (key < node->data)
			return find(key, node->left);
		else
			return find(key, node->right);
	}	int insert(bn *p, bn **root)
	{
		if (*root && (*root)->data == p->data)
			return 1; // already present 
		if (!*root) { // empty tree 
			*root = p;
			return 0;
		}
		else
			if (p->data > (*root)->data)
				insert(p, &((*root)->right));
			else
				insert(p, &((*root)->left));
		return 0;		int ins_el(int key, bn **root)
		{
			bn *p;
			p = (bn*)malloc(sizeof(bn));
			if (!p) return 2; // out of memory
			p->data = key;
			p->left = p->right = NULL;
			return insert(p, root);
		}


		*/

	//2		//For the sentence : "Please bring me some tea and coffee", create a copy of it with the word "and" replaced with "or".Use following functions : strstr, strcpy(strncpy), strcat.

			//	strstr,										strcpy(strncpy),				strcat
			// szuka frazy i odcina pocz¹tek					kopiuje					dokleja

	char *sentence = "Please bring me some tea and coffee";
	
	char *end = (char *)malloc(sizeof(strstr(sentence, "and")));
		end = strstr(sentence, "and");
	
	char *coffee = (char *)malloc(sizeof(strstr(sentence, "coffee")));
		coffee = strstr(end, "coffee");
		
	char *fin = (char *)malloc(sizeof(sentence));
	strcpy(fin, sentence - sizeof(end));
		
		
		
	//char *copy = (char *)malloc(sizeof(sentence));
	//strncpy(copy, sentence, sizeof(sentence));
	
	//int len = strlen(ptr);

	
	printf("%s\n", fin);



	return 0;
}