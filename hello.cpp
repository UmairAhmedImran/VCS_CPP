#include <fstream>
#include<iostream>
#include <ostream>
#include <pstl/glue_algorithm_defs.h>
#include <string>
using namespace std;


void initMethod(string fileName,string initCommand) {
	fileName.erase(0,2);
	string programFile = fileName + ".txt";
	ifstream previousFIle(programFile); 
	if (previousFIle) {
		cout << "Pit have been initialized\nor some file with same name is causing error\ntype --help command for help." << endl;
	}else {	
	ofstream MyFile(programFile);
	cout << "Pit have been initialized" << endl;
	MyFile.close();
}
	}
void helpMethod(string helpCommand) {
	cout << "\nPit have total of 6 commands. The commands can be used in a simple fashion.\n To execute a command type the use ./[name of executable file] [command] [option of command if available]\n\n\n The function of each command are defined below:\n\n\t --help\t\t\t used for showing help about the pit.\n\n\t init\t\t\t used to initialize a pit repository.\n\n\t add [file]\t\t used to add file(s) to be staged.\n\n\t commit [message]\t used to commit the changes of a file.\n\n\t log\t\t\t used to see the log file.\n\n\t push\t\t\t used to push the changes of the file.\n " << endl;
}
void pushMethod(string pushCommand) {
	cout << pushCommand << endl;
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
		try {
		if (command1 == "init" && argc == 2) {
			initMethod(argv[0], command1);
		} 
		else if (command1 == "--help" && argc == 2 ) {
			helpMethod(command1);
		}
		else if (command1 == "push" && argc == 2) {
			pushMethod(command1);
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
