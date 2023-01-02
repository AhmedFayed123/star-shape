#include<iostream>

using namespace std;
int main() {

	for (int rows = 1; rows <= 5; rows++) {
		for (int stars = 1; stars <= rows; stars++) {
			cout << "*";
		}
		cout << endl;
	}
	
	return 0;
}