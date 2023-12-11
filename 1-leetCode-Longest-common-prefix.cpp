#include <bits/stdc++.h>
using namespace std;
string lcp(vector<string> &str)
{
  sort(str.begin(), str.end());
  string f = str.front();
  string l = str.back();
  string result;
  for(int i=0; i<l.size(); i++)
  {
    if(f[i]==l[i]) result +=f[i];
  }
  return result;
}
int main()
{
  int n;
  cin >> n;
  vector<string> str;
  for (int i = 0; i < n; i++)
  {
    string s;
    cin >> s;
    str.push_back(s);
  }
  cout << lcp(str) << endl;
  // lcp(str);
}