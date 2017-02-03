//
// Created by martin on 02/02/17.
//

#include "Cellule.h"

Cellule::Cellule(bool b, int val) {
    this->used = b;
    this->val = val;
}

Cellule::Cellule() {
    this->used = false;
    this->val = 0;
}
