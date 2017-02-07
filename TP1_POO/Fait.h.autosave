#ifndef FAIT_H
#define FAIT_H


#include <cassert>
#include "string"

class Fait {

private:

    std::string m_sujet  ;
    std::string m_verbe;
    std::string m_complement;


public :

    Fait(const std::string & sujet,const std::string &verbe,const std::string &complement);
    std::string sujet() const;
    std::string verbe() const;
    std::string complement() const;
    bool  satisfait(const std::string & sujet,const std::string &verbe,const std::string &complement);

};
#endif // FAIT_H
