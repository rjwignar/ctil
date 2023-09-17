#include <iostream>
#include <string>
#include <fstream>
#include "ctil.h"
namespace cdot
{

	void ctil::generateHTML(std::ifstream& infile, std::ofstream& outfile, std::string filename)
	{
		std::string line;
		outfile << "<!doctype html>" << std::endl
			<< "<html lang='en'>" << std::endl
			<< "<head>" << std::endl
			<< "<meta charset = 'utf-8'>" << std::endl
			<< "<title>"
			<< filename
			<< "</title>" << std::endl
			<< "<meta name='viewport' content='width=device-width, initial-scale=1'>" << std::endl
			<< "</head>" << std::endl
			<< "<body>" << std::endl;
		while (infile)
		{
			// for debug purposes - will modify in later versions
			std::getline(infile, line);
			//std::cout << line << std::endl;
			outfile << "<p>" + line + "</p>" << std::endl;
		}
		outfile << "</body> " << std::endl
			<< "</html>" << std::endl;
	}
}