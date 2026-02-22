#include <bits/stdc++.h>
using namespace std;

int priority(char ch){
    if(ch == '^')return 3;
    else if(ch == '*' || ch == '/')return 2;
    else if(ch == '+' || ch == '-')return 1;
    return -1;
} 

void reverse(string &s){
    int n = s.size();
    int l = 0, r = n-1;

    while(l <= r){
        if(s[l] == '(') s[l] = ')';
        else if(s[l] == ')') s[l] = '(';

        if(s[r] == '(') s[r] = ')';
        else if(s[r] == ')') s[r] = '(';

        swap(s[l], s[r]);
        l++;
        r--;
    }
}

string infixToPrefix(string s){
    int n = s.size();

    int i = 0;
    stack<char> st;
    string ans = "";

    reverse(s);

    while(i < n){
        if((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9')){
            ans += s[i];
        }
        else if(s[i] == '(')st.push(s[i]);
        else if(s[i] == ')'){
            while(!st.empty() && st.top() != '('){
                ans += st.top();
                st.pop();
            }
            st.pop();
        }
        else{
            if(s[i] == '^'){
                while(!st.empty() && priority(s[i]) <= priority(st.top())){
                    ans += st.top();
                    st.pop();
                }
                st.push(s[i]);
            }
            else{
                while(!st.empty() && priority(s[i]) < priority(st.top())){
                    ans += st.top();
                    st.pop();
                }
                st.push(s[i]);
            }
        }
        i++;
    }

    while(!st.empty()){
        ans += st.top();
        st.pop();
    }

    reverse(ans);

    return ans;
}

int main()
{

#ifndef ONLINE_JUDGE
  freopen("../../input.txt", "r", stdin);
  freopen("../../output.txt", "w", stdout);
#endif
    
    string s = "(A+B)*C-D+F";
    string inToPre = infixToPrefix(s);
    cout << inToPre << endl;

  return 0;
}