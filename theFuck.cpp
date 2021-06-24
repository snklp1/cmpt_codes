#include<bits/stdc++.h>
using namespace std;

//Author: snklp1

#define llint long long int
#define lint long int

//int fun()

//n = friends
//k = bottles
//l = amont of drink per bottle
//c = limes
//d = slices
//p = grams of salt
//Toast threshold : nl drink, one slice, np salt


int main()
{
	int n,k,l,c,d,p,nl,np;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;

	int drinks = (l*k)/nl;
	//cout<<drinks<<endl;

	int limes = (c*d);
	//cout<<limes<<endl;

	int salt = p/np;
	//cout<<salt<<endl;

	int ans = std::min(drinks, limes);
	ans = std::min(ans, salt);

	cout<<ans/n<<endl;

    return 0;
}


//end
