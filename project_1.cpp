// Sorting Algorithm Project
// Author: Joe Lawrence

#include <vector>
#include <iostream>
#include <random>

using namespace std;

bool isSorted(const vector<int> &v)
{
    for (unsigned int i = 1; i < v.size(); i++)
    {
        if (v[i] < v[i - 1])
            return false;
    }
    return true;
}

void testIsSorted()
{
    vector<int> v(3);

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(0, 100);

    for (int i = 0; i < 3; i++)
        v[i] = dis(gen);

    for (auto i : v)
        cout << i << ' ';
    cout << endl;
    if (isSorted(v))
        cout << "Sorted" << endl;
    else
        cout << "Not Sorted" << endl;
}

int bubbleSort(vector<int> &v)
{
    bool sorted = false;
    while (!sorted)
    {
        sorted = true;
        for (unsigned int i = 1; i < v.size(); i++)
        {
            if (v[i - 1] > v[i])
            {
                int temp = v[i - 1];
                v[i - 1] = v[i];
                v[i] = temp;
                sorted = false;
            }
        }
    }
    return 1;
}

void testBubbleSort()
{
    // Create ten vectors of size 100
    vector<int> v0(100);
    vector<int> v1(100);
    vector<int> v2(100);
    vector<int> v3(100);
    vector<int> v4(100);
    vector<int> v5(100);
    vector<int> v6(100);
    vector<int> v7(100);
    vector<int> v8(100);
    vector<int> v9(100);

    // Initialize RNG
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(0, 100);

    // Fill vectors with random numbers
    for (int i = 0; i < 100; i++)
    {
        v0[i] = dis(gen);
        v1[i] = dis(gen);
        v2[i] = dis(gen);
        v3[i] = dis(gen);
        v4[i] = dis(gen);
        v5[i] = dis(gen);
        v6[i] = dis(gen);
        v7[i] = dis(gen);
        v8[i] = dis(gen);
        v9[i] = dis(gen);
    }

    // Test sorting algorithm
    bubbleSort(v0);
    bubbleSort(v1);
    bubbleSort(v2);
    bubbleSort(v3);
    bubbleSort(v4);
    bubbleSort(v5);
    bubbleSort(v6);
    bubbleSort(v7);
    bubbleSort(v8);
    bubbleSort(v9);

    // Verify and print results
    cout << "~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~" << endl;
    cout << "Bubble Sort on 10 vectors of 100 elements." << endl;
    if (isSorted(v0) &&
        isSorted(v1) &&
        isSorted(v2) &&
        isSorted(v3) &&
        isSorted(v4) &&
        isSorted(v5) &&
        isSorted(v6) &&
        isSorted(v7) &&
        isSorted(v8) &&
        isSorted(v8) &&
        isSorted(v9))
    {
        cout << "Sorting successful." << endl;
    }
    cout << "~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~" << endl;
}

int insertionSort(vector<int> &v)
{
    unsigned int i = 1;
    while (i < v.size())
    {
        int j = i;
        while (j < 0 && v[j] < v[j - 1])
        {
            int temp = v[j-1];
            v[j - 1] = v[j];
            v[j] = temp;
            j--;
        }
        i++;
    }
    return 1;
}

void testInsertionSort()
{
    // Create ten vectors of size 100
    vector<int> v0(100);
    vector<int> v1(100);
    vector<int> v2(100);
    vector<int> v3(100);
    vector<int> v4(100);
    vector<int> v5(100);
    vector<int> v6(100);
    vector<int> v7(100);
    vector<int> v8(100);
    vector<int> v9(100);

    // Initialize RNG
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(0, 100);

    // Fill vectors with random numbers
    for (int i = 0; i < 100; i++)
    {
        v0[i] = dis(gen);
        v1[i] = dis(gen);
        v2[i] = dis(gen);
        v3[i] = dis(gen);
        v4[i] = dis(gen);
        v5[i] = dis(gen);
        v6[i] = dis(gen);
        v7[i] = dis(gen);
        v8[i] = dis(gen);
        v9[i] = dis(gen);
    }

    // Test sorting algorithm
    insertionSort(v0);
    insertionSort(v1);
    insertionSort(v2);
    insertionSort(v3);
    insertionSort(v4);
    insertionSort(v5);
    insertionSort(v6);
    insertionSort(v7);
    insertionSort(v8);
    insertionSort(v9);

    // Verify and print results
    cout << "~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~" << endl;
    cout << "Insertion Sort on 10 vectors of 100 elements." << endl;
    if (insertionSort(v0) &&
        insertionSort(v1) &&
        insertionSort(v2) &&
        insertionSort(v3) &&
        insertionSort(v4) &&
        insertionSort(v5) &&
        insertionSort(v6) &&
        insertionSort(v7) &&
        insertionSort(v8) &&
        insertionSort(v8) &&
        insertionSort(v9))
    {
        cout << "Sorting successful." << endl;
    }
    cout << "~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~" << endl;
}


int main()
{
    testBubbleSort();
    testInsertionSort();
}
