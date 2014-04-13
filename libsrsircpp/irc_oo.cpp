/* irc_oo.cpp - (C) 2014, Emir Marincic
 * libsrsircpp - C++ wrapper for libsrsirc
 * See README for contact-, COPYING for license information. */

IRC::IRC()
{
	hnd = ircbas_init();
}

IRC::~IRC()
{
	ircbas_dispose(hnd);
}

bool IRC::Reset()
{
	return ircbas_reset(hnd);
}

bool IRC::Connect(int timeout)
{
	return ircbas_connect(hnd, timeout);
}

int IRC::Read(char **tok, size_t toklen, int timeout)
{
	return ircbas_read(hnd, tok, toklen, timeout);
}

bool IRC::Write(const string *line)
{
	return ircbas_write(hnd, line);
}

bool IRC::Online()
{
	return ircbas_online(hnd);
}

const string *IRC::Nick()
{
	return string(ircbas_mynick(hnd));
}

const string *IRC::Host()
{
	return string(ircbas_myhost(hnd));
}

int IRC::CaseMap()
{
	return ircbas_casemap(hnd);
}

bool IRC::Service()
{
	return ircbas_service(hnd);
}

const string *IRC::Umodes()
{
	return string(ircbas_umodes(hnd));
}

const string *IRC::Cmodes()
{
	return string(ircbas_cmodes(hnd));
}

const string *IRC::Version()
{
	return string(ircbas_version(hnd));
}

const string *IRC::LastError()
{
	return string(ircbas_lasterror(hnd));
}

const string *IRC::BanMsg()
{
	return string(ircbas_banmsg(hnd));
}

bool IRC::Banned()
{
	return ircbas_banned(hnd);
}

bool IRC::ColonTrail()
{
	return ircbas_colon_trail(hnd);
}

bool IRC::RegisterCallbackConRead(fp_con_read cb, void *tag)
{
	return ircbas_regcb_conread(hnd, cb, tag);
}

bool IRC::RegisterCallbackMutnick(fp_mut_nick cb)
{
	return ircbas_regcb_mutnick(hnd, cb);
}

bool IRC::Server(const string *host, unsigned short port)
{
	return ircbas_set_server(hnd, host.c_str(), port);
}

bool IRC::Proxy(const string *host, unsigned short port, int ptype)
{
	return ircbas_set_proxy(hnd, host.c_str(), port, ptype);
}

bool IRC::Pass(const string *srvpass)
{
	return ircbas_set_pass(hnd, srvpass.c_str());
}

bool IRC::Uname(const string *uname)
{
	return ircbas_set_uname(hnd, uname.c_str());
}

bool IRC::Fname(const string *fname)
{
	return ircbas_set_fname(hnd, fname.c_str());
}

bool IRC::ConFlags(unsigned flags)
{
	return ircbas_set_conflags(hnd, flags);
}

bool IRC::Nick(const string *nick)
{
	return ircbas_set_nick(hnd, nick.c_str());
}

bool IRC::ServiceConnect(bool enabled)
{
	return ircbas_set_service_connect(hnd, enabled);
}

bool IRC::ServiceDist(const string *dist)
{
	return ircbas_set_service_dist(hnd, dist.c_str());
}

bool IRC::ServiceType(long type)
{
	return ircbas_set_service_type(hnd, type);
}

bool IRC::ServiceInfo(const string *info)
{
	return ircbas_set_service_info(hnd, info.c_str());
}

const string *IRC::Host()
{
	return string(ircbas_get_host(hnd));
}

unsigned short IRC::Port()
{
	return ircbas_get_port(hnd);
}

const string *IRC::Pass()
{
	return string(ircbas_get_pass(hnd));
}

const string *IRC::Uname()
{
	return string(ircbas_get_uname(hnd));
}

const string *IRC::Fname()
{
	return string(ircbas_get_fname(hnd));
}

unsigned IRC::ConFlags()
{
	return ircbas_get_conflags(hnd);
}

const string *IRC::Nick()
{
	return string(ircbas_get_nick(hnd));
}

bool IRC::ServiceConnect()
{
	return ircbas_get_service_connect(hnd);
}

const string *IRC::ServiceDist()
{
	return string(ircbas_get_service_dist(hnd));
}

long IRC::ServiceType()
{
	return ircbas_get_service_type(hnd);
}

const string *IRC::ServiceInfo()
{
	return string(ircbas_get_service_info(hnd));
}

const string *IRC::ProxyHost()
{
	return string(ircbas_get_proxy_host(hnd));
}

unsigned short *IRC::ProxyPort()
{
	return ircbas_get_proxy_port(hnd);
}

int IRC::ProxyType()
{
	return ircbas_get_proxy_type(hnd);
}

bool IRC::SSL(bool on)
{
	return ircbas_set_ssl(hnd, on);
}

bool IRC::SSL()
{
	return ircbas_get_ssl(hnd);
}

int IRC::Sockfd()
{
	return ircbas_sockfd(hnd);
}

const string* const* const* IRC::LogOnConv()
{
	return ircbas_logonconv(hnd);
}

const string* const* IRC::ChanModes()
{
	return string(ircbas_005chanmodes(hnd));
}

const string* const* IRC::ModePfx()
{
	return string(ircbas_005modepfx(hnd));
}