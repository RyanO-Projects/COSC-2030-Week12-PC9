#include <iostream>
#include <fstream>
#include <stack>
#include <vector>


int main() {
    std::ifstream inFile;
    std::ofstream outFile;
    std::string filename;
    std::stack<char, std::vector<char>> istack;
    
    std::cout << "Enter the file name to read from:\n";
    std::cin >> filename;
    inFile.open(filename);

    if(!inFile.is_open()) {
        std::cout << "Failed to open file.\n";
        return 0;
    }

    std::cout << "Enter the file name to store to:\n";
    std::cin >> filename;
    outFile.open(filename);

    char ch;
    while(inFile.get(ch)) {
        istack.push(ch);
    }

    while(!istack.empty()) {
        outFile << istack.top();
        istack.pop();
    }
    inFile.close();
    outFile.close();
}