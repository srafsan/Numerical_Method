#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        double num=0;
        int x=0;
        string s;
        printf("\nInput the number and number of significant figures\n");
        cin>>s>>num;
        for(int i=0; i<num; i++)
        {
            printf("%c",s[i]);
        }
        x=s[num+1]-48;
        if(x>5)
        {
            x=(s[num]-48)+1;
            printf("%d",x);
        }
        else if(x<5)
        {
            x=(s[num]-48);
            printf("%d",x);
        }

        else if(x==5)
        {
            int l=s[num]-48;
            if(l%2==0)
                printf("%c",s[num]);
            else
                printf("%d",l+1);
        }
    }
}
