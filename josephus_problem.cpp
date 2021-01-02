#include <iostream>
#include <vector>
using namespace std;
void solve(int k, int index, vector<int> v, int &answer)
{
    if (v.size() == 1)
    {
        answer = v[0];
        return;
    }
    index = (index + k) % v.size();
    v.erase(v.begin()+index);
    solve(k,index,v,answer);
}
int main()
{
    vector<int> v;
    int index = 0;
    int answer = -1;
    int k, n;
    cout << "Enter the number of pepole : ";
    cin >> n;
    cout << "Enter the number of K : ";
    cin >> k;
    k = k - 1;
    for (int i = 1; i <= n; i++)
    {
        v.push_back(i);
    }
    solve(k, index, v, answer);
    cout<<"Answer is : "<<answer;

    return 0;
}