#include <iostream>

#include "search.h"

/****************************************************************
 * Function: main
 * Purpose: Drive the machinery for the search
 ****************************************************************/
int main()
{
    std::string fpath;
    std::string searchStrings;

    std::cout << "file path to search: ";
    std::cin >> fpath;
    std::cout << "string to search: ";
    std::cin >> searchStrings;

    Search one;
    Search two(fpath);
    Search three(fpath, searchStrings);

    std::cout << "Your fpath: " + fpath + " , " + "and your search string: " + searchStrings;

   return 0;
}

