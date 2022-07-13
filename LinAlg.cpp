#include<vector>
#include<string>
#include "LinAlg.h"

int LinearAlgebraFunctions::dotProduct(std::vector<int> a, std::vector<int> b){
  int result = 0;
  if(a.size() != b.size()){
    std::string exceptionString = "ERROR: Vectors must be of same length.";
    throw exceptionString;
  }
  for(int i = 0; i< a.size(); i++){
    result += a[i]*b[i];
  }
  return result;
}

std::vector<int> LinearAlgebraFunctions::matVec(std::vector<std::vector<int> > &m, std::vector<int> &a){
  std::vector<int> result;
  int sum = 0;
  if(a.size() != m.size()){
    std::string exceptionString = "ERROR: Vector and matrix sizes are not compatible.";
    throw exceptionString;
  }
  for(int i = 0; i < m.size(); i++){
    sum = 0;
    for(int j = 0; j< a.size(); j++){
      sum += m[i][j]*a[j];
    }
    result.push_back(sum);
  }
  return result;
}
