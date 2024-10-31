#pragma once

#include <iostream>
#include <set>
#include <utility>

using namespace std;

template <class T>
class MySet
{
private:
    multiset<T> multi_set;
    set<T> seen;

public:
    MySet() {}

    int add(T input)
    {
        multi_set.insert(input);
        seen.insert(input);
        return multi_set.count(input);
    }

    int del(T input)
    {
        return multi_set.erase(input);
    }

    pair<int, int> ask(T input)
    {
        typename set<T>::iterator it = seen.find(input);
        int cnt = multi_set.count(input);

        if (it != seen.end())
            return make_pair(1, cnt);
        return make_pair(0, cnt);
    }
};