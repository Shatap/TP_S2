#ifndef DOCUMENT_H
#define DOCUMENT_H
#include "Element.h"

class Document{

private:
    Element *_root;


public:
    Document(std::string doc);
    void addNode(Element *e);




};
#endif // DOCUMENT_H

