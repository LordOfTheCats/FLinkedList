#include "Header.h"
#include <stdlib.h>
#include <iostream>

int main(void) {
	node testList;
	int temp;
	int x = 1;
	int y = 1;

	testList.data = 1;
	testList.append(1);
	for (int i = 0; i < 25; i++) {
		temp = x;
		x = x + y;
		y = temp;
		testList.append(x);
	}
	
	for (int i = 0; i < 25; i++) {
		cout << testList.retrieve(i)<<"\n";
	}

	cin >> temp;
}