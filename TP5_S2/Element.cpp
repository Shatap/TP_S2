#include "Element.h"


Element::Element(std::string elem)
{
    m_tag=elem;
}

std::string Element::asXML() const
{
    std::string res = "<" +m_tag+">" ;
    for(auto n :m_childreun)
    {
        res+= n->asXML();
    }
}

void Element::addNode(Node *n)
{
    m_childreun.push_back(n);
}

Node *Element::clone() const
{

}
