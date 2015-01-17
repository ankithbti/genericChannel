#include <iostream>
#include <stdexcept>
#include "XmlParser.h"
#include "XmlNode.h"

int main() {
    std::cout << " Testing Protocol Api " << std::endl;

    try {
        
    } catch (const std::runtime_error& err) {
        std::cout << " Caught Exception : " << err.what() << std::endl;
        return EXIT_FAILURE ;
    }

    return EXIT_SUCCESS ;

}
