#include <iostream>
#include <string>
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
}