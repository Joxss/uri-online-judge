#include <iostream>

using namespace std;

int main(){
	bool b;
	int a, c, cont, w, x, tmp;
	while (1){
        cin >> a >> c;
        if(a==0 && c==0)
            break;
		cont = 0;
        b = false;
        tmp = w = a;
		for(int i=0;i<c;i++){
			cin >> x;
			if (x <= tmp)
                b = false;
			else{
				if(!b) 
                    cont += w - tmp;
				w = x;
                b = true;
			}
			tmp = x;
		}
		if (!b)
			cont += w - tmp;

		cout << cont << endl;
	}
}