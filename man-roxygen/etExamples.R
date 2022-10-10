##' @examples
##'
##' \donttest{
##'
##' library(units)
##'
##' ## These are making the more complex regimens of the rxode2 tutorial
##'
##' ## bid for 5 days
##' bid <- et(timeUnits="hr") %>%
##'        et(amt=10000,ii=12,until=set_units(5, "days"))
##'
##' ## qd for 5 days
##' qd <- et(timeUnits="hr") %>%
##'       et(amt=20000,ii=24,until=set_units(5, "days"))
##'
##' ## bid for 5 days followed by qd for 5 days
##'
##' et <- seq(bid,qd) %>% et(seq(0,11*24,length.out=100));
##'
##'
##' ## Now Infusion for 5 days followed by oral for 5 days
##'
##' ##  note you can dose to a named compartment instead of using the compartment number
##' infusion <- et(timeUnits = "hr") %>%
##'       et(amt=10000, rate=5000, ii=24, until=set_units(5, "days"), cmt="centr")
##'
##'
##' qd <- et(timeUnits = "hr") %>% et(amt=10000, ii=24, until=set_units(5, "days"), cmt="depot")
##'
##' et <- seq(infusion,qd)
##'
##'
##' ## 2wk-on, 1wk-off
##'
##' qd <- et(timeUnits = "hr") %>% et(amt=10000, ii=24, until=set_units(2, "weeks"), cmt="depot")
##'
##' et <- seq(qd, set_units(1,"weeks"), qd) %>%
##'      add.sampling(set_units(seq(0, 5.5,by=0.005),weeks))
##'
##'
##' ## You can also repeat the cycle easily with the rep function
##'
##' qd <-et(timeUnits = "hr") %>% et(amt=10000, ii=24, until=set_units(2, "weeks"), cmt="depot")
##'
##' et <- etRep(qd, times=4, wait=set_units(1,"weeks")) %>%
##'      add.sampling(set_units(seq(0, 12.5,by=0.005),weeks))
##'
##'
##' }
##' @author Matthew L Fidler, Wenping Wang
##'
##' @seealso \code{\link{eventTable}}, \code{\link{add.sampling}},
##'     \code{\link{add.dosing}}, \code{\link{et}},
##'     \code{\link{etRep}}, \code{\link{etRbind}}
##'
##' @references
##'
##' Wang W, Hallow K, James D (2015). "A Tutorial on rxode2: Simulating
##' Differential Equation Pharmacometric Models in R." CPT:
##' Pharmacometrics and Systems Pharmacology, 5(1), 3-10. ISSN 2163-8306,
##' <URL: https://www.ncbi.nlm.nih.gov/pmc/articles/PMC4728294/>.
##'
