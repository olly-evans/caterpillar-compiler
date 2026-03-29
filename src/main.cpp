#include <iostream>
#include <fstream>
#include <sstream>

void compile_fixnum(int x, std::ostream& out) {

    out << "\t.text\n";
    out << "\t.globl c_entry\n";
    out << "\t.type c_entry, @function\n";
    out << "c_entry:\n";
    out << "\tmovl $" + std::to_string(x) + ", %eax\n";
    out << "\tret";
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
    if (!out.is_open()) out.open("out.s");
    compile_fixnum(32, out);
    out.close();
    return 0;
}