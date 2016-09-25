/** ========================================**
 ** Bismillahi-Rahamanirahim.               **
 ** @Author: A Asif Khan Chowdhury          **
 ** ========================================**/

#include <cstdio>
#include <iostream>
#include <vector>
#include <cstring>
#include <string>
#include <sstream>
#include <queue>
#include <deque>
#include <strings.h>
#include <cmath>
#include <cstdio>
#include <set>
#include <list>
#include <algorithm>
#include <map>

using namespace std;

#define Set(N, j) (N|(1<<j))
#define reset(N, j) (N&~(1<<j))
#define Check(N, j) (bool)(N&(1<<j))
#define toggle(N, j) (N^(1<<j))
#define turnOff(N, j) (N & ~(1<<j))
#define CLEAR(A, x) ( memset(A,x,sizeof(A)) )
#define pii pair <int, int>
#define pb push_back
#define open freopen("D:/a.txt", "r", stdin);
#define write freopen("D:/b.txt","w", stdout);
#define inf (1ll<<28)
#define ll long long
#define ull unsigned ll
#define mod 1000000007
#define gc getchar
#define ls(n) (n<<1)
#define rs(n) ls(n)|1
#define MID(a,b) ((a+b)>>1)
#define fs first
#define sc second
#define mx 1010

template<class T>inline bool read(T &x) {
    int c=getchar();
    int sgn=1;
    while((~c&&c<'0')||c>'9') {
        if(c=='-')sgn=-1;
        c=getchar();
    }
    for(x=0; ~c&&'0'<=c&&c<='9'; c=getchar())x=x*10+c-'0';
    x*=sgn;
    return ~c;
}
//int X[]= {-1, -1, -1, 0, 1, 1, 1, 0};   //x 8 direction
//int Y[]= {-1, 0, +1, 1, 1, 0, -1, -1};  //y 8 direction
int X[]= {-1, 0, 1, 0};   //x 4 direction
int Y[]= { 0, 1, 0, -1};  //y 4 direction

int cnt[4];
int n;

int solve(){
    if(cnt[0]==n or cnt[1]==n or cnt[2]==n) return n;
    else if(cnt[0]%2==cnt[1]%2 and cnt[1]%2==cnt[2]%2) return 2;
    else return 1;
}

int main() {
#ifdef DEBUG
    freopen("C:/Users/abu.chowdhury/Desktop/programming/input.in","r",stdin);
//    freopen("C:/Users/abu.chowdhury/Desktop/programming/output.out","w",stdout);
#endif

    int test;
    read(test);
    for(int C=1; C<=test; C++) {
        read(n);
        CLEAR(cnt,0);
        for(int i=0;i<n;i++){
            char c; cin>>c;
            switch (c){
            case 'R':
                cnt[0]++;
                break;
            case 'G':
                cnt[1]++;
                break;
            case 'B':
                cnt[2]++;
                break;
            }
        }
        printf("%d\n",solve());
    }

    return 0;
}
