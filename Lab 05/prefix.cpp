#include<bits/stdc++.h>
using namespace std;

void run(int n, char arr[][4]){
    int a,b;
    stack<int> s;
    
    for (int i = n-1; i >= 0; i--){
        if (isdigit(arr[i][0])){
            s.push(stoi(arr[i]));
        }
        else {
            a = s.top(); s.pop();
            b = s.top(); s.pop();
            if (arr[i][0]=='+') s.push(a+b);
            else if (arr[i][0]=='-') s.push(a-b);
            else if (arr[i][0]=='*') s.push(a*b);
            else if (arr[i][0]=='/') s.push(a/b);
        }
    }

    cout << "Result is " << s.top() << '\n';
}

int main(){
    char arr[][4] = {"+","*","3","4","5"};
    char arr2[][4] = {"-","*","+","6","2","5","/","8","4"};
    int n = sizeof(arr)/sizeof(arr[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    
    cout << "Run 1:\n"; run(n, arr);
    cout << "\nRun 2:\n", run(n2, arr2);

    return 0;
}