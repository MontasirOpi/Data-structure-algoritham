#include <bits/stdc++.h>
using namespace std;


/*===========================================
     FUNCTION FOR PATTERN SEARCHING
============================================*/
void naive_algorithm(string text,string pattern)
{
  //length of text string stored in n
  int n = text.length();
  //length of pattern string stored in m
  int m = pattern.length();
  int i,j;
  //Loop for text
  for (i = 0; i <= n-m; i++)
  {
    //Loop for pattern
    for (j = 0; j < m; j++)
    {
      if (text[i+j]!= pattern[j])
        break;
    }
   //if j==pattern length means pattern found
    if (j == m)
      cout<<"Found at index "<<i<<endl;
  }
}

/*===========================================
                MAIN FUNCTION
============================================*/
int main()
{
  string pattern,text;
  text = "I'm a coder, competitive coder!!";
  pattern = "coder";
  naive_algorithm(text, pattern);
  return 0;
}
