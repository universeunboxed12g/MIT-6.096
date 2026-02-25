#include <iostream>
#include <array>
using namespace std;
const int LENGTH=3;
const int WIDTH=3;
void printArray(int array[],int &n) {
	int i=0;

	for(; n>=i; --n) {
		if(n-1==i) {
			cout<<array[i];
			break;
		}
		cout<<array[n-1]<<',';


	}
}
array<array<int, WIDTH> ,LENGTH> transpose ( const int input [][LENGTH]) {
	array<array<int,WIDTH>,LENGTH>output{};
	
	for(int i=0; i<LENGTH; ++i) {
		for(int x=0; x<WIDTH; ++x) {
			output[x][i]=input[i][x];
		}
	}
	return output;
}


int main() {
	const int arr[LENGTH][WIDTH]=
	{1,2,3,
	4,5,6,
	7,8,9};
	int out[LENGTH][WIDTH];
	auto result=transpose(arr);
	for(int i=0;i<LENGTH;++i){
	    for(int z=0;z<WIDTH;++z){
	        cout<<result[i][z]<<' ';
	    }
	}
	
}