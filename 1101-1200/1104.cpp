#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

int main(){
    int a[100001], b[100001], qa, qb, n, qtda, qtdb;
    while(1){
        cin >> qa >> qb;
        if(qa==0 && qb==0)
            break;
        qtda=0;
        qtdb=0;
        for(int i=0;i<100001;i++){
			a[i]=0;
			b[i]=0;
		}
        for(int i=0;i<qa;i++){
            cin >> n;
            a[n]++;
        }
        for(int i=0;i<qb;i++){
            cin >> n;
            b[n]++;
        }
		for(int i=0;i<100001;i++){
			if(a[i]!=0 && b[i]==0){
				qtda++;
			}
			else if(a[i]==0 && b[i]!=0){
				qtdb++;
			}	
		}
		if(qtda<qtdb)
			cout << qtda << endl;
		else
			cout << qtdb << endl;
    }
}