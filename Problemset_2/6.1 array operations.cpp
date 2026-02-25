#include <iostream>
using namespace std;
void printArray(int array[],int &n){
    int i=0;
    
    for(;i<n;i++){
        if(i+1==n){
            cout<<array[i];
            break;
        }
        cout<<array[i]<<',';
        
        
    }
    
    
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n=10;
    printArray(arr,n);
}