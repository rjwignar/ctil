#include <filesystem>
#include "fileHandler.h"

namespace cdot
{
	void fileHandler::initializeDirectory(std::string& folderName)
	{
		// delete `folderName` directory and all contents if it currently exists
		if (std::filesystem::exists(folderName))
			std::filesystem::remove_all(folderName);
		// create directory called `folderName`
		std::filesystem::create_directory(folderName);
	}
}