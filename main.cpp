#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;

char tablero[3][3];
char test[3][3] = {{'-','-','-'},
                    {'-','-','-'},
                    {'-','-','-'}};
char jugadorTurno = 'x';
bool hayGanador = false;

void iniciarJuego(){

    for(int i = 0;i < 3; i++){
        for(int j = 0; j < 3; j++){
            tablero[i][j] = '-';
        }
    }
};

void checkGanador(){
    //Horizontal
    if(test[0][0]=='x' && test[0][1]=='x' && test[0][2]=='x' || test[0][0]=='o' && test[0][1]=='o' && test[0][2]=='o' ){
        hayGanador = true;
        cout << "Ganaste";
    }
    if(test[1][0]=='x' && test[1][1]=='x' && test[1][2]=='x' || test[1][0]=='o' && test[1][1]=='o' && test[1][2]=='o' ){
        hayGanador = true;
        cout << "Ganaste";
    }
    if(test[2][0]=='x' && test[2][1]=='x' && test[2][2]=='x' || test[2][0]=='o' && test[2][1]=='o' && test[2][2]=='o' ){
        hayGanador = true;
        cout << "Ganaste";
    }
    //Vertical
    if(test[0][0]=='x' && test[1][0]=='x' && test[2][0]=='x' || test[0][0]=='o' && test[1][0]=='o' && test[2][0]=='o' ){
        hayGanador = true;
        cout << "Ganaste";
    }
    if(test[0][1]=='x' && test[1][1]=='x' && test[2][1]=='x' || test[0][1]=='o' && test[1][1]=='o' && test[2][1]=='o' ){
        hayGanador = true;
        cout << "Ganaste";
    }
    if(test[0][2]=='x' && test[1][2]=='x' && test[2][2]=='x' || test[0][2]=='o' && test[1][2]=='o' && test[2][2]=='o' ){
        hayGanador = true;
        cout << "Ganaste";
    }
    //Diagonal
    if(test[0][0]=='x' && test[1][1]=='x' && test[2][2]=='x' || test[0][0]=='o' && test[1][1]=='o' && test[2][2]=='o' ){
        hayGanador = true;
        cout << "Ganaste";
    }
    if(test[0][2]=='x' && test[1][1]=='x' && test[2][0]=='x' || test[0][2]=='o' && test[1][1]=='o' && test[2][0]=='o' ){
        hayGanador = true;
        cout << "Ganaste";
    }
}

void dibujarTablero(){
    for(int i = 0;i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%c\t",test[i][j]);
        }
        printf("\n");
    }
}

void jugar(){
    int posicion = 0;
    cout << "Seleccione donde jugar 1-9" << endl;
        cin >> posicion;
    while(posicion <= 0 || posicion > 9){
        cout << "Ingrese un numero del 1 al 9" << endl;
            posicion = 0;
            cin >> posicion;
    }

    switch(posicion){
    case 1:
        test[0][0] = jugadorTurno;
        break;
    case 2:
       test[0][1] = jugadorTurno;
        break;
    case 3:
       test[0][2] = jugadorTurno;
        break;
    case 4:
        test[1][0] = jugadorTurno;
        break;
    case 5:
        test[1][1] = jugadorTurno;
        break;
    case 6:
        test[1][2] = jugadorTurno;
        break;
    case 7:
        test[2][0] = jugadorTurno;
        break;
    case 8:
        test[2][1] = jugadorTurno;
        break;
    case 9:
        test[2][2] = jugadorTurno;
        break;
    }

    if(jugadorTurno == 'x'){
        jugadorTurno = 'o';
    }else if(jugadorTurno == 'o'){
        jugadorTurno = 'x';
    }
}

int main(){
iniciarJuego();
while(hayGanador == false){
    dibujarTablero();
jugar();
checkGanador();
}

return 0;
}
