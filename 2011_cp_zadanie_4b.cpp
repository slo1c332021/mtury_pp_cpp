#include <bits/stdc++.h>
using namespace std;
bool is_palindorme(string s)
{
    int p, k;
    p = 0;
    k = s.size()-1;
    while(p<k)
    {
        if(s[p] != s[k]) return false;
        p++;
        k--;
    }
    return true;
}
int main()
{
int licznik = 0;
           string s;
           ifstream f("dane.txt");
           while(f>>s)
            {
            if(is_palindorme(s))
            {
            licznik++;
            cout << s << "\n";
            }

           }
           cout << "Wynik = " << licznik << "\n";


}
