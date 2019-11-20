
#include "libF/libF.h"

#include <iostream>

void hello_libF(int indent, const std::string& msg) {
    std::cout << std::string(indent, ' ') << "libF: " << msg << std::endl;
}