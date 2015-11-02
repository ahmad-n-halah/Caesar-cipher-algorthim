#include <iostream>
#include <string>

using namespace std;

int main(){
	hello:
	int key,length;
	string a,b,l;
	a="abcdefghijklmnopqrstuvwxyz";



    cout<<"enter string"<<endl;
	getline(cin,b);

	cout<<"enter key"<<endl;
	cin>>key;

	cout<< endl;
	cout<<"encryption"<<endl;

	for(int i=0;i<=b.size();i++)
		for(int j=0;j<a.size();j++)
			{
				if(b[i]==a[j])
				{   
					if((j+key)<=25)
						cout<<a[j+key];
					else
						cout<<a[(j+key) % 26];
				
				}
					
		}
		      
		cout<<endl;
	system("pause");
	system("cls");
	goto hello;
	return 0;
}