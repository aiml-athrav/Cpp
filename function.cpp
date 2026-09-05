#include<iostream>
using namespace std;
void sumit(){       //creating function name sumit
    cout<<"hello sumit"<<endl; 
}
void arjun(){       //creating function name arjun
    sumit();         //calling function name sumit 
    cout<<"hello arjun"<<endl;
}
void anu(){
     cout<<"hello anu"<<endl;       //creating function name anu 
    arjun();
}
int main(){        //sabse phele main function call hota hai
    anu();          //calling function name anu
    return 0;
}


//Argument and parameters ;

#include<iostream>
using namespace std;
void minOfTwo(int a , int b){     // a and b is parameters : parameters are a variable that are use to store data and perform specific task 
    if(a>b){
        cout<<b<<" is smaller"<<endl;
    }
    else{
        cout<<a<<" is smaller"<<endl;
    }
}
int main(){
    minOfTwo(65,87);     // 65 , 87 is argument : arguents are value which are assign to parameters 
}


//write a function to find sum of three number and print it in main function
#include<iostream>
using namespace std;
void sumOfThree(int a,int b,int c){
    int sum = a+b+c;
    cout<<"sum of three number is:"<<sum<<endl;
}
int main(){
    sumOfThree(2,3,4);
}



//print the star pattern using function:
// * 
// * * 
// * * * 
// * 
// * * 
// * * * 
// * * * * 
// * 
// * * 
// * * * 
// * * * * 
// * * * * * 

