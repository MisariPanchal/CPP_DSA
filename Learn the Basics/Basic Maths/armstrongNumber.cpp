
#include <bits/stdc++.h>
using namespace std;

// bool isArmStrong(int n){
//     // int count = to_string(n).length();
//     int count = floor(log10(n) + 1);
//     int lastDigit;
//     int sum = 0;
//     int copy = n;
//     while(n > 0){
//         lastDigit = n % 10;
//         sum += pow(lastDigit, count);
//         n /= 10;
//     }
//     if(sum > INT_MAX || sum < INT_MIN) return 0;
//     if(sum == copy) return true;
//     return false;
// }
bool isArmStrong(int n){
    int length = to_string(n).length();
    int lastDigit = 0;
    int copy = n;
    int sqrSum = 0;
    while(copy){
        lastDigit = copy % 10;
        sqrSum += pow(lastDigit, length);
        copy /= 10;
    }
    if(sqrSum > INT_MAX || sqrSum < INT_MIN) return 0;
    return sqrSum == n;
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("../../input.txt", "r", stdin);
    freopen("../../output.txt", "w", stdout);
#endif

    int num;
    cin >> num;
    cout << isArmStrong(num);

    return 0;
}
