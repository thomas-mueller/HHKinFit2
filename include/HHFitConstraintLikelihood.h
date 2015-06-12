/*
 * class for additional likelihood-based constraints
 */

#ifndef HHFitConstraintLikelihood_
#define HHFitConstraintLikelihood_

#include "HHFitConstraint.h"
#include "TF1.h"
#include "HHFitObject.h"
#include "TH1D.h"
#include "TH2D.h"


namespace HHKinFit2{
class HHFitConstraintLikelihood : public HHFitConstraint {
 public:
  HHFitConstraintLikelihood(HHFitObject* object1,HHFitObject* object2, TF1* likelihood1, TF1* likelihood2 );
  HHFitConstraintLikelihood(HHFitObject* object1,HHFitObject* object2, TH1D* likelihoodhisto1, TH1D* likelihoodhisto2 );
  HHFitConstraintLikelihood(HHFitObject* object1,HHFitObject* object2, TH2D* likelihoodhisto);
  Double_t getChi2() const;
  double getLikelihood() const;

 private:
  TF1* const m_likelihood1;
  TF1* const m_likelihood2;
  TH1D* const m_likelihoodhisto1;
  TH1D* const m_likelihoodhisto2;
  TH2D* const m_likelihoodhisto;
  HHFitObject* m_object2;
  int mode;

};
}
#endif /* HHFitConstraintLikelihood_ */
