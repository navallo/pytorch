#pragma once

#include <ATen/core/Tensor.h>
#include <c10/util/Array.h>
#include "caffe2/core/context_base.h"

namespace caffe2 {
namespace ops {

struct BatchGather final {
  static constexpr const char* name = "batch_gather";

  using Signature = void(
      const at::Tensor& data,
      const at::Tensor& indices,
      const at::Tensor& output);

  static constexpr size_t num_dispatch_args() {return 2;}

  static constexpr size_t num_outputs() {return 1;}

  static constexpr c10::guts::array<const char*, 3> parameter_names = {
      {"data", "indices", "output"}};
};

} // namespace ops
} // namespace caffe2
