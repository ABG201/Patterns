//Calculator
#include<iostream>
using namespace std;
int main (){
    
    int n = 5;
    for(int j =1; j<=n; j++){
        for(int row=1; row<=n; row++){
       int val = 1;
       for(int col = 1; col<=row; col++){

           cout<< "*";
           cout << " ";
           j = j+1;
            //val = val+1;
       }
        cout <<endl;
    }
    }
    for(int row=1; row<=n; row++){
       int val = 1;
       for(int col = 1; col<=n; col--){

           cout<< "*";
           cout << " ";
           //j = j+1;
            //val = val+1;
       }
        cout <<endl;
    }
    }
    
