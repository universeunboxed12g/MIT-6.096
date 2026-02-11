#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number from 1-10 ";
    cin>>n;
    switch(n){
        case 1:
            cout<<"The factorial of 1 is 1"<<"\n";
            break;
        case 2:
            cout<<"The factorial of 2 is 2\n";
            break;
        case 3:
            cout<<"The factorial of 3 is 6\n";
            break;
        case 0:
            cout<<"The factorial of 0 is 1\n";
            break;
        case 4:
        cout<<"The factorial of 4 is 24\n";
            break;
        case 5:
            cout<<"The factorial of 5 is 120\n";
            break;
        case 6:
            cout<<"The factorial of 6 is 720\n";
            break;
        case 7:
            cout<<"The factorial of 7 is 5040\n";
            break;
        case 8:
            cout<<"The factorial of 8 is 40320\n";
            break;
        case 9:
            cout<<"The factorial of 9 is 362880\n";
            break;
        case 10:
            cout<<"The factorial of 10 is 3628800\n";
            break;
    return 0;
    }
    
}