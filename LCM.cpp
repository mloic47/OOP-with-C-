// write a program that takes 2 ints an brings the lowest common multiple
#include <iostream>

using namespace std;

int main(){
    int a;
    int b;
    int max;
    cout<<"enter yout first and second number"<<endl;
    cin>>a>>b;
    
    (a>b) ? max = a :max = b;
    bool lcm =false;
    while(lcm=false) {
        if (max%a==0 && max%a==0){
            cout<<"your LCM is "<<max<<endl;
        }else{
            max++;
        }
    }

    return 0;
}