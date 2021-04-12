#include <iostream>

unsigned int count(const std::string& str) {
    unsigned int counter = 0;
    bool on_space = true;
    
    for(int i = 0; i < str.size(); i++) {
        if (std::isspace(str[i]))
            on_space = true;
        else if (on_space) {
            counter++;
            on_space = false;
        }
    }

    return counter;
}

//sets flag when whitespace is encountered 
//continues if no whitespace, counter is incremented
// count function should go here

//>>>>>>> master
