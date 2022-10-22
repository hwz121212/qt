#if 0
//
// Generated by Microsoft (R) HLSL Shader Compiler 10.1
//
//
//
// Input signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// SV_Position              0   xyzw        0      POS   float   xyzw
// TEXCOORD                 0   x           1     NONE    uint   x   
// LAYER                    0    y          1     NONE    uint    y  
//
//
// Output signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// SV_Position              0   xyzw        0      POS   float   xyzw
// TEXCOORD                 0   x           1     NONE    uint   x   
// SV_RenderTargetArrayIndex     0    y          1  RTINDEX    uint    y  
//
gs_4_0
dcl_input_siv v[1][0].xyzw, position
dcl_input v[1][1].x
dcl_input v[1][1].y
dcl_inputprimitive point 
dcl_outputtopology pointlist 
dcl_output_siv o0.xyzw, position
dcl_output o1.x
dcl_output_siv o1.y, rendertarget_array_index
dcl_maxout 1
mov o0.xyzw, v[0][0].xyzw
mov o1.x, v[0][1].x
mov o1.y, v[0][1].y
emit 
ret 
// Approximately 5 instruction slots used
#endif

const BYTE g_GS_BufferToTexture[] =
{
     68,  88,  66,  67, 181, 104, 
     45,  14,  26, 142, 216, 235, 
     63, 167, 110,   6,   1, 170, 
    134, 100,   1,   0,   0,   0, 
    200,   2,   0,   0,   5,   0, 
      0,   0,  52,   0,   0,   0, 
    128,   0,   0,   0, 244,   0, 
      0,   0, 124,   1,   0,   0, 
     76,   2,   0,   0,  82,  68, 
     69,  70,  68,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
     28,   0,   0,   0,   0,   4, 
     83,  71,   0,   1,   0,   0, 
     28,   0,   0,   0,  77, 105, 
     99, 114, 111, 115, 111, 102, 
    116,  32,  40,  82,  41,  32, 
     72,  76,  83,  76,  32,  83, 
    104,  97, 100, 101, 114,  32, 
     67, 111, 109, 112, 105, 108, 
    101, 114,  32,  49,  48,  46, 
     49,   0,  73,  83,  71,  78, 
    108,   0,   0,   0,   3,   0, 
      0,   0,   8,   0,   0,   0, 
     80,   0,   0,   0,   0,   0, 
      0,   0,   1,   0,   0,   0, 
      3,   0,   0,   0,   0,   0, 
      0,   0,  15,  15,   0,   0, 
     92,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      1,   0,   0,   0,   1,   0, 
      0,   0,   1,   1,   0,   0, 
    101,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      1,   0,   0,   0,   1,   0, 
      0,   0,   2,   2,   0,   0, 
     83,  86,  95,  80, 111, 115, 
    105, 116, 105, 111, 110,   0, 
     84,  69,  88,  67,  79,  79, 
     82,  68,   0,  76,  65,  89, 
     69,  82,   0, 171,  79,  83, 
     71,  78, 128,   0,   0,   0, 
      3,   0,   0,   0,   8,   0, 
      0,   0,  80,   0,   0,   0, 
      0,   0,   0,   0,   1,   0, 
      0,   0,   3,   0,   0,   0, 
      0,   0,   0,   0,  15,   0, 
      0,   0,  92,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   1,   0,   0,   0, 
      1,   0,   0,   0,   1,  14, 
      0,   0, 101,   0,   0,   0, 
      0,   0,   0,   0,   4,   0, 
      0,   0,   1,   0,   0,   0, 
      1,   0,   0,   0,   2,  13, 
      0,   0,  83,  86,  95,  80, 
    111, 115, 105, 116, 105, 111, 
    110,   0,  84,  69,  88,  67, 
     79,  79,  82,  68,   0,  83, 
     86,  95,  82, 101, 110, 100, 
    101, 114,  84,  97, 114, 103, 
    101, 116,  65, 114, 114,  97, 
    121,  73, 110, 100, 101, 120, 
      0, 171,  83,  72,  68,  82, 
    200,   0,   0,   0,  64,   0, 
      2,   0,  50,   0,   0,   0, 
     97,   0,   0,   5, 242,  16, 
     32,   0,   1,   0,   0,   0, 
      0,   0,   0,   0,   1,   0, 
      0,   0,  95,   0,   0,   4, 
     18,  16,  32,   0,   1,   0, 
      0,   0,   1,   0,   0,   0, 
     95,   0,   0,   4,  34,  16, 
     32,   0,   1,   0,   0,   0, 
      1,   0,   0,   0,  93,   8, 
      0,   1,  92,   8,   0,   1, 
    103,   0,   0,   4, 242,  32, 
     16,   0,   0,   0,   0,   0, 
      1,   0,   0,   0, 101,   0, 
      0,   3,  18,  32,  16,   0, 
      1,   0,   0,   0, 103,   0, 
      0,   4,  34,  32,  16,   0, 
      1,   0,   0,   0,   4,   0, 
      0,   0,  94,   0,   0,   2, 
      1,   0,   0,   0,  54,   0, 
      0,   6, 242,  32,  16,   0, 
      0,   0,   0,   0,  70,  30, 
     32,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,  54,   0, 
      0,   6,  18,  32,  16,   0, 
      1,   0,   0,   0,  10,  16, 
     32,   0,   0,   0,   0,   0, 
      1,   0,   0,   0,  54,   0, 
      0,   6,  34,  32,  16,   0, 
      1,   0,   0,   0,  26,  16, 
     32,   0,   0,   0,   0,   0, 
      1,   0,   0,   0,  19,   0, 
      0,   1,  62,   0,   0,   1, 
     83,  84,  65,  84, 116,   0, 
      0,   0,   5,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   6,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   1,   0, 
      0,   0,   1,   0,   0,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0
};
