#include <bits/stdc++.h>
using namespace std;

string postfixToInfix(string s){
    int n = s.size();

    int i = 0;
    stack<string> st;

    while(i < n){
        if((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9')){
            st.push(string(1, s[i]));
        }
        else{
            string t1 = st.top();
            st.pop();
            string t2 = st.top();
            st.pop();

            st.push('(' + t2 + s[i] + t1 + ')');
        }

        i++;
    }

    return st.top();
}

int main()
{

#ifndef ONLINE_JUDGE
  freopen("../../input.txt", "r", stdin);
  freopen("../../output.txt", "w", stdout);
#endif
    
    string s = "AB-DE+F*/";
    string postToIn = postfixToInfix(s);
    cout << postToIn << endl;

  return 0;
}