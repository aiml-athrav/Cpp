//printing hello world 
// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"hello world" ;     //cout is use to print output 
// }

//keywords for new line 
// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"athrav"<<endl ;   // <<endl means endline use to create new line 
//     cout<<"tanisha\n" ;      // same as endl /n is also use difference is that /n used inside ""  and <<endl out of ""
//     cout<<"khandelwal";
// }

//printing text and number 
// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"18 + 1 "<<endl ;  //when we type any number in "" it act as a word or text 
//     cout<<18+1 ;             //when we type any number without "" then it is used as a number all math symbol were work here 
// }

//variables :
// #include<iostream>
// using namespace std;
// int main(){
//     int x;  //declaration of variable 
//     x =6 ;  //initalization of variable
//     cout<< x <<endl;
//     int y =7 ;
//     cout<< y <<endl ;
//     int a = 34 , b = 36 ;
//     cout<< a+b <<endl ;
//     cout<<x<<endl<<y ;
// }

// modifying value of variable 
// #include<iostream>
// using namespace std;
// int main(){
//     int x;  //declaration of variable 
//     x =6 ;  //initalization of variable
//     cout<< x <<endl;
//     x = 92;  // now x is no more 6 it coverted to 92 
//     cout<<x ;
//     x = x + 7 ;
//     cout<< x ;
// }

// #include<iostream>
// using namespace std ;
// int main(){
//     int x = 5 , y = 2 ;
//     float a = 33 , b = 4 ;
//     cout<< x/y  <<endl; //here 5/2 is 2.5 but in c++ when we divide integer by integer then the resukt be integer output m roundoff nhi hota integer value aati hai bss kyuki int use kra hai 
//     cout<< a/b ; // here answer comes in point because a,b is floting valuee
// }

//input in c++ :

// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"Enter the radius of circle :";
//     float radius ;
//     cin>>radius ;      // cin>> is use to take input fromn user 
//     cout<<"Area of circle is :";
//     float area = 3.14*radius*radius ;
//     cout<< area ;

// }

// #include<iostream>
// using namespace std ;
// int main(){
//     cout<< "Enter your first number :";
//     float number_1 ;
//     cin>> number_1;
//         cout<< "Enter your second number :";
//     float number_2 ;
//     cin>> number_2;
//         cout<< "Enter your third number :";
//     float number_3 ;
//     cin>> number_3;
//     cout<< "sum of three number is :";
//     float sum = number_1+number_2+number_3 ;
//     cout<< sum ;

// }

// #include<iostream>
// using namespace std ;
// int main(){
//     cout<< "Enter value of principle  :";
//     float principle ;
//     cin>> principle;
//     cout<< "Enter value of rate :";
//     float rate ;
//     cin>> rate;
//     cout<< "Enter value of time :";
//     float time ;
//     cin>> time;
//     cout<< "Simple interest is :";
//     float simple_interest = (principle * rate * time) / 100 ;
//     cout<< simple_interest ;
// }

// Modulus operator:

// #include<iostream>
// using namespace std ;
// int main(){
//     cout<< 5%2 ;  //modulus operator is use to find remainder of division
//     cout<< 2%5 ;  //here 2 is smaller than 5 so remainder is 2 ese case m smallest number is always remainder
//     cout<< 5%-2 ;  //here 5 is positive and -2 is negative so remainder is positive
//     cout<< -5%2 ;  //here -5 is negative and 2 is positive so remainder is negative
//     cout<< -5%-2 ;  //here both are negative so remainder is negative 
// }

// charactter data type :

// #include<iostream>
// using namespace std ;
// int main(){
//     // char data type is use to store single character
//     // a b c d e f g h i j k l m n o p q r s t u v w x y z
//     // A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
//     // 0 1 2 3 4 5 6 7 8 9
//     // ! @ # $ % ^ & * ( ) _ + - = ?
//     char a = 'a' ;  //single character is store in single quote ''
//     char b = 'A' ;
//     char c = '1' ;
//     char d = '!' ;
//     cout<< a <<endl ;
//     cout<< b <<endl ;
//     cout<< c <<endl ;
//     cout<< d <<endl ;
// }

// printing ascii value of character : / TYPE CASTING :
// #include<iostream>
// using namespace std ;
// int main(){
//     char x = 'A';
//     cout<< x <<endl ; //here A is print 
//     cout<< int(x) <<endl ;  //here we use int() to convert character into ascii value or hmm typecasting kr rhe hai charcater ko integer m 
    
//     char y = 'a' ;
//     int ascii_value = int(y) ;  //here we store ascii value in variable
//     cout<< ascii_value <<endl ;  //here we print ascii value of character  

//     char z = '1' ;
//     int ascii_value = (int)z ;
//     cout<< ascii_value <<endl ;  //(int)z, int(z) both are same and this is called explicit typecasting
    
//     char p = '!' ;
//     int ascii_value = p;
//     cout<< ascii_value <<endl ;  //directly giving char value to int variable is clled implicit type csting 
// }

// arithmetic operation on character :
// #include<iostream>
// using namespace std ;
// int main(){
//     char ch1 =  'A' ;
//     char ch2 = 'a' ;
//     cout<< ch1 + ch2 <<endl ;  // jabhi hmm kisi bhi 2 ya 2 se jada character k beech m koi bhi arithmetic operation krvate hai to output m integer value hi aatai hai means ascii value k sath operation hota hai / same agr integer aur character k sath krte hai to bhi integer value hi milege 
// }

// #include<iostream>
// using namespace std ;
// int main(){
//     char x = 'A' ;
//     float y = 2.5 ;
//     cout<< x + y ;  // char + float = float value hi milega
// }

// printing of character value :
#include<iostream>
using namespace std ;
int main(){
    char x = 'A' ;
    cout<< x + 1 <<endl;  //yha p integer value hi print hogi kyuki char + integer = integer value hi milega
    cout<< char(x + 1)<<endl ;  //yha p char use kea hai to add ition to integer m hoga pr output m ascii value check kr k character m result aayega 
}

// c++ m koi bhi math k formula implement krte hai to vo left toright hoti hai : 2* 3/4 = 6/4 = 1.5 ,, 3/4 *2 = o.7 *2 = 0 