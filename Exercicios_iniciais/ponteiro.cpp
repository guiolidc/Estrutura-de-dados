#include <iostream>

void alteraArray(int* array, int N){
    for( int i = 0; i < N; i++){
        *(array+i) = i;
        //tambem pode ser escrito como array[i] = i
    }
}

int main(void){
    int array[5];
    alteraArray(array, 5);
    for(int i = 0; i < 5; i++){
        std::cout<<array[i]<< std::endl;
    }

}