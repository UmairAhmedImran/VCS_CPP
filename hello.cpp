#include<iostream>
#include <ostream>
#include <string>
using namespace std;


void initMethod(string initCommand) {
	cout << "init" << endl;
}

int main(int argc, char* argv[]) {
	
	if (argc == 1) {
		cout << "error no method given" << endl;
		cout << "type ./pit --help for help" << endl;
	}
	else if (argc >= 4) {
		cout << "Too many arguments are given" << endl;
	}
	else {
		string command1 = argv[1];
		/* string command2 = "\0"; */
		try {
		if (command1 == "init" && argc == 2) {
			initMethod(command1);
		} else {
			throw 505;
		}
		}
		catch (...) {
		
			cout << "No such method\ntype ./pit --help for help" << endl;
		}
	}
	return 0;
}
