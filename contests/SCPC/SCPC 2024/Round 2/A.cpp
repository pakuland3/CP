/*
You should use the standard input/output

in order to receive a score properly.

Do not use file input and output

Please be very careful. 
*/

#include <iostream>
typedef long long ll;
using namespace std;
ll Answer;

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
		Answer = 0;
		int n;
		ll S,E;
		cin >> n >> S >> E;
		bool a[300001];
		for(int i=0;i<n;i++) cin >> a[i];
		if(S==1 && E==1000000){
			bool ex=0;
			int ind1=0;
			for(int i=n-1;i>-1;i--){
				if(a[i]){
					ind1=i;
					break;
				}
			}
			for(int i=0;i<ind1;i++){
				if(a[i]) ex=1;
				if(ex && !a[i]) Answer++;
			}
		}
		if(E==1 && S==1000000){
			ll total=0,maxi=0;
			bool one=0;
			ll cur=0;
			for(int i=0;i<n;i++){
				if(a[i]){
					total++;
					cur++;
					one=1;
				}
				if(one && !a[i]){
					maxi=max(cur,maxi);
					cur=0;
					one=0;
				}
			}
			Answer=total-maxi;
		}
		// Print the answer to standard output(screen).
		cout << "Case #" << test_case+1 << endl;
		cout << Answer << endl;
	}

	return 0;//Your program should return 0 on normal termination.
}