//.--------->.     IF ELSE else if :

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



//.--------->.     absolute value of a number :

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


// program to check whether shopkeeper made profit lose or no profit no lose , if profit then how much :
// #include<iostream>
// using namespace std ;
// int main(){
//     float SP ,CP ;
//     cout<<"Enter the value of SP :";
//     cin>> SP;
//     cout<< "Enter the value of CP:";
//     cin>> CP;
//     if (SP > CP){
//         cout<<" Shopkeeper made profit" <<endl ;
//         float profit = SP-CP;
//         cout<<"Profit is:"<< profit ;
//     }
//     else if (SP<CP){
//         cout<<"shopkeeper made a loss" <<endl ;
//     }
//     else{
//         cout<<"shopkeeper neither made a loss and profit ";
//     }
// }



//.--------->.     and(&&) operator :

// Take a positie integer input tell if it is a four digit number or not

// #include<iostream>
// using namespace std ;
// int main(){
//     int n;
//     cout<<"Enter the number:";
//     cin>>n;
//     if(n>=1000 && n<=9999){             //&& is used when we have multiple coditions to check and all conditions should be true to execute the code inside if block  insead of && we use 'and' also 
//         cout<<"The number is a four-digit number.";
//     }
//     else{
//         cout<<"The number is not a four-digit number.";
//     }
// }


// Take a integer input and check whether it is less than 69 or not

//Method 1:
// #include<iostream>
// using namespace std ;
// int main(){
//     int n;
//     cout<<"Enter the number:";
//     cin>>n;
//     int m;
//     if(n<0){
//         m = n * -1;
//     }
//     else{
//         m = n;
//     }
//     if(m<69){
//         cout<<"The number is less than 69.";
//     }
//     else{
//         cout<<"The number is not less than 69.";
//     }
// }

// method 2:
// #include<iostream>
// using namespace std ;
// int main(){
//     int n;
//     cout<<"Enter the number:";
//     cin>>n;
//     if (n<69 && n>-69){
//         cout<<"The magnitude is smalleer then  69";
//     }
//     else{
//         cout<<"The magnitude is greater then 69";
//     }
// }




// Take three positive integer and check whether it is a triangle or not , if it is a triangle then print "it is a triangle" otherwise print "it is not a triangle"

// #include<iostream>
// using namespace std ;
// int main(){
//     int a,b,c;
//     cout<<"Enter three side of a triangle:";
//     cin>>a>>b>>c;
//     if(a+b>c && b+c>a && c+a>b){
//         cout<<"it is a triangle";
//     }
//     else{
//         cout<<"it is not a triangle";       
//     }
// }


// capital alphate or not :

// #include<iostream>
// using namespace std ;
// int main(){
//     char ch;
//     cout<<"Enter the character:";
//     cin>>ch;
//     if(int(ch)> 64 && int(ch)<91){
//         cout<<"The charcter is a capital letter";
//     }
//     else{
//         cout<<"The charcter is not a capital letter";
//     }
// }


//Take three number and print thegreatest one:

// #include<iostream>
// using namespace std ;
// int main(){
//     int a,b,c;
//     cout<<"Enter three numbers :" ;
//     cin>>a>>b>>c;
//     if( a>=b && a>=c){
//         cout<< a <<" is the greatest number";
//     }
//     else if(b>=c && b>= a){
//         cout<< b <<" is the greatest number";
//     }
//     else{
//         cout<< c <<" is the greatest number";
//     }
// }


// given a point(x,y) check whether it lies in the first quadrant , second quadrant , third quadrant or fourth quadrant , on the x-axis or y-axis or origin
#include<iostream>
using namespace std ;
int main(){
    int x,y;
    cout<< "Enter the point(x,y):";
    cin>>x>>y;
    if(x>0 && y>0){
        cout<< "point lies in first quadrant:";
    }
    else if(x>0 && y<0){
        cout<<"points lies in fourth quadrant";
    }
    else if(x<0 && y<0){
        cout<<"point lies in third quadrant";
    }
    else if(x<0 && y>0){
        cout<<"point lies in second quadrant";
    }
    else if(x==0 && y==0){
        cout<<"point lies on origin";
    }
    else if(x==0 && y!=0){
        cout<<"point lies on y-axis";
    }
    else if(x!=0 && y==0){
        cout<<"point lies on x-axis";
    }
}



//.--------->.     or(||) operator :


// #include<iostream>
// using namespace std ;
// int main(){
//     int n;
//     cout<<"Enter the number:";
//     cin>>n;
//     if(n % 3 == 0 || n % 5 ==0){    // || is used when we have multiple coditions to check and any one of the condition should be true to execute the code inside if block  insead of || we use 'or' also
//         cout<<"The number is divisible by 3 or 5";
//     }
//     else{
//         cout<<"The number is not divisible by 3 or 5";
//     }   
// }


// .--------->.     varible inside if else block :

#include<iostream>
using namespace std ;
int main(){
    int x = 0;        // 0 represent false 
    if(x){             // if(x)  means if(false)
        cout<<"ram";
    }
    else{
        cout<<"shyam";
    }
}                        // output shyam


#include<iostream>
using namespace std ;
int main(){
    int x = 1;        // 1 represent true 
    if(x){             // if(x)  means if(true)
        cout<<"ram";
    }
    else{
        cout<<"shyam";
    }
}                       // output ram

#include<iostream>
using namespace std ;
int main(){
    int x = 32;        // any non-zero value represent true  either it is positive or negative
    if(x){             // if(x)  means if(true)
        cout<<"ram";
    }
    else{
        cout<<"shyam";
    }
}                         // output ram



#include<iostream>
using namespace std ;
int main(){
    int x=2;
    if(x==2){
        cout<<"ram";
    }
    else{
        cout<<"shyam";
    }
}                         // output ram



#include<iostream>
using namespace std ;
int main(){
    int x=2;
    if(x=0){                // starting m x=2 x me 2 asign kra tha prr if satment m x ki new value assign ho gyi to if and else use value k according chlega
        cout<<"ram";
    }
    else{
        cout<<"shyam";
    }
}                         // output shyam



#include<iostream>
using namespace std ;
int main(){
    int x=2;
    if(x++){           // x=2 de rkha hai any value except 0 means true so if statment run but condition say x++ means in if x=2 but in next value in other line of code x=3
        cout<<x;
    }
    else{
        cout<<"shyam";
    }
}                         // output 3




// .--------->.     Ternary operator :

// ternary operator if else ko single line m likhne k liye use kiya jaaata hai  ye teen chijo p work krta hai = condition ? sach : jhut 

#include<iomanip>
