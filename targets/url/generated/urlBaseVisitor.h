
// Generated from url.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "urlVisitor.h"


/**
 * This class provides an empty implementation of urlVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  urlBaseVisitor : public urlVisitor {
public:

  virtual std::any visitUrl_(urlParser::Url_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUri(urlParser::UriContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitScheme(urlParser::SchemeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitHost(urlParser::HostContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDomainNameOrIPv4Host(urlParser::DomainNameOrIPv4HostContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIPv6Host(urlParser::IPv6HostContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitV6host(urlParser::V6hostContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPort(urlParser::PortContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPath(urlParser::PathContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUser(urlParser::UserContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogin(urlParser::LoginContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPassword(urlParser::PasswordContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFrag(urlParser::FragContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitQuery(urlParser::QueryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSearch(urlParser::SearchContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSearchparameter(urlParser::SearchparameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitString(urlParser::StringContext *ctx) override {
    return visitChildren(ctx);
  }


};

