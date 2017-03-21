#include <iostream>

using namespace std;

#include "Document.h"
#include "Node.h"
#include "Text.h"
#include "Element.h"


void test_constructeur()
{
    auto alb = new Element("album");
    auto art = new Element("artiste");
    auto bow = new Text("David Bowie");
    art->addNode(bow);
    alb->addNode(art);

    auto d = new Document("collection");
    d->root()->addNode(alb);



}

int main()
{
    test_constructeur();

    return 0;


}

