#include <iostream>
#include <fstream>

int main() {
    //19.5.1 search and count exact word in text
    /*
    std::fstream text("words.txt");
    if(text.is_open()) {
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
    } else {
        std::cout << "Incorrect file path!" << std::endl;
    }
    
    text.close();
    */
    
    // 19.5.2 binary reading from 
    /*
    std::ifstream text;
    text.open("words.txt", std::ios::binary);
    
    if (text.is_open()) {
        for (char buff[20]; !text.eof(); ) {
            int end = sizeof(buff) - 1;
            text.read(buff, end);
            if (text.gcount() < end) 
                end = text.gcount();
            buff[end] = 0;
            std::cout << buff;
        }
        std::cout << std::endl;
    } else {
        std::cout << "Incorrect file path!" << std::endl;
    }
    text.close();
    */

    //19.5.3 read from salary-list
    /*
    std::fstream list("salary-list.txt");
    std::string name, surname;
    int salary = 0;
    std::string nameBuf, surnameBuf, dateBuf;
    int salaryBuf;
    while (!list.eof()) {
        list >> nameBuf >> surnameBuf >> salaryBuf >> dateBuf;
        std::cout << nameBuf << " " << surnameBuf << " " << salaryBuf << " " << dateBuf << std::endl;
        if (salaryBuf > salary) {
            salary = salaryBuf;
            name = nameBuf;
            surname = surnameBuf;
        }
    }
    std::cout << "Max salary is earned by " << name << " " << surname << " and it's: " << salary << std::endl;
    list.close();
    */
   
}