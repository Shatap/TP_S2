#ifndef ELEMENT_H
#define ELEMENT_H

#include "Node.h"
#include "iostream"
#include "vector"

class Element:public Node{
private:
    std::string _tag;
    std::vector<Node *> _childreun;

public:

    Element(std::string);


};

#endif // ELEMENT_H
