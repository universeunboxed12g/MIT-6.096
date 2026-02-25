#include <iostream>
using namespace std;

void swap(int &a,int &b){
    int j=a;
    a=b;
    b=j;
}

int main(){
    int z=7;
    int x=6;
    cout<<x<<' '<<z<<'\n';
    swap(x,z);
    cout<<x<<' '<<z<<'\n';
}