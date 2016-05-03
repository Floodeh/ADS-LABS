/*
 * btree.cpp
 *
 *  Created on: 2 Mar 2010
 *      Author: Mary
 */
#include "btree-provided.h"
#include <iostream>
#include <cstdlib>//for random functions
#include <ctime>
#include <algorithm>
using namespace std;


TreeNode::TreeNode(DATATYPE theData)
:data(theData), rightPtr(NULL), leftPtr(NULL)
 {
	
 }

BinaryTree::BinaryTree()
:root(NULL)
 {}

void BinaryTree::add(DATATYPE data)
{
	// create the node to attach
	TreeNode *toAttach = new TreeNode(data);

	//if tree is empty, must put new node here
	if (!root)
	{
		root = toAttach;
		return;
	}

	bool attached = false;
	//start at root
	TreeNode *possAttachPoint = root;


	int randnum;
	
	while (!attached)
	{
		//choose right or left randomly

		randnum = rand();
		if (randnum % 2 == 0) //go right
		{
			//go right
			if ( possAttachPoint->rightPtr == NULL)
			{
				possAttachPoint->rightPtr = toAttach;
				attached = true;
			}
			else
				possAttachPoint = possAttachPoint->rightPtr;
		}
		else
		{
			//go left
			if (possAttachPoint->leftPtr == NULL)
			{
				possAttachPoint->leftPtr = toAttach;
				attached = true;
			}
			else
				possAttachPoint = possAttachPoint->leftPtr;
		}
	}
}



