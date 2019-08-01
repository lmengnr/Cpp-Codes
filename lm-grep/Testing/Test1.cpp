#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <functional>



int main()
{

std::fstream myfile;
myfile.open( "paragraph.txt" );
std::string tofind = "Paragraph for testing";
std::string line;
getline(myfile, line);

if (line == tofind)
{
    std::cout << "OK" << std::endl;
}

std::cout << line << std::endl;
std::cout << tofind << std::endl;


return 0;
}



