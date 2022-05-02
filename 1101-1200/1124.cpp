#include <iostream>
using namespace std;

int main(){
	int l, c, r1, r2, soma ,aux;
	while(1){
		cin >> l >> c >> r1 >> r2;
		if(l==0 && c==0 && r1==0 && r2==0)
			break;
		if(l>c){
			aux = l;
			l = c;
			c = aux;
		}
		if(r1<r2){
			aux = r1;
			r1 = r2;
			r2 = aux;
		}
		if(l<r1*2)
			cout << "N\n";
		else{
			soma=r1+r2;
	        l-=soma; 
	        c-=soma;
	        if(soma*soma<=l*l+c*c)
				cout << "S\n";
	        else
				cout << "N\n";
		}
	}
}