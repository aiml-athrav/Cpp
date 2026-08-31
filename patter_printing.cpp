//star rectangle

//Method1:
#include<iostream>
using namespace std;
int main(){
    int i,j;
    for(i=1;i<=3;i++){
        for(j=1;j<=7;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

//Method 2: takin input row and column from user 
#include<iostream>
using namespace std;
int main(){
    int i,j;
    int n;                
    cout<<"enter the number of row:";
    cin>>n;
    int m;
    cout<<"enter the number of column:";
    cin>>m;
    for(i=1;i<=n;i++){          //i show the number of rows        
        for(j=1;j<=m;j++){      //j show the number of columns
            cout<<"* ";
        }
        cout<<endl;
    }
}                                  // * * * * * *   ----> row 1
                                   // * * * * * *   ----> row 2
                                   // * * * * * *   ----> row 3
                                   // * * * * * *   ----> row 4



//star square

//Method 1:
#include<iostream>
using namespace std;
int main(){
    int i,j;
    for(i=1;i<=4;i++){
        for(j=1;j<=4;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

//Method 2: takin input row and column from user
#include<iostream>
using namespace std;
int main(){
    int i,j;
    int n;
    cout<<"enter either a number of row or colum:";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}


//number square 
// 1 2 3 4 
// 1 2 3 4 
// 1 2 3 4 
// 1 2 3 4 

#include<iostream>
using namespace std;
int main(){
    int i,j;
    int n;
    cout<<"enter the number:";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}



//number rectangle
// 1 2 3 4 5 6 7 
// 1 2 3 4 5 6 7 
// 1 2 3 4 5 6 7 
// 1 2 3 4 5 6 7

#include<iostream>
using namespace std;
int main(){
    int i,j;
    int n;
    cout<<"enter the number of row :";
    cin>>n;
    int m;
    cout<<"enter the number print in column  ";
    cin>>m;
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}



// 1 1 1 1 1 1 1 
// 2 2 2 2 2 2 2 
// 3 3 3 3 3 3 3 
// 4 4 4 4 4 4 4 

#include<iostream>
using namespace std;
int main(){
    int i,j;
    int n;
    cout<<"enter the number of row :";
    cin>>n;
    int m;
    cout<<"enter the number print in column  ";
    cin>>m;
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

// 65 66 67 68 
// 65 66 67 68 
// 65 66 67 68 
// 65 66 67 68 

#include<iostream>
using namespace std;
int main(){
    int i,j;
    int n;
    cout<<"enter the number:";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            cout<<(j+64)<<" ";
        }
        cout<<endl;
    }
}

// A B C D 
// A B C D 
// A B C D 
// A B C D 

#include<iostream>
using namespace std;
int main(){
    int i,j;
    int n;
    cout<<"enter the number:";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            cout<<char(j+64)<<" ";
        }
        cout<<endl;
    }
}

// A A A A A 
// B B B B B 
// C C C C C 
// D D D D D 
// E E E E E 

#include<iostream>
using namespace std;
int main(){
    int i,j;
    int n;
    cout<<"enter the number:";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            cout<<char(i+64)<<" ";
        }
        cout<<endl;
    }
}



// a a a a 
// B B B B 
// c c c c 
// D D D D 

#include<iostream>
using namespace std;
int main(){
    int i,j;
    int n;
    cout<<"enter the number:";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i%2==0){
                cout<<char(i+64)<<" ";
            }
            else{
                cout<<char(i+96)<<" ";
            }
        }
        cout<<endl;
    }
}


//star tringle
// * 
// * * 
// * * *

#include<iostream>
using namespace std;
int main(){
    int i,j;
    int n;
    cout<<"enter the number:";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}


//number tringle:
// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 

#include<iostream>
using namespace std;
int main(){
    int i,j;
    int n;
    cout<<"enter the number:";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}


//Alphabet tringle:
// A 
// A B 
// A B C 
// A B C D 
// A B C D E 


#include<iostream>
using namespace std;
int main(){
    int i,j;
    int n;
    cout<<"enter the number:";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<char(j+64)<<" ";
        }
        cout<<endl;
    }
}



// 1 
// 2 2 
// 3 3 3 


#include<iostream>
using namespace std;
int main(){
    int i,j;
    int n;
    cout<<"enter the number:";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}





//Alphanumeric tringle:
// 1 
// A B 
// 1 2 3 
// A B C D 


#include<iostream>
using namespace std;
int main(){
    int i,j;
    int n;
    cout<<"enter the number:";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            if(i%2==0){
                cout<<char(j+64)<<" ";
            }
            else{
                cout<<j<<" ";
            }
        }
        cout<<endl;
    }
}



//star tringle horizontal:
// * * * * * 
// * * * * 
// * * * 
// * * 
// * 

//Method 1:
#include<iostream>
using namespace std;
int main(){
    int i,j;
    int n;
    cout<<"enter the number n:";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n+1-i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

//Method 2:
#include<iostream>
using namespace std;
int main(){
    int i,j;
    int n;
    cout<<"enter the number n:";
    cin>>n;
    for(i=0;i<=n;i++){
        for(j=1;j<=n-i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}