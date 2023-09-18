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
	//std::cout << "Hello World!\n";

	// if argv[1]/ last argument is a directory
	std::string target = argv[argc - 1];
	if (std::filesystem::is_directory(argv[argc - 1]))
	{
		cdot::ctil ctil;

		// create destination directory (./ctil by default)
		std::string dir = "ctil";
		if (std::filesystem::exists(dir))
			std::filesystem::remove_all(dir);
		std::filesystem::create_directory(dir);

		std::cout << "Argument is a directory" << std::endl;//remove later
		std::cout << argv[argc - 1] << std::endl;
		for (const std::filesystem::directory_entry& item : std::filesystem::recursive_directory_iterator(target))
		{
			std::cout << "Found item: " << item << std::endl;
			std::string itemPath = item.path().string();
			if (itemPath.find(".txt") == std::string::npos)
			{
				std::cout << "Item: " << item << " is not a text file" << std::endl;
			}
			else
			{

				std::ifstream infile(item.path().string());
				if (!infile)
				{
					std::cerr << "ERROR: Cannot open file" << std::endl;
					exit(AppErrors::CannotOpenFile);
				}

				std::cout << "File opened: " << item << std::endl;


				std::string itemName = item.path().filename().string();

				std::string newName;
				newName = itemName.substr(0, itemName.find(".txt")) + ".html";
				//std::cout << "new filename is: " + newName;



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
				infile.close();
			}
		}
	}
	else //logic for single text file
	{

		std::ifstream infile(argv[argc - 1]);
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
	}

	return 0;
}
