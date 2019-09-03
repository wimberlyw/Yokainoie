
const unsigned char menuIcons [][32]PROGMEM = {
// 'food', 8x8px
  {0x00, 0x0c, 0x00, 0x0e, 0x01, 0xcf, 0x07, 0xff, 0x0f, 0xf8, 0x1f, 0xf8, 0x1f, 0xfc, 0x3f, 0xfc, 
 0x3f, 0xfc, 0x3f, 0xfc, 0x1f, 0xf8, 0x1f, 0xf0, 0xff, 0xe0, 0xf3, 0xc0, 0x70, 0x00, 0x30, 0x00,},

//play
  {0x01, 0x80, 0x02, 0x00, 0x03, 0x00, 0x01, 0xc0, 0x00, 0x40, 0x00, 0xc0, 0xff, 0xff, 0x80, 0x01, 
  0x80, 0x01, 0x88, 0x31, 0x88, 0x31, 0xbe, 0x0d, 0x88, 0x0d, 0x89, 0x41, 0x80, 0x01, 0xff, 0xff,},

//mood
  {0x04, 0x00, 0x0c, 0x24, 0x0a, 0x7e, 0x0a, 0x7e, 0x0a, 0x3c, 0x0a, 0x18, 0x0a, 0x00, 0x1a, 0x3f, 
  0xf1, 0x20, 0x01, 0x20, 0x01, 0x20, 0x01, 0x20, 0x01, 0x40, 0x01, 0x40, 0x00, 0xc0, 0x00, 0x80,},

//clean
  {0x20, 0x00, 0x20, 0x00, 0x70, 0x00, 0xfc, 0x00, 0x70, 0x10, 0x20, 0x10, 0x20, 0x38, 0x00, 0xfe,
   0x00, 0x38, 0x00, 0x10, 0x00, 0x10, 0x04, 0x00, 0x0e, 0x00, 0x1f, 0x00, 0x0e, 0x00, 0x04, 0x00},

//love
{
0x00, 0x00, 0x00, 0x00, 0x3c, 0x3c, 0x62, 0x46, 0x5d, 0xba, 0x5e, 0x7a, 0x5f, 0xfa, 0x2f, 0xf4,
0x17, 0xe8, 0x0b, 0xd0, 0x05, 0xa0, 0x02, 0x40, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,},
};


// 'TamaSlime_Sleep1', 44x44px
const unsigned char slimeSleep [2][264] PROGMEM =

{
  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 
  0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 
  0x87, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 
  0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 
  0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x80, 
  0x00, 0x00, 0x00, 0x01, 0xf0, 0xf8, 0x00, 0x00, 0x00, 0x07, 0x0f, 0x0e, 0x00, 0x00, 0x00, 0x1c, 
  0xff, 0xf3, 0x80, 0x00, 0x00, 0x33, 0xff, 0xfc, 0xc0, 0x00, 0x00, 0xef, 0xff, 0xff, 0x70, 0x00, 
  0x01, 0x9f, 0xff, 0xff, 0x98, 0x00, 0x03, 0x78, 0x3f, 0xc1, 0xec, 0x00, 0x06, 0xe7, 0xbf, 0xde, 
  0x76, 0x00, 0x05, 0xff, 0xff, 0xff, 0xfa, 0x00, 0x0d, 0xff, 0xff, 0xff, 0xfb, 0x00, 0x0b, 0xff, 
  0xd9, 0xbf, 0xfd, 0x00, 0x1b, 0xcf, 0xe6, 0x7f, 0x3d, 0x80, 0x17, 0xff, 0xff, 0xff, 0xfe, 0x80, 
  0x17, 0xff, 0xff, 0xff, 0xfe, 0x80, 0x17, 0xff, 0xff, 0xff, 0xfe, 0x80, 0x1b, 0xff, 0xff, 0xff, 
  0xfd, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,},

