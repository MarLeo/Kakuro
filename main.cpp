
#include "Solver.h"

int main(int argc, const char *argv[]) {

    cout << "||-----------------------------------------------------------------------------------||" << endl;
    cout << "||                                                                                   ||" << endl;
    cout << "||                    Solver Game                                                    ||" << endl;
    cout << "||          Auteurs: Martin Tchokonthe et Mohammed Sylla                             ||" << endl;
    cout << "||          Professeur: Tristan Cazeneuve                                            ||" << endl;
    cout << "||                                                                                   ||" << endl;
    cout << "||-----------------------------------------------------------------------------------||" << endl;
    cout << endl;
    int m, num_lignes = 0, num_colonnes = 0, num_valeurs_possible = 0;
    Solver *s = new Solver();

    cout << "\t--> nombre de lignes : ";
    cin >> num_lignes;
    cout << "\t--> nombre de colonnes : ";
    cin >> num_colonnes;
    cout << "\t--> Nombre de valeurs possibles : ";
    cin >> num_valeurs_possible;
    /*
            int* val_ligne = new int[num_lignes];
            int* val_colonne = new int[num_colonnes];
            int* val_possible = new int[num_valeurs_possible];
            cout << endl;
            cout << " Valeurs a atteindre sur les lignes : " << endl;

            for (int i = 0; i < num_lignes; i++) {
                cout << "\tSomme ligne[" << i << "] = ";
                cin >> val_ligne[i];
            }
            cout << endl;

            cout << "Valeurs a atteindre sur les colonnes : " << endl;
            for (int i = 0; i < num_colonnes; i++) {
                cout << "\tSomme Colonne[" << i << "] = ";
                cin >> val_colonne[i];
            }
            cout << endl;

           // cout << "Liste des  valeurs possibles : " << endl;
            for (int i = 1; i <= num_valeurs_possible; i++) {
                val_possible[i - 1] = i;
            }

            cout << "Liste des  valeurs possibles : [ ";
            for (int i = 0; i < num_valeurs_possible; i++) {
                if (i != (num_valeurs_possible - 1)) cout << val_possible[i] << " , ";
                else cout << val_possible[i] << " ]" << endl << endl;
            }


            s = Solver(val_ligne, val_colonne, val_possible, num_lignes, num_colonnes, num_valeurs_possible);
            s.print_grid();
            cout << "Choisir le nombre solutions possibles : ";
            cin >> m;
            s.solve(m);
    */

    s->creerKakuro(num_lignes, num_colonnes, num_valeurs_possible);
    s->monte_carlo();

    return 0;

}
