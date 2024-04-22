#include <bits/stdc++.h>
using namespace std;
bool cmp(vector<int>&a,vector<int>&b)
{
    return a[2]<b[2];
}
void displayinput(vector<vector<int>> &v)
{
     for (int i = 0; i < v.size(); i++)
    {

        cout << v[i][0] << "  " << v[i][1] << "  " << v[i][2] << endl;
    }
}
int main()
{
    int node, edge;
    cin >> node >> edge;

   vector<vector<int>>v(edge,vector<int>(3));
    for (int i = 0; i < edge; i++)
    {
        int s, d, w;
        cin >> s >> d >> w;
        v[i][0] = s;
        v[i][1] = d;
        v[i][2] = w;
    }
        sort(v.begin(),v.end(),cmp);
    
    displayinput(v);
}