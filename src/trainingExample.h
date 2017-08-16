#ifndef trainingExample_h
#define trainingExample_h

#include <vector>
#include <string>

/** This is used by both NN and KNN models for training */
struct trainingExample {
  std::vector<double> input;
  std::vector<double> output;
};

struct trainingSeries {
    std::vector<std::vector<double> > input;
    std::string label;
};

#endif
