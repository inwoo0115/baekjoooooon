#include <iostream>

using namespace std;

string mbti, fmbti;
int	n, res;
int	main(){
	cin >> mbti >> n;
	while (n--){
		cin >> fmbti;
		if (mbti == fmbti) {res++;}
	}
	cout << res;
}