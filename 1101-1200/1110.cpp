#include <iostream>
#include <list>
using namespace std;

int main(){
    int q, temp;
    list<int> cartas;
    while(1){
        cartas.clear();
        cin >> q;
        if(q==0)
            break;
        for(int i=1;i<=q;i++){
            cartas.push_front(i);
        }
        cout << "Discarded cards: ";
        while(cartas.size()!=1){
            cout << cartas.back();
            cartas.pop_back();
            temp = cartas.back();
            cartas.pop_back();
            cartas.push_front(temp);
            if(cartas.size()!=1)
                cout << ", ";
        }
        cout << endl;
        cout << "Remaining card: " << cartas.back() << endl;
    }
}