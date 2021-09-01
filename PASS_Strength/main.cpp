#include <bits/stdc++.h>
using namespace std;

void check()
{
    string pass;
    cout<<"Enter the password to test"<<endl;
    cin>>pass;
    int n=pass.length();
    bool hasLower = false, hasUpper = false;
    bool hasDigit = false, specialChar = false;
    for (int i=0; i<n; i++)
    {
        if(islower(pass[i]))
            hasLower = true;
        if (isupper(pass[i]))
            hasUpper = true;
        if(isdigit(pass[i]))
            hasDigit = true;
        if ((pass[i]>=48 && pass[i]<=57)|| (pass[i]>=65 && pass[i]<=90)|| (pass[i]>=97 && pass[i]<=122))
        {
            continue;
        }
        else
        {
            specialChar = true;
            break;
        }
    }
    cout << "Strength of password:- ";
    if (hasLower && hasUpper && hasDigit && specialChar && (n >= 8))
        cout << "Strong" << endl;
    else if ((hasLower || hasUpper) && specialChar && (n >= 6))
        cout << "Moderate" << endl;
    else
        cout << "Weak" << endl;
}

int main()
{
    int a;
    while (1)
    {
    	cout<<"   Password strength tester   "<<endl;
	    cout<<" 1. Test password"<<endl;
	    cout<<" 2. End"<<endl;
	    cin>>a;
	    switch(a)
	    {
	    	case 1:check();
		    	break;
		    case 2:
			{
				cout<<"BYE";
				exit(0);
			};
		}
	}
}