#include<iostream>
using namespace std;
class Solution {
     private: string stack,queue;
     public:
     void pushCharacter(char ch)
     {
          stack=stack+ch;
    }
     void enqueueCharacter(char ch)
     {
         queue+=ch;

    }
      char popCharacter()
      {
          int i = stack.length();
          i--;
          return stack[i];

     }
      char dequeueCharacter()
      {
           int j = -1;
            j++;
             return queue[j];
        }
    };

int main() {

    string s;
    getline(cin, s);

    Solution obj;

    for (int i = 0; i < s.length(); i++) {
        obj.pushCharacter(s[i]);
        obj.enqueueCharacter(s[i]);
    }

    bool isPalindrome = true;

    for (int i = 0; i < s.length() / 2; i++) {
        if (obj.popCharacter() != obj.dequeueCharacter()) {
            isPalindrome = false;

            break;
        }
    }

    if (isPalindrome) {
        cout << "The word, " << s << ", is a palindrome.";
    } else {
        cout << "The word, " << s << ", is not a palindrome.";
    }

    return 0;
}
