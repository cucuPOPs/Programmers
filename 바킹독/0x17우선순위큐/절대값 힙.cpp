// 11286번: 절대값 힙
#include <bits/stdc++.h>
using namespace std;

//cmp를 클래스로 만들어야함.

//삽입은 리프노드에 삽입되고, 부모랑 비교하면서 swap되기에, 
// return a<b이면, maxHeap. top이 max.
// return a>b이면, minHeap. top이 min.

class cmp
{
public:
    bool operator()(int a, int b)
    {
        if (abs(a) != abs(b)) return abs(a) > abs(b);
        return a > 0 && b < 0;
    }
};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    priority_queue<int, vector<int>, cmp> pq;
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        if (x == 0)
        {
            if (pq.empty())
                cout << "0\n";
            else
            {
                cout << pq.top() << '\n';
                pq.pop();
            }
        }
        else
            pq.push(x);
    }
}