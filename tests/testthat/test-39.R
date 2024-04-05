test_that("test import which was issue #39", {

  e <- et()

  e$importEventTable(data.frame(
    ID = "A",
    TIME = c(738.9333333, NA),
    CMT = c("depot", "central"),
    AMT = c(300, NA),
    EVID = c(1, 0),
    DOSE = 300,
    COVAR = 1
  ))


})
