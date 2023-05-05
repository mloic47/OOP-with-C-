#include <iostream>

using namespace std;

int main(){
    
    // int a,b,x; //whole number datatype
    // cout<<"enter first and second number"<<endl;
    // cin>>a>>b;
    // // cout<<"enter Second number"<<endl;
    // // cin>>b;
    // x = a*b; // C++ is case sensitive
    // cout<<"The answer is "<<x<<endl;

    // ---------------------------- Float Data type decimal-------------------------
    // float v1, v2, v3;
    // cout<<"enter first and second number"<<endl;
    // cin>>v1>>v2;
    // v3 =v1/v2;
    // cout<<"The answer is "<<v3<<endl;

    // ---------------------- Double Data type longer decimal--------------------------
    // float v1, v2, v3;
    // cout<<"enter first and second number"<<endl;
    // cin>>v1>>v2;
    // v3 =v1/v2;
    // cout<<"The answer is "<<v3<<endl;

    //-----other data types ---------
    // string d;
    // short int e;
    // long int f; //longer version of ints
    // unsigned int a; // stores only positive ints
    // bool attend = true;

    //---------------Program---------
    int age;
    float score;
    string name;
    bool student;
    cout<<" enter students name"<<endl;
    cin>>name;
    cout<<" enter students age"<<endl;
    cin>>age;
    cout<<" enter students score"<<endl;
    cin>>score;

    cout<<" Your name is "<<name<<", your age is "<<age<<", and you have a score of "<<score<<endl;


    return 0; // tells processor program is done running
}