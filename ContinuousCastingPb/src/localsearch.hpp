
#ifndef LOCALSEARCH_HPP
#define LOCALSEARCH_HPP


class LocalSearch {
protected:
  int nbEval;
  double bestFitness;
  Solution s;
  double fitnessMax;
public:
  LocalSearch();
  virtual void run(Solution s);
};
#endif //LOCALSEARCH_HPP
