// ctil.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <fstream>
#include <iostream>
#include <string>
enum AppErrors
{
	CannotOpenFile = 1, // An input file cannot be opened
	BadArgumentCount = 2, // Not enough parameters
};

int main(int argc, char* argv[])
{
	std::cout << "Hello World!\n";

	std::ifstream infile(argv[1]);
	if (!infile)
	{
		std::cerr << "ERROR: Cannot open file" << std::endl;
		exit(AppErrors::CannotOpenFile);
	}

	// for now, assume argument is a file and print out line-by-line
	std::string line;
	std::string newName;
	newName = ((std::string)argv[1]).substr(0, ((std::string)argv[1]).find(".")) + ".html";
	//std::cout << "new filename is: " + newName;

	// open output file
	std::ofstream outfile(newName);
	if (outfile.is_open())
	{
		while (infile)
		{
			std::getline(infile, line);
			std::cout << line << std::endl;

			//outfile << "<p>" + line + "</p>" << std::endl;
			outfile << "<p>" + line + "</p>";
		}
		outfile.close();

	}
	else
	{
		std::cerr << "ERROR: Cannot open file" << std::endl;
		exit(AppErrors::CannotOpenFile);
	}

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
