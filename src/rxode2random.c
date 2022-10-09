#define USE_FC_LEN_T
#define STRICT_R_HEADERS
#include <R.h>
#include <Rinternals.h>
#include <R_ext/Rdynload.h>
#include <Rmath.h>
#include <rxode2parse.h>
#include <R.h>
#ifdef ENABLE_NLS
#include <libintl.h>
#define _(String) dgettext ("rxode2random", String)
/* replace pkg as appropriate */
#else
#define _(String) (String)
#endif

bool qtest(SEXP in, const char *test) {
  static bool (*fun)(SEXP, const char *)=NULL;
  if (fun == NULL) {
    fun = (bool (*)(SEXP, const char *)) R_GetCCallable("rxode2random","_rxode2random_qtest");
  }
  return fun(in, test);
}

SEXP qstrictS(SEXP nn, const char *what) {
  static SEXP (*fun)(SEXP, const char *)=NULL;
  if (fun == NULL) {
    fun = (SEXP (*)(SEXP, const char *)) R_GetCCallable("rxode2random","_rxode2random_qstrictS");
  }
  return fun(nn, what);
}

SEXP qstrictSn(SEXP x_, const char *what) {
  static SEXP (*fun)(SEXP, const char *)=NULL;
  if (fun == NULL) {
    fun = (SEXP (*)(SEXP, const char *)) R_GetCCallable("rxode2random","_rxode2random_qstrictSn");
  }
  return fun(x_, what);
}
SEXP qstrictSdn(SEXP x_, const char *what) {
  static SEXP (*fun)(SEXP, const char *)=NULL;
  if (fun == NULL) {
    fun = (SEXP (*)(SEXP, const char *)) R_GetCCallable("rxode2random","_rxode2random_qstrictSdn");
  }
  return fun(x_, what);
}

SEXP qassertS(SEXP in, const char *test, const char *what) {
  static SEXP (*fun)(SEXP, const char *, const char *)=NULL;
  if (fun == NULL) {
    fun = (SEXP (*)(SEXP, const char *, const char *)) R_GetCCallable("rxode2random","_rxode2random_qassertS");
  }
  return fun(in, test, what);
}


