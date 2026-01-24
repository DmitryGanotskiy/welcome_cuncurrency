#include <array>
#include <vector>
#include<iostream>
#include <map>

// https://www.geeksforgeeks.org/cpp/containers-cpp-stl/
//  8-bit binary number.
class CellularAutomata {

    private: std::array<int,8> ruleset;
    std::map<int, int> mapRuleset;
    


    CellularAutomata (){
        /// There are 256 possible combinations
        this->ruleset = {111, 011, 101, 100, 011, 010, 001, 000};
        this->mapRuleset = {{111, 000}};
    }
    



};