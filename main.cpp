#include <iostream>

using namespace std;

int main() {
    int B1,G1,C1,B2,G2,C2,B3,G3,C3, movimientos[6],respuesta=0,control=0;
    while (cin>>B1>>G1>>C1>>B2>>G2>>C2>>B3>>G3>>C3){
        control=0;
        movimientos[0]=B2+B3+C1+C3+G1+G2;
        movimientos[1]=B2+B3+C1+C2+G1+G3;
        movimientos[2]=B1+B3+C2+C3+G1+G2;
        movimientos[3]=B1+B2+C2+C3+G1+G3;
        movimientos[4]=B1+B3+C1+C2+G3+G2;
        movimientos[5]=B2+B1+C1+C3+G3+G2;
        respuesta=movimientos[0];
        for (int i = 0; i < 5; i++) {
            if(respuesta>movimientos[i+1]){
                respuesta=movimientos[i+1];
                control = i+1;
            }
        }
            if(control == 0) cout<<"BCG ";
            if(control == 1) cout<<"BGC ";
            if(control == 2) cout<<"CBG ";
            if(control == 3) cout<<"CGB ";
            if(control == 4) cout<<"GBC ";
            if(control == 5) cout<<"GCB ";
        cout<<respuesta<<endl;
    }
    return EXIT_SUCCESS;
}