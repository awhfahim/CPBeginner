#include <bits/stdc++.h>
using namespace std;

int main()
{
    int Q;
    cin >> Q;
    Q++;
    map<string,int> _map;

    while(Q--)
    {
        string line;
        getline(cin, line);

        string name;
        int i;
        for(i = 2; i < line.length(); i++)
        {
            if(line[i] == 32)
            {
                break;
            }
            name += line[i];
        }

        //cout << name << endl;

        if(line[0] == '1')
        {
            string num;
            for(int j = i+1; j < line.length(); j++)
            {
                num += line[j];
            }

            int track = 1, sum = 0;
            for(int j = num.length() - 1; j >= 0; j--)
            {
                sum += (num[j] - '0') * track;
                track *= 10;
            }

            _map[name] += sum;
        }
        else if(line[0] == '2')
        {
            _map[name] = 0;
        }
        else if(line[0] == '3')
        {
            cout << _map[name] << endl;
        }
    }

}
