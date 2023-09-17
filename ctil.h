#ifndef CDOT_CTIL_H_
#define CDOT_CTIL_H_

#include <fstream>
namespace cdot
{
	class ctil
	{
	public:
		void generateHTML(std::ifstream& infile, std::ofstream& outfile, std::string filename);
	};
};

#endif // !CDOT_CTIL_H_