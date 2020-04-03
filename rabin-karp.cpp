#include <bits/stdc++.h> 
using namespace std; 
  
#define d 10  

void FindPattern(char pattern[], char text[], int q)  
{  int n_spurious=0;
    int M = strlen(pattern);  
    int N = strlen(text);  
    int i, j;  
    int p = 0; 
    int t = 0; 
    int h = 1;  

    for (i = 0; i < M - 1; i++) 
 
        h = (h * d) % q;  
  
    for (i = 0; i < M; i++)  
    {  
        p = (d * p + pattern[i]-'0') % q;  
        t = (d * t + text[i]-'0') % q;  
    }  
  
    for (i = 0; i <= N - M; i++)  
    {  
  
        if ( p == t )  
        {  
            for (j = 0; j < M; j++)  
            {  
                if (text[i+j] != pattern[j])  {
   n_spurious++;                 
break;  }
            }  
  
            if (j == M)  

                cout<<"Pattern found at index "<< i<<endl;  
        }  
  
        if ( i < N-M )  
        {  
            t = (d*(t - (text[i]-'0')*h) + (text[i+M]-'0'))%q;  
  
            if (t < 0)  
            t = (t + q);  
        }  
    }  

cout<<"spurious hits= "<<n_spurious<<endl;

}  

int main()  
{  
    char txt[] = "3141592653589793";  
    char pat[] = "26";  
    int q = 11;
    FindPattern(pattern, text, q);  
    return 0;  
}