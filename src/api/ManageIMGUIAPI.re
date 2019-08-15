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

let getSetting = record => {
  let {
    textColor,
    /* buttonSetting,
       radioButtonSetting,
          checkboxSetting,
          sliderSetting, */
  } =
    RecordIMGUIService.getSetting(record);

  /* let buttonSettingJsObj = {
       "buttonColor": buttonSetting.buttonColor,
       "hoverButtonColor": buttonSetting.hoverButtonColor,
       "clickButtonColor": buttonSetting.clickButtonColor,
     };
     let radioButtonSettingJsObj = {
       "radioButtonOuterColor": radioButtonSetting.radioButtonOuterColor,
       "radioButtonInnerColor": radioButtonSetting.radioButtonInnerColor,
       "radioButtonOuterColorHover":
         radioButtonSetting.radioButtonOuterColorHover,
       "radioButtonInnerColorHover":
         radioButtonSetting.radioButtonInnerColorHover,
       "radioButtonCircleSegments": radioButtonSetting.radioButtonCircleSegments,
       "radioButtonInnerRadius": radioButtonSetting.radioButtonInnerRadius,
       "radioButtonOuterRadius": radioButtonSetting.radioButtonOuterRadius,
     };
     let checkboxSettingJsObj = {
       "checkboxOuterColor": checkboxSetting.checkboxOuterColor,
       "checkboxInnerColor": checkboxSetting.checkboxInnerColor,
       "checkboxOuterColorHover": checkboxSetting.checkboxOuterColorHover,
       "checkboxInnerColorHover": checkboxSetting.checkboxInnerColorHover,
       "checkboxInnerSizeRatio": checkboxSetting.checkboxInnerSizeRatio,
       "checkboxOuterSizeRatio": checkboxSetting.checkboxOuterSizeRatio,
     };
     let sliderSettingJsObj = {
       "sliderBackgroundColor": sliderSetting.sliderBackgroundColor,
       "sliderFillColor": sliderSetting.sliderFillColor,
       "sliderBackgroundColorHover": sliderSetting.sliderBackgroundColorHover,
       "sliderFillColorHover": sliderSetting.sliderFillColorHover,
     }; */

  {
    "textColor": textColor,
    /* "buttonSetting": buttonSettingJsObj, */
    /* "radioButtonSetting": radioButtonSettingJsObj,
       "checkboxSetting": checkboxSettingJsObj,
       "sliderSetting": sliderSettingJsObj, */
  };
};

let setSetting = (settingJsObj, record) =>
  /* let buttonSettingJsObj = settingJsObj##buttonSetting;
     let radioButtonSettingJsObj = settingJsObj##radioButtonSetting;
     let checkboxSettingJsObj = settingJsObj##checkboxSetting;
     let sliderSettingJsObj = settingJsObj##sliderSetting; */
  /* let buttonSetting = {
       buttonColor: buttonSettingJsObj##buttonColor,
       hoverButtonColor: buttonSettingJsObj##hoverButtonColor,
       clickButtonColor: buttonSettingJsObj##clickButtonColor,
     };

     let radioButtonSetting = {
       radioButtonOuterColor: radioButtonSettingJsObj##radioButtonOuterColor,
       radioButtonInnerColor: radioButtonSettingJsObj##radioButtonInnerColor,
       radioButtonOuterColorHover: radioButtonSettingJsObj##radioButtonOuterColorHover,
       radioButtonInnerColorHover: radioButtonSettingJsObj##radioButtonInnerColorHover,
       radioButtonCircleSegments: radioButtonSettingJsObj##radioButtonCircleSegments,
       radioButtonInnerRadius: radioButtonSettingJsObj##radioButtonInnerRadius,
       radioButtonOuterRadius: radioButtonSettingJsObj##radioButtonOuterRadius,
     };

     let checkboxSetting = {
       checkboxOuterColor: checkboxSettingJsObj##checkboxOuterColor,
       checkboxInnerColor: checkboxSettingJsObj##checkboxInnerColor,
       checkboxOuterColorHover: checkboxSettingJsObj##checkboxOuterColorHover,
       checkboxInnerColorHover: checkboxSettingJsObj##checkboxInnerColorHover,
       checkboxInnerSizeRatio: checkboxSettingJsObj##checkboxInnerSizeRatio,
       checkboxOuterSizeRatio: checkboxSettingJsObj##checkboxOuterSizeRatio,
     };

     let sliderSetting = {
       sliderBackgroundColor: sliderSettingJsObj##sliderBackgroundColor,
       sliderFillColor: sliderSettingJsObj##sliderFillColor,
       sliderBackgroundColorHover: sliderSettingJsObj##sliderBackgroundColorHover,
       sliderFillColorHover: sliderSettingJsObj##sliderFillColorHover,
     }; */
  RecordIMGUIService.setSetting(
    {
      textColor: settingJsObj##textColor,
      /* buttonSetting,
         radioButtonSetting,
         checkboxSetting,
         sliderSetting, */
      /* fontTexUvForWhite: settingJsObj##fontTexUvForWhite, */
    },
    record,
  );

let getCustomData = ManageIMGUIService.getCustomData;

let getIMGUIFunc = ManageIMGUIService.getIMGUIFunc;

let setIMGUIFunc = ManageIMGUIService.setIMGUIFunc;

let sendCustomTextureProgramUniformProjectionMatData =
    (gl, canvasSize, record) =>
  ManageIMGUIService.sendCustomTextureProgramUniformProjectionMatData(
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

let sendNoTextureProgramUniformProjectionMatData = (gl, canvasSize, record) =>
  ManageIMGUIService.sendNoTextureProgramUniformProjectionMatData(
    gl,
    canvasSize,
    record,
  );