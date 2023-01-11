#include<bits/stdc++.h>
using namespace std;
int pre(char a){
    if(a=='*' && a=='/'){
        return 3;
    }
    else if(a=='+' && a=='-'){
        return 2;
    }
    else{
        return 1;
    }
}
bool oprator(char a){
    if(a=='+' || a=='-' || a=='*' || a=='/'){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    string infix="x-y/z-k*d";
    stack<int> s;
    vector<char> v;
    int i=0;
    while(infix[i]!='\0'){
        if(!oprator(infix[i])){
            v.push_back(infix[i]);
            i++;
        }
        else{
            if(pre(infix[i])>pre(s.top())){
                s.push(infix[i]);
                i++;
            }
            else{
                v.push_back(s.top());
                s.pop();
            }
        }
    }
for(int i=0;i<v.size();i++){
    cout<<v[i];
}
    return 0;
}