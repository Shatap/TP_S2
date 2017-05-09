#include <iostream>
#include "notesexamen.h"

using namespace std;

int main()
{
    try{
        NotesExamen notes ("Natation");
        notes.ajouter("Leblanc",12.5);
        notes.ajouter("Duvert",17.0);
        notes.ajouter("Wyatt",19 );


        notes.afficher();


    }
    catch(const ErreurCandidatDejaEnregistre(&e ))    {
        cout << "erreur :le candidat  " << e.nom() << "   est déja enregistré  "<< std::endl ;
    }
    catch(const ErreurNoteInvalide(&e))
    {
        cout << "erreur : la note " << e.nom() << " n'est pas valide "<<std::endl;
    }

    return 0;
}

