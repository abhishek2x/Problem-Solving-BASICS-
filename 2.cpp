// 43Ah*ckOrrOnk
#include <bits/stdc++.h>

using namespace std;


string decryptPassword(string s) {
    stack<char> st;
    string ans = "";
    s += " ";

    for (int i = 0; i < s.length(); i++)
    {
        if((s[i] == '1') || (s[i] == '2') || (s[i] == '3') || 
        (s[i] == '4') || (s[i] == '5') || (s[i] == '6') || 
        (s[i] == '7') || (s[i] == '8') || (s[i] == '9') ) {
            st.push(s[i]);
        }
        else if(s[i] == '0'){
            ans += st.top();
            st.pop();
        }   
        else if(((s[i] >= 'A' && s[i] <= 'Z') && (s[i+1] >= 'a' && s[i+1] <= 'z')) && s[i+2] == '*'){
                ans += s.substr(i+1, 1) + s.substr(i, 1);
                i += 2;
        }
        else if (s[i] >= 'A' && s[i] <= 'Z'){
            ans += s[i];
        }
        else {
            ans += s[i];
        }
        // cout << ans << "  ";
    }
    // cout << "ans : " << ans;
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = decryptPassword(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