// 'TamaSlime_Sleep2', 44x44px

  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0xf0, 0x00, 0x00, 
  0x00, 0x03, 0xe0, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 
  0x00, 0x00, 0x00, 0x00, 0x01, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xf0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 
  0x00, 0x00, 0x00, 0x01, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x1f, 0x80, 0x00, 0x00, 0x00, 0x01, 0xf0, 0xf8, 0x00, 0x00, 0x00, 0x07, 
  0x0f, 0x0e, 0x00, 0x00, 0x00, 0x1c, 0xff, 0xf3, 0x80, 0x00, 0x00, 0x33, 0xff, 0xfc, 0xc0, 0x00, 
  0x00, 0xef, 0xff, 0xff, 0x70, 0x00, 0x01, 0x9f, 0xff, 0xff, 0x98, 0x00, 0x03, 0x78, 0x3f, 0xc1, 
  0xec, 0x00, 0x06, 0xe7, 0xbf, 0xde, 0x76, 0x00, 0x05, 0xff, 0xff, 0xff, 0xfa, 0x00, 0x0d, 0xff, 
  0xff, 0xff, 0xfb, 0x00, 0x0b, 0xe7, 0xd9, 0xbe, 0x7d, 0x00, 0x1b, 0xff, 0xe0, 0x7f, 0xfd, 0x80, 
  0x17, 0xff, 0xff, 0xff, 0xfe, 0x80, 0x17, 0xff, 0xff, 0xff, 0xfe, 0x80, 0x1b, 0xff, 0xff, 0xff, 
  0xfd, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,},
};


// 'TamaSlime_deathsdoor1', 44x44px
const unsigned char slimeDying [2][264] PROGMEM = {
  
  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x02, 0x00, 0x00, 0x00, 0x00, 0x38, 0x07, 0x00, 0x00, 0x00, 
  0x00, 0x3b, 0xf7, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x05, 0x28, 0x00, 
  0x00, 0x00, 0x00, 0x05, 0x28, 0x00, 0x00, 0x00, 0x00, 0x04, 0x08, 0x00, 0x00, 0x00, 0x00, 0x03, 
  0x30, 0x00, 0x00, 0x00, 0x00, 0x01, 0x20, 0x00, 0x00, 0x00, 0x00, 0x03, 0xf0, 0x00, 0x00, 0x00, 
  0x00, 0x06, 0x18, 0x00, 0x00, 0x00, 0x00, 0x1c, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x1c, 0x0e, 0x00, 
  0x00, 0x00, 0x00, 0x08, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x07, 
  0x80, 0x1e, 0x00, 0x00, 0x00, 0x1c, 0x7f, 0xe3, 0x80, 0x00, 0x00, 0xe3, 0xff, 0xfc, 0x70, 0x00, 
  0x01, 0x9f, 0xff, 0xff, 0x98, 0x00, 0x03, 0x7f, 0xff, 0xff, 0xec, 0x00, 0x06, 0xfc, 0x3f, 0xc3, 
  0xf6, 0x00, 0x05, 0xb3, 0xff, 0xfc, 0xfa, 0x00, 0x0d, 0x5f, 0xff, 0xff, 0xfb, 0x00, 0x0b, 0x5f, 
  0xfa, 0xff, 0xfd, 0x00, 0x1b, 0x1f, 0xf5, 0x7f, 0xfd, 0x80, 0x17, 0xff, 0xff, 0xff, 0xfe, 0x80, 
  0x17, 0xff, 0xff, 0xff, 0xfe, 0x80, 0x17, 0xff, 0xff, 0xff, 0xfe, 0x80, 0x1b, 0xff, 0xff, 0xff, 
  0xfd, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,},

