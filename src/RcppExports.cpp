// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// rcpp_hello_world
List rcpp_hello_world();
RcppExport SEXP _FunD_rcpp_hello_world() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_hello_world());
    return rcpp_result_gen;
END_RCPP
}
// RFD
NumericVector RFD(NumericMatrix x, int n, double m, NumericVector q, double V_bar);
RcppExport SEXP _FunD_RFD(SEXP xSEXP, SEXP nSEXP, SEXP mSEXP, SEXP qSEXP, SEXP V_barSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< double >::type m(mSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type q(qSEXP);
    Rcpp::traits::input_parameter< double >::type V_bar(V_barSEXP);
    rcpp_result_gen = Rcpp::wrap(RFD(x, n, m, q, V_bar));
    return rcpp_result_gen;
END_RCPP
}
// FDq0
double FDq0(double n, double f1, double f2, double h1, double h2, double A);
RcppExport SEXP _FunD_FDq0(SEXP nSEXP, SEXP f1SEXP, SEXP f2SEXP, SEXP h1SEXP, SEXP h2SEXP, SEXP ASEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type n(nSEXP);
    Rcpp::traits::input_parameter< double >::type f1(f1SEXP);
    Rcpp::traits::input_parameter< double >::type f2(f2SEXP);
    Rcpp::traits::input_parameter< double >::type h1(h1SEXP);
    Rcpp::traits::input_parameter< double >::type h2(h2SEXP);
    Rcpp::traits::input_parameter< double >::type A(ASEXP);
    rcpp_result_gen = Rcpp::wrap(FDq0(n, f1, f2, h1, h2, A));
    return rcpp_result_gen;
END_RCPP
}
// FDq1_1
double FDq1_1(double n, double h1, double A);
RcppExport SEXP _FunD_FDq1_1(SEXP nSEXP, SEXP h1SEXP, SEXP ASEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type n(nSEXP);
    Rcpp::traits::input_parameter< double >::type h1(h1SEXP);
    Rcpp::traits::input_parameter< double >::type A(ASEXP);
    rcpp_result_gen = Rcpp::wrap(FDq1_1(n, h1, A));
    return rcpp_result_gen;
END_RCPP
}
// FDq2
double FDq2(NumericMatrix tmpxv, double n);
RcppExport SEXP _FunD_FDq2(SEXP tmpxvSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type tmpxv(tmpxvSEXP);
    Rcpp::traits::input_parameter< double >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(FDq2(tmpxv, n));
    return rcpp_result_gen;
END_RCPP
}
// delta
double delta(NumericMatrix del_avtab, double k, double n);
RcppExport SEXP _FunD_delta(SEXP del_avtabSEXP, SEXP kSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type del_avtab(del_avtabSEXP);
    Rcpp::traits::input_parameter< double >::type k(kSEXP);
    Rcpp::traits::input_parameter< double >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(delta(del_avtab, k, n));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_FunD_rcpp_hello_world", (DL_FUNC) &_FunD_rcpp_hello_world, 0},
    {"_FunD_RFD", (DL_FUNC) &_FunD_RFD, 5},
    {"_FunD_FDq0", (DL_FUNC) &_FunD_FDq0, 6},
    {"_FunD_FDq1_1", (DL_FUNC) &_FunD_FDq1_1, 3},
    {"_FunD_FDq2", (DL_FUNC) &_FunD_FDq2, 2},
    {"_FunD_delta", (DL_FUNC) &_FunD_delta, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_FunD(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
