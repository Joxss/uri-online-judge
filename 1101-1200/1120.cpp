#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{
	int t;
	char c;
	string s;
	while(getline(cin, s))
	{
		if(s.compare("0 0") == 0)
			return 0;
		c = s[0];
		s.erase (0,2);
		t = s.size();
		s.erase(remove(s.begin(), s.begin() + t, c), s.end());
		while(s[0] == '0')
		{
			if(s.size() == 1)
				break;

			s.erase (0,1);
		}
		if(s.size() == 0){
			cout << 0 << endl;
		}else{
			cout << s << endl;
		}
	}

	return 0;
}