// 'TamaSlime_deathsdoor2', 44x44px

  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x04, 0x00, 0x80, 0x00, 0x00, 0x00, 0x0e, 0x01, 0xc0, 0x00, 0x00, 0x00, 0x0e, 0xfd, 0xc0, 
  0x00, 0x00, 0x00, 0x03, 0x87, 0x00, 0x00, 0x00, 0x00, 0x01, 0x4a, 0x00, 0x00, 0x00, 0x00, 0x01, 
  0x4a, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0xcc, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x48, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x01, 0x86, 0x00, 
  0x00, 0x00, 0x00, 0x07, 0x03, 0x80, 0x00, 0x00, 0x00, 0x07, 0x03, 0x80, 0x00, 0x00, 0x00, 0x02, 
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xf8, 0x00, 0x00, 0x00, 0x07, 0x80, 0x1e, 0x00, 0x00, 0x00, 0x1c, 0x7f, 0xe3, 0x80, 0x00, 
  0x00, 0xe3, 0xff, 0xfc, 0x70, 0x00, 0x01, 0x9f, 0xff, 0xff, 0x98, 0x00, 0x03, 0x7f, 0xff, 0xff, 
  0xec, 0x00, 0x06, 0xfc, 0x3f, 0xc3, 0xf6, 0x00, 0x05, 0xf3, 0xff, 0xfc, 0xfa, 0x00, 0x0d, 0xbf, 
  0xff, 0xff, 0xfb, 0x00, 0x0b, 0x5f, 0xfa, 0xff, 0xfd, 0x00, 0x1b, 0x5f, 0xf5, 0x7f, 0xfd, 0x80, 
  0x17, 0x1f, 0xff, 0xff, 0xfe, 0x80, 0x17, 0xff, 0xff, 0xff, 0xfe, 0x80, 0x1b, 0xff, 0xff, 0xff, 
  0xfd, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,},
};


// 'TamaSlime_Sick1', 44x44px
const unsigned char slimeSick [2][264] PROGMEM = {
  
  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1c, 0x30, 0x00, 0x00, 
  0x00, 0x00, 0x02, 0x60, 0x00, 0x00, 0x00, 0x00, 0x01, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 
  0x00, 0x00, 0x00, 0x00, 0x03, 0xd0, 0x00, 0x00, 0x00, 0x00, 0x06, 0xf8, 0x00, 0x00, 0x00, 0x00, 
  0x04, 0x74, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1d, 0x80, 0x00, 
  0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 
  0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x07, 
  0x80, 0x1e, 0x00, 0x00, 0x00, 0x1c, 0x7f, 0xe3, 0x80, 0x00, 0x00, 0xe3, 0xff, 0xfc, 0x70, 0x00, 
  0x01, 0x9f, 0xff, 0xff, 0x98, 0x00, 0x03, 0x7f, 0xff, 0xff, 0xec, 0x00, 0x06, 0xfc, 0x3f, 0xc3, 
  0xf6, 0x00, 0x05, 0xb3, 0xff, 0xfc, 0xfa, 0x00, 0x0d, 0x5f, 0xff, 0xff, 0xfb, 0x00, 0x0b, 0x5f, 
  0xfa, 0xff, 0xfd, 0x00, 0x1b, 0x1f, 0xf5, 0x7f, 0xfd, 0x80, 0x17, 0xff, 0xff, 0xff, 0xfe, 0x80, 
  0x17, 0xff, 0xff, 0xff, 0xfe, 0x80, 0x17, 0xff, 0xff, 0xff, 0xfe, 0x80, 0x1b, 0xff, 0xff, 0xff, 
  0xfd, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,},

