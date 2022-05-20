// this is a "POSIX"-only source code
#include <iostream>
#include <cstdio>
#include <unistd.h>

using namespace std;
int main( void ) {
	printf( "BEFORE fork\tpid=%d\n", getpid() );
	auto const finf = fork(); // <<<<<<<<<<<<<<<<<<<<<<<<<<< the magic is here
	printf( "AFTER fork\tpid=%d forkinfo=%d\n", getpid(), finf );
	cout << "8884448"<<"\n";
	cout << "888333338"<<"\n";
	cout << "888888999"<<"\n";
	cout << "888822288"<<"\n";
	//sleep( 9 ); // imagine asif a lot of statements are executed here
	printf( "Whatever statement is here, it will be executed twice, "
	"pid=%d forkinfo=%d\n", getpid(), finf );
	return 0;
}
