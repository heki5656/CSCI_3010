#include<iostream>
#include<string>
#include "functions_to_implement.cpp"
using namespace std;

int main(){
    std::vector<int> vect;
    vect.push_back(10);
    vect.push_back(21);
    vect.push_back(30);
    EvenMask(vect);
    //cout << EvenMask(vect) << endl;
        
    return 0;
}