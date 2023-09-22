#ifndef CDOT_CTIL_H_
#define CDOT_CTIL_H_

#include <fstream>
namespace cdot
{
	class ctil
	{
	public:
		void generateHTML_txt(std::ifstream& infile, std::ofstream& outfile, std::string filename);
		void generateHTML_md(std::ifstream& infile, std::ofstream& outfile, std::string filename);
		bool ends_with(std::string const & value, std::string const & ending);
	};
};

#endif // !CDOT_CTIL_H_