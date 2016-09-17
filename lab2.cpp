#include <iostream>
#include <math.h>
#include <ctime>
#include <cstdlib>
using namespace std;

double problem1(double num){
	cout << "Enter a number to be round off: ";
	cin >> num;
	cout << "Round off value: "<<round(num)<<"\n"<<endl;
}

void problem2(){
	int uniques [10];
	int max = 20;
	int min = 1;
	int num1; 
	bool check = true; 
	srand(time(NULL)); 
	for (int i=0;i<10;i++){
    	
	do{
    	num1=rand()%max+min;
    	check = true;
   		 for (int j=0;j<i;j++)
   		     if (num1 == uniques[j]) {
           	 check = false; 
             break; 
        }
    } while (!check); 
	uniques[i]=num1;
	cout << num1 << " ";
	}
}

int call_by_value(){
	int n, result=1;
	cout<<"\n\nEnter a number: ";
	cin>>n;
	for(int i=1;i<n+1;i++) {
		if(n==0) cout<<" Result: 1\n";
		else result=result*i;
	}
	cout<<"The factorial of "<< n <<" is "<<result<<endl;
}

main(){
	double num, result;
	int n;
	problem1(num);
	problem2();
	call_by_value();
}





