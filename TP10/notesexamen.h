#ifndef NOTESEXAMEN_H
#define NOTESEXAMEN_H
#include "iostream"
#include "map"
#include "erreurcandidatdejaenregistre.h"
#include "erreurnoteinvalide.h"
class NotesExamen
{
private:
    std::string _matiere;
    std::map<std::string  ,double> _profil;

public:
    NotesExamen();
    NotesExamen(std::string matiere);
    void ajouter(std::string nom, double note);
    void afficher();
    void supprimer(std::string nom);
    void modifier(std::string nom,double note);
    float moyenne();

};

#endif // NOTESEXAMEN_H
