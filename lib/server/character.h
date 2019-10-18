//
// Created by daniele on 14/10/19.
//

#ifndef PDS_COLLABORATIVETEXTEDITOR_2020_CHARACTER_H
#define PDS_COLLABORATIVETEXTEDITOR_2020_CHARACTER_H

#include <vector>


class character {
private:
    char real_character;
    //int id; this is the user id --> to be implemented
    std::vector<int> position;

public:
    character();
    int getReal_character();
    std::vector<int>& getPosition();
};




#endif //PDS_COLLABORATIVETEXTEDITOR_2020_CHARACTER_H
