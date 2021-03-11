#ifndef MATRIX_CIRCUITS_HH
#define MATRIX_CIRCUITS_HH

#include <vector>

#include "lin_alg/la.hh"
#include "lin_alg/matrix.hh"

// TODO: найти где будут Edge

namespace CTS
{
struct Edge final // rtor, junc1, junc2, voltage
{
  size_t junc1_, junc_2;

  double rtor_, eds_, cur_ /** May be deleted in future */;
};

/**
 * @brief Circuit class. Solves a circut
 */
class Circuit final
{
private:
  std::vector<Edge> edges_;
  MX::Matrix<double> incidence_;

public:

  Circuit( const std::vector<Edge> &edges, size_t j_num );

  


private:

  MX::Matrix<double> make_eds_matr();
  MX::Matrix<double> make_res_matr();
};
} // namespace CTS

#endif // MATRIX_CIRCUITS_HH
