#include<iostream>
using namespace std;
int n,m;
const int maxn=1e3+5;
int v[maxn],w[maxn];
int f[maxn];
int main(){
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++) scanf("%d%d",&v[i],&w[i]);
    for(int i=1;i<=n;i++){
        for(int j=v[i];j<=m;j++){
                f[j]=max(f[j],f[j-v[i]]+w[i]);
            }
    }
    printf("%d",f[m]);
    return 0;
    
}