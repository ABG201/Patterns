//Calculator
#include<iostream>
using namespace std;
int main (){
    
    int n = 5;
    for(int row=1; row<=n; row++){
       //int val = 1;
       for(int col = 1; col<=row; col++){
           cout<< "*";
            //val = val+1;
       }
        cout <<endl;
    }
}