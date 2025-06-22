#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> score = {1, 2, 3, 4, 5};

    score.at(1);

    for (int i = 0; i < score.size(); i++) //normal for loop with i as index
    {
        cout << score.at(i) << endl;
    }

    for (int value : score)  // foreach loop using in vectors
    { //here variable takes vales from each index directly

        cout << value << endl;
    }

    score.push_back(10);
    cout << score.size() << " " << score.capacity() << endl; //this shows the vector doubles it size dynamically when pushes if gets fulled

    return 0;
}