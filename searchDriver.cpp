#include <iostream>

#include "searchLogic.h"

/****************************************************************
 * Function: main
 * Purpose: Drive the machinery for the search
 ****************************************************************/
int main()
{
    SearchLogic search;
    std::string correspPath = search.getcorrespPath();
    std::string correspStrings = search.getcorrespStrings();
    std::string stringInFile = search.getStringInFile();


    std::cout << "file path to search: ";
    std::cin >> correspPath;
    std::cout << "string to search: ";
    std::cin >> correspStrings;

    Search one;
    Search two(correspPath);
    Search three(correspPath, correspStrings);

    std::cout << "Your path: " + correspPath + " , " + "and your search string: " + correspStrings;

    search.searchLogic(correspPath, correspStrings, stringInFile);

   return 0;
}

