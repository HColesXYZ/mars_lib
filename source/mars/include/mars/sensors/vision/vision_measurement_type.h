// Copyright (C) 2021 Christian Brommer, Control of Networked Systems, University of Klagenfurt, Austria.
//
// All rights reserved.
//
// This software is licensed under the terms of the BSD-2-Clause-License with
// no commercial use allowed, the full terms of which are made available
// in the LICENSE file. No license in patents is granted.
//
// You can contact the author at <christian.brommer@ieee.org>

#ifndef VISIONMEASUREMENTTYPE_H
#define VISIONMEASUREMENTTYPE_H

#include <mars/sensors/measurement_base_class.h>
#include <Eigen/Dense>
#include <utility>

namespace mars
{
class VisionMeasurementType : public BaseMeas
{
public:
  EIGEN_MAKE_ALIGNED_OPERATOR_NEW

  Eigen::Vector3d position_;               ///< Position [x y z]
  Eigen::Quaternion<double> orientation_;  ///< Quaternion [w x y z]

  VisionMeasurementType() = default;

  VisionMeasurementType(Eigen::Vector3d position, const Eigen::Quaternion<double>& orientation)
    : position_(std::move(position)), orientation_(orientation)
  {
  }
};
}  // namespace mars
#endif  // VISIONMEASUREMENTTYPE_H
