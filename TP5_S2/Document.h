#ifndef DOCUMENT_H
#define DOCUMENT_H
#include "Element.h"

class Document{

private:
    Element *m_root;


public:
    Document(std::string doc);
    void addNode(Node *e);
    std::string asXML()const;
    Element * root();



};
#endif // DOCUMENT_H

