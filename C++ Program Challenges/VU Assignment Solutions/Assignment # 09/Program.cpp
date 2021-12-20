#include <iostream>
using namespace std;

class node
{
	public:
	    int age;
	    node *next;
};

class Priority_Queue
{
	private:
	    node *f;

	public:
		// Constructor
	    Priority_Queue() {
	        f = NULL;
	    }

	    void insertEntry(int p) {
	        node *t, *q;
	        t = new node;
	        t -> age = p;
	        if(f == NULL || p > f->age) {
	            t->next = f;
	            f = t;
	        } else {
	            q = f;
	            while(q->next != NULL && q->next->age >= p) {
	                q = q->next;
	            }
	            t->next = q->next;
	            q->next = t;
	        }
	    }

	    void deleteEntry() {
	        node *t;
	        if(f == NULL) {
	            cout<<"\nThere is No Entry to Delete.\nQueue Underflow Occurs"<<endl;
	        } else {
	            t = f;
	            cout<<"\nDeleted Age Entry is: "<<t->age<<endl;
	            f = f->next;
	            delete(t);
	        }
	        cout<<endl;
	    }

	    void displayEntries() {
	        node *ptr;
	        ptr = f;
	        if(f == NULL) {
	            cout<<"\nThere is No Entry to Display.\nQueue is Empty"<<endl;
	        } else {
	            cout<<"\nQueue of Patient Entries is: "<<endl;
	            while(ptr != NULL) {
	                cout<<ptr->age<<endl;
	                ptr = ptr->next;
	            }
	        }
	        cout<<endl;
	    }
};


int main()
{
    int choice, patientAge;
    Priority_Queue pqObj;
    cout<<"\tWelcome to Patient Information System"<<endl<<endl;
    while(choice != 4) {
        cout<<"1. Insert Entry"<<endl;
        cout<<"2. Delete Entry"<<endl;
        cout<<"3. Display Entries"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Enter Your Choice: ";
        cin>>choice;
        switch(choice) {
        	case 1:
        		cout<<"\nEnter the Age of Patient: ";
        		cin>>patientAge;
        		cout<<endl;
        		pqObj.insertEntry(patientAge);
        		break;
        	case 2:
        		pqObj.deleteEntry();
        		break;
        	case 3:
        		pqObj.displayEntries();
        		break;
        	case 4:
        		cout<<"\nProgram Exit Successfully."<<endl;
        		exit(0);
        	default:
        		cout<<"\nInvalid Choice.\nPlease Choose Options between 1 to 4"<<endl<<endl;
		}
	}
	return 0;
}

