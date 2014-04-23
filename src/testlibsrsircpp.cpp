/* testlibsrsircpp.cpp - (C) 2014, Emir Marincic
 * libsrsircpp - C++ wrapper for libsrsirc
 * See README for contact-, COPYING for license information. */

#include <iostream>
#include <cstdlib>

#include <libsrsircpp/irc_oo.h>

using namespace std;

int
main(int argc, char **argv)
{	
	IRC handle;
	handle.Nick("Testircpp");
	handle.Uname("Testircpp");
	handle.ConFlags(0);
	handle.Server("irc.quakenet.org", "6667");
	if(!handle.Connect(10*1000000UL)){
		cout<<"Failed to connect"<<endl;
		return -1;
	}
	if(!handle.Write("JOIN #Lea2")){
		cout<<"Couldn't join"<<endl;
		return -1;
	}
	if(!handle.Write("PRIVMSG #Lea2 :Teeeest")){
		cout<<"Couldn't Write"<<endl;
		return -1;
	}
	return EXIT_SUCCESS;
}
