  //white
  void White() {
    DmxSimple.write(1, 255);
    DmxSimple.write(7, 255);
    DmxSimple.write(13, 255);
    //green
    DmxSimple.write(2, 255);
    DmxSimple.write(8, 255);
    DmxSimple.write(14, 255);
    //blue
    DmxSimple.write(3, 255);
    DmxSimple.write(9, 255);
    DmxSimple.write(15, 255);
    //strobe and speed
    DmxSimple.write(5, 0);
    DmxSimple.write(11, 0);
    DmxSimple.write(17, 0);
    //modi
    DmxSimple.write(6, 0);
    DmxSimple.write(12, 0);
    DmxSimple.write(18, 0);
    //scanner
    DmxSimple.write(19, 125);
    DmxSimple.write(20, 0);
    DmxSimple.write(21, 50);
    DmxSimple.write(22, 0);
    //dimbar
    DmxSimple.write(23, 255);
    DmxSimple.write(24, 255);
    DmxSimple.write(25, 255);
  }
  
void Random_Colors1() {
    //SPOTS
    //red
    DmxSimple.write(1, 0);
    DmxSimple.write(7, 0);
    DmxSimple.write(13, 0);
    //green
    DmxSimple.write(2, 0);
    DmxSimple.write(8, 0);
    DmxSimple.write(14, 0);
    //blue
    DmxSimple.write(3, 0);
    DmxSimple.write(9, 0);
    DmxSimple.write(15, 0);
    //strobe and speed
    DmxSimple.write(5, 200);
    DmxSimple.write(11, 200);
    DmxSimple.write(17, 200);
    //modi
    DmxSimple.write(6, 192);
    DmxSimple.write(12, 192);
    DmxSimple.write(18, 192);
    //scanner
    DmxSimple.write(20, 30);
    DmxSimple.write(21, 170);
    DmxSimple.write(22, 0);

    if (millis() - Delay >= 400) {
    Delay = millis();

    if (scanner_position == 0) {
      scanner_position = 125;
      Slidebar_value1 = 255;
      Slidebar_value2 = 0;
      Slidebar_value3 = 0;
      
    } else if (scanner_position == 125) {
      scanner_position = 255;
      Slidebar_value1 = 0;
      Slidebar_value2 = 255;
      Slidebar_value3 = 0;
      
    } else if (scanner_position == 255) {
      scanner_position = 0;
      Slidebar_value1 = 0;
      Slidebar_value2 = 255;
      Slidebar_value3 = 0;
      
    }
    //dimbar
    DmxSimple.write(23, Slidebar_value1);
    DmxSimple.write(24, Slidebar_value2);
    DmxSimple.write(25, Slidebar_value3);
     //scanner
    DmxSimple.write(19, scanner_position);
  }
}

void Fade() {
  //SPOTS
    //red
    DmxSimple.write(1, 255);
    DmxSimple.write(7, 255);
    DmxSimple.write(13, 255);
    //green
    DmxSimple.write(2, 40);
    DmxSimple.write(8, 40);
    DmxSimple.write(14, 40);
    //blue
    DmxSimple.write(3, 0);
    DmxSimple.write(9, 0);
    DmxSimple.write(15, 0);
    //strobe and speed
    DmxSimple.write(5, 50);
    DmxSimple.write(11, 50);
    DmxSimple.write(17, 50);
    //modi
    DmxSimple.write(6, 96);
    DmxSimple.write(12, 96);
    DmxSimple.write(18, 96);
    //scanner
    DmxSimple.write(19, 50);
    DmxSimple.write(20, 30);
    DmxSimple.write(21, 30);
    DmxSimple.write(22, 0);
    //dimbar
    DmxSimple.write(23, 255);
    DmxSimple.write(24, 0);
    DmxSimple.write(25, 50);
  }

void Spot_Step_RGB() {
  if (millis() - Delay >= 400) {
    Delay = millis();
    
    //SPOTS
    if(Spot_1 == 255) {
      Spot_1 = 0;
      Spot_2 = 255;
      Spot_3 = 0;
    } else if (Spot_2 == 255) {
      Spot_1 = 0;
      Spot_2 = 0;
      Spot_3 = 255;
    } else if (Spot_3 == 255) {
      Spot_1 = 255;
      Spot_2 = 0;
      Spot_3 = 0;
    }
    //red
    DmxSimple.write(1, Spot_1);
    DmxSimple.write(7, 0);
    DmxSimple.write(13, 0);
    //green
    DmxSimple.write(2, 0);
    DmxSimple.write(8, Spot_2);
    DmxSimple.write(14, 0);
    //blue
    DmxSimple.write(3, 0);
    DmxSimple.write(9, 0);
    DmxSimple.write(15, Spot_3);
    //speed and strobe
    DmxSimple.write(5,0);
    DmxSimple.write(11,0);
    DmxSimple.write(17,0);
    //modi
    DmxSimple.write(6,0);
    DmxSimple.write(12,0);
    DmxSimple.write(18,0);
    
if (scanner_position == 0) {
      scanner_position = 125;
      Slidebar_value1 = 255;
      Slidebar_value2 = 0;
      Slidebar_value3 = 0;
      
    } else if (scanner_position == 125) {
      scanner_position = 255;
      Slidebar_value1 = 0;
      Slidebar_value2 = 255;
      Slidebar_value3 = 0;
      
    } else if (scanner_position == 255) {
      scanner_position = 0;
      Slidebar_value1 = 0;
      Slidebar_value2 = 255;
      Slidebar_value3 = 0;
      
    }
    //dimbar
    DmxSimple.write(23, Slidebar_value1);
    DmxSimple.write(24, Slidebar_value2);
    DmxSimple.write(25, Slidebar_value3);
     //scanner
    DmxSimple.write(19, scanner_position);
  }
}

