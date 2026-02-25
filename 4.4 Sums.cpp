# include <iostream>
using namespace std;

int sum(int const &x=0,int const &y=0, int const &w=0,int const &z=0){
    return x+y+w+z;
}

int sum(int const &z=0,int const &y=0,int const &x=0,int const &a=0){
    return z+y+x+a;
}
int main(){
    sum(3, 5, 7);
}
// The compiler throws an error