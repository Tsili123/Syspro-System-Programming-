#ifndef BSTREE_H
#define BSTREE_H
#include "list.h"
#include <stdlib.h>
#include <stdio.h>

typedef struct TreeNode
{
    void *data;//pointer to one record
    struct TreeNode* child_a;
    struct TreeNode* child_b;
}TreeNode;

typedef struct TreeRoot{
	struct TreeNode * root;
}TreeRoot;

//functions
TreeRoot *initialize_tree(void);
TreeNode *set_bst_node(void *data);
TreeNode* insert_bst(TreeNode* node, void* data , int (*compare_dates)(struct date,struct date));
int inorder(TreeNode *root);

void inorder2(TreeNode *root,struct date date_1,struct date date_2,int (*compare_dates)(struct date,struct date));
void inorder3(TreeNode *root,char *country,struct date date_1,struct date date_2,int (*compare_dates)(struct date,struct date));

void delete_bstree(TreeNode *node);
TreeNode * search_bst(TreeNode * root, char* key,char* exitdate) ;

void inorder4(TreeNode *root);
int inorderx(TreeNode *root);
#endif
