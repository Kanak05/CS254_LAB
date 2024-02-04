#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input_Q3.txt", "r", stdin);
    freopen("output_Q3.txt", "w", stdout);
    int t;
    cin >> t;
    clock_t start, end;
    start = clock();

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        priority_queue<int> pq(a.begin(), a.end());
        for (int i = 0; i < k - 1; i++)
            pq.pop();
        cout << k << "th largest element is: " << pq.top() << endl;
    }
    end = clock();
    double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
    cout << "The time taken to run the program is: " << time_taken << " sec" << endl;
}