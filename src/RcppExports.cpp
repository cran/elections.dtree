// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppThread.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// social_choice_irv
Rcpp::List social_choice_irv(Rcpp::List bs, unsigned nWinners, Rcpp::CharacterVector candidates, std::string seed);
RcppExport SEXP _elections_dtree_social_choice_irv(SEXP bsSEXP, SEXP nWinnersSEXP, SEXP candidatesSEXP, SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type bs(bsSEXP);
    Rcpp::traits::input_parameter< unsigned >::type nWinners(nWinnersSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type candidates(candidatesSEXP);
    Rcpp::traits::input_parameter< std::string >::type seed(seedSEXP);
    rcpp_result_gen = Rcpp::wrap(social_choice_irv(bs, nWinners, candidates, seed));
    return rcpp_result_gen;
END_RCPP
}

RcppExport SEXP run_testthat_tests(SEXP);
RcppExport SEXP _rcpp_module_boot_dirichlet_tree_module();

static const R_CallMethodDef CallEntries[] = {
    {"_elections_dtree_social_choice_irv", (DL_FUNC) &_elections_dtree_social_choice_irv, 4},
    {"_rcpp_module_boot_dirichlet_tree_module", (DL_FUNC) &_rcpp_module_boot_dirichlet_tree_module, 0},
    {"run_testthat_tests", (DL_FUNC) &run_testthat_tests, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_elections_dtree(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
