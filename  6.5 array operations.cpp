#include <iostream>
using namespace std;
void printArray(int array[],int &n) {
	int i=0;
	int *ptr=array;

	for(;n>=i;++i) {
		if(n-1==i) {
			cout<<*ptr+i;
			break;
		}
		cout<<*ptr+i<<',';


	}


}
int main() {
	int arr[]= {1,2,3,4,5,6,7,8,9,10,11};
	int n=10+1;
	printArray(arr,n);
}