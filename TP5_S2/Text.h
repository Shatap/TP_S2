#ifndef TEXT_H
#define TEXT_H
#include "iostream"
#include "Node.h"
class Text:public Node{

private:
    std::string _string;

public:
    Text(std::string);
};

#endif // TEXT_H
