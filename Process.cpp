#include <iostream>
#include <string>
#include <algorithm>
#include <filesystem>
#include "Process.h"

namespace cdot
{
	std::string Process::toParagraph(std::string line)
	{
		return "<p>" + line + "</p>" + "\n";
	}

	std::string Process::toTitle(std::string title)
	{
		return "<title>" + title + "</title>" + "\n"
			+ "<h1>"+title+"</h1>" + "\n";
	}

	std::string Process::removeWhitespace(const char* str)
	{
		std::string strn(str);
		strn.erase(std::remove_if(strn.begin(), strn.end(), ::isspace), strn.end());
		return strn;
	}
	int cdot::allArguments(int argc, char* argv[])
	{
		cdot::Process processor;
		int result = 0;
		commands cmd{ commands::INVALID };

		// process first argument and make sure it's valid by looking for valid commands or textfile/directory

		// trim all whitespaces
		std::string temp = processor.removeWhitespace(argv[1]);

		// use for_each algorithm to convert argument to all lower case
		std::for_each(temp.begin(), temp.end(), [](char& c)
			{
				c = ::tolower(c);
			});

		// --version flag enabled
		if (temp == "-v" || temp == "--version")
		{
			cmd = commands::VERSION;
		}
		// --help flag enabled
		else if (temp == "-h" || temp == "--help")
		{
			cmd = commands::HELP;
		}
		// --output flag enabled
		else if (temp == "-o" || temp == "--output")
		{
			cmd = commands::OUTPUT;
		}
		// the first argument after ctil.exe is a file or directory
		else if ((std::filesystem::exists(temp)))
		{
			cmd = commands::ITEM;
		}
		// invalid argument
		else
		{
			cmd = commands::INVALID;
		}

		switch (cmd)
		{
		case commands::VERSION:
			// display version information
			break;
		case commands::HELP:
			// show usage information
			break;
		case commands::OUTPUT:
			// follow output logic
			break;
		case commands::ITEM:
			// follow standard logic for directory/text file
			break;
		}

		return result;
	}
}