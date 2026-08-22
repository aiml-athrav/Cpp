// #include<iostream>
// using namespace std ;
// int main () {
//     int a = 5, b = 10;
//         if( a == b ) {
//             cout << " Equal matches " << a << endl ;
//         } else {
//             cout << "Not equal " << a << endl ;
//         }
// return 0;
// }

// Take two integers as input from the user. Determine and print whether their multiplication product is positive, negative, or zero without calculating the absolute numeric valuation value if possible.

// #include<iostream>
// using namespace std ;
// int main(){
//     int a,b;
//     cout<<"Enter two integers:";
//     cin>>a>>b;
//     if(a == 0 && b == 0){
//         cout<<"the product is equal to zero";
//     }
//     else if(a>0 && b>0){
//         cout<<"the product is positive";
//     }
//     else if(a<0 && b<0){
//         cout<<"the product is positive";
//     }
//     else{
//         cout<<"the product is negative";
//     }
// }

// Take a positive integer input from the user and check if it is divisible by both 3 and 5. Do not use the logical AND (&&) operator inside your conditional test statement. (Hint: Think about how mathematical properties like the Lowest Common Multiple (LCM) can reduce multi-step rules).

#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout<<"Enter the number:";
    cin>>n;
    if (n%15==0){
        cout<<"the number is divisible by 3 and 5.";
    }
    else{
        cout<<"the number is not divisible by 3 and 5.";
    }
}