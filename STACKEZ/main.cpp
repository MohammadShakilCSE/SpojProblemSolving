#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
   scanf("%d",t);
    stack<int>mystack;
    while(t--){
        int ch;
        scanf("%d",ch);
           if(ch==1){
            scanf("%d",ch);
            mystack.push(ch);

        }
        else if(ch==2){
            if(!mystack.empty())
                mystack.pop();
        }
         else{
            if(mystack.empty()){
                cout<<"Empty!"<<endl;
            }
           else
            cout<< mystack.top()<<endl;
        }


    }
    return 0;
}
