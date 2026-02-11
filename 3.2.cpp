/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>
#include <numeric>
using namespace std;
int main()
{
	int n;
	cin>>n;
	list<int> numbers;
	int number;
	int i=0;
	for(; i<n; i++) {
		cout<<"Enter a number ";
		cin>>number;
		numbers.push_back(number);

	}
	for(const int num:numbers) {
		cout<<num<<"\n";
	}

	auto min=min_element(begin(numbers),end(numbers));
	int minimum=*min;
	cout<<"min is "<<minimum<<"\n";
	auto max=max_element(begin(numbers),end(numbers));
	int maximum=*max;
	cout<<"max is "<<maximum<<"\n";
	int total=numbers.size();
	double sum=accumulate(numbers.begin(),numbers.end(),0.0);
	double avg=sum/n;
	cout<<"mean is "<<avg;
	int range=maximum-minimum;
	cout<<"range is "<<range<<"\n";






	return 0;

}