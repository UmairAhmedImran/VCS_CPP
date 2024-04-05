#include <algorithm>
#include <cstddef>
#include<iostream>
#include <ostream>
using namespace std;

int main(int argc, char* argv[]) {
	/* cout << command << endl; */
	if (argc == 1) {
		cout << "error no method given" << endl;
		cout << "type ./pit --help for help" << endl;
	}
	else if (argc >= 4) {
		cout << "Too many arguments are given" << endl;
	}
	else {
		string command = argv[1];
		cout << command << endl;		
	}
	return 0;
}
