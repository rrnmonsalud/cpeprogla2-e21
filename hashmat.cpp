//Robert Russell N. Monsalud E21
#include <iostream>
#include <cmath>
using namespace std;
char b;
int main()
{
		int hashmatArmy, opponentArmy, x;
		while(cin>>hashmatArmy>>opponentArmy)
		{
			if (hashmatArmy>4294967296&&opponentArmy>4294967296) // 4294967296 is equal to 2^32
			{
				goto a;
			}
			else
			{
				for(x=0;x<1;x++)
				{
					if (hashmatArmy<=opponentArmy)
					{
						cout<<abs(opponentArmy-hashmatArmy)<<endl;
					}
					else
					{
						cout<<abs(opponentArmy-hashmatArmy)<<endl;
					}
				}
			}
		}
	a:return 0;
}



