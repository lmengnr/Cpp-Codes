#include <fstream>
#include <string>
#include <vector>
#include <functional>
#include <iostream>

/*
 * It will iterate through all the lines in file and
 * call the given callback on each line.
 */
bool iterateFile(std::string fileName, std::string tofind, std::function<void(const std::string &)> callback)
{

	// Open the File
	std::ifstream in(fileName.c_str());

	// Check if object is valid
	if (!in)
	{
		std::cerr << "Cannot open the File : " << fileName << std::endl;
		return false;
	}

	std::string str;

	// Read the next line from File untill it reaches the end.

	while (std::getline(in, str)) // getline takes characters from 'in' and stores them in 'str'
	{
		// Call the given callback
		//callback(str);

		std::size_t found = str.find(tofind);

		if (found != std::string::npos)
		{
			std::cout << str << std::endl;
		}
	}
	//Close The File
	in.close();
	return true;
}

int main(int argc, char *argv[])
{

	// Check the number of parameters
	if (argc < 3)
	{
		// Tell the user how to run the program
		std::cerr << "Usage: " << argv[0] << " [FILE NAME] "
				  << "[TARGET STRING] " << std::endl;
		/* "Usage messages" are a conventional way of telling the user
         * how to run a program if they enter the command incorrectly.
         */
		return 1;
	}

	std::cout << argv[0] << " You are searching in file: " << argv[1] << ", To find: " << argv[2] << "\n\n";

	std::vector<std::string> vecOfStr;

	std::string my_tofind = argv[2];

	//Call given lambda function for each line in file
	bool res = iterateFile(argv[1], my_tofind, [&](const std::string &str) {
		// Add to vector
		vecOfStr.push_back(str);
	});

	//if(res)
	//{
	//	for(std::string & line : vecOfStr)
	//		std::cout<<line<<std::endl;
	//}
}