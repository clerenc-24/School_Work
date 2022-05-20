#include <iostream>
#include <string>

using namespace std;
int main(){
	
	char p[] = {'G', 'C', 'A', 'G', 'A', 'G', 'A', 'G'};
	char s[] = {'G', 'C', 'A', 'T', 'C', 'G', 'C', 'A', 'G', 'A', 'G', 'A', 'G', 'T', 'A', 'T', 'A', 'C', 'A', 'G', 'T', 'A', 'C', 'G'};
	int ls = sizeof(p);
	int lp = sizeof(s); 
	const int max = (ls - lp +1);
	bool flag;
	for (int i = 0; i < max; i++)
		{
			flag = true;
				for (int j = 0; j < lp & flag == true; j++);
			{
					if	(int i=0,j=0; p[j] != s[j+i-1])
					{
						flag = false;
					}
			}
					if (flag = true)
				{
				return i;
				}
		}
	return 0;
	}