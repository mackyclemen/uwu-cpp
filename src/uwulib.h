#pragma once
#include <string>

namespace uwu {
	
	std::string translate(std::string input) {
		std::string result;
		
		// Grab each character from the input to check
		// if a letter from the switch cases hit
		for(int i = 0; i <= input.length(); i++) {
			
			// Variables for easy referencing
			char currentChar = input[i];
			char previousChar = '\0';

			// Just in case, this checks the current count
			// to avoid errors, most especially
			// the OutOfBoundsException (if this has one)
			if (i > 0) {
				previousChar = input[i - 1];
			}

			// Switch cases for uwuness
			switch(currentChar) {
				case 'L':
				case 'R':
					result += "W";
					break;
				case 'l':
				case 'r':
					result += "w";
					break;
				
				// This is a special case and it needs the
				// previous letter for context.
				case 'o':
				case 'O':
					// If it hits, then add the adorable "y"
					// to the current letter "o"
					switch(previousChar) {
						case 'n':
						case 'N':
						case 'm':
						case 'M':
							result += "yo";
							break;
						default:
							result += currentChar;
					}
				break;
			default:
				result += currentChar;
			}
		}

		// Cherry on top
		result.append("uwu");	

		return result;
	}

}
