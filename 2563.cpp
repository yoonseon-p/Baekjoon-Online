#include <iostream>
using namespace std;
int main()
{
	int arr[100][100]={},n,a,b,sum=0;
	
	cin >> n;
	
	for(int i=0; i<n; i++) {
		cin >> a >> b;
		for(int x=a; x<a+10; x++) {
			for(int y=b; y<b+10; y++) {
				if(arr[x][y] == 1) {
					continue;
				}
				arr[x][y] = 1;
				sum++;	
			}
		}
	}
	
	cout << sum;
}
