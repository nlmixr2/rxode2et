# rxode2et 2.0.10

* Fix dollar sign accessing of objects (like data frames), as pointed
  out by @frbrz (issue #16)

* Use `rxode2parse` functions for internal event table creation (where
  they were moved to).

* Dropped C++14 and let the system decide.

# rxode2et 2.0.9

* Split off `et()`, `eventTable()` and related functions.

* Also split off `rxStack()` and `rxCbindStudyIndividual()` in this
  package.

* Added a `NEWS.md` file to track changes to the package.
