// http://codeforces.com/problemset/problem/976/B
//           Lara Croft and the New Game
#include <iostream>
using namespace std;

int main() {
	int row,col,step,n=1,m=1,i;
	cin>>row>>col>>step;
	if(step<row){
		cout<<step+1<<" "<<"1";
		return 0;
	}
	while(step!=0){
			if(step>=row){
		step=step-row+1;
		n=row;
		if(n%2==0){
			if(step>=col){
				step=step-(col-1);
				m=m+(col-1);
			}
			else{
				m=m+step;
			}
		}
		else{
			if(step>=col){
				step=step-(col-1);
				m=m+1-(col-1);
			}
			else{
				m=m+1-step;
				step=0;
			}
		}
	}

	}
	cout<<n<<" "<<m;
	return 0;
}
