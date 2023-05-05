// write a program tha compares the greatest between 2 numbers
#include <iostream>

using namespace std;

int main(){
    float v1, v2, v3;
    cout<<"enter first and second number"<<endl;
    cin>>v1>>v2;
    v3 =v1/v2;
    if (v1>v2){
        cout<<v1;
    } 
    else if (v1=v2){
        cout<<"The numbers are equal";
    }  
    else (v1<v2){
        cout<<v2;
    } 
    

    return 0;
}