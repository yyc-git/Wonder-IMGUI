let setSetting =
    (
      ~record,
      ~textColor=[|1., 1., 1.|],
      ~buttonColor=[|1., 0.5, 0.3|],
      ~hoverButtonColor=[|1., 0.5, 0.3|],
      ~clickButtonColor=[|1., 0.5, 0.3|],
      ~radioButtonOuterColor=[|1., 0.5, 0.3|],
      ~radioButtonInnerColor=[|1., 0.5, 0.3|],
      ~radioButtonOuterColorHover=[|1., 0.5, 0.3|],
      ~radioButtonInnerColorHover=[|1., 0.5, 0.3|],
      ~radioButtonCircleSegments=9,
      ~radioButtonInnerRadius=0.9,
      ~radioButtonOuterRadius=0.6,
      ~fontTexUvForWhite=[|0.5, 0.|],
      (),
    ) =>
  ManageIMGUIAPI.setSetting(
    {
      "textColor": textColor,
      "buttonSetting": {
        "buttonColor": buttonColor,
        "hoverButtonColor": hoverButtonColor,
        "clickButtonColor": clickButtonColor,
      },
      "radioButtonSetting": {
        "radioButtonOuterColor": radioButtonOuterColor,
        "radioButtonInnerColor": radioButtonInnerColor,
        "radioButtonOuterColorHover": radioButtonOuterColorHover,
        "radioButtonInnerColorHover": radioButtonInnerColorHover,
        "radioButtonCircleSegments": radioButtonCircleSegments,
        "radioButtonInnerRadius": radioButtonInnerRadius,
        "radioButtonOuterRadius": radioButtonOuterRadius,
      },
      "fontTexUvForWhite": fontTexUvForWhite,
    },
    record,
  );