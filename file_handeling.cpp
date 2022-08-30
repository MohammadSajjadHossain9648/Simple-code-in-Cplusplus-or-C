#include <bits/stdc++.h>
using namespace std;

int main()
{
    string line;
    system("COLOR 0C");
    ifstream myfile ("1234.txt");
    if (myfile.is_open())
    {
      while ( getline (myfile,line) )
        {
         cout << line << '\n';
        }
      myfile.close();
     }

     else cout << "Unable to open file";
}

