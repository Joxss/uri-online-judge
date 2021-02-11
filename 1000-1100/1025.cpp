#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> marbles;
    int q, q2, n, cont=1;
    bool achou;
    while(1){
        marbles.clear();
        cin >> q >> q2;
        if(q==0 && q2==0)
            break;
        for(int i=0;i<q;i++){
            cin >> n;
            marbles.emplace_back(n);
        }
        sort(marbles.begin(),marbles.end());
        for(int i=0;i<q2;i++){
            achou=false;
            cin >> n;
            if(i==0)
                printf("CASE# %d:\n",cont);
            for(int j=0;j<marbles.size();j++){
                if(n==marbles[j]){
                    printf("%d found at %d\n",n,j+1);
                    achou=true;
                    break;
                }
            }
            if(achou==false){
                printf("%d not found\n",n);
            } 
        }
        cont++;
    }
}