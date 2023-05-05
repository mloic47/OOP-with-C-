#include <iostream>

using namespace std;

int increment(int a){
    a+=1;
    cout<<"a is = "<<a<<endl;
}
// pass by value only value stored is passed
int main(){
    int q=3;
    increment(q);
    cout<<"q is = "<<q<<endl;

    return 0;
}