#include<bits/stdc++.h>
using namespace std;
char reVal(int num)
{
    if (num >= 0 && num <= 9)
        return (char)(num + '0');
    else
        return (char)(num - 10 + 'A');
}

void strev(char *str)
{
    int len = strlen(str);
    int i;
    for (i = 0; i < len/2; i++)
    {
        char temp = str[i];
        str[i] = str[len-i-1];
        str[len-i-1] = temp;
    }
}

char* fromDeci(char res[], int base, int inputNum)
{
    int index = 0;
    while (inputNum > 0)
    {
        res[index++] = reVal(inputNum % base);
        inputNum /= base;
    }
    res[index] = '\0';

    strev(res);
    return res;
}

// Driver program
int main()
{
    int n, b,x=1;
    cin>>n>>b;
    while(n>1){
      x=x*n;
      n--;
    }

    char res[100];
    string z = fromDeci(res, b, x);
    int y=0;
    x=(z.length())-1;
    while(z[x]=='0'){
      y++;
      x--;
    }
    cout<<y;
    return 0;
}
