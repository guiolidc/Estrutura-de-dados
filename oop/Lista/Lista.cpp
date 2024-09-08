#include "Lista.h"

Lista::Lista(){
    ultimo = -1;
}

Lista::Lista(){
    ultimo = -1;
}

bool Lista::listaCheia(){
    if(ultimo == MAXLISTA-1) return(true);
    else return(false);
}