void Strobe_White() {
  //red
  DmxSimple.write(1, 255);
  DmxSimple.write(7, 255);
  DmxSimple.write(13, 255);
  //green
  DmxSimple.write(2, 255);
  DmxSimple.write(8, 255);
  DmxSimple.write(14, 255);
  //blue
  DmxSimple.write(3, 255);
  DmxSimple.write(9, 255);
  DmxSimple.write(15, 255);
  //strobe and speed
  DmxSimple.write(5, 255);
  DmxSimple.write(11, 255);
  DmxSimple.write(17, 255);
  //modi
  DmxSimple.write(6, 0);
  DmxSimple.write(12, 0);
  DmxSimple.write(18, 0);
  //scanner
    DmxSimple.write(19, 125);
    DmxSimple.write(20, 125);
    DmxSimple.write(21, 50);
    DmxSimple.write(22, 249);
  //dimbar
  if (millis() - Delay >= 100) {
    Delay = millis();
    if (Slidebar_value == 0) {
      Slidebar_value = 255;
    } else {
      Slidebar_value = 0;
    }
    DmxSimple.write(23, Slidebar_value);
    DmxSimple.write(24, Slidebar_value);
    DmxSimple.write(25, Slidebar_value);
  }
}

void Strobe_Red() {
  //red
  DmxSimple.write(1, 255);
  DmxSimple.write(7, 255);
  DmxSimple.write(13, 255);
  //green
  DmxSimple.write(2, 0);
  DmxSimple.write(8, 0);
  DmxSimple.write(14, 0);
  //blue
  DmxSimple.write(3, 0);
  DmxSimple.write(9, 0);
  DmxSimple.write(15, 0);
  //strobe and speed
  DmxSimple.write(5, 255);
  DmxSimple.write(11, 255);
  DmxSimple.write(17, 255);
  //modi
  DmxSimple.write(6, 0);
  DmxSimple.write(12, 0);
  DmxSimple.write(18, 0);
    //scanner
    DmxSimple.write(19, 125);
    DmxSimple.write(20, 80);
    DmxSimple.write(21, 20);
    DmxSimple.write(22, 249);
  //dimbar
  if (millis() - Delay >= 100) {
    Delay = millis();
    if (Slidebar_value == 0) {
      Slidebar_value3 = 255;
    } else {
      Slidebar_value3 = 0;
    }
    DmxSimple.write(23, 0);
    DmxSimple.write(24, 0);
    DmxSimple.write(25, Slidebar_value3);
  }
}

void Spot_Step_White() {
  if (millis() - Delay >= 400) {
    Delay = millis();
    
    //SPOTS
    if(Spot_1 == 255) {
      Spot_1 = 0;
      Spot_2 = 255;
      Spot_3 = 0;
    } else if (Spot_2 == 255) {
      Spot_1 = 0;
      Spot_2 = 0;
      Spot_3 = 255;
    } else if (Spot_3 == 255) {
      Spot_1 = 255;
      Spot_2 = 0;
      Spot_3 = 0;
    }
    //red
    DmxSimple.write(1, Spot_1);
    DmxSimple.write(7, Spot_1);
    DmxSimple.write(13, Spot_1);
    //green
    DmxSimple.write(2, Spot_2);
    DmxSimple.write(8, Spot_2);
    DmxSimple.write(14, Spot_2);
    //blue
    DmxSimple.write(3, Spot_3);
    DmxSimple.write(9, Spot_3);
    DmxSimple.write(15, Spot_3);
    //speed and strobe
    DmxSimple.write(5,0);
    DmxSimple.write(11,0);
    DmxSimple.write(17,0);
    //modi
    DmxSimple.write(6,0);
    DmxSimple.write(12,0);
    DmxSimple.write(18,0);
    
if (scanner_position == 0) {
      scanner_position = 125;
      Slidebar_value1 = 255;
      Slidebar_value2 = 0;
      Slidebar_value3 = 0;
      
    } else if (scanner_position == 125) {
      scanner_position = 255;
      Slidebar_value1 = 0;
      Slidebar_value2 = 255;
      Slidebar_value3 = 0;
      
    } else if (scanner_position == 255) {
      scanner_position = 0;
      Slidebar_value1 = 0;
      Slidebar_value2 = 255;
      Slidebar_value3 = 0;
      
    }
    //dimbar
    DmxSimple.write(23, Slidebar_value1);
    DmxSimple.write(24, Slidebar_value2);
    DmxSimple.write(25, Slidebar_value3);
     //scanner
    DmxSimple.write(19, scanner_position);
  }
}

void Standalone() {
  //SPOTS
  DmxSimple.write(6, 224);
  DmxSimple.write(12, 224);
  DmxSimple.write(18, 224);
  //scanner
  DmxSimple.write(22,250);
  
if (millis() - Delay >= 500) {
    Delay = millis();
   //dimbar
      if (Slidebar_value1 == 255) {
        Slidebar_value1 = 0;
        Slidebar_value2 = 255;
        Slidebar_value3 = 0;
      } else if (Slidebar_value2 == 255) {
        Slidebar_value1 = 0;
        Slidebar_value2 = 0;
        Slidebar_value3 = 255;
      } else if(Slidebar_value3 == 255) {
        Slidebar_value1 = 255;
        Slidebar_value2 = 0;
        Slidebar_value3 = 0;
      } else {
        Slidebar_value1 = 255;
        Slidebar_value2 = 0;
        Slidebar_value3 = 0;
      }
}
      DmxSimple.write(23, Slidebar_value1);
      DmxSimple.write(24, Slidebar_value2);
      DmxSimple.write(25, Slidebar_value3);
}
