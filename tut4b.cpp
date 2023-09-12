#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[5];
    int avg = 0;
    for(int i=0;i<5;i++){
        cout<<"Enter the marks:";
        cin>>arr[i];
        avg = avg + arr[i];
    }
    avg = (avg/5);
    
    if(avg<=100 && avg>=90){
        cout<<"o";
    }else if(avg<=89 && avg>=85){
        cout<<"A+";
    }else if(avg<=84 && avg>=75){
        cout<<"A";
    }else if(avg<=74 && avg>=65){
        cout<<"B+";
    }else if(avg<=64 && avg>=55){
        cout<<"B";
    }else if(avg<=54 && avg>=40){
        cout<<"Pass";
    }else{
        cout<<"Fail";
    }
}