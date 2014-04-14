/* irc_oo.h - (C) 2014, Emir Marincic
 * libsrsircpp - C++ wrapper for libsrsirc
 * See README for contact-, COPYING for license information. */

#include <string>

extern "C" {
#include <libsrsirc/irc_basic.h>
}

using std::string;

class IRC {
	ibhnd_t hnd;
public:
	IRC();
	~IRC();

	bool Reset();
	bool Connect(int timeout);
	int Read(char **tok, size_t toklen, int timeout);
	bool Write(const string line);
	bool Online();

	const string MyNick();
	const string MyHost();
	int CaseMap();
	bool Service();
	const string Umodes();
	const string Cmodes();
	const string Version();
	const string LastError();
	const string BanMsg();
	bool Banned();
	bool ColonTrail();

	bool RegisterCallbackConRead(fp_con_read cb, void *tag);
	bool RegisterCallbackMutnick(fp_mut_nick cb);

	//Setters
	bool Server(const string host, unsigned short port);
	bool Proxy(const string host, unsigned short port, int ptype);
	bool Pass(const string srvpass);
	bool Uname(const string uname);
	bool Fname(const string fname);
	bool ConFlags(unsigned flags);
	bool Nick(const string nick);
	bool ServiceConnect(bool enabled);
	bool ServiceDist(const string dist);
	bool ServiceType(long type);
	bool ServiceInfo(const string info);

	//Getters
	const string Host();
	unsigned short Port();
	const string Pass();
	const string Uname();
	const string Fname();
	unsigned ConFlags();
	const string Nick();
	bool ServiceConnect();
	const string ServiceDist();
	long ServiceType();
	const string ServiceInfo();
	const string ProxyHost();
	unsigned short ProxyPort();
	int ProxyType();
	#ifdef WITH_SSL
	bool SSL(bool on);
	bool SSL();
	#endif

	int Sockfd();
	
	//const string const* const* LogOnConv();
	//const string const* ChanModes();
	//const string const* ModePfx();
};
