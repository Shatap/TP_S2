#ifndef ERREURNOTEINVALIDE_H
#define ERREURNOTEINVALIDE_H

class ErreurNoteInvalide
{
private:
    double m_note;
public:
    ErreurNoteInvalide();
    ErreurNoteInvalide(double note);
      double  nom() const;
};

#endif // ERREURNOTEINVALIDE_H
