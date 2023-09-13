// Cpp program to find first repeated word in a string
#include<bits/stdc++.h>
using namespace std;
void solve(string s)
{
	unordered_map<string,int> mp; // to store occurrences of word
	string t="",ans="";
	// traversing from back makes sure that we get the word which repeats first as ans
	for(int i=s.length()-1;i>=0;i--)
	{
		// if char present , then add that in temp word string t
		if(s[i]!=' ')
		{
			t+=s[i];
			
		}
		// if space is there then this word t needs to stored in map
		else
		{
			mp[t]++;
			// if that string t has occurred previously then it is a possible ans
			if(mp[t]>1)
			ans=t;
			// set t as empty for again new word
			t="";
			
		}
	}
	
	// first word like "he" needs to be mapped
			mp[t]++;
			if(mp[t]>1)
			ans=t;
						
	if(ans!="")
	{
		// reverse ans string as it has characters in reverse order
		reverse(ans.begin(),ans.end());
		cout<<ans<<'\n';
	}
	else
	cout<<"No Repetition\n";
}
int main()
{
	string u="Ravi had been saying that he had been there";
	 
	solve(u);
	
	
	return 0;
	
}
