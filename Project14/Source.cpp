#include<iostream>

using namespace std;

void Swap(int& ra, int& rb) {
	ra+=rb;
	rb = ra - rb;
	ra-=rb;
}

void main() {
	int a = 2;
	int& ra = a;
	int b = 4;
	int& rb = b;
	cout << a << '\t' << b << endl;
	Swap(ra, rb);
	cout << a << '\t' << b << endl;
}