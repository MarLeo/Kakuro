

#include <stdio.h>
#include <iostream>
#include "Cellule.h"

using namespace std;

class Solver {
private:

    int **grille;
    Cellule **ligne;
    Cellule **col;
    int *val_lignes;
    int *val_colonnes;
    int nb_lignes;
    int nb_colonnes;
    int *val_possibles;
    int nb_val_possibles;


public:
    void generer(int nbL, int nbC);

    static int nb_tentatives;
    static int nb_iteration;
    static int nb_solution;
    static int MAX_SOLUTION;

    Solver(int *val_lignes, int *val_colonnes, int *val_possibles, int nb_lignes, int nb_colonnes,
           int nb_val_possibles);

    Solver(const Solver &a);

    Solver();

    void creerKakuro(int nbL, int nbC, int num_val_possibles);

    void print_grid();

    int sumRow(int i);

    int sumCol(int i);

    bool check_val_row(int i);

    bool check_val_col(int i);

    bool end_of_game();

    void monte_carlo();

    void solve(int m);

    bool choose(int x, int y, bool opti);

    bool solve_monte_carlo(bool opti);

    void reinitialiser();

    int nb_val_possible(int i, int j);

    int *possible_choice(int cpt, int i, int j);

    void delete_choice(int x, int i, int j);

    void forward_checking(Solver k, int i, int j);
};

