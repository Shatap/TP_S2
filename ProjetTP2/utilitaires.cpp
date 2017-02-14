#include "utilitaires.h"


/*
 * fonctions pour éliminer les espaces inutiles
 * au début et à la fin d'une chaine
 *
 * http://stackoverflow.com/questions/216823/whats-the-best-way-to-trim-stdstring
 */

#include <algorithm>

void ltrim(std::string &s) {
    s.erase(s.begin(), std::find_if(s.begin(), s.end(),
                                    std::not1(std::ptr_fun<int, int>(std::isspace))));
}

// trim from end (in place)
void rtrim(std::string &s) {
    s.erase(std::find_if(s.rbegin(), s.rend(),
                         std::not1(std::ptr_fun<int, int>(std::isspace))).base(), s.end());
}

// trim from both ends (in place)
void trim(std::string &s) {
    ltrim(s);
    rtrim(s);
}
