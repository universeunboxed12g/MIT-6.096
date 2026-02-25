#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;
double pie_estimate(int &n) {
	double x;
	double y;
	srand(time(0));
	int inside_circle=0;
	for(int i=0; i<n; i++) {

		x=(rand()+0.0)/RAND_MAX;
		y=(rand()+0.0)/RAND_MAX;
		double d=sqrt((x*x)+(y*y));
		if(d<=1) {
			inside_circle+=1;
		}
	}
	double pi=4.0*inside_circle/n;
	return pi;




}
int main() {
	int n=5000000;
	cout<<pie_estimate(n);
}

