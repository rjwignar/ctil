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
		void md_italics_content_update(std::string &input);
		void codeblockUpdate(std::string& input);
		void fencedCodeBlockUpdate(std::string& input);
	};
};

#endif // !CDOT_CTIL_H_