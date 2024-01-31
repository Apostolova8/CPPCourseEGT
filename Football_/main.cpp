#include <iostream>
#include "User.h"
#include "Teams.h"
#include "Admin.h"

using namespace std;

int main() {

    Teams team1("Liverpool", "Liverpool");
    Teams team2("Barcelona", "Barcelona");
    Teams team3("Inter", "Milan");

    Admin a1("Ana", "jdiqw823ufjd");
    //cout << a1.getTeams().size() << endl;
    a1.addTeam(team1);
    a1.addTeam(team2);
    a1.addTeam(team3);
    //cout << a1.getTeams().size() << endl;
    //a1.removeTeam(team3);
    //cout << a1.getTeams().size() << endl;

    Teams t4("Liverpool", "Haskovo");
    a1.updateTeam(t4);

    for(Teams t : a1.getTeams()){
        cout << t.getName() << " " << t.getCity() << endl;
    }

    return 0;
}
