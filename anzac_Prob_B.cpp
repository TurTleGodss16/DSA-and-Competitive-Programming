#include<bits/stdc++.h>
#define el '\n'
using namespace std;
string s;
char ans[10][10];
main(){
    ios_base::sync_with_stdio(false);
    cin >> s;
    for(int i = 0; i < 2; i++)
    {
        char c = s[i];
        int check = c - '0';
        if(check == 1)
        {
            //cout << '.\n.\n.\n*';
            ans[i][0] = '.';
            ans[i][1] = '.';
            ans[i][2] = '.';
            ans[i][3] = '*';
        }
        else if(check == 2)
        {
            //cout << '.\n.\n*\n.';
            ans[i][0] = '.';
            ans[i][1] = '.';
            ans[i][2] = '*';
            ans[i][3] = '.';
        }
        else if(check == 3)
        {
            //cout << '.\n.\n*\n*';
            ans[i][0] = '.';
            ans[i][1] = '.';
            ans[i][2] = '*';
            ans[i][3] = '*';
        }
        else if(check == 4)
        {
            //cout << '.\n*\n.\n.';
            ans[i][0] = '.';
            ans[i][1] = '*';
            ans[i][2] = '.';
            ans[i][3] = '.';
        }
        else if(check == 5)
        {
            //cout << '.\n*\n.\n*';
            ans[i][0] = '.';
            ans[i][1] = '*';
            ans[i][2] = '.';
            ans[i][3] = '*';
        }
        else if(check == 6)
        {
            //cout << '.\n*\n*\n.';
            ans[i][0] = '.';
            ans[i][1] = '*';
            ans[i][2] = '*';
            ans[i][3] = '.';
        }
        else if(check == 7)
        {
            //cout << '.\n*\n*\n*';
            ans[i][0] = '.';
            ans[i][1] = '*';
            ans[i][2] = '*';
            ans[i][3] = '*';
        }
        else if(check == 8)
        {
            //cout << '*\n.\n.\n.';
            ans[i][0] = '*';
            ans[i][1] = '.';
            ans[i][2] = '.';
            ans[i][3] = '.';
        }
        else if(check == 9)
        {
            //cout << '*\n.\n.\n*';
            ans[i][0] = '*';
            ans[i][1] = '.';
            ans[i][2] = '.';
            ans[i][3] = '*';
        }
        else if(check == 0)
        {
            //cout << '.\n.\n.\n.';
            ans[i][0] = '.';
            ans[i][1] = '.';
            ans[i][2] = '.';
            ans[i][3] = '.';
        }
    }
    ans[2][0] = ' ';
    ans[2][1] = ' ';
    ans[2][2] = ' ';
    ans[2][3] = ' ';
    for(int i = 2; i < 4; i++)
    {
        char c = s[i];
        int check = c - '0';
        if(check == 1)
        {
            //cout << '.\n.\n.\n*';
            ans[i+1][0] = '.';
            ans[i+1][1] = '.';
            ans[i+1][2] = '.';
            ans[i+1][3] = '*';
        }
        else if(check == 2)
        {
            //cout << '.\n.\n*\n.';
            ans[i+1][0] = '.';
            ans[i+1][1] = '.';
            ans[i+1][2] = '*';
            ans[i+1][3] = '.';
        }
        else if(check == 3)
        {
            //cout << '.\n.\n*\n*';
            ans[i+1][0] = '.';
            ans[i+1][1] = '.';
            ans[i+1][2] = '*';
            ans[i+1][3] = '*';
        }
        else if(check == 4)
        {
            //cout << '.\n*\n.\n.';
            ans[i+1][0] = '.';
            ans[i+1][1] = '*';
            ans[i+1][2] = '.';
            ans[i+1][3] = '.';
        }
        else if(check == 5)
        {
            //cout << '.\n*\n.\n*';
            ans[i+1][0] = '.';
            ans[i+1][1] = '*';
            ans[i+1][2] = '.';
            ans[i+1][3] = '*';
        }
        else if(check == 6)
        {
            //cout << '.\n*\n*\n.';
            ans[i+1][0] = '.';
            ans[i+1][1] = '*';
            ans[i+1][2] = '*';
            ans[i+1][3] = '.';
        }
        else if(check == 7)
        {
            //cout << '.\n*\n*\n*';
            ans[i+1][0] = '.';
            ans[i+1][1] = '*';
            ans[i+1][2] = '*';
            ans[i+1][3] = '*';
        }
        else if(check == 8)
        {
            //cout << '*\n.\n.\n.';
            ans[i+1][0] = '*';
            ans[i+1][1] = '.';
            ans[i+1][2] = '.';
            ans[i+1][3] = '.';
        }
        else if(check == 9)
        {
            //cout << '*\n.\n.\n*';
            ans[i+1][0] = '*';
            ans[i+1][1] = '.';
            ans[i+1][2] = '.';
            ans[i+1][3] = '*';
        }
        else if(check == 0)
        {
            //cout << '.\n.\n.\n.';
            ans[i+1][0] = '.';
            ans[i+1][1] = '.';
            ans[i+1][2] = '.';
            ans[i+1][3] = '.';
        }
    }
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            cout << ans[j][i] << " ";
        }
        cout << el;
    }
}
