#include <iostream>
#include <cmath>
using namespace std;
bool isprime(int num) {
	if(num==1) {
		cout<<1<<"\n";

	}
	if(num<2) {
		return false;
	}
	for(int i=2; i*i<=num; i++) {
		if(num%i==0) {
			return false;

		}
	}
	return true;


}
int main()
{
	int num;
	cin>>num;
	for(int i=1; i<=num; i++) {
		if(isprime(i)) {
			cout<<i<<"\n";
		}
	}

}