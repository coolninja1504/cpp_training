#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool sortcol(vector <int>& v1,vector <int>& v2)
{
	return v1[1]<v2[1];
}

int main()
{
	vector< vector<int> > vect{{3,2,8},{10,1,4},{12,6,9}};

	cout << "vector before sort" << endl;
	for(int i=0;i < vect.size();i++)
	{
			for(int j=0;j<vect[i].size();j++)
			{
				cout << '\t' << vect[i][j];
			}
			cout << endl;
	}
	
	//sort(vect[0].begin(),vect[0].end());
	//sort(vect[1].begin(),vect[1].end());
	//sort(vect[2].begin(),vect[2].end());

	sort(vect.begin(),vect.end(),sortcol);	

	cout << "vector after sort" << endl;
	for(int i=0;i < vect.size();i++)
	{
			for(int j=0;j<vect[i].size();j++)
			{
				cout << '\t' << vect[i][j];
			}
			cout << endl;
	}
return 0;
}
