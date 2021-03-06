open IMGUIType;

let createRecord = ManageIMGUIService.createRecord;

let init = ManageIMGUIService.init;

let _getRecord = record => record;

let _setRecord = (record, data) => record;

let render = (gl, ioDataJsObj, record) =>
  ManageIMGUIService.render(
    gl,
    {
      pointUp: ioDataJsObj##pointUp,
      pointDown: ioDataJsObj##pointDown,
      pointPosition: ioDataJsObj##pointPosition,
      pointMovementDelta: ioDataJsObj##pointMovementDelta,
    },
    ManageIMGUIService.getAPIJsObj(record),
    (_getRecord, _setRecord),
    record,
  );

let sendCustomTextureProgramUniformProjectionMatData =
    (gl, canvasSize, record) =>
  ManageIMGUIService.sendCustomTextureProgramUniformProjectionMatData(
    gl,
    canvasSize,
    record,
  );

let sendFontTextureProgramUniformProjectionMatData = (gl, canvasSize, record) =>
  ManageIMGUIService.sendFontTextureProgramUniformProjectionMatData(
    gl,
    canvasSize,
    record,
  );

let sendNoTextureProgramUniformProjectionMatData = (gl, canvasSize, record) =>
  ManageIMGUIService.sendNoTextureProgramUniformProjectionMatData(
    gl,
    canvasSize,
    record,
  );