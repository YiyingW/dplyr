#ifndef dplyr_dplyr_Hybrid_H
#define dplyr_dplyr_Hybrid_H

namespace dplyr {
  class LazySubsets;
  class Result;

  Result* get_handler(SEXP, const LazySubsets&, const Environment&);

}

#endif // dplyr_dplyr_Hybrid_H
