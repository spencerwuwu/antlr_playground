
// Generated from url.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "urlParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by urlParser.
 */
class  urlListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterUrl_(urlParser::Url_Context *ctx) = 0;
  virtual void exitUrl_(urlParser::Url_Context *ctx) = 0;

  virtual void enterUri(urlParser::UriContext *ctx) = 0;
  virtual void exitUri(urlParser::UriContext *ctx) = 0;

  virtual void enterScheme(urlParser::SchemeContext *ctx) = 0;
  virtual void exitScheme(urlParser::SchemeContext *ctx) = 0;

  virtual void enterHost(urlParser::HostContext *ctx) = 0;
  virtual void exitHost(urlParser::HostContext *ctx) = 0;

  virtual void enterDomainNameOrIPv4Host(urlParser::DomainNameOrIPv4HostContext *ctx) = 0;
  virtual void exitDomainNameOrIPv4Host(urlParser::DomainNameOrIPv4HostContext *ctx) = 0;

  virtual void enterIPv6Host(urlParser::IPv6HostContext *ctx) = 0;
  virtual void exitIPv6Host(urlParser::IPv6HostContext *ctx) = 0;

  virtual void enterV6host(urlParser::V6hostContext *ctx) = 0;
  virtual void exitV6host(urlParser::V6hostContext *ctx) = 0;

  virtual void enterPort(urlParser::PortContext *ctx) = 0;
  virtual void exitPort(urlParser::PortContext *ctx) = 0;

  virtual void enterPath(urlParser::PathContext *ctx) = 0;
  virtual void exitPath(urlParser::PathContext *ctx) = 0;

  virtual void enterUser(urlParser::UserContext *ctx) = 0;
  virtual void exitUser(urlParser::UserContext *ctx) = 0;

  virtual void enterLogin(urlParser::LoginContext *ctx) = 0;
  virtual void exitLogin(urlParser::LoginContext *ctx) = 0;

  virtual void enterPassword(urlParser::PasswordContext *ctx) = 0;
  virtual void exitPassword(urlParser::PasswordContext *ctx) = 0;

  virtual void enterFrag(urlParser::FragContext *ctx) = 0;
  virtual void exitFrag(urlParser::FragContext *ctx) = 0;

  virtual void enterQuery(urlParser::QueryContext *ctx) = 0;
  virtual void exitQuery(urlParser::QueryContext *ctx) = 0;

  virtual void enterSearch(urlParser::SearchContext *ctx) = 0;
  virtual void exitSearch(urlParser::SearchContext *ctx) = 0;

  virtual void enterSearchparameter(urlParser::SearchparameterContext *ctx) = 0;
  virtual void exitSearchparameter(urlParser::SearchparameterContext *ctx) = 0;

  virtual void enterString(urlParser::StringContext *ctx) = 0;
  virtual void exitString(urlParser::StringContext *ctx) = 0;


};

