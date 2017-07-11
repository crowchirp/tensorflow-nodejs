#pragma once

#include <stdio.h>
#include <node.h>
#include <nan.h>
#include "tensorflow/c/c_api.h"

using namespace v8;

namespace TensorflowNode {

/**
 * @class Graph
 * @extends Nan::ObjectWrap
 */
class Graph : public Nan::ObjectWrap {
public:
  static NAN_MODULE_INIT(Init);

  /**
   * @constructor
   */
  static NAN_METHOD(New);

  /**
   * @method destroy
   */
  static NAN_METHOD(Destory);

  /**
   * @method setShape
   */
  static NAN_METHOD(SetShape);

  /**
   * @method getShape
   */
  static NAN_METHOD(GetShape);

  /**
   * @method getNumOfDims
   */
  static NAN_METHOD(GetNumOfDims);
  TF_Graph* _graph;

private:
  explicit Graph();
  ~Graph();
};

}