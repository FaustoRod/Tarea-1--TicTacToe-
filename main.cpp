#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;

char tablero[3][3];
char test[3][3] = {{'x','o','o'},
                    {'-','-','-'},
                    {'-','o','x'}};
char jugadorTurno;
bool hayGanador;

void iniciarJuego(){
    jugadorTurno = 'X';
    hayGanador = false;

    for(int i = 0;i < 3; i++){
        for(int j = 0; j < 3; j++){
            tablero[i][j] = '-';
        }
    }
};

void checkGanador(){
    if(test[0][0]=='x' && test[0][1]=='x' && test[0][2]=='x' || test[0][0]=='o' && test[0][1]=='o' && test[0][2]=='o' ){
        cout << "Ganaste";
    }
    if(test[1][0]=='x' && test[1][1]=='x' && test[1][2]=='x' || test[1][0]=='o' && test[1][1]=='o' && test[1][2]=='o' ){
        cout << "Ganaste";
    }
    if(test[2][0]=='x' && test[2][1]=='x' && test[2][2]=='x' || test[2][0]=='o' && test[2][1]=='o' && test[2][2]=='o' ){
        cout << "Ganaste";
    }
}

void dibujarTablero(){
    for(int i = 0;i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%c\t",tablero[i][j]);
        }
        printf("\n");
    }
}

int main(){
iniciarJuego();
dibujarTablero();
checkGanador();
return 0;
}
