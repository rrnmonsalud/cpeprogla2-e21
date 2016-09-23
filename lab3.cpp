//Robert Russell N. Monsalud E21
#include<iostream>
#include<string.h>
using namespace std;
char str1[100], str2[200], word[100], ans;
int n, flag, x;
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();
int choice(int x);
char again(char ans);
void problem1() {
int result;
cout << "*********************\n";
cout << "STRING COMPARE\n";
cout << "*********************\n";
cin.ignore();
cout<<"Enter a first word (str1): ";
gets(str1);
cout<<"Enter second word  (str2): ";
gets(str2);
result = strcmp(str1, str2);
  if(result==-1){
  	cout<<"negative";
  }
  if(result==1){
  	cout<<"positive";
  }
  if(result==0){
  	cout<<"equal";
  }
}
void problem2() {
cout << "*********************\n";
cout << "STRING COPY\n";
cout << "*********************\n";
cin.ignore();
cout<<"Enter a first word (str1): ";
gets(str1);
cout<<"Enter second word  (str2): ";
gets(str2);
cout<<"New string value for str1: "<<strcpy(str1, str2);
}
void problem3() {
cout << "*********************\n";
cout << "STRING CONCATENATION\n";
cout << "*********************\n";
cin.ignore();
cout<<"Enter a first word (str1): ";
gets(str1);
cout<<"Enter second word  (str2): ";
gets(str2);
cout<<"New string value for str1: "<<strcat(str1, str2);
}
void problem4() {
cout << "*********************\n";
cout << "PALINDROME\n";
cout << "*********************\n";
cin.ignore();
cout<<"Enter a word: ";
gets(word);
n=strlen(word);
for(int i=0;i<n;i++) {
if(word[i]!=word[n-(i+1)]) flag=0;
else flag=1;
    }
    if (flag==1) cout<<"The word "<<word<<" is a palindrome.";
    else if (flag==0) cout<<"The word "<<word<<" is not a palindrome.";
}
void problem5() {
cin.ignore();
cout<<"Enter some string: ";
gets(word);
strlwr(word);
word[0]-=32;
for(int i=0;i<strlen(word);i++) {
if(word[i]==32) word[i+1]-=32;
}
cout<<word<<endl;
}
void problem6() {
cin.ignore();
cout<<"Enter a string: ";
gets(word);
n=strlen(word);
for(int i=n;i>=0;i--) {
if (word[i]==32) {
int j=i+1;
while(word[j]!=32&&j<n) {
cout<<word[j];
j++;
}
cout<<endl;
}
}
int k=0;
while(word[k]!=32) {
cout<<word[k];
k++;
}
}
int choice(int x) {
cout<<"Choose a problem number to solve [1-6]: ";
cin>>x;
switch(x) {
case 1:
problem1();
again(ans);
break;
case 2:
problem2();
again(ans);
break;
case 3:
problem3();
again(ans);
break;
case 4:
problem4();
again(ans);
break;
case 5:
problem5();
again(ans);
break;
case 6:
problem6();
again(ans);
break;
default: cout <<"\nWrong choice of problem number!\n";
break;
}
return x;
}
char again(char ans) {
cout<<"\n\nDo you want to solve another problem? [y/n] ";
cin>>ans;
if (ans=='Y' || ans=='y') {
system("cls");
choice(x);
}
else if (ans=='n'|| ans=='N') {
cout<<"\nThank you for using this program! The problem will exit now.\n";
}
else {
again(ans);
}
return ans;
}
main() {
choice(x);
}

