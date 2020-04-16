#include <bits/stdc++.h>

using namespace std;

bool ArePair(char opening,char closing)
{
	if(opening == '(' && closing == ')') return true;
	else if(opening == '{' && closing == '}') return true;
	else if(opening == '[' && closing == ']') return true;
	return false;
}
bool isBalance(string s){
    stack<char>mystack;
    string str;
    for(int i=0;i<s.size();i++){
        if(s[i]=='(' || s[i]=='{' || s[i]=='['){
            mystack.push(s[i]);
           }
           else{
            if(mystack.empty()|| !ArePair(mystack.top(),s[i])){
             return false;
            }
            else{
                mystack.pop();
            }

           }
    }
    return mystack.empty() ? true:false;
}

int main()
{
    string s;
    cin>>s;
    if(isBalance(s))
        cout<<"Balanced"<<endl;
    else
        cout<<"Not balance"<<endl;
    return 0;
}
