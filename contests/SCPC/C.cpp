/*
You should use the standard input/output

in order to receive a score properly.

Do not use file input and output

Please be very careful. 
*/

#include <iostream>
#include <queue>
#include <utility>
#include <vector>

using namespace std;

long long Answer;

int main(int argc, char** argv)
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	int T, test_case;
	/*
	   The freopen function below opens input.txt file in read only mode, and afterward,
	   the program will read from input.txt file instead of standard(keyboard) input.
	   To test your program, you may save input data in input.txt file,
	   and use freopen function to read from the file when using cin function.
	   You may remove the comment symbols(//) in the below statement and use it.
	   Use #include<cstdio> or #include <stdio.h> to use the function in your program.
	   But before submission, you must remove the freopen function or rewrite comment symbols(//).
	 */	

	// freopen("input.txt", "r", stdin);

	cin >> T;
	for(test_case = 0; test_case  < T; test_case++)
	{
        int n,i;
        cin >> n;
        vector<vector<int>> edgs(n);
        for(i=0;i<=n;i++){
            int a,b;
            cin >> a >> b;
            a--; b--;
            edgs[a].push_back(b);
            edgs[b].push_back(a);
        }
        i=0;
        int connected[2];
        for(int j=0;j<n;j++){
            if(i==2) break;
            if((int)edgs[j].size()>2){
                connected[i]=j;
                i++;
            }
        }
        vector<bool> vis(n,0);
        for(i=0;i<2;i++) vis[connected[i]]=1;
        queue<pair<int,long long>> q;
        q.push(make_pair(connected[0],1));
		Answer = 0;
        while(!q.empty()){
            int now=q.front().first;
            int current_size=q.front().second;
            q.pop();
            for(i=0;i<(int)edgs[now].size();i++){
                if(edgs[now][i]==connected[1] && current_size>1) Answer+=current_size*(current_size-1)/2;
                if(!vis[edgs[now][i]]){
                    q.push({edgs[now][i],current_size+1});
                    vis[edgs[now][i]]=1;
                }
            }
        }
		cout << "Case #" << test_case+1 << endl;
		cout << Answer << endl;
	}

	return 0;//Your program should return 0 on normal termination.
}