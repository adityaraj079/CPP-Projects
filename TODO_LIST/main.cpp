#include <iostream>
using namespace std;

void add_task(string task[10], string date[10])
{
    int b,c;
    cout<<"Enter the number of tasks u want to add \t";
    cin>>b;
	cout<<"Enter the Sno. of the task u want to enter \t";
	cin>>c;
    for (int i=0; i<b; i++)
    {
        cout<<"Enter the task \t";
        cin>>task[c];
		cout<<"Enter the date \t";
		cin>>date[c];
		c++;
    }
    cout<<"The task is added"<<endl;
}

void show_task(int arr[10], string task[10], string date[10])
{
    cout<<"[===========+=================+============]"<<endl;
    cout<<"[   SNO.    +   TASK          +  DATE/TIME ]"<<endl;
    for (int i=0; i<=5; i++)
    {
        cout<<"     "<<i<<"          "<<task[i]<<"                "<<date[i]<<"         "<<endl;

    }
    cout<<"[===========+=================+============]"<<endl;
}

void delete_task(string task[10], string date[10])
{
	int b;
	cout<<"Enter the SNo.  of the task to be deleted \t";
	cin>>b;
	task[b] = {};                                                            //Assign the value as empty
	date[b] = {};
}

int main()
{
    int a, arr[10];
    string task[10], date[10];
    while (1)
    {
    	cout<<"   TODO LIST   "<<endl;
	    cout<<" 1. ADD A TASK"<<endl;
	    cout<<" 2. SHOW ALL TASKS"<<endl;
	    cout<<" 3. DELETE A TASK"<<endl;
	    cout<<" 4. E X I T "<<endl;
	    cin>>a;
	    switch(a)
	    {
	    	case 1:add_task(task,date);
		    	break;
		    case 2: show_task(arr, task, date);
		    	break;
		    case 3: delete_task(task, date);
		    	break;
		    case 4:
			{
				cout<<"BYE";
				exit(0);
			};
		}
	}   
return 0;
}


// MADE AND TESTED DONE IN 5 HOURS :)