// 'TamaSlime_Sick2', 44x44px
{
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x0c, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x98, 0x00, 0x00, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf4, 0x00, 0x00, 0x00, 0x00, 0x01, 0xbe, 0x00, 0x00, 
  0x00, 0x00, 0x01, 0x1d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x80, 0x00, 0x00, 0x00, 0x00, 0x07, 
  0x60, 0x00, 0x00, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x01, 0xc0, 0x00, 0x00, 0x00, 
  0x00, 0x01, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xf8, 0x00, 0x00, 0x00, 0x07, 0x80, 0x1e, 0x00, 0x00, 0x00, 0x1c, 0x7f, 0xe3, 0x80, 0x00, 
  0x00, 0xe3, 0xff, 0xfc, 0x70, 0x00, 0x01, 0x9f, 0xff, 0xff, 0x98, 0x00, 0x03, 0x7f, 0xff, 0xff, 
  0xec, 0x00, 0x06, 0xfc, 0x3f, 0xc3, 0xf6, 0x00, 0x05, 0xf3, 0xff, 0xfc, 0xfa, 0x00, 0x0d, 0xbf, 
  0xff, 0xff, 0xfb, 0x00, 0x0b, 0x5f, 0xfa, 0xff, 0xfd, 0x00, 0x1b, 0x5f, 0xf5, 0x7f, 0xfd, 0x80, 
  0x17, 0x1f, 0xff, 0xff, 0xfe, 0x80, 0x17, 0xff, 0xff, 0xff, 0xfe, 0x80, 0x1b, 0xff, 0xff, 0xff, 
  0xfd, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,},
};

const unsigned char slimeHungry [2] [264] PROGMEM = {
  // 'TamaSlime_hungry1', 44x44px
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x22, 0x0c, 0x00, 0x00, 
  0x00, 0x00, 0x62, 0x10, 0xf8, 0x00, 0x00, 0x00, 0x4f, 0xe3, 0xf0, 0x00, 0x00, 0x0e, 0x3b, 0x3f, 
  0xc0, 0x00, 0x00, 0x1b, 0xe1, 0x23, 0x80, 0x00, 0x00, 0x11, 0x91, 0x23, 0x80, 0x00, 0x00, 0x1b, 
  0x98, 0x93, 0x00, 0x00, 0x00, 0x1f, 0xc6, 0x13, 0x00, 0x00, 0x00, 0x1f, 0xe0, 0x02, 0x00, 0x00, 
  0x00, 0x1f, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x1f, 0x80, 0x00, 0x00, 0x00, 0x01, 0xf0, 0xf8, 0x00, 0x00, 0x00, 0x07, 0x0f, 0x0e, 
  0x00, 0x00, 0x00, 0x1c, 0xff, 0xf3, 0x80, 0x00, 0x00, 0x33, 0xff, 0xfc, 0xc0, 0x00, 0x00, 0xef, 
  0xff, 0xff, 0x70, 0x00, 0x01, 0x9f, 0xff, 0xff, 0x98, 0x00, 0x03, 0x7e, 0x1f, 0x87, 0xec, 0x00, 
  0x06, 0xf9, 0x3f, 0xc9, 0xf6, 0x00, 0x05, 0xff, 0xff, 0xff, 0xfa, 0x00, 0x0d, 0xff, 0xff, 0xff, 
  0xfb, 0x00, 0x0b, 0xff, 0xe0, 0xff, 0xfd, 0x00, 0x17, 0xe7, 0xdf, 0x0e, 0x7e, 0x80, 0x17, 0xff, 
  0xdf, 0xef, 0xfe, 0x80, 0x37, 0xff, 0xc0, 0x4f, 0xfe, 0xc0, 0x2f, 0xff, 0xff, 0x5f, 0xff, 0x40, 
  0x2f, 0xff, 0xff, 0x5f, 0xff, 0x40, 0x2f, 0xff, 0xff, 0x1f, 0xff, 0x40, 0x37, 0xff, 0xff, 0xff, 
  0xfe, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,},

