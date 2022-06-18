#include "searchLogic.h"

SearchLogic::SearchLogic()
{
    correspPath = "";
    correspStrings = "";
}

SearchLogic::SearchLogic(std::string corresppath)
{
    setcorrespPath(correspPath);
}

SearchLogic::SearchLogic(std::string correspPath, std::string correspStrings, 
    std::string stringInFile)
{
    setcorrespPath(correspPath);
    setcorrespStrings(correspStrings);
    setStringInFile(stringInFile);
}

std::string SearchLogic::getcorrespPath() const
{
    return correspPath;
}

std::string SearchLogic::getcorrespStrings() const
{
    return correspStrings;
}

std::string SearchLogic::getStringInFile() const
{
    return stringInFile;
}


void SearchLogic::setcorrespPath(std::string correspPath)
{
    this->correspPath = search.getPath();
}

void SearchLogic::setcorrespStrings(std::string correspStrings)
{
    this->correspStrings = search.getStrings();
}

void SearchLogic::setStringInFile(std::string stringInFile)
{
    this->stringInFile = stringInFile;
}

/*void SearchLogic::setIn(std::ifstream in)
{
    //I don't think I need this.
    //this->in = in;
}*/

 void SearchLogic::searchLogic(std::string correspPath, std::string correspStrings,
    std::string stringInFile)
 {
    std::ifstream in(correspPath);
    while(getline(in, correspStrings)&&(!in.eof()))
    {
        if(correspStrings == stringInFile)
        {
            std::cout << "found a match: " + stringInFile;
        } else 
        {
            std::cout << "no such string, user.";
        }
    }
    std::cin.ignore();
    std::cin.get();  
 }