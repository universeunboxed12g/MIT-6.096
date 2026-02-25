# include <iostream>
using namespace std;
int sum(const int &n1,const int &n2){
    return n1+n2;
}
double summation(const double x,const double y){
    return x+y;
}
int summing(int const &x=0,int const &y=0, int const &w=0,int const &z=0){
    return x+y+w+z;
}
double summation2(double const &x=0.0, double const &y=0.0,double const &z=0.0,double const &a=0.0)
{
    return x+y+z+a;
}

int main(){
    int num1=6;
    int num2=3;
    cout<<summation(2.4,2.6)<<'\n';
    cout<<sum(num1,num2)<<'\n';
    sum(1,10.0);
    cout<<summing(5,6)<<'\n';
    cout<<summation2(2.5,2.4);
}
