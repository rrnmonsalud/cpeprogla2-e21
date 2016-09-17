#include <iostream>
using namespace std;

struct Name{
       char fullName[100];
};

struct Student{
       int id;
       Name name;
       double quiz[3]; 
       double sum;
	   double average;      
};

void newLine();

int main(){
    Student stud;
    cout << "Enter Student Record: \n";
    cout << "ID: ";
    cin >> stud.id;
    newLine();
    cout << "Name: ";
    cin.getline(stud.name.fullName, 99);
    for(int i=0; i<3; i++){
            cout << "Quiz "<< i+1 << ": ";
            cin >> stud.quiz[i];        
    }
    
    cout << "\n\n";
    cout << "Student Record\n";
    cout << "ID: " << stud.id << endl;
    cout << "Name: " << stud.name.fullName << endl;
    for(int i=0; i<3; i++){
            cout << "Quiz "<< i+1 << ": " << stud.quiz[i] << endl;       
            stud.sum+=stud.quiz[i];
            stud.average=stud.sum/3;
    }
    cout<< "Grades: " << stud.average;
    
    if (stud.average>=75)
    {
    	cout << " \nRemarks: Passed";
	}
	else
	{
		cout << " \nRemarks: Failed";
	}
    
    system("pause > 0");
    return 0;   
}
void newLine(){
     char s;
     do{cin.get(s);}while(s!='\n');     
}
