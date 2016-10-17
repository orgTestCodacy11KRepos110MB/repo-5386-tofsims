// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// import
List import(CharacterVector rFilename, CharacterVector fType, int imageSize, float upperMass);
RcppExport SEXP tofsims_import(SEXP rFilenameSEXP, SEXP fTypeSEXP, SEXP imageSizeSEXP, SEXP upperMassSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type rFilename(rFilenameSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type fType(fTypeSEXP);
    Rcpp::traits::input_parameter< int >::type imageSize(imageSizeSEXP);
    Rcpp::traits::input_parameter< float >::type upperMass(upperMassSEXP);
    __result = Rcpp::wrap(import(rFilename, fType, imageSize, upperMass));
    return __result;
END_RCPP
}
// calibrate_ITZIP
List calibrate_ITZIP(List uncalibrate, float upperMass);
RcppExport SEXP tofsims_calibrate_ITZIP(SEXP uncalibrateSEXP, SEXP upperMassSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type uncalibrate(uncalibrateSEXP);
    Rcpp::traits::input_parameter< float >::type upperMass(upperMassSEXP);
    __result = Rcpp::wrap(calibrate_ITZIP(uncalibrate, upperMass));
    return __result;
END_RCPP
}
// read_BIF
List read_BIF(std::string file, std::string instrument);
RcppExport SEXP tofsims_read_BIF(SEXP fileSEXP, SEXP instrumentSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::string >::type file(fileSEXP);
    Rcpp::traits::input_parameter< std::string >::type instrument(instrumentSEXP);
    __result = Rcpp::wrap(read_BIF(file, instrument));
    return __result;
END_RCPP
}
// EigenDecompose
List EigenDecompose(NumericMatrix A, NumericMatrix B, int startIndex, int endIndex);
RcppExport SEXP tofsims_EigenDecompose(SEXP ASEXP, SEXP BSEXP, SEXP startIndexSEXP, SEXP endIndexSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type A(ASEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type B(BSEXP);
    Rcpp::traits::input_parameter< int >::type startIndex(startIndexSEXP);
    Rcpp::traits::input_parameter< int >::type endIndex(endIndexSEXP);
    __result = Rcpp::wrap(EigenDecompose(A, B, startIndex, endIndex));
    return __result;
END_RCPP
}
// nnMean
NumericVector nnMean(NumericVector y, int nrows, int ncols);
RcppExport SEXP tofsims_nnMean(SEXP ySEXP, SEXP nrowsSEXP, SEXP ncolsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< int >::type nrows(nrowsSEXP);
    Rcpp::traits::input_parameter< int >::type ncols(ncolsSEXP);
    __result = Rcpp::wrap(nnMean(y, nrows, ncols));
    return __result;
END_RCPP
}
// readRawPhiC
NumericMatrix readRawPhiC(CharacterVector rFilename, float rSlope, float rIntercept, float rImagePixels);
RcppExport SEXP tofsims_readRawPhiC(SEXP rFilenameSEXP, SEXP rSlopeSEXP, SEXP rInterceptSEXP, SEXP rImagePixelsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type rFilename(rFilenameSEXP);
    Rcpp::traits::input_parameter< float >::type rSlope(rSlopeSEXP);
    Rcpp::traits::input_parameter< float >::type rIntercept(rInterceptSEXP);
    Rcpp::traits::input_parameter< float >::type rImagePixels(rImagePixelsSEXP);
    __result = Rcpp::wrap(readRawPhiC(rFilename, rSlope, rIntercept, rImagePixels));
    return __result;
END_RCPP
}
// cTable
List cTable(NumericVector vect);
RcppExport SEXP tofsims_cTable(SEXP vectSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type vect(vectSEXP);
    __result = Rcpp::wrap(cTable(vect));
    return __result;
END_RCPP
}
// cParIndicesSearch
IntegerVector cParIndicesSearch(NumericVector rawVector, NumericVector mzs, IntegerVector mzsOrder, std::string startOrEnd);
RcppExport SEXP tofsims_cParIndicesSearch(SEXP rawVectorSEXP, SEXP mzsSEXP, SEXP mzsOrderSEXP, SEXP startOrEndSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type rawVector(rawVectorSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type mzs(mzsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type mzsOrder(mzsOrderSEXP);
    Rcpp::traits::input_parameter< std::string >::type startOrEnd(startOrEndSEXP);
    __result = Rcpp::wrap(cParIndicesSearch(rawVector, mzs, mzsOrder, startOrEnd));
    return __result;
END_RCPP
}
