///////////////////////////////////////////////////////////////////////////
//
// File: boxobstacle.hh
// Author: Andrew Howard
// Date: 18 Dec 2000
// Desc: Simulates box obstacles
//
// CVS info:
//  $Source: /home/tcollett/stagecvs/playerstage-cvs/code/stage/include/boxobstacle.hh,v $
//  $Author: inspectorg $
//  $Revision: 1.8 $
//
// Usage:
//  (empty)
//
// Theory of operation:
//  (empty)
//
// Known bugs:
//  (empty)
//
// Possible enhancements:
//  (empty)
//
///////////////////////////////////////////////////////////////////////////

#ifndef BOXOBSTACLE_HH
#define BOXOBSTACLE_HH

#include "entity.hh"

class CBoxObstacle : public CEntity
{
  // Default constructor
  public: CBoxObstacle(CWorld *world, CEntity *parent);

  // Update the device
  public: virtual void Update(double sim_time);
};

#endif
