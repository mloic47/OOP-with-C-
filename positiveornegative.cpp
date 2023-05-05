#include <iostream>

using namespace std;

// finction overloading, calling multiple functions with thesame but giving them different vars
// function
// int print(int a){
//     (a<0)?cout<<"negative":cout<<"positive";
// }

int print(int a){
    cout<<"value is an Integer "<<a<<endl;
}
int print(char *a){
    cout<<"value is a Character "<<a<<endl;
}
int print(float a){
    cout<<"value is a Float "<<a<<endl;
}

int main(){
    int a,b;
    cout<<"enter a number"<<endl;
    cin>>b;

    print(b);
}