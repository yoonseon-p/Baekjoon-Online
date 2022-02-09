#include <iostream>
using namespace std;

int main()
{
    string s1,s2;
    int a=0, b=0,c=0;
 
    cin >> s1 >> s2;
    
    for(int i=0; i<s1.size(); i++)
    {
        for(int j=0; j<s2.size(); j++){
            if(s1[i] == s2[j]){
                a=i;
                b=j;
                c++;
                break;
            }
        }
        if(c==1)
            break;
    }

	
    for(int i=0; i<b; i++)
	{
		for(int j=0; j<s1.size(); j++)
		{
			if(j!=a && i!=b)
			{
				cout << ".";
			}
			else
			{
				cout << s2[i];
			}
		
		}
		cout << "\n";
	}
	
	cout << s1 << "\n";
	
	 for(int i=b+1; i<s2.size(); i++)
	{
		for(int j=0; j<s1.size(); j++)
		{
			if(j!=a && i!=b)
			{
				cout << ".";
			}
			else
			{
				cout << s2[i];
			}
		
		}
		cout << "\n";
	}
	
}
