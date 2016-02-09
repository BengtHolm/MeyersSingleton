// MeyerSingleton.cpp : Defines the entry point for the console application.
//

#include "LogFile.h"

void client()
{
	CLogFile::instance().write( "Writing from client" );
}

int main()
{
	CLogFile& logfile = CLogFile::instance();
	logfile.init( "/home/bengt/exercises/MeyerSingleton.log" );
	logfile.write( "Writing from main" );

	client();

	logfile.write( "Writing from main - again" );

	return 0;
}
