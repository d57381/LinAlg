#ifndef LINALG_H
#define LINALG_H

class LinearAlgebraFunctions{

public:
  static int dotProduct(std::vector<int> a, std::vector<int> b);
  static std::vector<int> matVec(std::vector<std::vector<int> > &m, std::vector<int> &a);


};

#endif
