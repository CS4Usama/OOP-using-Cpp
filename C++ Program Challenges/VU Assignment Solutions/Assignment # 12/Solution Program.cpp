#include <iostream>
#include <iomanip>
using namespace std;
// Parent/Base Class
class Person {
	protected:
		string name, gender, address;
		int age;
		unsigned long phone;
	public:
		// Default Constructor
		Person() {
			name = gender = address = "";
			age = phone = 0;
		}
		// Setter Functions
		void setName() {
			cin.clear();
			cin.sync();
			cout<<"\nEnter Name:  ";
			getline(cin,name);
		}
		void setGender() {
			// Clear and discard all unread characters from input buffer.
			cin.clear();
			cin.sync();
			cout<<"Enter Gender:  ";
			getline(cin,gender);
		}
		void setAddress() {
			cin.clear();
			cin.sync();
			cout<<"Enter Address:  ";
			// It will store space included string as an input as compared to simple cin.
			getline(cin,address);
		}
		void setAge() {
			cout<<"Enter Age:  ";
			cin>>age;
		}
		void setPhone() {
			cout<<"Enter Phone Number:  ";
			cin>>phone;
		}

		// Getter Functions
		string getName() {
			return name;
		}
		string getGender() {
			return gender;
		}
		string getAddress() {
			return address;
		}
		int getAge() {
			return age;
		}
		int getPhone() {
			return phone;
		}

		// A function to save information of a person
		void Save_Information() {
			setName();
			setGender();
			setAge();
			setAddress();
			setPhone();
		}
		// A function to display information of a person
		void Display_Information(string recName) {
			cout<<recName<<" Name:  "<<getName()<<endl;
			cout<<recName<<" Gender:  "<<getGender()<<endl;
			cout<<recName<<" Age:  "<<getAge()<<endl;
			cout<<recName<<" Address:  "<<getAddress()<<endl;
			cout<<recName<<" Phone Number:  "<<getPhone()<<endl;
		}
};

// Child/Derived Class
class Teacher : public Person {
	private:
		string qualification;
		float salary;
	public:
		Teacher() {
			qualification = "";
			salary = 0.0;
		}
		void setQualification() {
			cin.clear();
			cin.sync();
			cout<<"Enter Qualification:  ";
			getline(cin,qualification);
		}
		void setSalary() {
			cout<<"Enter Salary:  ";
			cin>>salary;
		}

		string getQualification() {
			return qualification;
		}
		float getSalary() {
			return salary;
		}

		void Save_Information() {
			Person::Save_Information();
			setQualification();
			setSalary();
		}
		void Display_Information() {
			// It will fixed the point because we want to display only 2 precision float value after decimal point.
			cout.setf(ios::fixed);
			string recName = "Teacher's";
			Person::Display_Information(recName);
			cout<<recName<<" Qualification:  "<<getQualification()<<endl;
			cout<<recName<<" Salary:  "<<setprecision(2)<<getSalary()<<endl;
		}
};

// Child/Derived Class
class Student : public Person {
	private:
		string previousEducation;
		float totalMarks, obtainedMarks;
	public:
		Student() {
			totalMarks = obtainedMarks = 0.0;
			previousEducation = "";
		}
		void setPreviousEducation() {
			cin.clear();
			cin.sync();
			cout<<"Enter Previous Education:  ";
			getline(cin,previousEducation);
		}
		void setTotalMarks() {
			cout<<"Enter Total Marks:  ";
			cin>>totalMarks;
		}
		void setObtainedMarks() {
			cout<<"Enter Obtained Marks:  ";
			cin>>obtainedMarks;
		}

		string getPreviousEducation() {
			return previousEducation;
		}
		float getTotalMarks() {
			return totalMarks;
		}
		float getObtainedMarks() {
			return obtainedMarks;
		}

		void Save_Information() {
			Person::Save_Information();
			setPreviousEducation();
			setTotalMarks();
			setObtainedMarks();
		}
		void Display_Information() {
			cout.setf(ios::fixed);
			string recName = "Student's";
			Person::Display_Information(recName);
			cout<<recName<<" Previous Education:  "<<getPreviousEducation()<<endl;
			cout<<recName<<" Total Marks:  "<<setprecision(2)<<getTotalMarks()<<endl;
			cout<<recName<<" Obtained Marks:  "<<setprecision(2)<<getObtainedMarks()<<endl;
		}
};


int main() {
	// Object creation for Classes
	Teacher *obj_T[10];
	Student *obj_S[10];
	char choice;
	cout<<"Enter Your Choice:  T for Teacher, S for Student"<<endl;
	cin>>choice;
	int index = 0;
	char moreData;

	if(choice == 'T' || choice == 't') {
		cout<<"\nEnter Following Data for Teacher:"<<endl;

		do {
			// Below statement will create an instance of teacher object at run time (Late/Dynamic Binding) for Polymorphism.
			obj_T[index] = new Teacher;
			obj_T[index] -> Save_Information();
			index++;
			cout<<"\nDo you want to enter more data <Y for Yes, N for No>:  ";
			cin>>moreData;
		} while(moreData == 'Y' || moreData == 'y');

		cout<<"\nDisplaying Teacher Information:"<<endl;
		cout<<"-------------------------------"<<endl;

		for(int i=0; i<index; i++) {
			obj_T[i] -> Display_Information();
			cout<<endl;
		}
	} else if(choice == 'S' || choice == 's') {
		cout<<"\nEnter Following Data for Student:"<<endl;

		do {
			obj_S[index] = new Student;
			obj_S[index] -> Save_Information();
			index++;
			cout<<"\nDo you want to enter more data <Y for Yes, N for No>:  ";
			cin>>moreData;
		} while(moreData == 'Y' || moreData == 'y');

		cout<<"\nDisplaying Student Information:"<<endl;
		cout<<"-------------------------------"<<endl;

		for(int i=0; i<index; i++) {
			obj_S[i] -> Display_Information();
			cout<<endl;
		}
	} else {
		cout<<"\nInvalid Choice...";
	}
	return 0;
}
