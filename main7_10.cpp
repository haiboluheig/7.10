
#include <cstdlib>
#include "maHeader.h"

using namespace std;

int main() {
    Message m("haibo", "lili");
    m.ajouter("Hello,");
    m.ajouter("How are you ?");
    m.ajouter("Waiting your reply.");
    m.afficher();
    return (EXIT_SUCCESS);
}
