#include "maHeader.h"
#include <iostream>
using namespace std;

Message::Message(const string& expediteur, const string& destinataire)
: expediteur(expediteur), destinataire(destinataire) {
}

void Message::ajouter(const string& ligneTexte) {
    texteMessage.push_back(ligneTexte);
}

string Message::toString() const {
    const string FORMAT = "%d.%m.%Y %H:%M"; //Exemple : 22.02.2016 21:15
    //const string FORMAT = "%d.%m.%Y %X"; //Exemple : 22.02.2016 21:15:20
    char buffer[256];
    strftime(buffer, sizeof (buffer), FORMAT.c_str(), localtime(&DATE_CREATION));
    string str = "From : " + expediteur + '\n' +
            "To : " + destinataire + '\n' +
            "Date : " + buffer + '\n';
    str += '\n';
    for (const string& s : texteMessage)
        str += s + '\n';
    return str;
}

void Message::afficher() const {
    cout << this->toString();
}