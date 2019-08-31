#include <iostream>
#include <unordered_map>
#include <stack>

using namespace std;

unordered_map<char, char> parentheses_map = {
    {')', '('},
    {']', '['},
    {'}', '{'},
};

class Solution
{
public:
  bool isValid(string s)
  {
    stack<char> stack;

    for (int i = 0; i < s.length(); i++)
    {
      char c = s[i];

      if (!parentheses_map.count(c))
      {
        stack.push(c);
        continue;
      }

      if (!stack.empty() && parentheses_map[c] == stack.top())
      {
        stack.pop();
        continue;
      }

      return false;
    }

    return stack.empty();
  }
};