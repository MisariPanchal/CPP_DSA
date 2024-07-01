// Take 2 numbers and print its sum

#include<bits/stdc++.h>
using namespace std;

int sumOfnum(int num1, int num2){
    int sum = num1 + num2;
    return sum;
}

int main()
{
        #ifndef ONLINE_JUDGE
                freopen("../input.txt","r",stdin);
                freopen("../output.txt","w",stdout);
        #endif

        int num1, num2;
        cin >> num1 >> num2;

        int sum = sumOfnum(num1, num2);
        cout << "sum of 2 numbers is " << sum ;

}