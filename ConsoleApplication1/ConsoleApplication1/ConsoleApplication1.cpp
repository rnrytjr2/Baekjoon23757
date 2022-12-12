// ConsoleApplication1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <queue>
#define collection cin.tie(NULL);ios_base::sync_with_stdio(false);
using namespace std;
int N, M;
priority_queue<int> c;
int main()
{
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        int data;
        cin >> data;
        c.push(data);
    }
    for (int i = 0; i < M; i++)
    {
        int data;
        cin >> data;
        if (c.top() >= data)
        {
            c.push(c.top() - data);
            c.pop();
        }
        else
        {
            cout << '0';
            return 0;
        }
    }
    cout << '1';
}

