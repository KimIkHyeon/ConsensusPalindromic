#include <iostream>
using namespace std;

int M;//정수

void InputData(){ 
	cin >> M; 
}

void OutputData(int ans){
	if (ans == 0) cout << "NO" << endl;
	else cout << "YES" << endl;
}

int palindromic(int n)
{
	int rtn = 0;
	
	while (n > 0) {
		rtn = n%10 + rtn*10;
		n /= 10;
	}
	
	return rtn;
}

int solve()
{
	int n = palindromic(M) + M;
	
	if (n == palindromic(n)) return 1;
	return 0;
}

int main() {
	int N, i, ans;
	cin >> N;
	for (i = 0; i < N; i++) {
		InputData();//입력
		
		ans = solve();
		
		OutputData(ans);//출력
	}
	return 0;
}
