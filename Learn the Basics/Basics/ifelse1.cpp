// Write a program that takes an input of age and prints if you are an adult or not.

#include<bits/stdc++.h>
using namespace std;
int main(){

    #ifndef ONLINE_JUDGE
        freopen("../../input.txt","r",stdin);
        freopen("../../output.txt","w",stdout);
    #endif

    int age;
    cin >> age;
    if(age < 18){
        cout << "You are not an adult yet!";
    }
    else{
        cout << "You are an adult!";
    }

    return 0;

}