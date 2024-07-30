//Tarang - 23070123140 
//Exp - 5
#include<iostream>
using namespace std;
int main(){
  // if statement
  int x = 20;
int y = 18;
if (x > y) {
  cout<< "x is greater than y"<<endl;
}
  //else statement 
  int time = 20;
if (time < 18) {
  cout<< "Good day."<<endl;}
 else {
  cout<< "Good evening."<<endl;

}
  //else if statement
  int time1 = 22;
if (time1 < 10) {
  cout<< "Good morning."<<endl;
} else if (time1 < 20) {
  cout<< "Good day."<<endl;
} else {
  cout<< "Good evening."<<endl;
}
//Simple if else code 
int  num;
    cout<<"Enter positive number: ";
    cin>>num;
    if(num==0) {
        cout<<num<<" is zero"<<endl;
    }
    else if(num%2!=0){
        cout<<num<<" is odd"<<endl;
    }
    else {
        cout<<num<<" is even"<<endl;
    }


}