#include <iostream>

class Lista{

    public:
        Lista(){};
        ~Lista(){};
        void mostraNum(int array[], int N){
            for (int i = 0; i<N ; i++){
                std::cout<<array[i]<<std::endl;
            }
        }


};


int main(){
    int* lista = new int[5];
    for(int i = 0; i < 5; i++){
        lista[i] = i*10;
    }
    Lista obj;
    obj.mostraNum(lista, 5);
    delete[] lista;
}