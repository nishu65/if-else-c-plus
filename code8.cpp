#include <iostream>
using namespace std;

int main() {
	int a,b;
	b = 0 ;
	cout << "hello there !" << endl;
	cout << "enter a no. =";
	cin >> a;
	while (b <= 10) {
		cout << "the number is  "<<a<<"*"<<b <<"=" << a * b << endl;
		b++;
	}
	return 0;
}