#include<bits/stdc++.h>
using namespace std;

int main()
{
    int eq,vars;
    cin>>eq>>vars;

    if(eq!=vars)
    {
        cout<<"Unsolvabe\n";
        return 0;
    }

    cout<<"Input variables in ax+by+...+d=0 format\n";
    vector<vector<double>>mat(eq,vector<double>(eq+1));
    for(int i=0; i<eq; i++)
    {
        for(int j=0; j<=eq; j++)
        {
            cin>>mat[i][j];
        }
    }

    double tol;
    cin>>tol;

    int i=0;
    vector<double>ans(eq,0);

    while(true)
    {
        vector<double>new_ans(eq);

        cout<<"Iteration "<<i<<": ";

        for(auto &x:ans)cout<<fixed<<setprecision(4)<<x<<" ";
        cout<<endl;

        double error=0.0;

        for(int x=0; x<ans.size(); x++)
        {
            double sum =0.0;
            for(int y=0; y<ans.size(); y++) if(x!=y) sum+= mat[x][y]*ans[y];

            sum+=mat[x][eq];
            new_ans[x] = -sum/mat[x][x];

            error = max(error,abs(new_ans[x]-ans[x]));

        }

        if(error<=tol && i) break;
        ans = new_ans;
        i++;
    }
}

/*
27 6 -1 -85
6 15 2 -72
1 1 54 -110
0.00001
*/

