// Relational Operators in C++ : <, >, <=, >=, ==, != :

#include<iostream>
using namespace std ;
int main(){
    int a = 5 ;
    int b = 6 ;
    cout<< (a<b) <<endl ;  //true is print as 1
    cout<< (a>b) <<endl ;  //false is print as 0
    cout<< (a<=b) <<endl ;  //true is print as 1
    cout<< (a>=b) <<endl ;  //false is print as 0
    cout<< (a==b) <<endl ;  //false is print as 0   
    cout<< (a!=b) <<endl ;  //true is print as 1
}

// use of boolalpha and noboolalpha in c++ :
#include<iostream>
using namespace std ;
int main(){
    int a = 5 ;
    int b = 6 ;
    cout<< boolalpha ;  //here we use boolalpha to print true and false instead of 1 and 0 ye sirf ek baar use hota hai means once we use it then it will be applicable for all the output after that
    cout<< (a<b) <<endl ;  //true
    cout<< (a>b) <<endl ;  //false
    cout<< (a<=b) <<endl ;  //true
    cout<< noboolalpha ;  //here we use noboolalpha to print 1 and 0 instead of true and false ye sirf ek baar use hota hai means once we use it then it will be applicable for all the output after that
    cout<< (a>=b) <<endl ;  //false
    cout<< (a==b) <<endl ;  //false  
    cout<< (a!=b) <<endl ;  //true    
}

//boolean me true k means 1 aur false k means 0 hota hai per hmme agr kisi value ko true ya false m lana hai output to boolalpha use krte hai ye ek hi bar lagta hai uske baad jistne bhi boolean operation honge usme true aur false hi aayega until unless hmm use off nhi kr dete , ye off noboolalpha se hota hai isko lagane k baad se vapis se output m 0 & 1 aata haii.


#include<iostream>
using namespace std ;
int main(){
    int a = 5 ;
    int b = 6 ;
    cout<< boolalpha<< (a<b) <<endl ;  //true
    cout<< (a>b) <<endl ;  //false
    cout<< (a<=b) <<endl ;  //true
    cout<< noboolalpha<< (a>=b) <<endl ;  //0
    cout<< (a==b) <<endl ;  //0
    cout<< (a!=b) <<endl ;  //1    
}