// 'TamaSlime_hungry2', 44x44px
{
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 
  0x00, 0x00, 0x02, 0x20, 0xc0, 0x00, 0x00, 0x00, 0x06, 0x21, 0x0f, 0x80, 0x00, 0x00, 0x04, 0xfe, 
  0x3f, 0x00, 0x00, 0x00, 0xe3, 0xb3, 0xfc, 0x00, 0x00, 0x01, 0xbe, 0x12, 0x38, 0x00, 0x00, 0x01, 
  0x19, 0x12, 0x38, 0x00, 0x00, 0x01, 0xb9, 0x89, 0x30, 0x00, 0x00, 0x01, 0xfc, 0x61, 0x30, 0x00, 
  0x00, 0x01, 0xfe, 0x00, 0x20, 0x00, 0x00, 0x01, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x80, 0x00, 0x00, 0x00, 0x01, 0xf0, 0xf8, 
  0x00, 0x00, 0x00, 0x07, 0x0f, 0x0e, 0x00, 0x00, 0x00, 0x1c, 0xff, 0xf3, 0x80, 0x00, 0x00, 0x33, 
  0xff, 0xfc, 0xc0, 0x00, 0x00, 0xef, 0xff, 0xff, 0x70, 0x00, 0x01, 0x9f, 0xff, 0xff, 0x98, 0x00, 
  0x03, 0x7e, 0x1f, 0x87, 0xec, 0x00, 0x06, 0xf9, 0xff, 0xf9, 0xf6, 0x00, 0x05, 0xff, 0xff, 0xff, 
  0xfa, 0x00, 0x0d, 0xff, 0xff, 0xff, 0xfb, 0x00, 0x0b, 0xff, 0xe0, 0xff, 0xfd, 0x00, 0x1b, 0xe7, 
  0xdf, 0x0e, 0x7d, 0x80, 0x17, 0xff, 0xdf, 0xef, 0xfe, 0x80, 0x17, 0xff, 0xc0, 0x4f, 0xfe, 0x80, 
  0x17, 0xff, 0xff, 0x1f, 0xfe, 0x80, 0x17, 0xff, 0xff, 0xff, 0xfe, 0x80, 0x1b, 0xff, 0xff, 0xff, 
  0xfd, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,},
};
const unsigned char slimeAngry [2][264] PROGMEM = {
  // 'TamaSlime_Angry1', 44x44px

  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7b, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x3b, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 
  0x00, 0x00, 0x1f, 0x80, 0x08, 0x00, 0x00, 0x01, 0xf0, 0xf8, 0x00, 0x00, 0x00, 0x07, 0x0f, 0x0e, 
  0x00, 0x00, 0x00, 0x1c, 0xff, 0xf3, 0x80, 0x00, 0x00, 0x33, 0xff, 0xfc, 0xc0, 0x00, 0x00, 0xef, 
  0x7f, 0xef, 0x70, 0x00, 0x01, 0x9f, 0x3f, 0xcf, 0x98, 0x00, 0x03, 0x71, 0xff, 0xf8, 0xec, 0x00, 
  0x06, 0xf4, 0xff, 0xf2, 0xf6, 0x00, 0x05, 0xf6, 0x7f, 0xe6, 0xfa, 0x00, 0x0d, 0xf7, 0x7f, 0xee, 
  0xfb, 0x00, 0x0b, 0xf0, 0x7f, 0xe0, 0xfd, 0x00, 0x1b, 0xff, 0xff, 0xff, 0xfd, 0x80, 0x17, 0xff, 
  0xff, 0xff, 0xfe, 0x80, 0x37, 0xff, 0xf0, 0xff, 0xfe, 0xc0, 0x2f, 0xff, 0xe6, 0x7f, 0xff, 0x40, 
  0x2f, 0xff, 0xff, 0xff, 0xff, 0x40, 0x2f, 0xff, 0xff, 0xff, 0xff, 0x40, 0x37, 0xff, 0xff, 0xff, 
  0xfe, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,},

