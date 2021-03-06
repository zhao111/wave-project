/****************************************************************************/
/*                  Copyright 2001, Trustees of Boston University.          */
/*                               All Rights Reserved.                       */
/*                                                                          */
/* Permission to use, copy, or modify this software and its documentation   */
/* for educational and research purposes only and without fee is hereby     */
/* granted, provided that this copyright notice appear on all copies and    */
/* supporting documentation.  For any other uses of this software, in       */
/* original or modified form, including but not limited to distribution in  */
/* whole or in part, specific prior permission must be obtained from Boston */
/* University.  These programs shall not be used, rewritten, or adapted as  */
/* the basis of a commercial software or hardware product without first     */
/* obtaining appropriate licenses from Boston University.  Boston University*/
/* and the author(s) make no representations about the suitability of this  */
/* software for any purpose.  It is provided "as is" without express or     */
/* implied warranty.                                                        */
/*                                                                          */
/****************************************************************************/
/*                                                                          */
/*  Author:    Alberto Medina                                               */
/*             Anukool Lakhina                                              */
/*  Title:     BRITE: Boston university Representative Topology gEnerator   */
/*  Revision:  2.0         4/02/2001                                        */
/****************************************************************************/
/****************************************************************************/
/*                                                                          */
/*  Modified lightly to easily interface with ns-3                          */
/*  Author:     Josh Pelkey <jpelkey@gatech.edu>                            */
/*  Date: 3/02/2011                                                         */
/****************************************************************************/
#ifndef RT_BAR_MODEL_H
#define RT_BAR_MODEL_H
#pragma interface

#include "RouterModel.h"

namespace brite {

////////////////////////////////////////////////
//
// class RouterBarabasiAlbert
// Derived class for BarabasiAlbert model. This model
// implies Incremental growth and preferential
// connectivity.
// Builds router-level topologies 
//
////////////////////////////////////////////////

class RouterBarabasiAlbertPar;

class RouterBarabasiAlbert : public RouterModel {

 public:

  RouterBarabasiAlbert(RouterBarabasiAlbertPar* par);
  double ProbFunc(BriteNode* dst);
  Graph* Generate();
  std::string ToString();

 protected:

  void InterconnectNodes(Graph *g);

 private:

  int SumDj;  // Sum of outdegrees of all nodes

};

} // namespace brite

#endif /* RT_BAR_MODEL_H */
