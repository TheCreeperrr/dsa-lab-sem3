#include<bits/stdc++.h>
using namespace std;

void run(int n, char arr[][4]){
    int a,b;
    stack<int> s;
    
    for (int i = 0; i < n; i++){
        if (isdigit(arr[i][0])){
            s.push(stoi(arr[i]));
        }
        else {
            b = s.top(); s.pop();
            a = s.top(); s.pop();
            if (arr[i][0]=='+') s.push(a+b);
            else if (arr[i][0]=='-') s.push(a-b);
            else if (arr[i][0]=='*') s.push(a*b);
            else if (arr[i][0]=='/') s.push(a/b);
        }
    }

    cout << "Result is " << s.top() << '\n';
}

int main(){
    char arr[][4] = {"6", "2", "+", "5", "*", "8", "4", "/", "-"};
    char arr2[][4] = {"2", "3", "*", "5", "4", "*", "+", "9", "-"};
    int n = sizeof(arr)/sizeof(arr[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    
    cout << "Run 1:\n"; run(n, arr);
    cout << "\nRun 2:\n", run(n2, arr2);

    return 0;
}