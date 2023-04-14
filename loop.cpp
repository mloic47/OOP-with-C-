#include <iostream>

using namespace std;

int main(){
   int a;
   string myname;
   cout<<"enter the nimber of iterations and your name"<<endl;
   cin>>a>>myname;

//    int i=0;
//    while(i<a){
//     //while this is this do this
//     cout<<"your name is  "<<myname<<endl;
//     i++;
//    }

//    // --------- For Loop ------------
//    // as longs as this is this do this
//    for(int l = 0; l<a; l++){
//     cout<<"your name is  "<<myname<<endl;
//    }


   // --------- Dowhile Loop -----------
   // what you should before any condition happens
   int j=0;
//    do{
//     cout<<"people call you "<<myname<<endl;
//     j++;
//    }while(j<a);
    start:
    j++;
    cout<<myname<<" is what people call me"<<endl;
    if(j<a){
        goto start;
    }
   
    return 0;
}