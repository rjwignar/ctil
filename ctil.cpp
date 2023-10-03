#include <iostream>
#include <string>
#include <fstream>
#include "ctil.h"
namespace cdot
{
	bool ctil::ends_with(std::string const & value, std::string const & ending)
	{
		if (ending.size() > value.size()) return false;
		return std::equal(ending.rbegin(), ending.rend(), value.rbegin());
	}

	void ctil::md_italics_content_update(std::string &input) {
		size_t found = input.find("*");

		while (found != std::string::npos) {
			size_t end = input.find("*", found + 1);

			if (end != std::string::npos) {
				std::string word_to_replace = "<i>" +input.substr(found + 1, end - found - 1) + "</i>";
				input.replace(found, end - found + 1, word_to_replace);
				found = input.find("*", end + 1);
			} else {
				break;
			}
		}

		found = input.find("_");

		while (found != std::string::npos) {
			size_t end = input.find("_", found + 1);

			if (end != std::string::npos) {
				std::string word_to_replace = "<i>" +input.substr(found + 1, end - found - 1) + "</i>";
				input.replace(found, end - found + 1, word_to_replace);
				found = input.find("_", end + 1);
			} else {
				break;
			}
		}
	}
	void ctil::codeblockUpdate(std::string& input)
	{

	}
	void ctil::generateHTML_txt(std::ifstream& infile, std::ofstream& outfile, std::string filename)
	{
		bool titleParsed = false;
		std::string title = filename;
		std::string line;

		// parsed content block
		std::string content = "";
		// number of newlines determines how to treat parsed blocks of content above;
		int newlineCounter = 0;

		// entire parsed content to be placed inside <body>...</body> tags
		std::string bodyContent;

		while (infile && !infile.eof())
		{
			// for debug purposes - will modify in later versions
			// have a content block string

			// run getline, store value into line
			std::getline(infile, line);

			// check line content 
			if (line != "" && newlineCounter == 0)
				// if line is non-empty, and newLineCounter == 0, then add line to content

			{
				content += line + "\n";
				if (infile.eof())
				{
					bodyContent += "<p>" + content + "</p>" + "\n";
				}
				//else
				//	content += line + "\n";
			}
			else if (line != "" && newlineCounter == 1)
				// if line is non-empty and newlineCounter == 1, then wrap  content in <p>...</p>, reset content to empty string, add line to content and keep going
			{
				// pass what's currently in content to outfile, wrapped in paragraph tags
				//outfile << "<p>" + content + "</p>" << std::endl;

				// pass what's currently in content to bodyContent, wrapped in paragraph tags
				bodyContent += "<p>" + content + "</p>" + "\n";

				// overwrite old content string with current contents of line
				content = line + "\n";

				// 
				newlineCounter = 0;

				if (infile.eof())
				{
					bodyContent += "<p>" + content + "</p>" + "\n";
				}
			}
			else if (line != "" && newlineCounter == 2)
				// if line is non-empty and newlineCounter == 2, then follow title adjustment logic
			{
				titleParsed = true;
				title = content;
				content = line + "\n";
				newlineCounter = 0;
			}
			else if (line == "")
				// else if the line is empty (""), then increment newline counter by 1
			{
				if (infile.eof())
				{
					bodyContent += "<p>" + content + "</p>" + "\n";
				}
				else
				{
					newlineCounter++;
				}
			}

			else
			{
				bodyContent += "<p>" + content + "</p>" + "\n";

				// overwrite old content string with current contents of line
				content = line;
			}
		}

		// generate HTML file
		outfile << "<!doctype html>" << std::endl
			<< "<html lang='en'>" << std::endl
			<< "<head>" << std::endl
			<< "<meta charset = 'utf-8'>" << std::endl
			<< "<title>" << title << "</title>" << std::endl
			<< "<meta name='viewport' content='width=device-width, initial-scale=1'>" << std::endl
			<< "</head>" << std::endl;
		if (titleParsed)
		{
			outfile << "<h1>" << title << "</h1>";
		}
		outfile << "<body>" << std::endl;
		outfile << bodyContent;
		outfile << "</body> " << std::endl
			<< "</html>" << std::endl;

	}

	void ctil::generateHTML_md(std::ifstream& infile, std::ofstream& outfile, std::string filename)
	{
		bool titleParsed = false;
		std::string title = filename;
		std::string line;

		// parsed content block
		std::string content = "";
		// number of newlines determines how to treat parsed blocks of content above;
		int newlineCounter = 0;

		// entire parsed content to be placed inside <body>...</body> tags
		std::string bodyContent;

		while (infile && !infile.eof())
		{
			// for debug purposes - will modify in later versions
			// have a content block string

			// run getline, store value into line
			std::getline(infile, line);

			// check line content
			if (line != "" && newlineCounter == 0)
				// if line is non-empty, and newLineCounter == 0, then add line to content

			{
				content += line + "\n";
				if (infile.eof())
				{
					bodyContent += "<p>" + content + "</p>" + "\n";
				}
				//else
				//	content += line + "\n";
			}
			else if (line != "" && newlineCounter == 1)
				// if line is non-empty and newlineCounter == 1, then wrap  content in <p>...</p>, reset content to empty string, add line to content and keep going
			{
				// pass what's currently in content to outfile, wrapped in paragraph tags
				//outfile << "<p>" + content + "</p>" << std::endl;

				// pass what's currently in content to bodyContent, wrapped in paragraph tags
				bodyContent += "<p>" + content + "</p>" + "\n";

				// overwrite old content string with current contents of line
				content = line + "\n";

				//
				newlineCounter = 0;

				if (infile.eof())
				{
					bodyContent += "<p>" + content + "</p>" + "\n";
				}
			}
			else if (line != "" && newlineCounter == 2)
				// if line is non-empty and newlineCounter == 2, then follow title adjustment logic
			{
				titleParsed = true;
				title = content;
				content = line + "\n";
				newlineCounter = 0;
			}
			else if (line == "")
				// else if the line is empty (""), then increment newline counter by 1
			{
				if (infile.eof())
				{
					bodyContent += "<p>" + content + "</p>" + "\n";
				}
				else
				{
					newlineCounter++;
				}
			}

			else
			{
				bodyContent += "<p>" + content + "</p>" + "\n";

				// overwrite old content string with current contents of line
				content = line;
			}
		}

		// check possible Italics content for body content
		md_italics_content_update(bodyContent);

		// generate HTML file
		outfile << "<!doctype html>" << std::endl
				<< "<html lang='en'>" << std::endl
				<< "<head>" << std::endl
				<< "<meta charset = 'utf-8'>" << std::endl
				<< "<title>" << title << "</title>" << std::endl
				<< "<meta name='viewport' content='width=device-width, initial-scale=1'>" << std::endl
				<< "</head>" << std::endl;
		if (titleParsed)
		{
			// check possible Italics content for title content
			md_italics_content_update(title);
			outfile << "<h1>" << title << "</h1>";
		}
		outfile << "<body>" << std::endl;
		outfile << bodyContent;
		outfile << "</body> " << std::endl
				<< "</html>" << std::endl;

	}

}