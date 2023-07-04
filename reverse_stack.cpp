#include<stack>
#include<iostream>
using namespace std;

int main(){
    string s = "hello";
    stack<char> st;
    for(int i = 0; i < s.length(); i++){
        char ch = s[i];
        st.push(ch);
    }

    string ans = "";
    while(!st.empty()){
        char ch = st.top();
        ans.push_back(ch);
        st.pop();
    }
    cout << ans << endl;
}