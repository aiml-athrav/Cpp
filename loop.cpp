// #include<iostream>
// using namespace std;    
// int main(){
//     int i;
//     for(i = 1 ; i <= 10 ; i++){
//         cout<< i << endl;
//     }
// }



// print the number 1 to 100

// #include<iostream>
// using namespace std;
// int main(){
//     int i;
//     for(i=1;i<=100;i++){
//         cout<< i << endl;
//     }
// }


// print all even number from 1 to 100


//Method 1
// #include<iostream>
// using namespace std;
// int main(){
//     int i;
//     for(i=1;i<=100;i++){
//         if(i%2==0){
//             cout<< i<< endl;
//         }
//         else{
//             continue;
//         }
//     }
// }


//Method 2
// #include<iostream>
// using namespace std;
// int main(){
//     int i;
//     for(i=1 ; i<=50;i++){
//         cout<< i*2 << endl;
//     }
// }

//Method 3
// #include<iostream>
// using namespace std;
// int main(){
//     int i;
//     for(i=2 ; i<=100;i+=2){
//         cout<< i << endl;
//     }
// }



//print all the odd number divided by 3 from 1 to 100:


//Method 1:
// #include<iostream>
// using namespace std;
// int main(){
//     int i;
//     for(i=1 ;i<=100;i++){
//         if(i%2!=0 && i%3==0){
//             cout<<i<<endl;
//         }
//     }
// }


//method 2:
// #include<iostream>
// using namespace std;
// int main(){
//     int i;
//     for (i=3 ; i<=100 ; i+=6){
//         cout<< i << endl;
//     }
// }   



// print the table of 19:

// #include<iostream>
// using namespace std;
// int main(){
//     int i;
//     for(i=1 ; i<=10 ;i++){
//         cout<<" 19 x "<<i<<"="<<19*i<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int i;
//     for(i=19 ; i<=190 ;i+=19){
//         cout<< i << endl;
//     }
// }


//print the number from n to 1

//Method 1:
// #include<iostream>
// using namespace std;
// int main(){
//     int i;
//     int n ;
//     cout<<"Enter the number:";
//     cin>> n;
//     for (i=n ;i>=1 ; i--){
//         cout<< i << endl;
//     }
// }

//Method 2: printing n to 1 but reverse the output using formula n+1-i:
// #include<iostream>
// using namespace std;
// int main(){
//     int i;
//     int n ;
//     cout<<"Enter the number:";
//     cin>> n;
//     for (i=1 ;i<=n ; i++){
//         cout<< n+1-i << endl;
//     }
// }





// display this ap 2,5,8,11,14,17,... upto n terms


//Method 1:   used when we have last term of the series or n value is the last term of the series, n= 50 means 50 is the last term of the series
// #include<iostream>
// using namespace std;
// int main(){
//     int i;
//     int n ;
//     cout<<"Enter the last term:";
//     cin>> n;
//     for(i=2 ; i<=n ;i+=3){
//         cout<< i << endl;
//     }
// }


//Method 2:   using formula a+(n-1)d  , used to print the series upto n terms where n is the number of terms in the series n=50 means 50 terms will printed in the series
// #include<iostream>
// using namespace std;
// int main(){
//     int i;
//     int n ;
//     cout<<"Enter the number of terms:";
//     cin>> n;
//     for(i=1 ;i<=n ;i++){
//         cout<<2+(i-1)*3<<endl;
//     }
// }


//Method 3:   using method 1 but using nth term formula   an = a+(n-1)d

// #include<iostream>
// using namespace std;
// int main(){
//     int i;
//     int n ;
//     cout<<"Enter the last term:";
//     cin>> n;
//     int an = 2+(n-1)*3;
//     for(i=2 ; i<=an ;i+=3){
//         cout<< i << endl;
//     }
// }


//. MODULAR CODE OF AP 

// #include<iostream>
// using namespace std;
// int main(){
//     int i;
//     int n ;
//     cout<<"Enter the number of terms:";
//     cin>> n;
//     int a = 2 , d = 3 ;     // ap = 2,5,8,11,14,17,...  here a=2 and d=3
//     for(i=1 ;i<=n ;i++){      // is code m bss hmme a and d ki value change krne hai baki structure same rhega
//         cout<<a<<endl;
//         a = a + d ;
//     }
// }

//. MODULAR CODE OF GP 

