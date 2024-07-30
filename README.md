# Exp-5
## 5 - a
### Aim :
To study and implement C++ decision making statements 

### Theory :
if statement:
An ‘if’ statement consists of a boolean expression followed by one or more statements.
if...else statement:
An ‘if’ statement can be followed by an optional ‘else’ statement, which executes when the boolean expression is false.

### Code :
```//Tarang - 23070123140 
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
```
### Output 
### Explanation :
This C++ code shows how to use if, else, and else if statements. It first checks if x is greater than y and prints a message. 
Then, it checks if time is less than 18, printing "Good day" if true, otherwise printing "Good evening." 
It also evaluates time1, printing different greetings based on its value. Lastly, the code asks the user to enter a number and prints whether it is zero, odd, or even.

### Conclusion : 
We learnt to implement if statements, else statements and a simple program using these.
We learnt the importance of these statements.


## 5 - b 
### Aim :
To study and implement C++ decision making statements 

## Theory :
switch statement
A ‘switch’ statement allows a variable to be tested for equality against a list of values.

### Code :
```//Tarang - 23070123140
#include<iostream>
using namespace std;

int main() {
    int choice;
    cout<<"1. Monday"<<endl<<"2. Tuesday"<<endl<<"3. Wednesday"<<endl<<"4. Thursday"<<endl<<"5. Friday"<<endl<<"6. Saturday"<<endl<<"7. Sunday"<<endl;
    cout<<"Enter your choice: ";
    cin>>choice;
    switch(choice) {
        case 1:
        cout<<"Monday";
        break;
        case 2:
        cout<<"Tuesday";
        break;
        case 3:
        cout<<"Wednesday";
        break;
        case 4:
        cout<<"Thursday";
        break;
        case 5:
        cout<<"Friday";
        break;
        case 6:
        cout<<"Saturday";
        break;
        case 7:
        cout<<"Sunday";
        break;
        default:
        cout<<"Wrong Input";
    }
}
```
