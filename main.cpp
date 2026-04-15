#include <iostream>
using namespace std;

int main()
{
    int n;
    // TODO: ask user for input
    // cout << "Input a number: ";
    cin >> n;

    // TODO: outer loop for each row
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            // TODO: print the letter for this column
            if (j != 1) cout << " ";
            cout << char('A' + j - 1) ;
        }
        cout << endl;
    }
    
    return 0;
}
