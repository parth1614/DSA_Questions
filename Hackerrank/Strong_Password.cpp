#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'minimumNumber' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. STRING password
 */

int minimumNumber(int n, string password) {
    // Return the minimum number of characters to make the password strong
    cin>>n;
    getline(cin,password);
    int x = password.size();
    
    int up=1, low =1, dig=1, sp=1;
    
    string s ("!@#$%^&*()-+");
    
    for(char& c : password){
        if(c>='0' && c<='9'){
            dig = 0;
        }
        else if(c>='a' && c<='z'){
            low = 0;
        }
        else if(c>='A' && c<='Z'){
            up = 0;
        }
        else if(s.find(c) != string::npos){  //string::npos gives -1 if the char we're looking for isn't found. That's we kept it as (!=)
            sp = 0;
        }
    }
    int total = up + low + dig + sp;
    
    return max(6-x,total);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string password;
    getline(cin, password);

    int answer = minimumNumber(n, password);

    fout << answer << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