// 'TamaSlime_Angry2', 44x44px

  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1d, 0xe0, 0x00, 0x00, 0x1f, 0x80, 0x00, 0x00, 
  0x00, 0x01, 0xf0, 0xf8, 0x3d, 0xc0, 0x00, 0x07, 0x0f, 0x0e, 0x05, 0x00, 0x00, 0x1c, 0xff, 0xf3, 
  0x85, 0x00, 0x00, 0x33, 0xff, 0xfc, 0xc1, 0x00, 0x00, 0xef, 0x7f, 0xef, 0x70, 0x00, 0x01, 0x9f, 
  0x3f, 0xcf, 0x98, 0x00, 0x03, 0x71, 0xff, 0xf8, 0xec, 0x00, 0x06, 0xf4, 0xff, 0xf2, 0xf6, 0x00, 
  0x05, 0xf6, 0x7f, 0xe6, 0xfa, 0x00, 0x0d, 0xf7, 0x7f, 0xee, 0xfb, 0x00, 0x0b, 0xf0, 0x7f, 0xe0, 
  0xfd, 0x00, 0x0b, 0xff, 0xff, 0xff, 0xfd, 0x00, 0x1b, 0xff, 0xff, 0xff, 0xfd, 0x80, 0x17, 0xff, 
  0xf0, 0xff, 0xfe, 0x80, 0x17, 0xff, 0xe0, 0x7f, 0xfe, 0x80, 0x17, 0xff, 0xe0, 0x7f, 0xfe, 0x80, 
  0x17, 0xff, 0xe6, 0x7f, 0xfe, 0x80, 0x17, 0xff, 0xff, 0xff, 0xfe, 0x80, 0x0b, 0xff, 0xff, 0xff, 
  0xfd, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,},
};


const unsigned char slimeIdle [2][484] PROGMEM = {
  //Idle 0
  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x03, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0x00, 0xff, 0xc0, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0x00, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x3f, 0x00, 0xff, 0x00, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x00, 0xff, 0x00, 
  0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xf0, 0xff, 0xff, 0xff, 0x0f, 0xc0, 0x00, 0x00, 0x00, 
  0x00, 0x03, 0xf0, 0xff, 0xff, 0xff, 0x0f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x0f, 0xff, 0xff, 
  0xff, 0xf0, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x0f, 0xff, 0xff, 0xff, 0xf0, 0xf0, 0x00, 0x00, 
  0x00, 0x00, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3f, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0x3f, 0x00, 0x00, 0x00, 0x03, 0xc3, 0xc0, 0xff, 0xff, 0xff, 0x03, 0xc3, 0xc0, 
  0x00, 0x00, 0x03, 0xc3, 0xc0, 0xff, 0xff, 0xff, 0x03, 0xc3, 0xc0, 0x00, 0x00, 0x0f, 0x3f, 0x0c, 
  0x3f, 0xff, 0xfc, 0x30, 0xfc, 0xf0, 0x00, 0x00, 0x0f, 0x3f, 0x0c, 0x3f, 0xff, 0xfc, 0x30, 0xfc, 
  0xf0, 0x00, 0x00, 0x3c, 0xff, 0x3f, 0x3f, 0xff, 0xfc, 0xfc, 0xff, 0x3c, 0x00, 0x00, 0x3c, 0xff, 
  0x3f, 0x3f, 0xff, 0xfc, 0xfc, 0xff, 0x3c, 0x00, 0x00, 0x33, 0xff, 0x3f, 0x3f, 0xff, 0xfc, 0xfc, 
  0xff, 0xcc, 0x00, 0x00, 0x33, 0xff, 0x3f, 0x3f, 0xff, 0xfc, 0xfc, 0xff, 0xcc, 0x00, 0x00, 0xf3, 
  0xff, 0x3c, 0x3f, 0xff, 0xfc, 0x3c, 0xff, 0xcf, 0x00, 0x00, 0xf3, 0xff, 0x3c, 0x3f, 0xff, 0xfc, 
  0x3c, 0xff, 0xcf, 0x00, 0x00, 0xcf, 0xff, 0x00, 0xfc, 0xf3, 0xcf, 0x00, 0xff, 0xf3, 0x00, 0x00, 
  0xcf, 0xff, 0x00, 0xfc, 0xf3, 0xcf, 0x00, 0xff, 0xf3, 0x00, 0x03, 0xcf, 0xff, 0xff, 0xff, 0x0c, 
  0x3f, 0xff, 0xff, 0xf3, 0xc0, 0x03, 0xcf, 0xff, 0xff, 0xff, 0x0c, 0x3f, 0xff, 0xff, 0xf3, 0xc0, 
  0x03, 0x3f, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0x0f, 0xfc, 0xc0, 0x03, 0x3f, 0xf0, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0x0f, 0xfc, 0xc0, 0x03, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 
  0xc0, 0x03, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xc0, 0x03, 0x3f, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xc0, 0x03, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xfc, 0xc0, 0x03, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xc0, 0x03, 0x3f, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xc0, 0x03, 0xcf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xf3, 0xc0, 0x03, 0xcf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf3, 0xc0, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00,},

