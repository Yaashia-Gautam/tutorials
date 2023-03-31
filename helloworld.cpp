#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg {"this is the second commit in the tutorial"};

    for (const string &word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}
