#include <bits/stdc++.h> 
  
using namespace std;
int main()
{
	int i=0,word=1;
	
	char str[100], ch;
	
	cout<<"please enter a sentence:"<<endl;
	
	gets(str);
	
		while(true)
		{
			ch=str[i];
			if(ch==' ')
			word++;
			else if(ch=='.' || ch=='\0')
		
		break;
		i++;
		}
		
		cout<<"\n"<<"word="<<word;
	
		return 0;
}
