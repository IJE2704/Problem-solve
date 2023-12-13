#include <bits/stdc++.h>
using namespace std;
string lcp(vector<string> &strs)
{

  if (strs.empty())
  {
    return "";
  }

  for (int i = 0; i < strs[0].size(); ++i)
  {
    char currentChar = strs[0][i];

    for (const std::string &str : strs)
    {
      if (i >= str.size() || str[i] != currentChar)
      {
        return str.substr(0, i);
      }
    }
  }

  return strs[0];
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
 
}