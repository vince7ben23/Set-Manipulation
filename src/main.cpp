#include <string>
#include <stdexcept>
#include "utils/myset.hpp"

using namespace std;

int main()
{
    int num;
    cin >> num;

    int args;
    string command;
    MySet<int> ms;

    for (int i = 0; i < num; ++i)
    {
        cin >> command;
        cin >> args;
        if (command == "add")
        {
            int res = ms.add(args);
            cout << res << endl;
        }
        else if (command == "del")
        {
            int res = ms.del(args);
            cout << res << endl;
        }
        else if (command == "ask")
        {
            pair<int, int> res = ms.ask(args);
            cout << res.first << " " << res.second << endl;
        }
        else
        {
            cout << "invalid command: " << command << endl;
            throw invalid_argument(command);
        }
    }

    return 0;
}