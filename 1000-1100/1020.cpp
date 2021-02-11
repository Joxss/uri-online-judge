#include <iostream>
 
using namespace std;
 
int main() {
 
    int dias, qtdAnos, qtdMeses, qtdDias;
    scanf("%d",&dias);
    
    qtdAnos = dias / 365;
    dias = dias % 365;
    qtdMeses = dias / 30;
    dias = dias % 30;
    qtdDias = dias;
    
    printf("%d ano(s)\n",qtdAnos);
    printf("%d mes(es)\n",qtdMeses);
    printf("%d dia(s)\n",qtdDias);
 
    return 0;
}