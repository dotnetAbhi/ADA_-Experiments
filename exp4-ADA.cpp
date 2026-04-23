// WAP for implementation of Optimal Merge Pattern
#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int n;
    cout << "Enter no. of Files: ";
    cin >> n;

    priority_queue<int, vector<int>, greater<int>> minHeap;

    cout << "Enter Size of files: ";
    for (int i = 0; i < n; i++)
    {
        int size;
        cin >> size;
        minHeap.push(size);
    }

    int cost = 0;

    while (minHeap.size() > 1)
    {
        int First = minHeap.top();
        minHeap.pop();

        int Second = minHeap.top();
        minHeap.pop();

        int mergeCost = First + Second;
        cost += mergeCost;

        minHeap.push(mergeCost);
    }

    cout << "Minimum Merge Cost = " << cost;

    return 0;
}