/*
You should use the standard input/output

in order to receive a score properly.

Do not use file input and output

Please be very careful. 
*/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

long long Answer;

int main(int argc, char** argv)
{
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
        int n;
        cin >> n;
        int l=0,lmid=n/2-1,rmid=lmid+1,r=n-1;
        vector<int> a(n);
		Answer = 0;
        for(int &tmp:a) cin >> tmp;
        sort(a.begin(),a.end());
        for(int i=0;i<n/4;i++){
            Answer+=abs(a[l]-a[r])+abs(a[lmid]-a[rmid])+abs(a[l]-a[lmid])+abs(a[r]-a[rmid]);
            l++;
            lmid--;
            r--;
            rmid++;
        }
		cout << "Case #" << test_case+1 << endl;
		cout << Answer << endl;
	}

	return 0;//Your program should return 0 on normal termination.
}