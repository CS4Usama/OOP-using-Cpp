#include <iostream>
using namespace std;
class Employee {
	private:
	    string empId;
	    string empName;
	    int joiningYear;
	    int joiningMonth;
	    int joiningDate;
	public:
	    Employee() {
	    	empId="<<EMPTY>>";
	    	empName="<<EMPTY>>";
            joiningYear = 0;
	        joiningMonth = 0;
	        joiningDate = 0;
		}
		Employee(string id, string name, int year, int month, int date) {
			empId = id;
			empName = name;
			joiningYear = year;
			joiningMonth = month;
			joiningDate = date;
		}
		void setValues(Employee *emp2) {
			empId = emp2->empId;
			empName = emp2->empName;
			joiningYear = emp2->joiningYear;
			joiningMonth = emp2->joiningMonth;
			joiningDate = emp2->joiningDate;
		}
		string getId() {
			return empId;
		}
		string getName() {
			return empName;
		}
		int getYear() {
			return joiningYear;
		}
		int getMonth() {
			return joiningMonth;
		}
		int getDate() {
			return joiningDate;
		}
		void display(Employee emp) {
		    cout<<"ID: "<<emp.getId()<<endl;
		    cout<<"Name: "<<emp.getName()<<endl;
		    cout<<"Joining Year: "<<emp.getYear()<<endl;
		    cout<<"Joining Month: "<<emp.getMonth()<<endl;
		    cout<<"Joining Date: "<<emp.getDate()<<endl;
		}
};

int main() {
	Employee emp1;
	Employee emp2("Bc210209017", "Ghulam Dastgir", 2021, 02, 10);
	cout<<"Employee 1 using Default Constructor:"<<endl;
	emp1.display(emp1);
	cout<<"\nEmployee 2 using Parameterized Constructor:"<<endl;
	emp2.display(emp2);
	cout<<"\nEmployee 1 having Employee 2 Copied Data Member Values:"<<endl;
	emp1.setValues(&emp2);
	emp1.display(emp1);
	return 0;
}
