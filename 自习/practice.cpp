#include<iostream>
#include<deque>
using namespace std;
struct node {
    int value;
    int pos;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    deque<int> a;
    int n, m;
    cin >> n >> m;
    for(int i = 1;i<=n;i++) {
        if(a.size()!=0){
            cout << a.front()<<endl;
        }
        else{
            cout<<0<<endl;
        }
        node t;
        cin >> t.value;
        t.pos=i;
        while(!a.empty() && a.back()>t)
            a.pop_back();
        a.push_back(t);
        while(!a.empty()&&a.front().pos<i-m){
            a.pop_front();
        }
    }
    return 0;
}