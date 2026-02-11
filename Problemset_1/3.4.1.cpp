    
#include <iostream>
using namespace std;
int main()
{
    int n;
    int result;
    while(true){
        cout<<"enter a number ";
        cin>>n;
        
        result=(n>0)&&(n%5==0)?(n/5):-1;
        cout<<result<<"\n";
    }
    
}
