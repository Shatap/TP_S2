#include <iostream>

#include "TokenReader.h"
#include "Evaluator.h"


void test_token_reader(const std::string & chaine,
                       const std::string & message)
{
    std::cout << "* Test TokenReader " << std::endl
              << "- résultat attendu : " << message << std::endl
              << "- chaine           : " << chaine << std::endl;

    TokenReader a;

    a.setString(chaine);
    try {
        while (true) {
            auto token = a.getToken();
            if (token.type == TokenType::END) {
                break;
            }
            std::cout << "-> " << token.string << std::endl;
        }
    } catch (const ExceptionUnexpectedChar & e) {
        std::cout << "[ERR] Caractère inattendu position "
                  << e.position()
                  << std::endl;
        std::cout << "- reste à lire     : ";
        for (unsigned int i=0; i<e.position(); i++) {
            std::cout << "_";
        }
        for (unsigned int i=e.position(); i<chaine.size(); i++) {
            std::cout << chaine[i];
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

void test_evaluator(const std::string & chaine,
                    const std::string & message)
{
    std::cout << "* Test Evaluator " << std::endl
              << "- résultat attendu : " << message << std::endl
              << "- chaine           : " << chaine << std::endl;

    Evaluator e;
    e.setString(chaine);
    try {
        std::cout << "resultat = " << e.eval() << std::endl;
    }
    catch (const ExceptionSyntaxError & e) {
        std::cout << "[ERR] erreur dans expression : "
                  << e.message()
                  << std::endl;
    }
    catch (const ExceptionUnexpectedChar & e) {
        std::cout << "[ERR] Caractère inattendu position "
                  << e.position()
                  << std::endl;
        std::cout << "- reste à lire     : ";
        for (unsigned int i=0; i < e.position(); i++) {
            std::cout << "_";
        }
        for (unsigned int i=e.position(); i<chaine.size(); i++) {
            std::cout << chaine[i];
        }
        std::cout << std::endl;
    }
}

int main()
{
    test_token_reader ("12 43 5",
                       "OK");
    //test_token_reader ("12 + 43 - 5","OK");
    //test_token_reader ("abc123  + toto","OK");
    test_token_reader ("123abc",
                       "Erreur lettre après un nombre");

    test_evaluator("  123 ", "valeur = 123");
   // test_evaluator("  123 + 45 ", "valeur = 168");
    //test_evaluator("  123 + 45 - 6", "valeur = 162");

    return 0;
}
