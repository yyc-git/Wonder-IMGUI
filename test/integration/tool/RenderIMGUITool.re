let buildLabelData = () => {
  let labelX1 = 10;
  let labelY1 = 20;
  let labelWidth1 = 100;
  let labelHeight1 = 200;
  let labelStr1 = "ab";

  let labelX2 = 20;
  let labelY2 = 20;
  let labelWidth2 = 200;
  let labelHeight2 = 200;
  let labelStr2 = "cc";

  (
    ((labelX1, labelY1, labelWidth1, labelHeight1), labelStr1),
    ((labelX2, labelY2, labelWidth2, labelHeight2), labelStr2),
  );
};

let buildImageData = () => {
  let imageX1 = 50;
  let imageY1 = 60;
  let imageWidth1 = 150;
  let imageHeight1 = 250;
  let imageS01 = 0.1;
  let imageT01 = 0.5;
  let imageS11 = 1.;
  let imageT11 = 0.8;
  let texture1 = Obj.magic(101);

  let imageX2 = 51;
  let imageY2 = 61;
  let imageWidth2 = 251;
  let imageHeight2 = 251;
  let imageS02 = 0.3;
  let imageT02 = 0.6;
  let imageS12 = 0.9;
  let imageT12 = 0.7;
  let texture2 = Obj.magic(102);

  let imageX3 = 52;
  let imageY3 = 62;
  let imageWidth3 = 352;
  let imageHeight3 = 352;
  let imageS03 = 0.2;
  let imageT03 = 0.3;
  let imageS13 = 0.6;
  let imageT13 = 0.5;
  let texture3 = Obj.magic(104);


  (
    (
      (imageX1, imageY1, imageWidth1, imageHeight1),
      (imageS01, imageT01, imageS11, imageT11),
      texture1,
    ),
    (
      (imageX2, imageY2, imageWidth2, imageHeight2),
      (imageS02, imageT02, imageS12, imageT12),
      texture2
    ),
(
      (imageX3, imageY3, imageWidth3, imageHeight3),
      (imageS03, imageT03, imageS13, imageT13),
      texture3
    )
  );
};

/* let drawOneLabel = record => {
     let labelX = 10;
     let labelY = 20;
     let labelWidth = 100;
     let labelHeight = 200;
     let labelStr = "ab";

     let record =
       record
       |> FixedLayoutControlIMGUIAPI.label(
            (labelX, labelY, labelWidth, labelHeight),
            labelStr,
          );

     (record, (labelX, labelY, labelWidth, labelHeight), labelStr);
   }; */

/* let drawOneImage = record => {
  let imageX = 50;
  let imageY = 60;
  let imageWidth = 150;
  let imageHeight = 250;
  let imageS0 = 0.1;
  let imageT0 = 0.5;
  let imageS1 = 1.;
  let imageT1 = 0.8;

  let record =
    record
    |> FixedLayoutControlIMGUIAPI.image(
         (imageX, imageY, imageWidth, imageHeight),
         (imageS0, imageT0, imageS1, imageT1),
       );

  (
    record,
    (imageX, imageY, imageWidth, imageHeight),
    (imageS0, imageT0, imageS1, imageT1),
  );
}; */