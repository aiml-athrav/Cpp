//1.1 Input / Output Operations

// #include <iostream>
// using namespace std;

// int main() {
//     int a, b;

//     cout << "Enter two numbers: ";
//     cin >> a >> b;

//     cout << "First number = " << a << endl;
//     cout << "Second number = " << b << endl;
//     cout << "Sum = " << a + b << endl;

//     return 0;
// }


//1.2 Decision Making — if-else

// #include <iostream>
// using namespace std;

// int main() {
//     int n;

//     cout << "Enter a number: ";
//     cin >> n;

//     if (n > 0) {
//         cout << "Positive number";
//     }
//     else if (n < 0) {
//         cout << "Negative number";
//     }
//     else {
//         cout << "Zero";
//     }

//     return 0;
// }


//1.3 Decision Making — switch-case:

// #include <iostream>
// using namespace std;

// int main() {
//     int a, b, choice;

//     cout << "Enter two numbers: ";
//     cin >> a >> b;

//     cout << "1. Addition" << endl;
//     cout << "2. Subtraction" << endl;
//     cout << "3. Multiplication" << endl;
//     cout << "4. Division" << endl;

//     cout << "Enter your choice: ";
//     cin >> choice;

//     switch (choice) {
//         case 1:
//             cout << "Addition = " << a + b;
//             break;

//         case 2:
//             cout << "Subtraction = " << a - b;
//             break;

//         case 3:
//             cout << "Multiplication = " << a * b;
//             break;

//         case 4:
//             cout << "Division = " << a / b;
//             break;

//         default:
//             cout << "Invalid choice";
//     }

//     return 0;
// }



//1.4 Looping — for loop

// #include <iostream>
// using namespace std;

// int main() {
//     int n;

//     cout << "Enter n: ";
//     cin >> n;

//     for (int i = 1; i <= n; i++) {
//         cout << i << " ";
//     }

//     return 0;
// }



//1.5 Looping — while loop

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     int i = 1;

//     cout << "Enter n: ";
//     cin >> n;

//     while (i <= n) {
//         cout << i << " ";
//         i++;
//     }

//     return 0;
// }


//1.6 Looping — do-while loop

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     int i = 1;

//     cout << "Enter n: ";
//     cin >> n;

//     do {
//         cout << i << " ";
//         i++;
//     } while (i <= n);

//     return 0;
// }



//1.7 Arrays

// #include <iostream>
// using namespace std;

// int main() {
//     int arr[5];

//     cout << "Enter 5 elements: ";

//     for (int i = 0; i < 5; i++) {
//         cin >> arr[i];
//     }

//     cout << "Array elements are: ";

//     for (int i = 0; i < 5; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }


//1.8 String Handling

// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string name;

//     cout << "Enter your name: ";
//     cin >> name;

//     cout << "Your name is: " << name;

//     return 0;
// }


//2. Class, Object, Data Members & Member Functions


// 2.1 Class 
// #include <iostream>
// using namespace std;
// class Student {
// public:
//     int rollNo;
//     string name;
//     void display() {
//         cout << "Class declared successfully";
//     }
// };
// int main() {
//     Student s;
//     s.display();
//     return 0;
// }


// 2.2 Object


// #include <iostream>
// using namespace std;

// class Message {
// public:
//     void show() {
//         cout << "Object created successfully";
//     }
// };

// int main() {
//     Message obj;
//     obj.show();

//     return 0;
// }


// 2.3 Data Members :

// #include <iostream>
// #include <string>
// using namespace std;

// class Student {
// public:
//     int rollNo;
//     string name;
// };

// int main() {
//     Student s;

//     s.rollNo = 24;
//     s.name = "Athrav";

//     cout << "Roll No: " << s.rollNo << endl;
//     cout << "Name: " << s.name;

//     return 0;
// }


// 2.4 Member Functions :

// #include <iostream>
// #include <string>
// using namespace std;

// class Employee {
//     int id;
//     string name;

// public:
//     void getData() {
//         cout << "Enter id and name: ";
//         cin >> id >> name;
//     }

//     void display() {
//         cout << "Employee ID: " << id << endl;
//         cout << "Employee Name: " << name;
//     }
// };

// int main() {
//     Employee e;

//     e.getData();
//     e.display();

//     return 0;
// }


// 2.5 Access Specifiers :

// #include <iostream>
// #include <string>
// using namespace std;

// class Account {
// private:
//     int balance = 5000;

// public:
//     string holder = "Athrav";

//     void showBalance() {
//         cout << "Balance: " << balance << endl;
//     }
// };

// int main() {
//     Account a;

//     cout << "Account holder: " << a.holder << endl;
//     a.showBalance();

//     return 0;
// }



//Single inheritance:

// #include <iostream>
// using namespace std;

// class Animal {
// public:
//     void eat() {
//         cout << "Animal eats" << endl;
//     }
// };

// class Dog : public Animal {
// public:
//     void bark() {
//         cout << "Dog barks" << endl;
//     }
// };

// int main() {
//     Dog d;

//     d.eat();
//     d.bark();

//     return 0;
// }


// Multiple inheritance:

// #include <iostream>
// using namespace std;

// class Father {
// public:
//     void money() {
//         cout << "Father's money" << endl;
//     }
// };

// class Mother {
// public:
//     void love() {
//         cout << "Mother's love" << endl;
//     }
// };

// class Child : public Father, public Mother {
// public:
//     void study() {
//         cout << "Child studies" << endl;
//     }
// };

// int main() {
//     Child c;

//     c.money();
//     c.love();
//     c.study();

//     return 0;
// }


// Multilevel inheritance:

// #include<iostream>
// using namespace std;
// class Animal{
//     public:
//     void eat(){
//         cout<<"animal eat" << endl; 
//     }
// };

// class Dog : public Animal{
//     public:
//     void bark(){
//         cout<<"dog bark"<<endl;
//     }
// };

// class Puppy : public Dog{
//     public:
//     void weep(){
//         cout<<"puppy weep"<<endl;
//     }
// };

// int main(){
//     Puppy p;

//     p.eat();
//     p.bark();
//     p.weep();

//     return 0;
// }


//Hybrid inheritance:

// #include <iostream>
// using namespace std;

// class A {
// public:
//     void showA() {
//         cout << "Class A" << endl;
//     }
// };

// class B : public A {
// public:
//     void showB() {
//         cout << "Class B" << endl;
//     }
// };

// class C : public A {
// public:
//     void showC() {
//         cout << "Class C" << endl;
//     }
// };

// class D : public B, public C {
// public:
//     void showD() {
//         cout << "Class D" << endl;
//     }
// };

// int main() {
//     D d;

//     d.showB();
//     d.showC();
//     d.showD();

//     return 0;
// }


// Hybrid inheritance :


#include <iostream>
using namespace std;

class A {
public:
    void showA() {
        cout << "Class A" << endl;
    }
};

class B : public A {
public:
    void showB() {
        cout << "Class B" << endl;
    }
};

class C : public A {
public:
    void showC() {
        cout << "Class C" << endl;
    }
};

class D : public B, public C {
public:
    void showD() {
        cout << "Class D" << endl;
    }
};

int main() {
    D d;

    d.showB();
    d.showC();
    d.showD();

    return 0;
}