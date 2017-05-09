#include "notesexamen.h"

NotesExamen::NotesExamen()
{
}

NotesExamen::NotesExamen(std::string matiere)
    :_matiere{matiere}
{

}

void NotesExamen::ajouter(std::string nom, double note)
{


    if(_profil.find(nom) !=_profil.end())
    {
        throw(ErreurCandidatDejaEnregistre(nom));
    }

    if(note<-1 || note>20)
    {
        throw(ErreurNoteInvalide(note));
    }
    _profil.insert(std::pair<std::string,float>(nom,note));



}

void NotesExamen::afficher()
{
    for(auto prof :_profil)
    {
        if(prof.second !=-1)
            std::cout<< prof.first << "    " << prof.second << std::endl;

        else{
            std::cout <<prof.first <<  " EST ABSENT" << std::endl ;
        }
    }
}