// #include<iostream>
// using namespace std;
// int main(){
//     int i;
//     int n ;
//     cout<<"Enter the number of terms:";
//     cin>> n;                   // ap m a and d  hota tha isme a and r hai 
//     int a = 2 , r = 3 ;     // gp = 2,6,18,54,162,...  here a=2 and r=3
//     for(i=1 ;i<=n ;i++){      // is code m bss hmme a and r ki value change krne hai baki structure same rhega
//         cout<<a<<endl;
//         a = a * r ;          // ap m a = a + d  hota tha isme a = a * r  hoga
//     }
// }


//print the series  99 ,95, 91, 87,. . . upto all term which are positive 

//Method1 
// #include <iostream>
// using namespace std;

// int main() {
//     for (int i = 99; i > 0; i -= 4) {
//         cout << i << endl;
//     }
// }



// finding factor 

//Method 1:   using for loop
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    for(int i=1 ; i<=n ; i++){
        if(n%i==0){
            cout<<i<<endl;
        }
    }
}


//Method 2 : using sqrt function to reduce the number of iterations
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    for(int i=1 ; i<=sqrt(n) ; i++){        //sqrt(n) is used to reduce the number of iteraation because jab hmm kisi bhi number k factoor nikal rhe hai to uskke square root tk k number hote hai uske baad ka number uske pair k factor hote hai jaise 36 k factor 1,2,3,4,6,9,12,18,36 hai 1*36=36 , 2*18=36 , 3*12=36 , 4*9=36 , 6*6=36 to isliye hmne sqrt(n) tk hi loop chalaya hai
        if(n%i==0){
            cout<<i<<endl;
            if(i!=n/i){        //(i!=n/i) is used to avoid printing the same factor twice when n is a perfect square. For example, if n=36, then i=6 will be printed once, but n/i will also be 6, so we don't want to print it again.
                cout<<n/i<<endl;
            }
        }
    }
}



// write a program to check composite or a prime number 

//Method1;
#include<iostream>
using namespace std;
int main(){
    int i;
    int n;
    cout<<"Enter the number to check:";
    cin>>n;
    int count = 0;
    for(i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count>=3){
        cout<<"composite number";
    }
    else if(count==1){
        cout<<"neither a prime nor a composite number";
    }
    else{
        cout<<"prime number";
    }
}


// Method 2: Flag method

#include <iostream>
using namespace std;

int main() {

    int i;
    int n;
    cout << "Enter the number to check: ";
    cin >> n;

    bool flag = false;   // Starting me maan rahe hain ki number prime hai false = 0 means abhi tak koi factor nahi mila

    for(i = 2; i < n - 1; i++) {          // 1,n to n se honge hi honge isliye2 se lekar n-2 tak check kareng ki n kisi number se completely divide ho raha hai ya nahi
        if(n % i == 0) {                        // Agar n, i se completely divide ho gaya to n composite number hai
            flag = true;                      // Factor mil gaya, isliye flag ko true kar diya
            break;                   // Factor mil gaya hai, ab aage check karne ki zarurat nahi
        }
    }
    if(flag == true) {
        cout << "composite number";
    }
    else {
        cout << "prime number";
    }
}



// WHILE LOOP:

#include<iostream>
using namespace std;
int main(){
    int i;
    while(i<=10){
        cout<<i<<" ";
        i++;
    }
}



// count digit of a number:

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    int count = 0;
    if(n==0){
        count = 1;
    }
    while(n!=0){
        n/=10;
        count++;
    }
    cout<< count;
}


//Print the sum of digit:

#include<iostream>
using namespace std;
int main(){
    int a;
    int n ;
    cout<<"Enter the number:";
    cin>>n;
    int count=0;
    while(n!=0){
        a=n%10;
        count = count+a;
        n/=10;
    }
    cout<<count;
}



//reverse of a digit:

#include<iostream>
using namespace std;
int main(){
    int a;
    int n ;
    cout<<"Enter the number:";
    cin>>n;
    int count=0;
    while(n!=0){
        a=n%10;
        count = count*10 +a;
        n/=10;
    }
    cout<<count;
}


//factorial:

#include<iostream>
using namespace std;
int main(){
    int i;
    int n;
    cout<<"Enter a number:";
    cin>>n;
    long long fact= 1;
    for(i=1;i<=n;i++){
        fact = fact*i;
    }
    cout<<fact;
}

//`long long` C++ ka ek data type hai jo `int` ki comparison me bahut bade whole numbers ko store karne ke liye use hota hai.
//`long long` isliye use kiya hai kyunki factorial ka answer bahut jaldi bada ho jata hai, aur `int` itne bade number ko store nahi kar sakta. `float` decimal values ke liye hota hai, jabki factorial ka answer whole number hota hai.