#include <iostream>


#include "Fait.h"
#include "Base.h"
using namespace std;


void test_fait()
{
    cout << "* Test fait " << endl ;
    Fait f{"romeo","aime","juliette"};

    assert (f.sujet() == "romeo");
    assert (f.verbe() == "aime");
    assert (f.complement() == "juliette");
}

void  test_predicat()
{
    cout << "*test predicat" << endl;
    Fait f{"juliette","habite","verone"};

    assert(f.satisfait("juliette","*","*"));
    assert(f.satisfait("*","habite","verone"));
    assert(!f.satisfait("romeo","habite","*"));
    assert(f.satisfait("*","*","*"));
    assert(!f.satisfait("romeo","aime","juliette"));

}

void test_base()
{
Base b;
b.ajouter("juliette","habite","verone");
b.ajouter("romeo","habite","verone");
b.ajouter("juliette","aime","romeo");
b.ajouter("shakespeare","habite","stratford");

cout <<"* Qui habite verone ?" <<endl;
/*for(Fait f: b.selectionner("*","habite","verone"))
{
    cout<<"-" << f.sujet() << std::endl;
}
*/
}

int main()
{
    test_fait();
    test_predicat();
    test_base();
    return 0;
}

