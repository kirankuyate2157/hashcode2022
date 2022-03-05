#include <bits/stdc++.h>
using namespace std;
void prjDetail(vector<pair<string, pair<int, pair<int, pair<int, int>>>>> &project, vector<vector<pair<string, int>>> prjSkill, int prj_no)
{

    string p1;
    int d, s, b, r;

    for (int i = 0; i < prj_no; i++)
    {
        cin >> p1 >> d >> s >> b >> r;
        project.push_back({p1, {d, {s, {b, r}}}});
        for (int j = 0; j < r; j++)
        {
            string sk;
            int lvl;
            cin >> sk >> lvl;
            prjSkill[i].push_back({sk, lvl});
        }
    }
}

int totalScore(vector<pair<string, pair<int, pair<int, pair<int, int>>>>> project, vector<vector<pair<string, int>>> prjskill, vector<string> name,
               vector<vector<pair<string, int>>> skills, int cont_b, int prj)
{
    int finalScore = 0;
    for (int i = 0; i < prj; i++)
    {
        string pName = project[i].first;
        int day = project[i].second.first;
        int score = project[i].second.second.first;
        int bDay = project[i].second.second.second.first;
        int roles = project[i].second.second.second.second;
    }
}
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("D:/Hash code/input_data(1)/a_an_example.in.txt", "r", stdin);
        freopen("D:/Hash code/outputExp.txt", "w", stdout);
    #else
    // online submission
    #endif

    int cont_b, prj;
    cin >> cont_b >> prj;
    vector<string> name;
    vector<vector<pair<string, int>>> skills;
    for (int i = 0; i < cont_b; i++)
    {
        string person;
        cin >> person;
        name.push_back(person);
        int n;
        cin >> n;
        string sk_l;
        int level;
        for (int j = 0; j < n; j++)
        {
            cin >> sk_l >> level;
            skills[i].push_back({sk_l, level});
        }
    }
    vector<pair<string, pair<int, pair<int, pair<int, int>>>>> project;
    vector<vector<pair<string, int>>> prjSkill;

    totalScore(project, prjSkill, name, skills, cont_b, prj);
    return 0;
}