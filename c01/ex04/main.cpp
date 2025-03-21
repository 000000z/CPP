#include <iostream>
#include <fstream>
#include <string>

std::string customReplaceAll(const std::string& source, const std::string& search, const std::string& replacement)
{
	std::string result;
	size_t searchLen = search.length();
	size_t lastPos = 0;
	size_t findPos;
		
	while ((findPos = source.find(search, lastPos)) != std::string::npos)
	{
		result.append(source, lastPos, findPos - lastPos).append(replacement);
		lastPos = findPos + searchLen;
	}
	if (lastPos < source.length())
		result.append(source, lastPos, source.length() - lastPos);
		
	return result;
}

bool replaceStringInFile(const std::string& inputFilename, 
						 const std::string& outputFilename,
						 const std::string& searchString, 
						 const std::string& replaceString)
{
	std::ifstream inputFile(inputFilename.c_str());
	if (!inputFile.is_open())
		return false;
		
	std::string content;
	std::string line;
	while (std::getline(inputFile, line))
	{
		content = content + line;
		if (!inputFile.eof())
			content += '\n';
	}
	inputFile.close();
		
	std::string result = customReplaceAll(content, searchString, replaceString);
		
	std::ofstream outputFile(outputFilename.c_str());
	if (!outputFile.is_open()) {
		return false;
	}
		
	outputFile << result;
	outputFile.close();
		
	return true;
}

int main(int ac, char **av)
{
	if (ac <= 3) {
		std::cout << "not enough argument" << std::endl;
		return 0;
	}
		
	std::string FileName = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];
	std::string ReplaceFile = FileName + ".replace";
	if (!s1.length()) {
		std::cout << "Invalid search string" << std::endl;
		return 1;
	}
		
	return replaceStringInFile(FileName, ReplaceFile, s1, s2) ? 0 : 1;
}