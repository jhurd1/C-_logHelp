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

SearchLogic::SearchLogic(std::string correspPath, std::string correspStrings, std::ifstream in)
{
    setcorrespPath(correspPath);
    setcorrespStrings(correspStrings);
    //setIn(in);
}

std::string SearchLogic::getcorrespPath() const
{
    return correspPath;
}

std::string SearchLogic::getcorrespStrings() const
{
    return correspStrings;
}

void SearchLogic::setcorrespPath(std::string correspPath)
{

}

void SearchLogic::setcorrespStrings(std::string correspStrings)
{

}

void SearchLogic::setIn(std::ifstream in)
{

}

 void SearchLogic::searchLogic(std::string correspPath, std::string correspStrings, std::ifstream stream)
 {

 }