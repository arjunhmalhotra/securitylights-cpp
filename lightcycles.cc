//Declarations

#include <iostream>
using namespace std;
int checkTimes( int , int , int );

//========================================= MAIN ===============================================

int main ()
{

	// demarcating all the int values

	int t1_on;
	cout << "Length of time first security light stays on: ";
	cin >> t1_on;

	int t1_off;
	cout << "Length of time first security light stays off: ";
	cin >> t1_off;

	int t2_on;
	cout << "Length of time second security light stays on: ";
	cin >> t2_on;

	int t2_off;
	cout << "Length of time second security light stays off: ";
	cin >> t2_off;

	int t_mailman;
	cout << "Time in minutes after midnight the mailman arrives: ";
	cin >> t_mailman;

	int first = checkTimes(t1_on, t1_off, t_mailman);
	int second = checkTimes(t2_on, t2_off, t_mailman);

	//printing the answer based on the following condition


	if ( first == true and second == true )
		cout << "BOTH" << endl;
	else if ( first == true or second == true )
		cout << "ONE" << endl;
	else
		cout << "NONE" << endl;

	return 0;


}

//========================================= TIME CHECK ==========================================

// Parameters:
//        t_on: the length of time that the light stays on
//        t_off: the length of time that the light stays off
//        t_mailman: the time that the mailman arrives
//    Return values: 
//			a True or False value, depending on whether the mailman arrived
//    		while the light was on (True) or off (False)
//    		This function checks whether the light is on or off when the mailman arrives
//    		and returns a Boolean value with the answer.

int checkTimes( int t_on, int t_off, int t_mailman)
{

	int currentTime = 0;

	if ( t_mailman == 0 )
		return true;

	else
	{
		while ( currentTime <= 1440 )
		{
			currentTime += t_on;
			if ( t_mailman < currentTime )
				return true;
			else if ( t_mailman == currentTime )
				return false;

			currentTime += t_off;
			if ( t_mailman < currentTime )
				return false;
			else if ( t_mailman == currentTime )
				return true;

		}	


		return false;
	}



}
//========================================= END ==================================================
