#ifndef CDOT_PROCESS_H_
#define CDOT_PROCESS_H_

#include <iostream>
#include <string>

namespace cdot {
enum class commands { VERSION, HELP, OUTPUT, ITEM, INVALID };
class Process {

public:
  std::string toParagraph(std::string line);
  std::string toTitle(std::string line);
  std::string removeWhitespace(const char *str);
};
int allArguments(int argc, char *argv[]);

} // namespace cdot
#endif // !CDOT_PROCESS_H_