#include "Form.hpp"

// Default Constructor
Form::Form() {
    std::cout << "Form default constructor called" << std::endl;
}

// Copy Constructor
Form::Form(const Form& other) {
    std::cout << "Form copy constructor called" << std::endl;
    *this = other;
}

// Copy Assignment Operator
Form& Form::operator=(const Form& other) {
    std::cout << "Form copy assignment operator called" << std::endl;
    if (this != &other) {
        // Copy attributes here
    }
    return *this;
}

// Destructor
Form::~Form() {
    std::cout << "Form destructor called" << std::endl;
}
