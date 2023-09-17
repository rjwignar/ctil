// ctil.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <filesystem>
#include <fstream>
#include <iostream>
#include <string>
#include "Process.h"
#include "ctil.h"

namespace fs = std::filesystem;
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

	// initialize ctil object
	cdot::ctil ctil;

	std::string newName;
	newName = ((std::string)argv[1]).substr(0, ((std::string)argv[1]).find(".txt")) + ".html";
	//std::cout << "new filename is: " + newName;

	// create destination directory (./ctil by default)
	std::string dir = "ctil";
	if (std::filesystem::exists(dir))
		std::filesystem::remove_all(dir);
	std::filesystem::create_directory(dir);

	// create newFile name using dir and newName
	std::string newFile = dir + "/" + newName;
	// open output file
	std::ofstream outfile(newFile);
	if (outfile.is_open())
	{
		ctil.generateHTML(infile, outfile, newFile);
		outfile.close();
	}
	else
	{
		std::cerr << "ERROR: Cannot open file: " + newFile << std::endl;
		exit(AppErrors::CannotOpenFile);
	}

	return 0;
}
