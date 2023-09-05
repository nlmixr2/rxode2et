
#' @title Convert event data to trial duration data
#' @param ev event data
#' @param trial_duration extend trial duration. Must be same time unit as event data
#' @param obs_interval observation interval. Must be same time unit as event data
#' @param write.dir if not NULL, write the output to a csv file
#' @import purrr data.table
#' @export
to_trial_duration <- function(ev, trial_duration, obs_interval, write.dir = NULL) {
  reg <- as.data.table(ev[,c("id", "time")]) 
  reg <- reg[,.SD[(which.min(time))], by = c("id")]  |> unique(by = "id")

  reg <- pmap(reg, function(id, time) {
    data.frame(id = id, time = seq(time, time+trial_duration, obs_interval))
  }
  )
  reg <- do.call(rbind, reg) |> merge(ev[, !names(ev) == "time"], by = "id", all.y = T)
  ev <- et(reg)
  if(is.character(write.dir)){write.csv(reg, write.dir, row.names = F)}

  ev
}