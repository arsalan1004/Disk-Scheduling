#include <iostream>
#include <vector>
using namespace std;

void getRequestSequence(vector<int> &reqArray)
{
    int maxSeq;
    int input;
    cout << "Enter the amount of sequences to add: ";
    cin >> maxSeq;
    for (int i = 0; i < maxSeq; i++)
    {
        cout << endl
             << "Enter sequence " << i << " : ";
        cin >> input;
        reqArray.push_back(input);
    }
}

void fcfs()
{
}

int main()
{
    // Request Sequence
    vector<int> reqSequence;

    // Head Position;
    int head;

    // Getting request Sequence
    getRequestSequence(reqSequence);

    // Getting the current head position
    cout << "Enter the current location of the head: ";
    cin >> head;

    return 0;
}