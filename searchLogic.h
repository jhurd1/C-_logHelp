#ifndef SEARCHLOGIC_H
#define SEARCHLOGIC_H
#include <string>
#include <iostream>
#include <fstream>
#include "search.h"

class SearchLogic
{
    private:
        std::string correspPath;
        std::string correspStrings;
        std::ifstream in;

    public:
        std::string getcorrespPath() const;
        std::string getcorrespStrings() const;
        void setcorrespPath(std::string correspPath);
        void setcorrespStrings(std::string correspStrings);
        void setIn(std::ifstream in);
        SearchLogic();
        SearchLogic(std::string correspPath);
        SearchLogic(std::string correspPath, std::string correspStrings, std::ifstream in);
        void searchLogic(std::string correspPath, std::string correspStrings, std::ifstream stream);
};
#endif