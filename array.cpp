

// finding number from array 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    int arr[]={1,2,3,4,56,67,86,88,9,0};
    int x= sizeof(arr)/4;
    bool a = false;
    for(int i=0; i<x;i++){
        if(n== arr[i])
        a = true;
    }
    if(a==true){
        cout<<"number found";
    }
    else{
        cout<<"number not found";
    }
}

// check whether the array is sorted or not

#include<iostream>
using namespace std;
int main(){
    int arr[]={1,4,8,3,4,0};
    int n = sizeof(arr)/4;
    bool flag = true;
    for(int i=0;i<n-1;i++){
        int x = i+1;
        if(arr[i]>arr[x]){
            flag = false;
            break;
        }
    }
    if(flag == false){
        cout<<"array is not sorted";
    }
    else{
        cout<<"array is sorted";
    }
}


// finding second largest number from array

//Method 1: removing the largest element from the array ;

#include<iostream>
using namespace std;
int main(){
    int arr[]={10,30,50,40,39};
    int mx=0, i,index=0;
    int x= sizeof(arr)/4;
    for(i =0; i<x;i++){
        if(mx<arr[i]){
            mx= arr[i];
            index=i;
        }
      
    }
    arr[index]=0;
    int mx2 = 0;
    for(int i = 0;i<x;i++){
        if(mx2<arr[i]){
            mx2=arr[i];
        }
    }
    cout<<mx2;
}


//Method 2: