#include <iostream>
#include <string>
#include "Process.h"

namespace cdot
{
	std::string Process::toParagraph(std::string line)
	{
		return "<p>" + line + "</p>" + "\n";
	}
}