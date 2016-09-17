#include <iostream>
using namespace std;
int main()
{
	int x;
	for(x=1;x<=100;x++)
		{
			if((x%3==0)&&(x%5==0))
				{
					cout<<"FizzBuzz\n";
				}
			else if(x%5==0)
				{
					cout<<"Buzz\n";
				}
			else if(x%3==0)
				{
					cout<<"Fizz\n";
				}
			else
				{
					cout<<x<<"\n";
				}
		}
}
