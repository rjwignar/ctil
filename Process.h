#ifndef CDOT_PROCESS_H_
#define CDOT_PROCESS_H_

#include <iostream>
#include <string>

namespace cdot
{
	enum class commands
	{
		VERSION, HELP, OUTPUT, ITEM, INVALID
	};
	class Process
	{

	public:
		std::string toParagraph(std::string line);
		std::string toTitle(std::string line);
		std::string removeWhitespace(const char* str);
		std::string toHorizontalBreak(std::string line);
	};
	int allArguments(int argc, char* argv[]);

}
#endif // !CDOT_PROCESS_H_