#ifndef TEXT_H
#define TEXT_H
#include "iostream"
#include "Node.h"
class Text:public Node{

private:
    std::string m_string;

public:
    ~Text();
    Text(std::string string);
     std::string asXML() const  {return m_string;}
     Node * clone()const  override;

};

#endif // TEXT_H
