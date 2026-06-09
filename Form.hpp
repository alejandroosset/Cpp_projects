#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>

class Form
{
public:
    // Default Constructor
    Form();
    
    // Copy Constructor
    Form(const Form& other);
    
    // Copy Assignment Operator
    Form& operator=(const Form& other);
    
    // Destructor
    ~Form();
};

#endif