#include<iostream>
using namespace std;
void starTringle(int a){
    for(int i=1;i<=a;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main(){
    starTringle(3);
    starTringle(4);
    starTringle(5);

}



//return keyword
#include<iostream>
using namespace std;
void fun(int a){
    cout<<a<<endl;
    if(a>20){
        return;     //return keyword is used to exit from the function and return to the calling function
    }
    cout<<a*a;
}
int main(){
    fun(40);
}

//return type
#include<iostream>
using namespace std;
int sum(int x , int y){
    return x+y;           //here return will stop the function and store the value 66, when we use int ,float,bool,char 
}
int main(){
    cout<<sum(22,44);
}


//built in function in c++ :
#include<iostream>
using namespace std;
int main(){
    cout<<max(4,5)<<endl;   //max is a built in function which is used to find the maximum value between two numbers
    cout<<min(4,5)<<endl;   //min is a built in function which is used to find the minimum value between two numbers        
    //cout<<max(4,5,8,6)<<endl;   max and min only use when we have two argument in the case of more than two argument we have to write own code 
    cout<<pow(2,3)<<endl;   //pow is a built in function which is used to find the power of a number
    cout<<sqrt(16)<<endl;   //sqrt is a built in function which is used to find the square root of a number
    cout<<round(2.4)<<endl;   //round is a built in function which is used to round off a number
    cout<<cbrt(27)<<endl;   //cbrt is a built in function which is used to find the cube root of a number
}




//max of three number using function:
//Method 1
#include<iostream>
#include<cmath>
using namespace std;
int maxOfThreeNo(int a,int b,int c){
    if(a>b && a>c){
        return a;
    }
    else if(b>a && b>c){
        return b;
    }
    else{
        return c;
    }
}
int main(){
    cout<<"Maximum number is:"<<maxOfThreeNo(3 ,6 ,4);
}

//method 2
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter three number:";
    cin>>a>>b>>c;
    cout<<max(a,max(b,c));
}

// create a function to find factorial 
#include<iostream>
using namespace std;
int factorial(int x){
    int fact=1;
    for(int i=1;i<=x;i++){
        fact = fact * i;
    }
    return fact;
}
int main(){
    cout<<factorial(5);
}


// create a function for permotation and combination:

// combination nCr :
#include<iostream>
using namespace std;
int factorial(int x){
    int fact=1;
    for(int i=1;i<=x;i++){
        fact = fact * i;
    }
    return fact;
}
int main(){
    int n,r;
    cout<<"enter n ,r :";
    cin>>n>>r;
    int a= factorial(n);
    int b= factorial(r);
    int c= factorial(n-r);
    cout<<"combination is:"<<a/(b*c);

}

// permutation nPr :
#include<iostream>
using namespace std;
int factorial(int x){
    int fact=1;
    for(int i=1;i<=x;i++){
        fact = fact * i;
    }
    return fact;
}
int main(){
    int n,r;
    cout<<"enter n ,r :";
    cin>>n>>r;
    int a= factorial(n);
    int b= factorial(n-r);
    cout<<"combination is:"<<a/b;

}


//right angle pascal triangle using function:

// 1                     
// 1 1                     
// 1 2 1               
// 1 3 3 1 
// 1 4 6 4 1

//Method 1:
#include<iostream>
using namespace std;
int factorial(int x){
    int fact=1;
    for(int i=1;i<=x;i++){
        fact = fact*i;
    }
    return fact;
}
int main(){
    int k;
    cin>>k;

    for(int i=0;i<=k;i++){
        for(int j=0;j<=i;j++){
            int a= factorial(i);
            int b= factorial(j);
            int c= factorial(i-j);
            cout<<(a/(b*c))<<" ";
        }
        cout<<endl;
    }
}

//method 2:
#include<iostream>
using namespace std;
int factorial(int x){
    int fact=1;
    for(int i=1;i<=x;i++){
        fact = fact*i;
    }
    return fact;
}
int nCr(int n, int r){
    int a = factorial(n);
    int b = factorial(r);
    int c = factorial(n-r);
    return a/(b*c);
}
int main(){
    int k;
    cin>>k;

    for(int i=0;i<=k;i++){
        for(int j=0;j<=i;j++){
            cout<<nCr(i,j)<<" ";
        }
        cout<<endl;
    }
}


//pascel triangle using function:

#include<iostream>
using namespace std;
int factorial(int x){
    int fact=1;
    for(int i=1;i<=x;i++){
        fact = fact*i;
    }
    return fact;
}
int nCr(int n, int r){
    int a = factorial(n);
    int b = factorial(r);
    int c = factorial(n-r);
    return a/(b*c);
}
int main(){
    int k;
    cin>>k;

    for(int i=0;i<=k;i++){
        for(int j=0;j<=k-i;j++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<nCr(i,j)<<" ";
        }
        cout<<endl;
    }
}


//multiple function m age same variable like x, y , n , etc use ho rhe to vo sare variable apne apne fuction k liye local hota hai ,agr ek function m dusre function ko call kr k same variable ki koi vlue dete hai to dusre function m variable nhi jata uski value jati hai 

#include<iostream>
using namespace std;
void change(int x){   //idhar x ki value 10 hui pr baad m x=100 se 100 ho gyi pr 100 value ko print nhi krvaya gay hai bss store krvaya hai 
    x=100;
}
int main(){
    int x=10;
    change(x);      //yha p dusre function ko x ki value bheji gayi hai 
    cout<<x;   //output is 10 because x is local variable in change function and it will not affect the value of x in main function
}


//Global variable : global variable is a variable which is declared outside the function and it can be accessed by any function in the program
#include<iostream>
using namespace std;
int x=10;   //global variable       
void printX(){ 

}
int main(){
    cout<<x;     //output is 10 because x is global variable and it can be accessed by any function in the program
    return 0;
}


//global vs local variable : local variable have high priority than global variable means if we have a local variable and a global variable with the same name then the local variable will be used in the function and the global variable will be ignored
#include<iostream>
using namespace std;
int x=10;   //global variable
void change(){

}
int main(){
    cout<<x<<endl;   //output is 10 because x is global variable and it can be accessed by any function in the program
    int x=20;   //local variable
    cout<<x;   //output is 20 because x is local variable and it will be used in the function and the global variable will be ignored
    return 0;
}

#include<iostream>
using namespace std;
int x=10;   //global variable
void change(){
    x=100;   
}
int main(){
    int x=20;   //local variable
    cout<<x<<endl;   //output is 20 because x is local variable and it can be accessed by any function in the program
    change();   //calling function change
    cout<<x;   //output is 20 because x is local variable and it will be used in the function and the global variable will be ignored
    return 0;
}   
