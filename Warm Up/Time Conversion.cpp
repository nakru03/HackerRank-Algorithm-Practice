#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
    string result;
    if(s[8]=='P')
    {
        if(s[0]=='1'&&s[1]=='2')
        {
            for(int i=0; i<8; i++)
            {
                result+=s[i];
            }
        }
        else
        {
             int ten = (int)(s[0]);
            ten=ten+1;
        
            int one = (int)(s[1]);
            one = one +2;
        
            s[0]=(char)ten;
            s[1]=(char)one;
        
            for(int i=0; i<8; i++)
            {
                result+=s[i];
            }
        }
       
    }
    else
    {
        if(s[0]=='1'&&s[1]=='2')
        {
            s[0]='0';
            s[1]='0';
            for(int i=0; i<8; i++)
            {
                result+=s[i];
            }
        }
        else{
            for(int i=0; i<8; i++)
            {
                result+=s[i];
            }
        }
    }
    return result;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}