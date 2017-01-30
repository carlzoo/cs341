#include <iostream>
using namespace std;

int main(int argc, char* argv[]){
	int n;
	cin>>n;
	cout<<n<<endl;
	for(int i=0;i<n-1;++i){
		cout<<i<<" "<<i<<" "<<1<<endl;
	}
	cout<<n-1<<" "<<n-1<<" "<<0<<endl;
}
