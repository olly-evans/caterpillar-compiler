#include <iostream>
#include <fstream>
#include <sstream>

int main(int argc, char* argv[]) {

    if (argc != 2) return EXIT_FAILURE;
    std::string filename = argv[1];
    std::ifstream ifs(filename);
    
    if (!ifs.is_open()) {std::cerr << "Could not open source file.\n"; return 1;}

    std::ostringstream oss;
    oss << ifs.rdbuf();
    std::cout << oss.str();
    return 0;
}