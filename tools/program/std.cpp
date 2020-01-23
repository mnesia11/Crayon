#include <bits/stdc++.h>
using namespace std;
 
const int N = 1009;
 
int n,a[N],x;
bool book[N];
int _wave[N],k;
int _size;
 
bool prime(int x) {
    if(x == 2) return true;
    for(int i=2;i*i<=x;i++) {
        if(x % i == 0)
            return false;
    }
    return true;
}
 
bool perfect(int x) {
    int sum = 0;
    for(int i=2;i<=x;i++) {
        if(x % i == 0) {
            sum += x / i;
        }
    }
    if(sum == x) return true;
    else return false;
}
 
bool flower(int x) {
    int sum = 0,key = x;
    while(x) {
        int pos=x%10;
        sum += pos*pos*pos;
        x /= 10;
    }
    if(sum == key) return true;
    else return false;
}
 
bool wave(int x) {
    int size_ = 0,tag = 0;
    int key[N] = {0};
    int last[2] = {0};
    int t[10] = {0};
    while(x) {
        size_++;
        if(size_ == 1) last[size_] = x % 10;
        if(size_ == 2) last[0] = x % 10;
        if (last[1]==last[0]) return false;
        _wave[size_] = x % 10;
        if(t[x % 10] == 0) {
            tag++;
            t[x % 10] = 1;
        }
        if(tag > 2) return false;
        if(_wave[size_] != last[size_ % 2]) return false;
        x /= 10;
    }
    if(size_ < 3) return false;
    return true;
}
 
int main()
{
    scanf("%d",&n);
    memset(book,false,sizeof(book));
    for(int i=1;i<=n;++i)
    {
        scanf("%d",&k);
        if (prime(k)||perfect(k)||flower(k)||wave(k)) book[k]=true;
    }
    for(int i=1;i<=1000;i++) {
        if(book[i] == 1) {
            printf("%d ",i);
        }
    }
}
