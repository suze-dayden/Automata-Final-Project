#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
	
	vector<vector<string>> dict{{"0","zero"},
		{"1","one"},
			{"2","two"}};
	string chr;
	string word;
	string token;


cout<<"Enter a number 0-2"<<endl;
cin>>token;


for (int i=0;i<dict.size();i++)
{
	if (dict[i][0]==token)
	{
		cout<<dict[i][1];
	}
}
	}
	
