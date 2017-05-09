#include "erreurnoteinvalide.h"

ErreurNoteInvalide::ErreurNoteInvalide()
{
}

ErreurNoteInvalide::ErreurNoteInvalide(double note)
    :m_note{note}
{

}

double ErreurNoteInvalide::nom() const
{
    return m_note;
}
