% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/AllGenericDefinition.R, R/MassSpectra.R
\docType{methods}
\name{peakPick}
\alias{peakPick}
\alias{peakPick,MassSpectra-method}
\title{generic method peak.pick}
\usage{
peakPick(object, span = 100, ...)

\S4method{peakPick}{MassSpectra}(object, span = 100, ...)
}
\arguments{
\item{object}{object of class MassSpectra}

\item{span}{numeric parameter for local max/min detection}

\item{...}{additional args}
}
\value{
object of class PeakList with updated slots PeakIDs and peakMzs

object of class PeakList
}
\description{
generic method peak.pick

method peakPick
}
\details{
Method peakPick for MassSpectra class, works as a constructor for PeakList class.
The local min/max detection implementation is adapted from the CRAN package
'ChemometricsWithR'.
}
\examples{
library(tofsimsData)
data(tofsimsData)
testSpectra <- reduceSpectrumResolution(object = testSpectra, everyN = 4, mode = 'keep')
testSpectra <- smootherSpline(testSpectra, stepsize = 10, spar = 0.3)
testSpectra <- smootherGolay(testSpectra, p = 3, n = 5)
testSpectra <- peakPick(testSpectra, span = 100)
plot(testSpectra, , mzRange=c(38.5,40.5), type = 'l')
}
