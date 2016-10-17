// This file was automatically generated by 'Kmisc::registerFunctions()'

#include <R.h>
#include <Rinternals.h>

#include <R_ext/Rdynload.h>

SEXP tofsims_import(SEXP rFilenameSEXP, SEXP fTypeSEXP, SEXP imageSizeSEXP, SEXP upperMassSEXP);
SEXP tofsims_calibrate_ITZIP(SEXP uncalibrateSEXP, SEXP upperMassSEXP);
SEXP tofsims_read_BIF(SEXP fileSEXP, SEXP instrumentSEXP);
SEXP tofsims_EigenDecompose(SEXP ASEXP, SEXP BSEXP, SEXP startIndexSEXP, SEXP endIndexSEXP);
SEXP tofsims_nnMean(SEXP ySEXP, SEXP nrowsSEXP, SEXP ncolsSEXP);
SEXP tofsims_readRawPhiC(SEXP rFilenameSEXP, SEXP rSlopeSEXP, SEXP rInterceptSEXP, SEXP rImagePixelsSEXP);
SEXP tofsims_cTable(SEXP vectSEXP);
SEXP tofsims_cParIndicesSearch(SEXP rawVectorSEXP, SEXP mzsSEXP, SEXP mzsOrderSEXP, SEXP startOrEndSEXP);

R_CallMethodDef callMethods[]  = {
  {"tofsims_import", (DL_FUNC) &tofsims_import, 4},
  {"tofsims_calibrate_ITZIP", (DL_FUNC) &tofsims_calibrate_ITZIP, 2},
  {"tofsims_read_BIF", (DL_FUNC) &tofsims_read_BIF, 2},
  {"tofsims_EigenDecompose", (DL_FUNC) &tofsims_EigenDecompose, 4},
  {"tofsims_nnMean", (DL_FUNC) &tofsims_nnMean, 3},
  {"tofsims_readRawPhiC", (DL_FUNC) &tofsims_readRawPhiC, 4},
  {"tofsims_cTable", (DL_FUNC) &tofsims_cTable, 1},
  {"tofsims_cParIndicesSearch", (DL_FUNC) &tofsims_cParIndicesSearch, 4},
  {NULL, NULL, 0}
};

void R_init_tofsims(DllInfo *info) {
  R_registerRoutines(info, NULL, callMethods, NULL, NULL);
  R_useDynamicSymbols(info, FALSE);
}

