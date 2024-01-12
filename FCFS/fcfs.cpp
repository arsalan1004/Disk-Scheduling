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
        cout
            << "Enter sequence " << i + 1 << " : ";
        cin >> input;
        reqArray.push_back(input);
    }
}

void printArray(vector<int> &array)
{
    for (int i = 0; i < array.size(); i++)
    {
        cout << array[i] << endl;
    }
}

void fcfs(vector<int> reqSequence, int headPosition)
{
    int seekTime = 0;
    vector<int> visitSeq;

    for (int i = 0; i < reqSequence.size(); i++)
    {
        seekTime += abs(reqSequence[i] - headPosition);
        headPosition = reqSequence[i];
    }
    cout << endl
         << "Total Seek Time of Disk is: " << seekTime << endl;
    cout << endl
         << "Seek Sequence is: " << endl;
    printArray(reqSequence);
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
    cout << endl
         << "Enter the current location of the head: ";
    cin >> head;

    // FCFS Scheduler
    fcfs(reqSequence, head);
    return 0;
}