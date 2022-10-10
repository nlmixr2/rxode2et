
.onLoad <- function(libname, pkgname) {
  requireNamespace("rxode2random", quietly=TRUE)
  requireNamespace("data.table", quietly=TRUE)
  if (requireNamespace("pillar", quietly = TRUE)) {
    .s3register("pillar::type_sum", "rxEvid")
    .s3register("pillar::type_sum", "rxRateDur")
    .s3register("pillar::pillar_shaft", "rxEvid")
    .s3register("pillar::pillar_shaft", "rxRateDur")
  }

}
