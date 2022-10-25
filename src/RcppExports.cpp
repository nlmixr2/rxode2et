// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// etDollarNames
CharacterVector etDollarNames(RObject obj);
RcppExport SEXP _rxode2et_etDollarNames(SEXP objSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RObject >::type obj(objSEXP);
    rcpp_result_gen = Rcpp::wrap(etDollarNames(obj));
    return rcpp_result_gen;
END_RCPP
}
// etUpdate
RObject etUpdate(RObject obj, RObject arg, RObject value, LogicalVector exact);
RcppExport SEXP _rxode2et_etUpdate(SEXP objSEXP, SEXP argSEXP, SEXP valueSEXP, SEXP exactSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RObject >::type obj(objSEXP);
    Rcpp::traits::input_parameter< RObject >::type arg(argSEXP);
    Rcpp::traits::input_parameter< RObject >::type value(valueSEXP);
    Rcpp::traits::input_parameter< LogicalVector >::type exact(exactSEXP);
    rcpp_result_gen = Rcpp::wrap(etUpdate(obj, arg, value, exact));
    return rcpp_result_gen;
END_RCPP
}
// et_
RObject et_(List input, List et__);
RcppExport SEXP _rxode2et_et_(SEXP inputSEXP, SEXP et__SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type input(inputSEXP);
    Rcpp::traits::input_parameter< List >::type et__(et__SEXP);
    rcpp_result_gen = Rcpp::wrap(et_(input, et__));
    return rcpp_result_gen;
END_RCPP
}
// etSeq_
List etSeq_(List ets, int handleSamples, int waitType, double defaultIi, bool rbind, int uniqueId, int reserveLen, bool needSort, CharacterVector newUnits, LogicalVector newShow, bool isCmtIntIn);
RcppExport SEXP _rxode2et_etSeq_(SEXP etsSEXP, SEXP handleSamplesSEXP, SEXP waitTypeSEXP, SEXP defaultIiSEXP, SEXP rbindSEXP, SEXP uniqueIdSEXP, SEXP reserveLenSEXP, SEXP needSortSEXP, SEXP newUnitsSEXP, SEXP newShowSEXP, SEXP isCmtIntInSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type ets(etsSEXP);
    Rcpp::traits::input_parameter< int >::type handleSamples(handleSamplesSEXP);
    Rcpp::traits::input_parameter< int >::type waitType(waitTypeSEXP);
    Rcpp::traits::input_parameter< double >::type defaultIi(defaultIiSEXP);
    Rcpp::traits::input_parameter< bool >::type rbind(rbindSEXP);
    Rcpp::traits::input_parameter< int >::type uniqueId(uniqueIdSEXP);
    Rcpp::traits::input_parameter< int >::type reserveLen(reserveLenSEXP);
    Rcpp::traits::input_parameter< bool >::type needSort(needSortSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type newUnits(newUnitsSEXP);
    Rcpp::traits::input_parameter< LogicalVector >::type newShow(newShowSEXP);
    Rcpp::traits::input_parameter< bool >::type isCmtIntIn(isCmtIntInSEXP);
    rcpp_result_gen = Rcpp::wrap(etSeq_(ets, handleSamples, waitType, defaultIi, rbind, uniqueId, reserveLen, needSort, newUnits, newShow, isCmtIntIn));
    return rcpp_result_gen;
END_RCPP
}
// etRep_
List etRep_(RObject curEt, int times, NumericVector wait, IntegerVector ids, int handleSamples, int waitType, double ii);
RcppExport SEXP _rxode2et_etRep_(SEXP curEtSEXP, SEXP timesSEXP, SEXP waitSEXP, SEXP idsSEXP, SEXP handleSamplesSEXP, SEXP waitTypeSEXP, SEXP iiSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RObject >::type curEt(curEtSEXP);
    Rcpp::traits::input_parameter< int >::type times(timesSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type wait(waitSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type ids(idsSEXP);
    Rcpp::traits::input_parameter< int >::type handleSamples(handleSamplesSEXP);
    Rcpp::traits::input_parameter< int >::type waitType(waitTypeSEXP);
    Rcpp::traits::input_parameter< double >::type ii(iiSEXP);
    rcpp_result_gen = Rcpp::wrap(etRep_(curEt, times, wait, ids, handleSamples, waitType, ii));
    return rcpp_result_gen;
END_RCPP
}
// forderForceBase
RObject forderForceBase(bool forceBase);
RcppExport SEXP _rxode2et_forderForceBase(SEXP forceBaseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< bool >::type forceBase(forceBaseSEXP);
    rcpp_result_gen = Rcpp::wrap(forderForceBase(forceBase));
    return rcpp_result_gen;
END_RCPP
}
// rxStack
List rxStack(List Data, Nullable<CharacterVector> vars);
RcppExport SEXP _rxode2et_rxStack(SEXP DataSEXP, SEXP varsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type Data(DataSEXP);
    Rcpp::traits::input_parameter< Nullable<CharacterVector> >::type vars(varsSEXP);
    rcpp_result_gen = Rcpp::wrap(rxStack(Data, vars));
    return rcpp_result_gen;
END_RCPP
}