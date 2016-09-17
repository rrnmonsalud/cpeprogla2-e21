#include <iostream>
using namespace std;
char b;
int main()
{
	do
	{
		system("cls");
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
						cout<<opponentArmy-hashmatArmy<<endl;
					}
					else
					{
						goto c;
					}
				}
			}
		}
		c:cout<<"Do you want to try again[Y/N]? ";
		cin>>b;
	} while ((b=='y')||(b=='Y'));
	a:return 0;
}




