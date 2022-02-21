#include <iostream>
using namespace std;

class TreeNode {
	private:
    	int object;
		TreeNode *left, *right;

	public:
		void setInfo(int a) {
			object = a;
		}
		int getInfo() {
			return object;
		}

		void setLeft(TreeNode *trN) {
			left = trN;
		}
		TreeNode* getLeft() {
			return left;
		}

		void setRight(TreeNode * trN) {
			right = trN;
		}
		TreeNode* getRight() {
			return right;
		}

		bool isLeaf(TreeNode* trN) {
			if(trN->getLeft() == NULL && trN->getRight() == NULL)
				return 1;	//true when leaf node has no left & right child or left/right pointers are null
			else
				return 0;	//false
		}
};


class Heap {
	private:
    	int currentSize, *array, capacity;
	public:
		Heap() {
			capacity = 15;
			array = new int[capacity];	//dynamic array
			currentSize = 0;
		}

		void insert(int val, int methd) {
			if(isFull())
    			cout<<"/nHeap is Full."<<endl;
    		else if(methd == 1) {
    			//Insert Method
    			array[currentSize] = val;
    			percolateDown();
    			currentSize++;
			} else {
				//BuildHeap Method
				array[currentSize] = val;
    			currentSize++;
			}
		}

		bool isEmpty() {
			if(currentSize == 0)
				return 1;	//true
			else
				return 0;	//false
		}

		bool isFull() {
	    	if(currentSize == capacity)
				return 1;	//true
			else
				return 0;	//false
		}

		void buildHeap() {
			label:
			int val, found=0, temp, minSwp;
			for(int i=currentSize; i>=0; i--) {
				val = (i*2)+1;
				if(val < currentSize && (array[i] > array[val] || array[i] > array[val+1])) {
					if(array[val] < array[val+1])
						minSwp = val;
					else
						minSwp = val+1;
					temp = array[i];
					array[i] = array[minSwp];
					array[minSwp] = temp;
					found++;
				}
			}
			if(found > 0)
				goto label;
		}

		// Display Method
		void traverse() {
			for(int i=0; i<currentSize; i++)
				cout<<"  "<<array[i];
		}

		void percolateDown() {
			int val, found=0, temp;
			for(int i=0; i<currentSize; i++) {
				val = (i*2)+1;
				if(val<=currentSize && array[i]>array[val]) {
					temp = array[i];
					array[i] = array[val];
					array[val] = temp;
					found++;
				}
				if((val+1)<=currentSize && array[i]>array[val+1]) {
					temp = array[i];
					array[i] = array[val+1];
					array[val+1] = temp;
					found++;
				}
			}
			if(found > 0)
				percolateDown();
		}
};


// Global Variables
TreeNode *root = NULL;
int arr[15], count=0;


void addNode(int param) {
	int found = 0;
	TreeNode* newNode = new TreeNode;
	newNode->setInfo(param);
	newNode->setLeft(NULL);
	newNode->setRight(NULL);
	if(root == NULL) {
		root = newNode;
		cout<<endl<<param<<"  is Inserted as Root in BST";
	} else {
		TreeNode *pre = root;
		TreeNode *ptr = root;
		while(ptr != NULL) {
			if(newNode->getInfo() < ptr->getInfo()) {
				pre = ptr;
				ptr = ptr->getLeft();
				if(ptr == NULL)
					pre->setLeft(newNode);
			} else if(newNode->getInfo() > ptr->getInfo()) {
				pre = ptr;
				ptr = ptr->getRight();
				if(ptr == NULL)
					pre->setRight(newNode);
			} else {
				cout<<"\nData Already Exist in BST"<<endl;
				delete newNode;
				found++;
				break;
			}
		}
		if(found == 0) {
			if(param < 10)
				cout<<"\n "<<param;
			else
				cout<<"\n"<<param;
			cout<<"  is Inserted in BST";
		}
	}
}

void inputData() {
	int noOfNodes, nodeValue;
	cout<<"How many nodes you want to insert into BST:  ";
	cin>>noOfNodes;
	cout<<"Enter "<<noOfNodes<<" Values to Insert into BST:  ";
	for(int i=0; i<noOfNodes; i++) {
		cin>>nodeValue;
		addNode(nodeValue);
	}
}


void preOrder(TreeNode *trN) {
	if(trN != NULL) {
		cout<<"  "<<trN->getInfo();
		arr[count++] = trN->getInfo();
		preOrder(trN->getLeft());
		preOrder(trN->getRight());
	}
}

void postOrder(TreeNode* trN) {
	if(trN != NULL) {
		postOrder(trN->getLeft());
		postOrder(trN->getRight());
		cout<<"  "<<trN->getInfo();
		arr[count++] = trN->getInfo();
   }
}

int populateTree(int paramA) {
	return arr[paramA];
}


int main() {
	inputData();
    cout<<"\n\nPost-Order Traversal of BST:";
	postOrder(root);
	Heap obj1, obj2;
	for(int i=0; i<=14; i++)
		obj1.insert(populateTree(i),1);
	cout<<"\nMin Heap using Insert Method:";
	obj1.traverse();
	count = 0;
    cout<<"\n\nPre-Order Traversal of BST:";
    preOrder(root);
	for(int i=0; i<=14; i++)
		obj2.insert(populateTree(i),2);
	obj2.buildHeap();
	cout<<"\nMin-Heap using Build Method:";
	obj2.traverse();
	return 0;
}
