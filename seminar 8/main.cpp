#include <string>
#include <fstream>
#include <iostream>
#include <map>
#include <queue>
#include <utility>
#define min(a,b) ((a<b)?(a):(b))

using namespace std;
ifstream in ("text.txt");

struct Comparare
{
    bool operator()(pair<string, int> &a, pair<string, int> &b) const
    {
        if(a.second == b.second)
        {
            int minimul = min(a.first.size(), b.first.size());
            for(int i = 0; i < minimul; i ++)
                if(a.first[i] != b.first[i])
                    return a.first[i] < b.first[i];
            return a.first.size() < b.first.size();
        }
        return a.second < b.second;
    }
};


int main()
{
    string file;
    map <string, int> words;
    priority_queue<pair<string, int>, vector<pair<string,int>>, Comparare> wordsSorted;
    for(char a; in.get(a); file += a);
    for(char &i : file)
        i = tolower(i);
    for(auto i = 0, x = 0; i < file.size() && x != -1; i ++)
    {
        x = file.substr(i).find_first_of(" ,.!?");
        if(x > 0)
            words[file.substr(i, x)]++, i += x;
    }
    for(auto i = words.begin(); i != words.end(); i ++)
        wordsSorted.push({i->first, i->second});
    while(!wordsSorted.empty())
        cout << wordsSorted.top().first << ' ' << wordsSorted.top().second << '\n', wordsSorted.pop();
}