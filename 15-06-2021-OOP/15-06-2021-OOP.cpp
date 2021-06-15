
#include <iostream>
#include <algorithm>
#include <string>
#include<vector>
#include <functional>
#include <map>
using namespace std;

//class Sugar 
//{
//public:
//    int operator()(int a, int b) { return a + b; }
//};




//template<typename T>
//
//vector<T> findElements(vector<T> vec, 
//    function<bool(const T)>  predicate)
//{
//    vector<T> result;
//    for_each(vec.begin(), vec.end(), 
//        [&](const int item)
//        {
//            if (predicate(item))
//            {
//                result.push_back(item);
//            }
//        });
//    return result;
//}



//struct STUDENT
//{
//    string name;
//        int age;
//};
//auto sum = [](int a, int b) -> int
//{
//    return a + b;
//};


struct STUDENT
{
    int id;
    string firstName;
    string lastName;
    int age;
};

int main()
{

   // cout << sum(10, 11);
    //Sugar s1 = Sugar();
    //cout<<s1(6, 7);

    //int c = 30;
    //int d = 8;
    //auto sum = [&c, d](int a, int b)
    //{
    //    c++;
    //    return a + b +c;
    //};
    //cout << sum(20, 15)<<endl;

    //vector<int> v = { 4,6,3,1,7,8,9 };

    //auto findNumbersAboveFive = [&v]()
    //{
    //    vector<int> temp;
    //    for (size_t i = 0; i < v.size(); i++)
    //    {
    //        if (v.at(i) > 5)
    //        {
    //            temp.push_back(v.at(i));
    //        }
    //    }
    //    return temp;
    //};
    //vector<int> result= findNumbersAboveFive();

    //for_each(v.begin(), v.end(), 
    //    [](const int item) 
    //    {
    //        cout << item << endl;
    //    });

    //auto findSeven = [](const int item)

    //{
    //    return item == 7;
    //};
    //    auto findThree = [](const int item)

    //{
    //    return item == 3;
    //};
    //vector<int>::iterator it;
    //it = find(v.begin(), v.end(), 7);
    //cout << *it<<endl;

    //it = find_if(v.begin(), v.end(),findSeven);
    //it = find_if(v.begin(), v.end(), findThree);
    //cout << *it << endl;

 /*   vector<STUDENT> v = { {"st1", 16}, {"st2",15}, {"st3",16} };
    vector<STUDENT> result = findElements<STUDENT>(v, 
        []( const STUDENT& item)->bool
        {
            return item.age > 15;
        });*/



    //map<char, int> map1;
    //map1['a'] = 16;
    //map1['a'] = 20;
    ////map1.at('a')=16;
    //string str = "Sponge Bob!";

    //for (size_t i = 0; i < str.size(); i++)
    //{
    //    if (map1.count(str[i]) == 0)
    //    {
    //        map1[str[i]] = 1;
    //    }
    //    else
    //    {
    //        map1[str[i]]++;
    //    }
    //}


    //map<string, STUDENT> st;
    //st["pmdyakov18@codingburgas.bg"] = { 1,"Petar","Dyakov", 17 };
    //cout << st["pmdyakov18@odingburgas.bg"].firstName;
    //map<char, int>map1;
    //map1.insert(make_pair<char, int>('b', 20));
}

