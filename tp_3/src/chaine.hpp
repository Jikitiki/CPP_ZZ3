#ifndef TP3_CHAINE_FLO_HPP
#define TP3_CHAINE_FLO_HPP

#include <iostream>
#include <string>
#include <sstream>

class ExceptionChaine : public std::exception{
    private:
        std::string message;
    
    public:
        ExceptionChaine(std::string type) {message = "Conversion en chaine impossible pour '"+type+"'";};
        const char * what() const noexcept override {return message.c_str();};
};

template <typename T>
std::string chaine(T x)
{
    throw ExceptionChaine(demangle(typeid(x).name()));
    return typeid(x).name();
}

std::string chaine(int i)
{
    std::stringstream str1;
    str1 << i;
    return str1.str();
}

std::string chaine(std::string s)
{
    return s;
}

std::string chaine(double d)
{
    return std::to_string(d);
}

template <typename... TYPES>
std::string chaine(TYPES... args)
{
    std::string str;
    str += ((chaine(args) + " " )+ ...);
    std::cout << str << "\n";
    return str;
}


#endif
