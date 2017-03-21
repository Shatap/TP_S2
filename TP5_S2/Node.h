#ifndef NODE_H
#define NODE_H
#include "iostream"
#include "list"
#include "vector"
class Node{
    
private:
    std::vector<Node*> m_nodes;

public:
Node();
virtual ~Node()=0;
virtual std::string asXML()const =0;
virtual std::vector<Node*>allNode()const=0;
virtual Node *clone() const=0;
//virtual void finElementsByTag(const std::string &tag, std::vector<Element *>&found);


};


#endif // NODE_H
