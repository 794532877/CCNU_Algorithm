#include<iostream>
#include<string>
using namespace std;

string s;
string num[10] = { "ling","yi","er","san","si","wu","liu","qi","ba","jiu" };

int main()
{
    getline(cin, s);
    int ans = 0;
    for (int i = 0; i < s.length(); i++)
    {
        ans +=s[i] - '0';	//数组转数字 
    }
    int a[100], cnt = 0;
    do 
	{
        a[cnt++] = ans % 10;	//将每一位存进数组 
        ans /= 10;	//缩短数字 
    } while (ans);
    
    for (int i = cnt - 1; i >= 0; i--)
    {
        cout << num[a[i]];
        if (i)
			printf(" ");
    }
    return 0;
}
