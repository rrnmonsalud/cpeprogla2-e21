#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main(){
    ifstream f("input.txt");
    
    int hashmat, opponent;
    
    while (f >> hashmat >> opponent) {
          cout << abs(hashmat-opponent)<<"\n\n";      
    }
    
    
    system("pause");
    return 0;
}   
