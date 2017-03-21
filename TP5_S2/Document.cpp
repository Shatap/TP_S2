#include "Document.h"

Document::Document(std::string doc)
{
    m_root = new Element(doc);
}

std::string Document::asXML() const
{
    return m_root->asXML();
}

Element *Document::root()
{
    return m_root;
}

