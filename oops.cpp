// #include<iostream>
// using namespace std;
// class student{
// public:
//    string name;
//    int roll_no;
//    float marks;

// };

// int main(){
//     student s1;
//     s1.name = "John";
//     s1.roll_no = 101;
//     s1.marks = 78.97;

//     student s2;
//     s2.name = "athrav";
//     s2.roll_no = 21;
//     s2.marks = 98.9;


//     cout<<s1.name<<" "<<s1.roll_no<<" "<<s1.marks<<endl;
//     cout<<s2.name<<" "<<s2.roll_no<<" "<<s2.marks<<endl;
    
// }




//constructor
// #include<iostream>
// using namespace std;
// class car{
// public:
//     string name;
//     int model_number;
//     int price;

//     car(){               //default constructor

//     }

//     car(string n , int m ,int p){       //parameterized constructor 
//     name =n;
//     model_number = m;
//     price= p;
//     }
// };

// int main(){
//     car c1("bmw", 28795 ,3586);
//     // car c1;
//     // c1.name = "bmw";
//     // c1.model_number = 7621843;
//     // c1.price = 90000000;
    
//     car c2("audi", 247836 ,3894);
//     // car c2;
//     // c2.name = "audi";
//     // c2.model_number = 87125984;
//     // c2.price = 265208;
    
//     car c3;
//     c3.name ="fbqiwgu";
//     c3.model_number =32235;
//     c3.price = 9236785;

//     car c4 = c2;        //copy constructor
    
//     cout<<c1.name<<" "<<c1.model_number<<" "<<c1.price<<endl;
//     cout<<c2.name<<" "<<c2.model_number<<" "<<c2.price<<endl;
//     cout<<c3.name<<" "<<c3.model_number<<" "<<c3.price<<endl;
//     cout<<c4.name<<" "<<c4.model_number<<" "<<c4.price<<endl;
// }



//agr hmm parameterized constructor use kr rhe hai to hmm c3.name = "fbqiwgu"; c3.model_number = 32235; c3.price = 9236785; is treke se call krenge to error aaye ga hme car c1("bmw", 28795 ,3586); ise trike se hi call krna hoga agr hmm chate hai ki c3.name = "fbqiwgu"; c3.model_number = 32235; c3.price = 9236785; is trike se call kre to hme default constructor use krna hoga parameterized constructor k sath.


//--------this keyword

// #include<iostream>
// using namespace std;

// class cricketer{
// public:
//     string name;
//     int runs;

//     cricketer(string name , int runs){
//         this->name = name;
//         this->runs = runs;
//     }
// };
// int main(){
//     cricketer c1("vireat kohli", 12000);
//     cricketer c2("rohit sharma", 9000);
//     cout<<c1.name<<" "<<c1.runs<<endl;
//     cout<<c2.name<<" "<<c2.runs<<endl;
// }

// this keyword current object ko refer karta hai. Jab constructor ke parameter aur class ke data member ka naam same ho,
// tab this->name aur this->runs current object ke data members ko identify karte hain aur right side ke parameter ki value
// ko current object ke corresponding data member me store karte hain.


//copy constructor

// #include <iostream>
// using namespace std;
// class Student
// {
// public:
// string name;
// int marks;
// Student(string n, int m)
// {
// name = n;
// marks = m;
// }
// Student(const Student &s)
// {   
// name = s.name;
// marks = s.marks;
// }
// void display()
// {
// cout << "Name: " << name << endl;
// cout << "Marks: " << marks << endl;
// }
//};
// int main()
// {
// Student s1("Athrav Khandelwal", 95);
// Student s2 = s1;
// cout << "Student 1:" << endl;
// s1.display();
// cout << "\nStudent 2:" << endl;
// s2.display();
// return 0;
// }


//default constructor:

// #include <iostream>
// using namespace std;

// class Student {
//     int rollNo;
// public:
//     Student() { // Default constructor
//         rollNo = 1;
//     }
//     void display() const {
//         cout << "Roll number: " << rollNo << endl;
//     }
// };

// int main() {
//     Student s;
//     s.display();
//     return 0;
// }




// #include <iostream>
// using namespace std;

// class Student {
//     int rollNo;
// public:
//     Student(int r) : rollNo(r) {}
//     Student(const Student& other) { // Copy constructor
//         rollNo = other.rollNo;
//     }
//     void display() const {
//         cout << "Roll number: " << rollNo << endl;
//     }
// };

// int main() {
//     Student s1(10);
//     Student s2(s1); // Creates a copy of s1
//     s2.display();
//     return 0;
// }


// #include <iostream>
// using namespace std;

// class Rectangle {
//     int length, width;
// public:
//     Rectangle(int l, int w) { // Parameterized constructor
//         length = l;
//         width = w;
//     }
//     void displayArea() const {
//         cout << "Area: " << length * width << endl;
//     }
// };

// int main() {
//     Rectangle r(5, 4);
//     r.displayArea();
//     return 0;
// }


#include <iostream>
using namespace std;

class Demo {
public:
    Demo() {
        cout << "Constructor called" << endl;
    }
    ~Demo() { // Destructor
        cout << "Destructor called" << endl;
    }
};

int main() {
    {
        Demo obj;
        cout << "Object is in scope" << endl;
    } // obj is destroyed automatically here
    cout << "Scope ended" << endl;
    return 0;
}