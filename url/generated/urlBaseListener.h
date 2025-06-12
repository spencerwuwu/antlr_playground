
// Generated from url.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "urlListener.h"


/**
 * This class provides an empty implementation of urlListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  urlBaseListener : public urlListener {
public:

  virtual void enterUrl_(urlParser::Url_Context * /*ctx*/) override { }
  virtual void exitUrl_(urlParser::Url_Context * /*ctx*/) override { }

  virtual void enterUri(urlParser::UriContext * /*ctx*/) override { }
  virtual void exitUri(urlParser::UriContext * /*ctx*/) override { }

  virtual void enterScheme(urlParser::SchemeContext * /*ctx*/) override { }
  virtual void exitScheme(urlParser::SchemeContext * /*ctx*/) override { }

  virtual void enterHost(urlParser::HostContext * /*ctx*/) override { }
  virtual void exitHost(urlParser::HostContext * /*ctx*/) override { }

  virtual void enterDomainNameOrIPv4Host(urlParser::DomainNameOrIPv4HostContext * /*ctx*/) override { }
  virtual void exitDomainNameOrIPv4Host(urlParser::DomainNameOrIPv4HostContext * /*ctx*/) override { }

  virtual void enterIPv6Host(urlParser::IPv6HostContext * /*ctx*/) override { }
  virtual void exitIPv6Host(urlParser::IPv6HostContext * /*ctx*/) override { }

  virtual void enterV6host(urlParser::V6hostContext * /*ctx*/) override { }
  virtual void exitV6host(urlParser::V6hostContext * /*ctx*/) override { }

  virtual void enterPort(urlParser::PortContext * /*ctx*/) override { }
  virtual void exitPort(urlParser::PortContext * /*ctx*/) override { }

  virtual void enterPath(urlParser::PathContext * /*ctx*/) override { }
  virtual void exitPath(urlParser::PathContext * /*ctx*/) override { }

  virtual void enterUser(urlParser::UserContext * /*ctx*/) override { }
  virtual void exitUser(urlParser::UserContext * /*ctx*/) override { }

  virtual void enterLogin(urlParser::LoginContext * /*ctx*/) override { }
  virtual void exitLogin(urlParser::LoginContext * /*ctx*/) override { }

  virtual void enterPassword(urlParser::PasswordContext * /*ctx*/) override { }
  virtual void exitPassword(urlParser::PasswordContext * /*ctx*/) override { }

  virtual void enterFrag(urlParser::FragContext * /*ctx*/) override { }
  virtual void exitFrag(urlParser::FragContext * /*ctx*/) override { }

  virtual void enterQuery(urlParser::QueryContext * /*ctx*/) override { }
  virtual void exitQuery(urlParser::QueryContext * /*ctx*/) override { }

  virtual void enterSearch(urlParser::SearchContext * /*ctx*/) override { }
  virtual void exitSearch(urlParser::SearchContext * /*ctx*/) override { }

  virtual void enterSearchparameter(urlParser::SearchparameterContext * /*ctx*/) override { }
  virtual void exitSearchparameter(urlParser::SearchparameterContext * /*ctx*/) override { }

  virtual void enterString(urlParser::StringContext * /*ctx*/) override { }
  virtual void exitString(urlParser::StringContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

