#include <bits/stdc++.h> 
using namespace std; 
 
void SearchPattern(string pattern, string text)  
{  
    int p = pattern.size();  
    int t = text.size();  
    int i = 0;  
  
    while (i <= t - p)  
    {  
        int j;  
  
        /* checking if match occurs */
        for (j = 0; j < p; j++)  
            if (text[i + j] != patten[j])  
                break;  
  
        if (j == p)
        {  
            cout << "Pattern found at index " << i << endl;  
            i = i + p;  
        }  
        else if (j == 0)  
            i = i + 1;  //move pattern by 1 index
        else
            i = i + j; //move pattern by j indexes
    }  
}  

  
int main()  

{  
    string text= "ABABCD";  
    string pattern = "ABCD";  
    SearchPattern(pattern, text);  
    return 0;  
}   