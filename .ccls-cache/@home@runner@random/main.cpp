#include <stdlib.h> 
#include <iostream>
#include "Random.h"

using namespace std;

int main() {
	Random r;

	cout << "0에서 " << RAND_MAX << "까지의랜덤정수 10개 —" << endl;//Lendl
	for (int i = 0; i < 10; i++) {

		int n = r.next();
		cout << n << ' ';

	}

	cout << endl << endl << "2에서 4까지의랜덤정수 10개" << endl;
	for (int i = 0; i < 10; i++) {

		int n = r.nextInRange(2, 4);
		cout << n << ' ';
	}

	cout << endl;
}
