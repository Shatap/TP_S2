#ifndef ELEMENT_H
#define ELEMENT_H

#include "Node.h"
#include "iostream"
#include "vector"

class Element:public Node{
private:
    std::string m_tag;
    std::vector<Node *> m_childreun;

public:
    ~Element();
    Element(std::string);
    std::string asXML() const override;
    void addNode(Node *);
    Node *clone() const override;

};

#endif // ELEMENT_H
