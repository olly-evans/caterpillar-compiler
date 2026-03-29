#include <iostream>
#include <fstream>
#include <sstream>

void compile_fixnum(int x, std::ostream& out) {
    out << "movl $" + std::to_string(x) + ", %eax" << std::endl;
    out << "ret";
}

int main() {

    // if (argc != 2) return EXIT_FAILURE;
    
    // std::string filename = argv[1];
    // std::ifstream ifs(filename);

    // if (!ifs.is_open()) {std::cerr << "Could not open source file.\n"; return 1;}
    // std::ostringstream oss;
    // oss << ifs.rdbuf();

    // std::cout << oss.str();

    std::ofstream out;
    out.open("out.s");
    compile_fixnum(42, out);
    out.close();
    return 0;
}