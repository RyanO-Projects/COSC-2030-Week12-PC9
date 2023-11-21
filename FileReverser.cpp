#include <iostream>
#include <fstream>
#include <stack>


int main() {
    std::ifstream inFile;
    std::string filename;
    
    std::cout << "Enter the file name:\n";
    std::cin >> filename;
    inFile.open(filename);

    if(!inFile.is_open()) {
        std::cout << "Failed to open file.\n";
        return 0;
    }

    
}