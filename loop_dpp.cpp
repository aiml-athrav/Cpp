// Take a positive integer N as input and compute the sum of all natural numbers from 1 up to N using a loop.

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the numeber:";
//     cin>>n;
//     int sum = 0;
//     for(int i=0;i<=n;i++){
//         sum += i;
//     }
//     cout<<sum;
// }

// Write a program that takes two integers as input and prints all the even numbers located strictly between them.
// #include<iostream>
// using namespace std;
// int main(){
//     int a,b,i;
//     cout<<"enter two number:";
//     cin>>a>>b;
//     for(i=a ;i<= b;i++){
//         if(i%2 == 0){
//             cout<<i<<" ";
//         }
//     }
// }


// Write a program to take a number as input and compute the product of all its individual digits.

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number:";
//     cin>>n;
//     int product =1;
//     while(n>0){
//         int a = n%10;
//         product *= a;
//         n = n/10;
//     }
//     cout<<product;
// }



// Given a positive integer N, write a program to find and print all of its divisors.

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter a number:";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         if(n%i==0){
//             cout<<i<<" ";
//         }
//     }
// }

// Write a program to find if a given positive integer is a Perfect Number. A perfect number
// is a positive integer that is equal to the sum of its proper divisors. (A proper divisor of a number
// is a positive divisor of the number, excluding the number itself.)


// perfect number vo hota hai iske divisor k sum us number k barabar ho:


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter a number:";
//     cin>>n;
//     int i;
//     int sum =0;
//     for(i=1 ;i<n;i++){
//         if(n%i==0){
//             sum +=i;
//         }
//     }
//     if(sum == n){
//         cout<<"perfect number:";
//     }
//     else{
//         cout<<"not a perfect number.";
//     }
// }

// Write a program to print all integers from 1 to 500 that are not divisible by 3. You must
// use the continue keyword.

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1 ;i<=500; i++){
//         if(i%3==0){
//             continue;
//         }
//         cout<<i<<" ";
//     }
// }


// Write a program to check if a given number is a Palindrome. A palindrome number
// reads the same forwards and backwards.

// #include<iostream>
// using namespace std;
// int main(){
//     int n,i;
//     cout<<"enter a number:";
//     cin>>n;
//     int temp = n;
//     int reverse=0;
//     while(n>0){
//         int a = n%10 ;
//         reverse = reverse*10 + a;
//         n = n/10;
//     }
//     cout<<"reverse:"<<reverse<<endl;

//     if(reverse == temp){
//         cout<<"number is palindrome";
//     }
//     else{
//         cout<<"number is not palindrome";
//     }
// }


// Take an integer K as input. Two variables a and b can take any integer value from 1 to
// K. Write a program to print all possible ordered combinations of (a, b) on a new line.

#include<iostream>
using namespace std;
int main(){
    int k;
    cout<<"Enter a number:";
    cin>>k;
    for(int i=1 ; i<=k ; i++){
        for(int j=1 ; j<=k ;j++){
            cout<<"("<<i<<","<<j<<")"<<" ";
            
        }
    }
}

