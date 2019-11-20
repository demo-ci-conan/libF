
#include "libF/libF.h"

#include <iostream>
#include "libA/libA.h"

void hello_libF(int indent, const std::string& msg) {
    std::cout << std::string(indent, ' ') << "libF: " << msg << std::endl;
    hello_libA(indent+1, "hello from libF");
}