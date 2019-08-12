open WonderWebgl.GlType;

open StructureType;

open FontType;

/* type radioButtonSetting = {
  radioButtonOuterColor: colorArr,
  radioButtonInnerColor: colorArr,
  radioButtonOuterColorHover: colorArr,
  radioButtonInnerColorHover: colorArr,
  radioButtonCircleSegments: int,
  radioButtonInnerRadius: float,
  radioButtonOuterRadius: float,
};

type buttonSetting = {
  buttonColor: colorArr,
  hoverButtonColor: colorArr,
  clickButtonColor: colorArr,
};

type checkboxSetting = {
  checkboxOuterColor: colorArr,
  checkboxInnerColor: colorArr,
  checkboxOuterColorHover: colorArr,
  checkboxInnerColorHover: colorArr,
  checkboxInnerSizeRatio: float,
  checkboxOuterSizeRatio: float,
};

type sliderSetting = {
  sliderBackgroundColor: colorArr,
  sliderFillColor: colorArr,
  sliderBackgroundColorHover: colorArr,
  sliderFillColorHover: colorArr,
}; */

type setting = {
  textColor: colorArr,
  fontTexUvForWhite: array(float),
  /* buttonSetting,
  radioButtonSetting,
  checkboxSetting,
  sliderSetting, */
};

type point('a) = ('a, 'a);

type ioData = {
  pointUp: bool,
  pointDown: bool,
  pointPosition: point(int),
  pointMovementDelta: point(int),
};

type lastWebglData = {
  lastProgram: option(program),
  lastElementArrayBuffer: buffer,
  lastArrayBuffer: buffer,
  lastTexture: option(texture),
  lastIsEnableDepthTest: bool,
  lastIsEnableBlend: bool,
};

type webglData = {
  program,
  positionBuffer: buffer,
  colorBuffer: buffer,
  texCoordBuffer: buffer,
  indexBuffer: buffer,
  fontTexture: texture,
  aPositonLocation: attributeLocation,
  aColorLocation: attributeLocation,
  aTexCoordLocation: attributeLocation,
  lastWebglData: option(lastWebglData),
  /* currentFontTextureDrawDataBaseIndex: int, */
};

type fftCharData = {
  .
  "x0": int,
  "y0": int,
  "x1": int,
  "y1": int,
  "xoff": float,
  "yoff": float,
  "xoff2": float,
  "yoff2": float,
  "xadvance": float,
};

type fontData = {
  fntFilePath: string,
  bitmapFilePath: string,
};

type assetData = {
  fntId: string,
  bitmapId: string,
  fntDataMap: WonderCommonlib.MutableHashMapService.t(fntData),
  bitmapMap:
    WonderCommonlib.MutableHashMapService.t(WonderWebgl.DomExtendType.imageElement),
  customImageArr:
    array(
      (WonderWebgl.DomExtendType.imageElement, string, ImageType.imageType),
    ),
  customTextureMap:
    WonderCommonlib.MutableHashMapService.t(WonderWebgl.GlType.texture),
};

/* type radioButtonData = {
  isSelectedMap: WonderCommonlib.MutableHashMapService.t(int),
};

type checkboxData = {
  index: int,
  isSelectedMap: WonderCommonlib.MutableSparseMapService.t(bool),
};

type sliderData = {
  index: int,
  valueMap: WonderCommonlib.MutableSparseMapService.t(float),
}; */

type groupData = {
  positionArr: array(position),
  index: int,
};

type layoutData = {groupData};

type drawData = {
  fontTextureDrawData: DrawDataType.drawData,
  customTextureDrawDataMap:
    WonderCommonlib.MutableHashMapService.t(DrawDataType.drawData),
};

/* type controlData = {
  radioButtonData,
  checkboxData,
  sliderData,
}; */

type customDataForIMGUIFunc;

type apiJsObj;

type imguiFunc =
  (. customDataForIMGUIFunc, apiJsObj, imguiRecord) => imguiRecord
and imguiFuncData = {
  imguiFunc: option(imguiFunc),
  customDataForIMGUIFunc: option(customDataForIMGUIFunc),
  apiJsObj,
}
and imguiRecord = {
  setting,
  assetData,
  fontData: option(fontData),
  webglData: option(webglData),
  drawData,
  imguiFuncData,
  /* controlData, */
  ioData,
  layoutData,
};