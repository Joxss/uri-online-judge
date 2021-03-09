#include <iostream>
#include <algorithm>
using namespace std;


int main(){
	int cod, q;
	double v[5]={4,4.5,5,2,1.5};
	cin >> cod >> q;
	printf("Total: R$ %.2lf\n",v[cod-1]*q);

}