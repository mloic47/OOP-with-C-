// 1. Given a list of N integers, find its mean (as a double), maximum value and minimum value. Your
// program will first ask for N, the number of integers in the list, which the user will input. Then the user will
// input N more numbers.

// steps
// 1- declare the list
// 2- claculate the mean
// 3- find max and min value

#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;
// double mean(){

// }

int main(){
    int N, max, min, sumNumbers = 0;
    double mean;
    vector <int> listOfInts;

    cout<<"How many integers do you want in your list?"<<endl;
    cin>>N;

    for (int i=0; i<N; i++){
        int numbers;
        cout<<"Enter interger No."<<i+1<<" ";
        cin>>numbers;
        listOfInts.push_back(numbers);

        sumNumbers += listOfInts[i];


    }
    max = *max_element(listOfInts.begin(),listOfInts.end());
    min = *min_element(listOfInts.begin(),listOfInts.end());
    mean = sumNumbers/N;
    
    cout<<"The sum of numbers in the list is "<<sumNumbers<<" \nThe Maximum Value is "<<max<<" \nThe Minimum Value is "<<min<<" \nThe Mean is "<<mean<<endl;


    return 0;
}