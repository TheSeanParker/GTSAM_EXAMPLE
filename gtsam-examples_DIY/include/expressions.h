/**
 * @file expressions.h
 * @brief customize expression functions
 * @date Nov 8, 2016
 * @author Jing Dong
 */

#pragma once

// functions to build expressions
#include "functions.h"

// type expression definitions
#include <gtsam/nonlinear/expressions.h>
#include <gtsam/slam/expressions.h>
#include <iostream>

namespace gtsamexamples {

// expression project Pose2 to Point2
inline gtsam::Point2_ projectPose2_(const gtsam::Pose2_& pose1) {
  return gtsam::Point2_(&projectPose2, pose1);// projectPose2(pose) 
}

} // namespace gtsamexamples

