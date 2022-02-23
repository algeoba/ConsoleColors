#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <string> 

using namespace std;

string a, b, c;
int i, j, k;
float x, y, z;

int main() {
	i = 1;
	while (i < 14) {
		
		Sleep(1500);
		system("CLS");

		a = to_string(rand()%9);
		b = to_string(rand()%9);

		if (a != b) {
			c = a + b;
			system(("\"Color " + c + "\"").c_str());
			cout << "background: " << a << endl;
			cout << "font color: " << b << endl;
			cout << string(21, '=') << endl;
			for (j = 0; j < 10; j++) cout << string(10 - j, ' ') << string(1 + (j * 2), '*') << endl;
			}

		i++;

	}

}