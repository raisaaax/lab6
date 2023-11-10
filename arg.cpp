#include <iostream>

int main(int argc, char* argv[]) {
    
    std::cout << "Program name: '" << argv[0] << "'" << std::endl;
    std::cout << "called with " << argc - 1 << " argument";
    if (argc - 1 != 1) {
        std::cout << "s"; 
    }
    std::cout << ": ";

    for (int i = 1; i < argc; ++i) {
        
        std::cout << " "; 
    }
   

    return 0;
}
