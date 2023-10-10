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
		static bool ends_with(std::string const & value, std::string const & ending);
		void md_italics_content_update(std::string &input);
		void horizontalBreakUpdate(std::string& input);
		void codeblockUpdate(std::string& input);
		void fencedCodeBlockUpdate(std::string& input);
		static bool has_txt_suffix(std::string const& filepath);
		static bool has_md_suffix(std::string const& filepath);
	};
};

#endif // !CDOT_CTIL_H_