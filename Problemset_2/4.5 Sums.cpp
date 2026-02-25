# include <iostream>
using namespace std;

int sum(int const numbers[],int const numberslength){
    long addition=0;
    for(int i=0;i<numberslength;i++){
        addition+=numbers[i];
    }
    return addition;
}
int main(){
    int n[]={1,2,3,66,96,90};
    cout<<sum(n,6);
}
