#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

double fairCoin(double v1, double v2, double at){
    return 100*(v1/(v1+v2));
}

double unfairCoin(double v1, double v2, double at){
    double p = at/6;
    double q = 1-p;
    double dividendo = 1 - pow(q/p,v1);
    double divisor = 1 - pow(q/p,v1+v2);
    return 100*(dividendo/divisor);
}

int main(){
    int v1, v2, at, d, aux;
    while(true){
        cin >> v1 >> v2 >> at >> d;
        if(!(v1 || v2 || at || d)) break;
        aux = v1;
        v1=0;
        while(aux>0){
            aux -=d;
            v1++;
        }
        aux = v2;
        v2=0;
        while(aux>0){
            aux -=d;
            v2++;
        }

        if(at==3) printf("%.1lf\n",fairCoin(v1,v2,at));
        else printf("%.1lf\n",unfairCoin(v1,v2,at));
    }
}