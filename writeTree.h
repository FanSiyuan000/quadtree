#include"stdlib.h"
#include"treeStructure.h"
#ifndef WRITETREE_H 
#define WRITETREE_H
void writeTree(Node *head);
void writeNode(FILE *fp, Node *node);
void printOut(FILE *fp, Node *node);
void destroyTree(Node*node);
void removechildren(Node*parent);
#endif 
