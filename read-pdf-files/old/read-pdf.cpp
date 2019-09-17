#include <string>
#include <iostream>
#include <boost/filesystem.hpp>
using namespace std;
using namespace boost::filesystem;

int main()
{
   path p(".");
    for (auto i = directory_iterator(p); i != directory_iterator(); i++)
    {
        if (!is_directory(i->path())) //we eliminate directories in a list
        {
            cout << i->path().filename().string() << endl;
        }
        else
            continue;
    }
return 0;

}