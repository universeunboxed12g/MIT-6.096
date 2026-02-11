    
#include <iostream>
using namespace std;
int main()
{
    int n;
    int result;
    while(true){
        cout<<"enter a number ";
        cin>>n;
        
        if(n>0&&n%5==0){
            cout<<n/5<<"\n";
        }
        else if(n<0&&n%5!=0){
            continue;
        }
    }
    
}