
// Generated from url.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "urlParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by urlParser.
 */
class  urlVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by urlParser.
   */
    virtual std::any visitUrl_(urlParser::Url_Context *context) = 0;

    virtual std::any visitUri(urlParser::UriContext *context) = 0;

    virtual std::any visitScheme(urlParser::SchemeContext *context) = 0;

    virtual std::any visitHost(urlParser::HostContext *context) = 0;

    virtual std::any visitDomainNameOrIPv4Host(urlParser::DomainNameOrIPv4HostContext *context) = 0;

    virtual std::any visitIPv6Host(urlParser::IPv6HostContext *context) = 0;

    virtual std::any visitV6host(urlParser::V6hostContext *context) = 0;

    virtual std::any visitPort(urlParser::PortContext *context) = 0;

    virtual std::any visitPath(urlParser::PathContext *context) = 0;

    virtual std::any visitUser(urlParser::UserContext *context) = 0;

    virtual std::any visitLogin(urlParser::LoginContext *context) = 0;

    virtual std::any visitPassword(urlParser::PasswordContext *context) = 0;

    virtual std::any visitFrag(urlParser::FragContext *context) = 0;

    virtual std::any visitQuery(urlParser::QueryContext *context) = 0;

    virtual std::any visitSearch(urlParser::SearchContext *context) = 0;

    virtual std::any visitSearchparameter(urlParser::SearchparameterContext *context) = 0;

    virtual std::any visitString(urlParser::StringContext *context) = 0;


};

