#define USE_FC_LEN_T
// [[Rcpp::interfaces(r,cpp)]]
//#undef NDEBUG
#define STRICT_R_HEADER
#include <Rcpp.h>
extern "C" bool _rxode2et_qtest(SEXP in, const char *test);
#include "rxode2et_as.h"
using namespace Rcpp;
extern "C" int _rxode2et_rxIsEt(SEXP objSexp) {
  RObject obj = as<RObject>(objSexp);
  bool hasCls = obj.hasAttribute("class");
  if (!hasCls) return 0;
  CharacterVector classattr = obj.attr("class");
  std::string cur;
  for (unsigned int i = classattr.size(); i--; ){
    cur = as<std::string>(classattr[i]);
    if (cur == "rxEt") {
      List ce = as<List>(classattr.attr(".rxode2.lst"));
      List lobj = List(obj);
      int nobs = asInt(ce["nobs"], "nobs");
      int ndose = asInt(ce["ndose"], "ndose");
      if (lobj.size() != 12) {
        lobj.attr("class") = CharacterVector::create("data.frame");
        return 0;
      }
      if ( (as<IntegerVector>(lobj[0])).size() != ndose + nobs) {
        lobj.attr("class") = CharacterVector::create("data.frame");
        return 0;
      }
      return 1;

    }
  }
  return 0;
}
