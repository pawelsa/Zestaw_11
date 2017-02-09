#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <cstdlib>
#include <string.h>
#define PRINT(a) printf("\n%p ",(a));

struct tree {
	int x;
	int counter;
	struct tree *left;
	struct tree *right;
};

void enter(int value, tree **temp) {

	if (*temp == NULL) {
		*temp = (tree *)malloc(sizeof(struct tree));
		if (*temp == NULL) {
			printf("Error");
			exit(1);
		}
		(*temp)->left = NULL;
		(*temp)->right = NULL;
		(*temp)->x = value;
		(*temp)->counter = 1;
	}
	else if (value == (*temp)->x)
		(*temp)->counter++;
	else if (value < (*temp)->x)
		enter(value, &((*temp)->left));
	else if (value > (*temp)->x)
		enter(value, &((*temp)->right));
}

int back(tree *temp) {
	
	if (!temp) return NULL;
	back(temp->left);

	for(int i =0;i<temp->counter;i++)
		printf("%d ",temp->x);
	
	back(temp->right);

}


int main() {


	//1		//Use the code presented at the lecture to create a BST containing numbers entered by the user(read numbers until the user enters a zero).
			//Print all elements in ascending order.Support multiple occurences of the same value by providing a counter for each element of the tree.
	tree *root,*temp;
	root = (tree *)malloc(sizeof(struct tree));
	
	root->left = NULL;
	root->right = NULL;

	printf("Enter 1 value : ");
	scanf("%d", &root->x);
	root->counter = 1;
	
	for (int i = 0;; i++) {
		temp = root;
		printf("Enter %d value : ", (i + 2));
		int value;
		scanf("%d", &value);
		if (value == 0)
			break;
		else
			enter(value, &temp);
	}
	
	temp = root;

	back(temp);

	//2		//For the sentence : "Please bring me some tea and coffee", create a copy of it with the word "and" replaced with "or".Use following functions : strstr, strcpy(strncpy), strcat.

	/*
	char *sentence = "Please bring me some tea and coffee";
	
	char *end = strstr(sentence, "and");	//and coffee
		
	char *fin = (char *)malloc(sizeof(sentence));
	strncpy(fin, sentence,end-sentence);	//Please bring me some tea 
		
	char *coffee = strstr(end, "coffee");	//coffee
		
	strcat(fin, "or ");		//Please bring me some tea or 
	strcat(fin, coffee);	//Please bring me some tea or coffee
	
	printf("%s\n", fin);
	*/

	return 0;
}