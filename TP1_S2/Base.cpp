#include "Base.h"

using namespace std;




int Base::ajouter(const string &sujet, const string &verbe, const string &complement)
{
    Fait f{sujet,verbe,complement} ;
    ajoutZer.push_back(f);

}

int Base::selectionner()
{



}
