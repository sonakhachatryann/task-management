#include <iostream>
#include <fstream>
#include <string>
#include "users.h"
#include <vector>
#include "generalFunctions.h"


Users::Users(const std::string& userName, const std::string& userSurname, const int& userAge, const int& userId)
    : name{ userName }
    , surName{ userSurname }
    , age{ userAge }
    , id{ userId }
{
     // ++id;
};

void Users::insert() {
    std::string data_to_be_inserted;
    std::string ageStr = std::to_string(age);
    std::string idStr = std::to_string(id);
    data_to_be_inserted = idStr + "|" + name + "|" + surName + "|" + ageStr;

    std::ofstream fout;
    fout.open("users.txt", std::ofstream::app);
    if (!fout) {
        std::cout << "File not opened!";
    }
    else {
        fout << data_to_be_inserted << "\n";
    }
}

void Users::select(const std::string& path, const std::string& name) {
    std::vector<std::string> vecline;
    std::string line{};
    std::ifstream myfile (path);
    int i = 0;
    if(!myfile.is_open()){
        std::cout << "Data base is unavailable, please check entered data" << std::endl;
        std::cout << "Program terminating.\n";
    } else {
        while (getline(myfile, line))
        {
            std::getline(myfile, line);
            vecline[i] = line;
        }
        myfile.close();
    }

    int size = get_count_of_lines(path);

    for(int i = 0,j = 0; i < size; i++, j++) {
        std::vector<std::string> searched_data;
        searched_data = split(vecline[i], "|");
        if(searched_data[1] == name) {
            std::cout << j << "." << vecline[i] << std::endl;
        }
    }
}






















