#define USE_FC_LEN_T
#define STRICT_R_HEADERS
#include <R.h>
#include <Rinternals.h>
#include <R_ext/Rdynload.h>
#include <Rmath.h>
#include "defines.h"
#include <rxode2parse.h>
#include <R.h>
#ifdef ENABLE_NLS
#include <libintl.h>
#define _(String) dgettext ("rxode2et", String)
/* replace pkg as appropriate */
#else
#define _(String) (String)
#endif

bool _rxode2et_qtest(SEXP in, const char *test) {
  static bool (*fun)(SEXP, const char *)=NULL;
  if (fun == NULL) {
    fun = (bool (*)(SEXP, const char *)) R_GetCCallable("rxode2random","_rxode2random_qtest");
  }
  return fun(in, test);
}

SEXP _rxode2et_qstrictS(SEXP nn, const char *what) {
  static SEXP (*fun)(SEXP, const char *)=NULL;
  if (fun == NULL) {
    fun = (SEXP (*)(SEXP, const char *)) R_GetCCallable("rxode2random","_rxode2random_qstrictS");
  }
  return fun(nn, what);
}

SEXP _rxode2et_qstrictSn(SEXP x_, const char *what) {
  static SEXP (*fun)(SEXP, const char *)=NULL;
  if (fun == NULL) {
    fun = (SEXP (*)(SEXP, const char *)) R_GetCCallable("rxode2random","_rxode2random_qstrictSn");
  }
  return fun(x_, what);
}
SEXP _rxode2et_qstrictSdn(SEXP x_, const char *what) {
  static SEXP (*fun)(SEXP, const char *)=NULL;
  if (fun == NULL) {
    fun = (SEXP (*)(SEXP, const char *)) R_GetCCallable("rxode2random","_rxode2random_qstrictSdn");
  }
  return fun(x_, what);
}

SEXP _rxode2et_qassertS(SEXP in, const char *test, const char *what) {
  static SEXP (*fun)(SEXP, const char *, const char *)=NULL;
  if (fun == NULL) {
    fun = (SEXP (*)(SEXP, const char *, const char *)) R_GetCCallable("rxode2random","_rxode2random_qassertS");
  }
  return fun(in, test, what);
}

SEXP _rxode2et_convertId_(SEXP id) {
  static SEXP (*fun)(SEXP) = NULL;
  if (fun == NULL) {
    fun = (SEXP (*)(SEXP)) R_GetCCallable("rxode2random","_rxode2random_convertId_");
  }
  return fun(id);
}
SEXP _rxode2et_expandPars_(SEXP objectSSEXP, SEXP paramsSSEXP, SEXP eventsSSEXP, SEXP controlSSEXP) {
  static SEXP (*fun)(SEXP, SEXP, SEXP, SEXP) = NULL;
  if (fun == NULL) {
    fun = (SEXP (*)(SEXP, SEXP, SEXP, SEXP)) R_GetCCallable("rxode2random","_rxode2random_expandPars_");
  }
  return fun(objectSSEXP, paramsSSEXP, eventsSSEXP, controlSSEXP);
}
