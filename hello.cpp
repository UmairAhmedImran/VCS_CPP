#include <algorithm>
#include <complex>
#include<iostream>
#include <ostream>
#include <string>
using namespace std;


void initMethod(string initCommand) {
	cout << initCommand << endl;
}
void helpMethod(string helpCommand) {
	cout << helpCommand << endl;
}

void pushMethod(string pushCommand) {
	cout << pushCommand << endl;
}

void pullMethod(string pullCommand) {
	cout << pullCommand << endl;
}

void addMethod(string addCommand, string filename) {
	cout << addCommand << endl;

	cout << filename << endl;
}

void commitMethod(string commitCommand, string message) {
	cout << commitCommand << endl;

	cout << message << endl;
}

void logMethod(string logCommand) {
	cout << logCommand << endl;
}

void statusMethod(string statusCommand) {
	cout << statusCommand << endl;
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
		} 
		else if (command1 == "--help" && argc == 2 ) {
			helpMethod(command1);
		}
		else if (command1 == "push" && argc == 2) {
			pushMethod(command1);
		}
		else if (command1 == "pull" && argc == 2) {
			pullMethod(command1);
		}
		else if (command1 == "add" && argc == 3) {
			string filename = argv[2];
			addMethod(command1, filename);
		}
		else if (command1 == "commit" && argc == 3) {
			string message = argv[2];
			commitMethod(command1, message);
		} 
		else if (command1 == "log" && argc == 2) {
			logMethod(command1);
		}
		else if (command1 == "status" && argc == 2) {
			statusMethod(command1);
		}
		else {
			throw 404;
		}
		}	
		catch (...) {
		
			cout << "No such method\ntype ./pit --help for help" << endl;
		}
	}
	return 0;
}
