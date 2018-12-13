#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include "treeStructure.h"
#include "buildTree.h"
#include "writeTree.h"
int main(int argc, char **argv) {

	Node *head;

	// make the head node
	head = makeNode(0.0, 0.0, 0);

	// make a tree
	growTree(head);
	//growTree(head);
	//makeChildren(head);
	makeChildren(head->child[1]);

	// print the tree for Gnuplot
	writeTree(head);
	destroyTree(head);
	return 0;
}
