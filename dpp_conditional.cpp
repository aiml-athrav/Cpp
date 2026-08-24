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

// #include<iostream>
// using namespace std ;
// int main(){
//     int n ;
//     cout<<"Enter the number:";
//     cin>>n;
//     if (n%15==0){
//         cout<<"the number is divisible by 3 and 5.";
//     }
//     else{
//         cout<<"the number is not divisible by 3 and 5.";
//     }
// }


//Given the number of sides n of a simple polygon and the sum of all its interior angles S, write a program to check if the user has provided valid dimensional specifications. Use the structural formula:S = (n − 2) × 180◦
#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"enter the side of polygon:";
    cin>>n;
    int s = (n-2)*180;
    if(s >= 180 ){
        cout<<"polygon exist";
    }
    else{
        cout<<"polygon does not exist";
    }
}



// Take two integers as input. If exactly one of them is odd, print "One is odd". If
// both are odd, print "Both are odd". If neither of them is odd, print "None is odd". Use
// conditional constructs effectively.
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter two integer:";
    cin>>a>>b;
    if(a%2==0 && b%2!=0){
        cout<<"one is odd";
    }
    else if(a%2!=0 && b%2==0){
        cout<<"one is odd";
    }
    else if(a%2!=0 && b%2!=0){
        cout<<"both are odd";
    }
    else{
        cout<<"none of them are odd";
    }
}


// Write a menu-driven application using a C++ switch-case structure that accepts an
// integer number representing a month (1 to 12). Print the corresponding month’s standard
// calendar name. If the input falls outside the standard scope, default cleanly with an error flag
// message.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the month in integer:";
    cin>> n;
    switch(n){
    case 1 : cout<<"month is january"; break;
    case 2 : cout<<"month is ferbuary"; break;
    case 3 : cout<<"month is march"; break;
    case 4 : cout<<"month is april"; break;
    case 5 : cout<<"month is may"; break;
    case 6 : cout<<"month is june"; break;
    case 7 : cout<<"month is july"; break;
    case 8 : cout<<"month is august"; break;
    case 9 : cout<<"month is september"; break;
    case 10 : cout<<"month is october"; break;
    case 11 : cout<<"month is november"; break;
    case 12 : cout<<"month is december"; break;
    default : cout<<"no match found";
    }
}



// Take a character input from the keyboard. Write a conditional structure to evaluate whether the
// provided letter is an uppercase English alphabet (A-Z), a lowercase alphabet (a-z), a numerical
// digit (0-9), or a special symbolic character.

#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter the character:";
    cin>>ch;
    if( ch>64 && ch<91 ){
        cout<<"capital letter:";
    }
    else if( ch>96 && ch<123){
        cout<<"small letter";
    }
    else if( ch>48 && ch<58){
        cout<<"digit 0-9";
    }
    else{
        cout<<"special letter";
    }

}



// Write a program that takes a positive integer representing a year (e.g., 2024) and checks whether
// it is a leap year or not. Your logical conditions must accurately check for standard four-year
// intervals while handling century-year bounds correctly (100 and 400 rules).

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the year:";
    cin>>n;
    if(n%400 == 0){
        cout<<"leap year";
    }
    else if(n%100==0){
        cout<<"not a leap year";
    }
    else if(n%4==0){
        cout<<"leap year";
    }
    else{
        cout<<"not a leap year";
    }
}


// Given the three coordinate points A(x1, y1), B(x2, y2), and C(x3, y3) as floating-point inputs,
// write a program to determine if all three points sit sequentially on the same straight line
// (collinear points). Use the slope comparison formulation:

// (y2 − y1) × (x3 − x2) == (y3 − y2) × (x2 − x1)

#include<iostream>
using namespace std;
int main(){
    float  x1,y1,x2,y2,x3,y3;
    cout<<"enter the cordinates of x1,y1,x2,y2,x3,y3";
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    
    bool collinear_point = (y2 - y1)*(x3 - x2) == (y3 - y2)*(x2 - x1);
    if(collinear_point){
        cout<<"all points are in straight line";
    }
    else{
        cout<<"not in straight line";
    }
    
}

// An energy cooperative charges electricity rates dynamically depending on consumer usage units.
// Write a program to compute total charges based on the input consumption units:
// • First 100 units: $1.50 per unit
// • Next 200 units (101 to 300): $2.50 per unit
// • Above 300 units: $4.00 per unit
// An additional structural safety surcharge of 15% is appended to the total amount generated.
// Find the net bill payable.

#include<iostream>
using namespace std;
int main(){
    float x,y;
    float n;
    cout<<"eneter the number of unit :";
    cin>>n;
    if(n<=100){
        cout<<"$"<<n*1.50<<endl;
        float a= 0.15*n*1.50;
        cout<<"net bill is $"<<a +n*1.50 ;
    }
    else if(n>100 && n<=300){
        x = 100*1.50 + (n-100)*2.50;
        cout<<"$"<< x<<endl;
        float b= 0.15*x;
        cout<<"net bill is $"<<b+x;
    }
    else{
        y = 100*1.50 + 200*2.50 + (n-300)*4.00;
        cout<<"$"<< y<<endl;
        float c= 0.15*y;
        cout<<"net bill is $"<<c+y;
    }
}