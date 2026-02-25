# include <iostream>
using namespace std;

int sum(int const numbers[],int const numberslength){
    return numberslength==0 ? 0 :numbers[0]+sum(numbers+1,numberslength-1);
    
}
int main(){
    int n[]={1,2,3};
    cout<<sum(n,3);
}