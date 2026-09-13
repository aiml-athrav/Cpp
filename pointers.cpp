// address of a variable ;
// #include<iostream>
// using namespace std;
// int main(){
//     int x=10;
//     cout<<"Address of x is: "<<&x; // & is used to get the address of a variable
//     return 0;
// }



// store address of a variable in pointer ;
// #include<iostream>
// using namespace std;
// int main(){
//     int x= 10;
//     int* ptr = &x;  // pointer variable ptr stores the address of x ,, int* is used to declare a pointer variable of type int
//     cout<<&x;
//     cout<<ptr;
//     cout<<&ptr; // & is used to get the address of a pointer variable
// }


//int x name k ek variable banaya jisme ek value store krai ab us value k koi address hoga to use print krvane k liye & use krte hai variable se phele , agr address ko kisi variable m store krvana hai to (int* ptr = &x;) is tra k format use krte hai jisme (ptr) ek pointer variable banaya hai jisme x variable k address store kra hai * symbol pointer declare krne k liye use hota hai agr * use nhi krte to ptr ek normal integer variable banega jo address ko store nhi kr sakta , ab hmmne ptr ek variable banya hai to uska bhi address hoga kuch use print krvane k liye &ptr se krva sakte hai ...


//Dereference operator:
// #include<iostream>
// using namespace std;
// int main(){
//     int x= 10;
//     int* ptr = &x;
//     cout<<ptr<<endl;
//     cout<<&x<<endl;
//     cout<<*ptr<<endl; // * is a dereferance operator which is use used to get the value of variable whose addres is store in pointer variable 
// }

// changing value of variable using pointer variable ;
// #include<iostream>
// using namespace std;
// int main(){
//     int x= 10;
//     int* ptr = &x;
//     cout<<ptr<<endl;
//     cout<<*ptr<<endl;
//     cout<<x<<endl; // x is 10
//     *ptr = 20; // changing the value of x using pointer variable
//     cout<<x<<endl; // x is now 20
// }

//if we directly use *ptr then it is use to change the value of those variable whose address is store in pointer variable 


//*ptr se hmare pass is variable k address store hai uska pura control aa jata hai jese ki x=10 hai aur int* ptr = &x; ahi to ptr ek pointer variable hai jisme xvariable k address store hai to abb ha ptr variable m derference operator(*)use kr k x k sath multi tasking kr sakte hai jese ki x ki value change krnax ki value increse ya decrese krne ,etc

// #include<iostream>
// using namespace std;
// int main(){
//     int x= 10;
//     int* ptr = &x;
//     cout<<ptr<<endl;
//     cout<<*ptr<<endl;
//     cout<<x<<endl; // x is 10
//     *ptr += 10; // changing the value of x using pointer variable
//     cout<<*ptr<<endl; // *ptr is now 20
//     cout<<x<<endl; // x is now 20
// }

//pass by reference using pointer variable ;
#include<iostream>
using namespace std;
void change(int* ptr){
    *ptr = 20;
}
int main(){
    int x = 10;
    change(&x);
    cout<<x;
}

// int main m local variable x banya ha jiske value 10 store hai ab ek void change name k function banya hai jisme x variable pass krne ki jgha ek pointer variable pass kra rhe jo ki x variable k address store kr rha jo main function m &x se pass ho rha hai , ab change function m *ptr ki help se x ptr variable m jis variable k address store hai us variable k value change kre hai to all over x ki value phele 10 thi change function ko x k address provide kra change function n us variable k address store kra aur us variable k vlue change kr de to ab x = 10 ki jgha x =20 ho gaya jisme cout<<x se 20 print hoga;


//swap using pointer
#include<iostream>
using namespace std;
void swaping(int* a ,int* b){  //yha p a and b pointer variable hai jo a and b variable k address store kr rhe hai
    int temp =*a;
    *a =*b;
    *b = temp;
}
int main(){
    int a =10, b = 39;  // yha p a and b local integer variable hai 
    swaping(&a,&b);
    cout<<a<<" "<<b;
}

// Double pointer::
#include<iostream>
using namespace std;
int main(){
    int x = 10;
    int* p1 = &x;
    cout<<&x<<endl;
    cout<<p1<<endl;
    cout<<endl;
    
    int** p2 = &p1;     // yha p2 ek double pointer variable hai jo p1 pointer variable k address store kr rha hai
    cout<<&p1<<endl;
    cout<<p2<<endl;
}


// Double pointer::
#include<iostream>
using namespace std;
int main(){
    int x = 10;
    int* p1 = &x;
    int** p2 =&p1;
    
    cout<<x<<endl;
    cout<<*p1<<endl;
    cout<<**p2<<endl;

    cout<<&x<<endl;
    cout<<p1<<endl;
    cout<<*p2<<endl;

}