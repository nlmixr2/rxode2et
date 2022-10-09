// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
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
// rxSetIni0
bool rxSetIni0(bool ini0);
RcppExport SEXP _rxode2et_rxSetIni0(SEXP ini0SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< bool >::type ini0(ini0SEXP);
    rcpp_result_gen = Rcpp::wrap(rxSetIni0(ini0));
    return rcpp_result_gen;
END_RCPP
}
// etTrans
List etTrans(List inData, const RObject& obj, bool addCmt, bool dropUnits, bool allTimeVar, bool keepDosingOnly, Nullable<LogicalVector> combineDvid, CharacterVector keep);
RcppExport SEXP _rxode2et_etTrans(SEXP inDataSEXP, SEXP objSEXP, SEXP addCmtSEXP, SEXP dropUnitsSEXP, SEXP allTimeVarSEXP, SEXP keepDosingOnlySEXP, SEXP combineDvidSEXP, SEXP keepSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type inData(inDataSEXP);
    Rcpp::traits::input_parameter< const RObject& >::type obj(objSEXP);
    Rcpp::traits::input_parameter< bool >::type addCmt(addCmtSEXP);
    Rcpp::traits::input_parameter< bool >::type dropUnits(dropUnitsSEXP);
    Rcpp::traits::input_parameter< bool >::type allTimeVar(allTimeVarSEXP);
    Rcpp::traits::input_parameter< bool >::type keepDosingOnly(keepDosingOnlySEXP);
    Rcpp::traits::input_parameter< Nullable<LogicalVector> >::type combineDvid(combineDvidSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type keep(keepSEXP);
    rcpp_result_gen = Rcpp::wrap(etTrans(inData, obj, addCmt, dropUnits, allTimeVar, keepDosingOnly, combineDvid, keep));
    return rcpp_result_gen;
END_RCPP
}
// rxEtTransAsDataFrame_
List rxEtTransAsDataFrame_(List inData1);
RcppExport SEXP _rxode2et_rxEtTransAsDataFrame_(SEXP inData1SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type inData1(inData1SEXP);
    rcpp_result_gen = Rcpp::wrap(rxEtTransAsDataFrame_(inData1));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_rxode2et_etDollarNames", (DL_FUNC) &_rxode2et_etDollarNames, 1},
    {"_rxode2et_etUpdate", (DL_FUNC) &_rxode2et_etUpdate, 4},
    {"_rxode2et_et_", (DL_FUNC) &_rxode2et_et_, 2},
    {"_rxode2et_etSeq_", (DL_FUNC) &_rxode2et_etSeq_, 11},
    {"_rxode2et_etRep_", (DL_FUNC) &_rxode2et_etRep_, 7},
    {"_rxode2et_forderForceBase", (DL_FUNC) &_rxode2et_forderForceBase, 1},
    {"_rxode2et_rxSetIni0", (DL_FUNC) &_rxode2et_rxSetIni0, 1},
    {"_rxode2et_etTrans", (DL_FUNC) &_rxode2et_etTrans, 8},
    {"_rxode2et_rxEtTransAsDataFrame_", (DL_FUNC) &_rxode2et_rxEtTransAsDataFrame_, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_rxode2et(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
