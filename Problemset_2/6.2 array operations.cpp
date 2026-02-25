#include <iostream>
using namespace std;
void printArray(int array[],int &n) {
	int i=0;

	for(;n>=i;--n) {
		if(n-1==i) {
			cout<<array[i];
			break;
		}
		cout<<array[n-1]<<',';


	}


}
int main() {
	int arr[]= {1,2,3,4,5,6,7,8,9,10};
	int n=10;
	printArray(arr,n);
}