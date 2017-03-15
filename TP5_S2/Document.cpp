#include "Document.h"

Document::Document(std::string doc)
{
Element  *e= new Element(doc);
}

void Document::addNode(Element *e)
{
    e = _root;
}
