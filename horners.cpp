#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, a[100],p[100],k,x,flag=0;
    printf("Input n: \n");
    scanf("%d",&n);
    k=n-1;
    for(int i=0;i<=n;i++)
    {
        printf("a[%d] = ",(n-i));
        scanf("%d",&a[i]);
    }
    printf("Input x: \n");
    scanf("%d",&x);
    p[n-1]=a[0];
    for(int j=1;j<=n;j++)
    {
        k--;
        p[k]=(p[k+1]*x) + a[j];
        printf("p[%d]= %d\n",(n-j),p[k]);
        cout<<k<<endl;
        if(p[k]==0)
            flag=1;
    }

    if(flag==1)
        printf("Justified\n");
    else
        printf("Not Justified\n");
    return 0;

}
