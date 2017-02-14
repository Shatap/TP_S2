#ifndef UTILITAIRES_H
#define UTILITAIRES_H

/*
 * fonctions pour éliminer les espaces inutiles
 * au début et à la fin d'une chaine
 *
 * http://stackoverflow.com/questions/216823/whats-the-best-way-to-trim-stdstring
 */

#include <algorithm>

// trim left and right (in place)
void ltrim(std::string &s);
void rtrim(std::string &s);

// trim from both ends (in place)
void trim(std::string &s);

#endif // UTILITAIRES_H
