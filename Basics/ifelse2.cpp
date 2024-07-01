/*
A school has following rules for grading system
a. Below 25 - F
b. 25 to 44 - E
c. 45 to 49 - D
d. 50 to 59 - C
e. 60 to 79 - B
f. 80 to 100 - A
Ask user to enter marks and print corresponding grade.
*/

#include<bits/stdc++.h>
using namespace std;
int main(){

    #ifndef ONLINE_JUDGE
        freopen("../input.txt","r",stdin);
        freopen("../output.txt","w",stdout);
    #endif

    int marks;
    cin >> marks;

    if(marks < 25){
        cout << "Your grade is F";
    }
    else if(marks <= 44){
        cout << "Your grade is E";
    }
    else if(marks <= 49){
        cout << "Your grade is D";
    }
    else if(marks <= 59){
        cout << "Your grade is C";
    }
    else if(marks <= 79){
        cout << "Your grade is B";
    }
    else{
        cout << "Your grade is A";
    }

    return 0;

}