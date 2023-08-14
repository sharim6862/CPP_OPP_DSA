// Reverse a string using a stack.
// Example:
// Input: str = "Reverse me"
// Output: em esreveR

#include <iostream>
#include <stack>
#include <string>
using namespace std;

void reverse( string &str)
{
    stack<int> s;
    for(char ch : str)
    {
        s.push(ch);
    }

    for (int i = 0; i < str.length(); i++)
    {
        str[i] = s.top();
        s.pop();
   }
    
}
int main()
{
string str = "Reverse me";

reverse(str);
cout<<str;

return 0;

}