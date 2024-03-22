#include <iostream>
#include <map>
#include <string>
#include <list>
using namespace std;

int main()
{

    map<string, list<string>> pokedex;

    list<string> PikachuAttacks{ "Thunder shock"," Tail whip", "Quick attack"};
    list<string> CharmanderAttacks{ "Flame thrower"," Scary face"};
    list<string> ChikoritaAttacks{ "Razor lead","Poison powder"};

    pokedex.insert(pair<string, list<string>>("Pikachu", PikachuAttacks));
    pokedex.insert(pair<string, list<string>>("Charmander", CharmanderAttacks));
    pokedex.insert(pair<string, list<string>>("Chikorita", ChikoritaAttacks));

    for(auto pair : pokedex){
        cout << pair.first << " - ";

        for (auto attack : pair.second)
        cout << attack << ", ";

        cout << endl;
    }

    return 0;
}