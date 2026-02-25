# include <iostream>
using namespace std;
int sum(const int &n1,const int &n2){
    return n1+n2;
}
double summation(const double x,const double y){
    return x+y;
}
int main(){
    int num1=6;
    int num2=3;
    cout<<summation(2.4,2.6)<<'\n';
    cout<<sum(num1,num2);
}