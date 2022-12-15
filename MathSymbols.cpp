#include <iostream>
#include <string>

using namespace std;

int main(){
	string var;
	string text;
	char token;
	
	cout<<"Enter a number 0 or 1"<<endl;
	cin>>text;
	//cout<<text;
	
	
	for(int i=0;i<text.size();i++)
	{
		//if(text[i]!=' ')
		
	
	if(text[i]=='0')
	{
			var = "zero";
	}
	else if(text[i]=='1')
	{
			var = "one";
	}

	cout<<var<<" ";
	}
	
	return 0;
}
