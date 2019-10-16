#include <iostream>
#include <string>
#include "uwulib.h"

int main(int argc, char** argv) {

	// Initiate a variable to store input
	std::string stringToTranslate;
	
	// Check if we have arguments to be translated.
	if( argc < 2 ) {
		// We greet the user
		std::cout << "Welcome to the uwu translator!" << std::endl;
		std::cout << "Enter string to translate: ";
		
		// Gets user input and saves it to a variable
		std::getline(std::cin, stringToTranslate);
	} else {
		// There's a string argument. Save this to the variable
		// to be translated later.
		stringToTranslate = argv[1];
	}
	
	// runs the translator and prints it out
	std::cout << uwu::translate(stringToTranslate);

	// flushes the cout buffer
	std::cout << std::endl;

	// Return success to command line interpreter

	return 0;
}
