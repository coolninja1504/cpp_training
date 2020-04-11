#include<iostream>
#include<algorithm>
#include <vector>
using namespace std;

int main()
{
	vector <int> vec{4,1,9,3,7};

	sort(vec.begin(),vec.end());

	for(int i=0;i<vec.size();i++)
	{
		cout << vec[i] << '\t';
	}
	cout << endl;
return 0;
}
