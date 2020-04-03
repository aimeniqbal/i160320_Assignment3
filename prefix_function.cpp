#include <iostream>
#include <vector>
#include <bits/stdc++.h> 
using namespace std;

void Output(vector<int> p)
{
	for(int i=0;i<p.size();i++)
	{
	cout<<p[i]<<", ";
	}
}

vector<int> prefix_function(string s)

 {
    int n = (int)s.length();
    vector<int> p(n);

    for (int i = 1; i < n; i++) 

{
        int j = p[i-1];
        while (j > 0 && s[i] != s[j])
            j = p[j-1];
        if (s[i] == s[j])
            j++;
        p[i] = j;
    }

    return p;
}


int main()
{
vector<int> p=prefix_function("aabaabcab");
Output(p);
	
}