//Idle1
 {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x03, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0xc0, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0x00, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x03, 0xff, 0x00, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x00, 0xff, 0x00, 0xfc, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x00, 0xff, 0x00, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x03, 0xf0, 0xff, 0xff, 0xff, 0x0f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x03, 0xf0, 0xff, 0xff, 0xff, 
  0x0f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x0f, 0xff, 0xff, 0xff, 0xf0, 0xf0, 0x00, 0x00, 0x00, 
  0x00, 0x0f, 0x0f, 0xff, 0xff, 0xff, 0xf0, 0xf0, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0x3f, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3f, 0x00, 0x00, 
  0x00, 0x03, 0xc3, 0xc0, 0xff, 0xff, 0xff, 0x03, 0xc3, 0xc0, 0x00, 0x00, 0x03, 0xc3, 0xc0, 0xff, 
  0xff, 0xff, 0x03, 0xc3, 0xc0, 0x00, 0x00, 0x0f, 0x3f, 0x0c, 0x3f, 0xff, 0xfc, 0x30, 0xfc, 0xf0, 
  0x00, 0x00, 0x0f, 0x3f, 0x0c, 0x3f, 0xff, 0xfc, 0x30, 0xfc, 0xf0, 0x00, 0x00, 0x3c, 0xff, 0x3f, 
  0x3f, 0xff, 0xfc, 0xfc, 0xff, 0x3c, 0x00, 0x00, 0x3c, 0xff, 0x3f, 0x3f, 0xff, 0xfc, 0xfc, 0xff, 
  0x3c, 0x00, 0x00, 0x33, 0xff, 0x3f, 0x3f, 0xff, 0xfc, 0xfc, 0xff, 0xcc, 0x00, 0x00, 0x33, 0xff, 
  0x3f, 0x3f, 0xff, 0xfc, 0xfc, 0xff, 0xcc, 0x00, 0x00, 0xf3, 0xff, 0x3c, 0x3f, 0xff, 0xfc, 0x3c, 
  0xff, 0xcf, 0x00, 0x00, 0xf3, 0xff, 0x3c, 0x3f, 0xff, 0xfc, 0x3c, 0xff, 0xcf, 0x00, 0x00, 0xcf, 
  0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xf3, 0x00, 0x00, 0xcf, 0xff, 0x00, 0xff, 0xff, 0xff, 
  0x00, 0xff, 0xf3, 0x00, 0x03, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xc0, 0x03, 
  0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xc0, 0x03, 0x3f, 0xff, 0xff, 0xfc, 0xf3, 
  0xcf, 0xff, 0xff, 0xfc, 0xc0, 0x03, 0x3f, 0xff, 0xff, 0xfc, 0xf3, 0xcf, 0xff, 0xff, 0xfc, 0xc0, 
  0x0f, 0x3f, 0xc3, 0xff, 0xff, 0x0c, 0x3f, 0xff, 0xc3, 0xfc, 0xf0, 0x0f, 0x3f, 0xc3, 0xff, 0xff, 
  0x0c, 0x3f, 0xff, 0xc3, 0xfc, 0xf0, 0x0c, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x30, 0x0c, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x30, 0x0c, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x30, 0x0c, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0x30, 0x0c, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x30, 0x0c, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x30, 0x0f, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xfc, 0xf0, 0x0f, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xf0, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00,},
      }; 