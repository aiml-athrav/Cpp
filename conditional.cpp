//IF ELSE :

// write a code to check whether a person is eligible for voting or not , if age is greater than or equal to 18 then he/she is eligible for voting otherwise not eligible for voting

// #include<iostream>
// using namespace std ;
// int main(){
//     int age;
//     cout<< "enter your age:";
//     cin>> age;
//     if (age>=18){
//         cout<<"you are eligible for voting";
//     }
//     else{
//         cout<<"you are not eligible for voting";
//     }
// }

//take a positive integer as input and check whether it is even or odd number:

// #include<iostream>
// using namespace std ;
// int main(){
//     int n;
//     cout<<"enter the number";
//     cin>>n;
//     if (n % 2 == 0){
//         cout<< "choosen number is even";
//     }
//     else{
//         cout<< "choosen number is odd";
//     }
// }



//absolute value of a number :

// #include<iostream>
// using namespace std ;
// int main(){
//     int n;
//     cout<<"enter the number";
//     cin>> n;
//     if(n<0){
//         n = n*-1 ;
//         cout<< "absolute value of choosen number is :"<< n ;
//     }
//     else{
//         cout<< "absolute value of choosen number is :"<< n ;
//     }
// }


// write a program to check whether a number is integer or not , if it is integer then print "choosen number is integer" otherwise print "choosen number is not integer"
// #include<iostream>
// using namespace std ;
// int main(){
//     float n;
//     cout<< "Enter the number:";
//     cin>> n;
//     if ( n == int(n)){
//         cout<< "choosen number is integer";
//     }
//     else{
//         cout<< "choosen number is not integer";     
//     }
// }



#include<iostream>
using namespace std ;
int main(){
    float SP ,CP ;
    cout<<"Enter the value of SP :";
    cin>> SP;
    cout<< "Enter the value of CP:";
    cin>> CP;
    if (SP > CP){
        cout<<" Shopkeeper made profit" <<endl ;
        float profit = SP-CP;
        cout<<"Profit is:"<< profit ;
    }
    else if (SP<CP){
        cout<<"shopkeeper made a loss" <<endl ;
    }
    else{
        cout<<"shopkeeper neither made a loss and profit ";
    }
}
