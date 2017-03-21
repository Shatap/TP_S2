#include "Node.h"


Node::Node()
{
    m_nodes.push_back(this);
}

std::vector<Node *> Node::allNode() const
{
for(Node n:m_nodes)
{
    std::cout<<m_nodes.at(n)<<endl;
}
}

std::string Node::asXML() const
{

}

Node::~Node()
{

}
