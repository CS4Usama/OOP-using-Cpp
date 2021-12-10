#include <iostream>
using namespace std;
int size = 0;
class Student {
	public:
		string name;
		int marks;
		Student *nextStudent;
		void setName(string setn) {
			name = setn;
		}
		string getName() {
			return name;
		}
		void setMarks(int setm) {
			marks = setm;
		}
		int getMarks() {
			return marks;
		}
		void setNextStudent(Student *setAddress) {
			nextStudent = setAddress;
		}
		Student* getNextStudent() {
			return nextStudent;
		}
};

class Stack {
	public:
		Student *headStudent = NULL;
		bool isEmpty() {
			if(headStudent == NULL) {
				cout<<"\nStack is Empty"<<endl<<endl;
				return true;
			} else {
				return false;
			}
		}
		void push() {
			string n;
			int m;
			Student *newNode = new Student;
			cout<<"\nEnter Student Name: ";
			cin>>n;
			newNode -> setName(n);
			cout<<"Enter Student Marks: ";
			cin>>m;
			newNode -> setMarks(m);
			
			newNode -> setNextStudent(NULL);
			if(headStudent == NULL) {
				headStudent = newNode;
			} else {
				Student *ptr = headStudent;
				while(ptr -> getNextStudent() != NULL) {
					ptr = ptr -> getNextStudent();
				}
				ptr -> setNextStudent(newNode);
			}
			
			cout<<"Student Data Saved Successfully"<<endl<<endl;
			size++;
		}
		
		void pop() {
			if(!isEmpty()) {
				Student *pre = headStudent;
				Student *ptr = headStudent;
				while(ptr -> getNextStudent() != NULL) {
					pre = ptr;
					ptr = ptr -> getNextStudent();
				}
				if(ptr == headStudent) {
					headStudent = NULL;
				} else {
					pre -> setNextStudent(NULL);
				}
				delete ptr;
				size--;
				cout<<"\nStudent Data Removed Successfully"<<endl<<endl;
			}
		}
		
		void display() {
			if(!isEmpty()) {
				string n[size];
				int m[size], i=0, j=0;
				cout<<"\nAll Students Data"<<endl;
				cout<<"Name\t\tMarks"<<endl;
				Student *ptr = headStudent;
				while(ptr != NULL) {
					n[i++] = ptr -> getName();
					m[j++] = ptr -> getMarks();
					ptr = ptr -> getNextStudent();
				}
				for(int k=size-1; k>=0; k--) {
					cout<<n[k]<<"\t\t"<<m[k]<<endl;
				}
			}
		}
		
		void shortStack() {
			for(int i=0; i<size; i++) {
				Student *ptr = headStudent;
				for(int j=0; j<size-1; j++) {
					string tmp;
					if(ptr -> getMarks() < ptr->getNextStudent() -> getMarks()) {
//						ptr -> getMarks(ptr -> getMarks() + ptr -> getNextStudent());
//						ptr -> getNextStudent()-> setMarks(ptr->setMarks());
//						ptr -> setMarks(ptr->getMarks()-ptr -> getNextStudent());
						tmp = ptr -> getName();
						ptr -> setName(ptr -> getNextStudent() -> getName());
						ptr -> getNextStudent() -> setName(tmp);
					}
					ptr = ptr->getNextStudent();
				}
			}
		}
		
		void top() {
			if(!isEmpty()) {
				cout<<"\nTop Positions:"<<endl;
				cout<<"Name\t\tMarks"<<endl;
				Student *ptr = headStudent;
				for(int k=0; k<3; k++) {
					cout<<ptr->getName()<<"\t\t"<<ptr->getMarks()<<endl;
					ptr = ptr->getNextStudent();
				}
				cout<<endl<<endl;
			}
		}
};

int main() {
	Stack s;
	while(true) {
		int choice;
		cout<<"1. To Add a Student in the Stack"<<endl;
		cout<<"2. To Remove a Student from Stack"<<endl;
		cout<<"3. Display All Students of Stack"<<endl;
		cout<<"4. Display Top 3 Students of Stack"<<endl;
		cout<<"5. Press 5 or Any Other Key to Close the Program"<<endl;
	
		cout<<"\nEnter Your Choice (1, 2, 3, 4 or 5):  ";
		cin>>choice;
		if(choice == 1) {
			s.push();
		} else if(choice == 2) {
			s.pop();
		} else if(choice == 3) {
			s.display();
		} else if(choice == 4) {
			s.top();
		} else {
			exit(0);
		}
	}
	
	return 0;
}
