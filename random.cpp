
#include <bits/stdc++.h>
using namespace std;
int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    vector<int> vec = {1, 2, 3, 4, 5};
    vector<int>::iterator it;
    for (it = vec.begin(); it != vec.end(); ++it)
    {
        *it *= 2;
        cout << *it << endl;
    }
    cout << vec[0] << endl;
    cout << "6/4 is : " <<(6/4) << endl;;

    return 0;
}
