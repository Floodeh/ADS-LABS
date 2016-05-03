#ifndef BTREE_H_
#define BTREE_H_

typedef int DATATYPE;

class TreeNode 
{
	friend class BinaryTree;
  public:
	 TreeNode(DATATYPE theData);
  private:
	  TreeNode *leftPtr;
	  int data;
	  TreeNode *rightPtr;
};
	
class BinaryTree 
{
public:
		BinaryTree();
		/*
		 * add data by travelling randomly 
		 * right and left in the tree
		 * until finding a point at which the node 
		 * can be attached
		 */ 
		void add(DATATYPE data); 
		int height(); //return the height of the tree
private:
		int height(TreeNode *n); //recursive call to return the height of tree rooted at n
		TreeNode *root;
};


#endif
