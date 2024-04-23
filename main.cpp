#include <iostream>
#include <fstream>

int main() {
    //19.5.1 search and count exact word in text
    std::fstream text("C:\\Users\\Anton\\Desktop\\SecondStart C++\\lesson 19 ifstream\\HW\\words.txt");
    std::string word;
    int count = 0;
    std::cout << "Input word for search: ";
    std::cin >> word;
    for(std::string buffer; !text.eof(); ) {
        text >> buffer;
        if (buffer == word || buffer == word + '.' || buffer == word + ',')
            count++;
    }
    std::cout << "There are " << count << " word: " << word << " in words.txt" << std::endl;

    text.close();
    

}