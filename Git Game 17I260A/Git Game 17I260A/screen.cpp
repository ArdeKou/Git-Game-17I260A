#include "screen.h"
#include <string>

using namespace std;


void printScreen(std::string text, std::string options)
{
	string lines[15];
	string optionLines[8];
	int times;

	text += "\n";
	options += "\n";
	//split to lines

	for (int i = 0; i < 15; i++) {

		lines[i] = text.substr(0, text.find("\n"));
		text.erase(0, text.find("\n") + 1);
	}

	for (int i = 0; i < 8; i++) {

			optionLines[i] = options.substr(0, options.find("\n"));
			options.erase(0, options.find("\n") + 1);
	}


	// add spaces

	for (int i = 0; i < 15; i++) {
		times = 100 -lines[i].length();
		for (int x = 0; x < times; x++) {
			lines[i] += " ";
		}
	}

	//prints

	cout << "############################################################################################################" << endl; // 100 characters
	cout << "##                                                                                                        ##" << endl;

	for (int i = 0; i < 15; i++) {
		cout << "##  " << lines[i] << "  ##" << endl;
	}
	
	cout << "##                                                                                                        ##" << endl;
	cout << "############################################################################################################" << endl;
	cout << endl;

	for (int i = 0; i < 8; i++) {
		cout << "  " << optionLines[i] << endl;
	}
}
