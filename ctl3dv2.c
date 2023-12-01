#include "ctl3dv2.h"



// Title:  3d control dll
// Format: New Executable (NE) Windows
// CRC:    00000000
// 
// Program Entry Point (CS:IP):   0003:0ee6
// Initial Stack Pointer (SS:SP): 0000:0000
// Auto Data Segment Index:       0004
// Initial Heap Size:             0400
// Initial Stack Size:            0000
// Minimum Code Swap Size:        0000
// 
// Linker Version:  5.60
// Target OS:       Windows
// Windows Version: 3.0
// 
// Program Flags:     01
//         Single Data
// Application Flags: 83
//         Windows P.M. API
//         Library Module
// Other Flags:       08
// 

undefined2 __stdcall16far WEP(void)

{
                    // Segment:    1
                    // Offset:     00000440
                    // Length:     0021
                    // Min Alloc:  0021
                    // Flags:      0c40
                    //     Code
                    //     Fixed
                    //     Preload
                    //     Impure (Non-shareable)
                    // 
  return 1;
}



undefined4 __cdecl16near FUN_1008_00c8(int param_1)

{
  uint uVar1;
  undefined2 uVar2;
  undefined2 unaff_CS;
  undefined4 uVar3;
  
  if (param_1 == 0) {
    uVar1 = 0;
    uVar2 = 0;
  }
  else {
    GETPROP(unaff_CS,DAT_1018_028c,0);
    uVar3 = FUN_1008_4100(param_1);
    uVar2 = (undefined2)((ulong)uVar3 >> 0x10);
    uVar1 = GETPROP(0x1030,DAT_1018_028e,0);
    uVar1 = uVar1 | (uint)uVar3;
  }
  return CONCAT22(uVar2,uVar1);
}



long __cdecl16near FUN_1008_0128(undefined2 param_1,int param_2)

{
  undefined2 uVar1;
  undefined2 unaff_CS;
  long lVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 local_8;
  undefined2 local_6;
  
  lVar2 = FUN_1008_00c8(param_1);
  if (lVar2 == 0) {
    if (param_2 == 6) {
      local_8 = DAT_1018_0518;
      local_6 = DAT_1018_051a;
    }
    else {
      local_8 = *(undefined2 *)(param_2 * 0x18 + 0x48c);
      local_6 = *(undefined2 *)(param_2 * 0x18 + 0x48e);
    }
    lVar2 = CONCAT22(local_6,local_8);
    uVar1 = param_1;
    SETPROP(unaff_CS,local_8,DAT_1018_028e,0);
    uVar4 = 0;
    uVar3 = DAT_1018_028c;
    uVar1 = FUN_1008_410c(DAT_1018_028c,0,param_1,uVar1);
    SETPROP(0x1030,uVar1,uVar3,uVar4);
  }
  return lVar2;
}



void __cdecl16near FUN_1008_01cc(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 unaff_CS;
  long lVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  
  iVar1 = GETPROP(unaff_CS,DAT_1018_0284,0);
  if ((((iVar1 == 0) && (iVar1 = GETPROP(0x1030,DAT_1018_028a,0), iVar1 == 0)) &&
      (uVar2 = param_1, iVar1 = GETPROP(0x1030,DAT_1018_028e,0), iVar1 == 0)) &&
     (((uVar3 = param_1, iVar1 = GETPROP(0x1030,DAT_1018_0288,0), iVar1 == 0 &&
       (uVar6 = param_1, iVar1 = GETPROP(0x1030,DAT_1018_028c,0), iVar1 == 0)) &&
      ((uVar5 = param_1, iVar1 = GETPROP(0x1030,DAT_1018_0286,0), iVar1 == 0 &&
       (lVar4 = FUN_1008_00c8(param_1,uVar5,uVar6,uVar3,uVar2), lVar4 == 0)))))) {
    uVar6 = param_1;
    uVar2 = SETWINDOWLONG(0x1030,param_2,param_3,0xfffc);
    uVar3 = param_1;
    SETPROP(0x1030,uVar2,DAT_1018_028e,0);
    uVar5 = 0;
    uVar2 = DAT_1018_028c;
    uVar3 = FUN_1008_410c(DAT_1018_028c,0,param_1,uVar3,uVar6);
    SETPROP(0x1030,uVar3,uVar2,uVar5);
  }
  return;
}



undefined4 __stdcall16far
CALLWNDPROCFILTERPROC(int param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  uint uVar1;
  int unaff_BP;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 uVar2;
  undefined2 uVar3;
  int local_12;
  int local_10;
  undefined2 local_e;
  undefined4 local_c;
  undefined2 local_4;
  int iStack_2;
  
  iStack_2 = unaff_BP + 1;
  local_4 = 0x1018;
  local_10 = param_1;
  local_e = param_2;
  uVar2 = DAT_1018_026c;
  local_c = CALLNEXTHOOKEX(unaff_CS,param_1,param_2,param_3,param_4,DAT_1018_026a);
  if (*(int *)(local_10 + 8) != DAT_1018_0272) {
    return local_c;
  }
  uVar3 = 0x338;
  UNHOOKWINDOWSHOOKEX(0x1030,DAT_1018_026a,DAT_1018_026c,uVar2);
  if (0x35e < DAT_1018_0296) {
    uVar3 = *(undefined2 *)(local_10 + 8);
    uVar1 = GETWINDOWLONG(0x1030,0xfff0);
    if ((uVar1 & 4) != 0) {
      local_12 = 0;
      goto LAB_1008_0376;
    }
  }
  local_12 = 1;
LAB_1008_0376:
  uVar2 = *(undefined2 *)(local_10 + 8);
  SENDMESSAGE(0x1030,&local_12,unaff_SS,0,0x11f0);
  if (local_12 != 0) {
    FUN_1008_01cc(*(undefined2 *)(local_10 + 8),DAT_1018_026e,DAT_1018_0270,uVar2,uVar3);
  }
  DAT_1018_0272 = 0;
  DAT_1018_0270 = 0;
  DAT_1018_026e = 0;
  DAT_1018_026c = 0;
  DAT_1018_026a = 0;
  return local_c;
}



void __cdecl16near FUN_1008_03e2(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 uVar1;
  undefined2 unaff_CS;
  undefined4 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  DAT_1018_026e = param_2;
  DAT_1018_0270 = param_3;
  DAT_1018_0272 = param_1;
  uVar4 = 0x2dc;
  uVar3 = DAT_1018_0294;
  uVar1 = GETCURRENTTASK();
  uVar2 = SETWINDOWSHOOKEX(0x1030,uVar1,unaff_CS,uVar3,uVar4);
  DAT_1018_026a = (int)uVar2;
  DAT_1018_026c = (int)((ulong)uVar2 >> 0x10);
  return;
}



undefined4 __cdecl16near
FUN_1008_0426(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5,undefined2 param_6)

{
  undefined2 uVar1;
  undefined2 unaff_CS;
  undefined4 uVar2;
  
  uVar1 = FUN_1008_0128(param_1,param_6);
  uVar2 = CALLWINDOWPROC(unaff_CS,param_4,param_5,param_3,param_2,param_1,uVar1);
  REMOVEPROP(0x1030,DAT_1018_028e,0);
  REMOVEPROP(0x1030,DAT_1018_028c,0);
  REMOVEPROP(0x1030,DAT_1018_0290,0);
  return uVar2;
}



void __cdecl16near FUN_1008_04a0(undefined2 param_1,int *param_2)

{
  int *piVar1;
  undefined2 uVar2;
  undefined2 unaff_CS;
  
  uVar2 = (undefined2)((ulong)param_2 >> 0x10);
  piVar1 = (int *)param_2;
  PATBLT(unaff_CS,0x21,0xf0,piVar1[3] - piVar1[1],piVar1[2] - *param_2,piVar1[1],*param_2);
  return;
}



void __cdecl16near
FUN_1008_04ea(undefined2 param_1,int *param_2,int param_4,int param_5,uint param_6)

{
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  int local_10;
  int local_e;
  int local_c;
  int local_a;
  undefined4 local_8;
  
  local_8 = SETBKCOLOR(unaff_CS,*(undefined2 *)(param_4 * 4 + 0x29a),
                       *(undefined2 *)(param_4 * 4 + 0x29c));
  local_10 = *param_2;
  local_e = ((int *)param_2)[1];
  local_c = ((int *)param_2)[2];
  local_a = local_e + 1;
  if ((param_6 & 2) != 0) {
    EXTTEXTOUT(0x1030,0,0,0,0,0,&local_10,unaff_SS,2,0,0);
  }
  local_a = ((int *)param_2)[3];
  local_c = local_10 + 1;
  if ((param_6 & 1) != 0) {
    EXTTEXTOUT(0x1030,0,0,0,0,0,&local_10,unaff_SS,2,0,0);
  }
  if (param_4 != param_5) {
    SETBKCOLOR(0x1030,*(undefined2 *)(param_5 * 4 + 0x29a),*(undefined2 *)(param_5 * 4 + 0x29c));
  }
  local_c = ((int *)param_2)[2];
  local_10 = local_c + -1;
  if ((param_6 & 4) != 0) {
    EXTTEXTOUT(0x1030,0,0,0,0,0,&local_10,unaff_SS,2,0,0);
  }
  if ((param_6 & 8) != 0) {
    local_10 = *param_2;
    local_e = local_a + -1;
    if ((param_6 & 0x1000) != 0) {
      local_c = local_c + -2;
    }
    EXTTEXTOUT(0x1030,0,0,0,0,0,&local_10,unaff_SS,2,0,0);
  }
  SETBKCOLOR(0x1030,local_8);
  return;
}



void __cdecl16near FUN_1008_06a8(undefined2 param_1,int *param_2,undefined2 param_3)

{
  int local_c;
  int local_a;
  int local_8;
  int local_6;
  
  local_c = *param_2;
  local_a = param_2[1];
  local_8 = param_2[2];
  local_6 = param_2[3];
  FUN_1008_04ea(param_1,&local_c);
  local_c = local_c + -1;
  local_a = local_a + -1;
  local_8 = local_8 + 1;
  local_6 = local_6 + 1;
  FUN_1008_04ea(param_1,&local_c);
  return;
}



void __cdecl16near FUN_1008_0718(void)

{
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  
  GETCLIENTRECT(unaff_CS,&local_c,unaff_SS);
  INTERSECTCLIPRECT(0x1030,local_6,local_8,local_a,local_c);
  return;
}



void __cdecl16near FUN_1008_074a(undefined2 param_1,char *param_2,undefined2 *param_3,int *param_4)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  char *pcVar4;
  undefined2 uVar5;
  int iVar6;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  char *local_108;
  char local_104 [258];
  
  _local_108 = (char *)CONCAT22(unaff_SS,local_104);
  while (pcVar4 = _local_108, *param_2 != '\0') {
    if (*param_2 == '&') {
      param_2 = (char *)CONCAT22(param_2._2_2_,(char *)param_2 + 1);
      cVar1 = *param_2;
joined_r0x1008078d:
      if (cVar1 == '\0') break;
LAB_1008_081f:
      pcVar3 = param_2;
      param_2 = (char *)CONCAT22(param_2._2_2_,(char *)param_2 + 1);
      uVar2 = (ulong)_local_108 >> 0x10;
      _local_108 = (char *)CONCAT22((int)uVar2,local_108 + 1);
      *pcVar4 = *pcVar3;
    }
    else {
      if (DAT_1018_0531 == '\0') goto LAB_1008_081f;
      if (*param_2 == DAT_1018_0530) {
        param_2 = (char *)CONCAT22(param_2._2_2_,(char *)param_2 + 1);
        cVar1 = *param_2;
        goto joined_r0x1008078d;
      }
      if ((*param_2 != '\x1e') && (*param_2 != '\x1f')) goto LAB_1008_081f;
      param_2._0_2_ = (char *)param_2 + 1;
      if (*param_2 == '\0') break;
      param_2 = (char *)ANSINEXT(unaff_CS,(char *)param_2);
      unaff_CS = 0x1030;
    }
  }
  *_local_108 = '\0';
  uVar5 = GETTEXTEXTENT(unaff_CS,(int)local_108 - (int)local_104,local_104,unaff_SS);
  *param_3 = uVar5;
  if (((DAT_1018_0296 < 0x30a) || (iVar6 = GETSYSTEMMETRICS(0x1030,0x2a,param_1), iVar6 == 0)) &&
     ((iVar6 = ISDBCSLEADBYTE(0x1030,0xa1), iVar6 == 0 ||
      (iVar6 = ISDBCSLEADBYTE(0x1030,0xa0), iVar6 != 0)))) {
    iVar6 = FUN_1008_410c();
    *param_4 = iVar6;
  }
  else {
    iVar6 = FUN_1008_410c();
    *param_4 = iVar6 + 1;
  }
  return;
}



undefined2 __stdcall16far CTL3DAUTOSUBCLASSEX(uint param_1,undefined2 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int local_a;
  
  if ((0x309 < DAT_1018_0296) && (DAT_1018_0280 != 0)) {
    if ((param_1 & 2) != 0) {
      param_1 = param_1 & 0xfffc;
    }
    if (DAT_1018_02c6 != 0x20) {
      iVar2 = GETCURRENTTASK();
      for (local_a = 0; local_a < DAT_1018_02c6; local_a = local_a + 1) {
        if (*(int *)(local_a * 0xe + 0x2ca) == iVar2) {
          piVar1 = (int *)(local_a * 0xe + 0x2d0);
          *piVar1 = *piVar1 + 1;
          return 1;
        }
      }
      iVar3 = iVar2;
      if (param_3 == 0) {
        iVar3 = 0;
      }
      lVar4 = (*DAT_1018_0524)(0x1030,iVar3,DAT_1018_0294,0x1980,0x1008,5);
      if (lVar4 != 0) {
        *(int *)(DAT_1018_02c6 * 0xe + 0x2c8) = param_3;
        *(int *)(DAT_1018_02c6 * 0xe + 0x2ca) = iVar2;
        iVar3 = DAT_1018_02c6 * 0xe;
        *(undefined2 *)(iVar3 + 0x2cc) = (int)lVar4;
        *(undefined2 *)(iVar3 + 0x2ce) = (int)((ulong)lVar4 >> 0x10);
        *(undefined2 *)(DAT_1018_02c6 * 0xe + 0x2d0) = 1;
        iVar3 = DAT_1018_02c6 * 0xe;
        *(uint *)(iVar3 + 0x2d2) = param_1;
        *(undefined2 *)(iVar3 + 0x2d4) = param_2;
        DAT_1018_02c2 = iVar2;
        DAT_1018_02c4 = DAT_1018_02c6;
        DAT_1018_02c6 = DAT_1018_02c6 + 1;
        return 1;
      }
    }
  }
  return 0;
}



undefined2 __cdecl16far CTL3DISAUTOSUBCLASS(void)

{
  int iVar1;
  int local_a;
  
  iVar1 = GETCURRENTTASK();
  local_a = 0;
  while( true ) {
    if (DAT_1018_02c6 <= local_a) {
      return 0;
    }
    if (*(int *)(local_a * 0xe + 0x2ca) == iVar1) break;
    local_a = local_a + 1;
  }
  return 1;
}



undefined2 __cdecl16far CTL3DUNAUTOSUBCLASS(void)

{
  int *piVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  int local_a;
  
  iVar4 = GETCURRENTTASK();
  for (local_a = 0; local_a < DAT_1018_02c6; local_a = local_a + 1) {
    if ((*(int *)(local_a * 0xe + 0x2ca) == iVar4) &&
       (piVar1 = (int *)(local_a * 0xe + 0x2d0), *piVar1 = *piVar1 + -1,
       *(int *)(local_a * 0xe + 0x2d0) == 0)) {
      (*DAT_1018_052c)(0x1030,*(undefined2 *)(local_a * 0xe + 0x2cc),
                       *(undefined2 *)(local_a * 0xe + 0x2ce));
      DAT_1018_02c6 = DAT_1018_02c6 + -1;
      for (; local_a < DAT_1018_02c6; local_a = local_a + 1) {
        puVar6 = (undefined2 *)((local_a + 1) * 0xe + 0x2c8);
        puVar7 = (undefined2 *)(local_a * 0xe + 0x2c8);
        for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
          puVar3 = puVar7;
          puVar7 = puVar7 + 1;
          puVar2 = puVar6;
          puVar6 = puVar6 + 1;
          *puVar3 = *puVar2;
        }
      }
    }
  }
  return 1;
}



undefined2 __stdcall16far CTL3DSUBCLASSCTL(undefined2 param_1)

{
  undefined2 uVar1;
  
  if (DAT_1018_0280 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_1008_1f44(param_1,0xffff,0,0);
  }
  return uVar1;
}



undefined2 __stdcall16far CTL3DUNSUBCLASSCTL(undefined2 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_CS;
  code *pcVar3;
  undefined4 uVar4;
  int local_10;
  int local_a;
  
  if (DAT_1018_0280 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_1;
    pcVar3 = (code *)GETWINDOWLONG(unaff_CS,0xfffc);
    for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
      if (pcVar3 == (code *)CONCAT22(*(undefined2 *)(local_10 * 0x18 + 0x48a),
                                     *(code **)(local_10 * 0x18 + 0x488))) {
        uVar4 = FUN_1008_0128(param_1,local_10,uVar2);
        REMOVEPROP(0x1030,DAT_1018_028e,0);
        REMOVEPROP(0x1030,DAT_1018_028c,0);
        SETWINDOWLONG(0x1030,uVar4,0xfffc);
        pcVar3 = (code *)0x0;
        local_10 = 0x10;
      }
    }
    if (local_10 == 6) {
      if (pcVar3 == CTL3DDLGPROC) {
        uVar4 = FUN_1008_0128(param_1,6,uVar2);
        REMOVEPROP(0x1030,DAT_1018_028e,0);
        REMOVEPROP(0x1030,DAT_1018_028c,0);
        SETWINDOWLONG(0x1030,uVar4,0xfffc);
      }
      else {
        iVar1 = GETPROP(0x1030,DAT_1018_028a,0);
        if (((iVar1 != 0) || (iVar1 = GETPROP(0x1030,DAT_1018_028e,0), iVar1 != 0)) ||
           (iVar1 = GETPROP(0x1030,DAT_1018_028c,0), iVar1 != 0)) {
          SETPROP(0x1030,1,DAT_1018_0290,0);
        }
      }
    }
    local_a = GETWINDOW(0x1030,5);
    while (local_a != 0) {
      CTL3DUNSUBCLASSCTL(local_a);
      local_a = GETWINDOW(0x1008,2);
    }
    uVar2 = 1;
  }
  return uVar2;
}



undefined2 __stdcall16far CTL3DSUBCLASSCTLEX(int param_1,undefined2 param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 unaff_CS;
  long lVar3;
  undefined4 uVar4;
  
  if (DAT_1018_0280 == 0) {
    uVar1 = 0;
  }
  else if ((param_1 < 0) || (6 < param_1)) {
    uVar1 = 0;
  }
  else {
    lVar3 = FUN_1008_00c8(param_2);
    if (lVar3 == 0) {
      uVar1 = param_2;
      uVar4 = GETWINDOWLONG(unaff_CS,0xfff0);
      uVar1 = GETPARENT(0x1030,param_2,uVar1);
      iVar2 = (**(code **)(param_1 * 0x1c + 0x28))(param_2,uVar4,0xffff,0,uVar1);
      if (iVar2 == 1) {
        FUN_1008_01cc(param_2,*(undefined2 *)(param_1 * 0x18 + 0x488),
                      *(undefined2 *)(param_1 * 0x18 + 0x48a));
      }
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



undefined2 __stdcall16far CTL3DSUBCLASSDLG(undefined2 param_1,undefined2 param_2)

{
  undefined2 uVar1;
  undefined2 unaff_CS;
  int local_a;
  
  if (DAT_1018_0280 == 0) {
    uVar1 = 0;
  }
  else {
    local_a = GETWINDOW(unaff_CS,5);
    while (local_a != 0) {
      FUN_1008_1f44(local_a,param_1,0,0,param_2);
      local_a = GETWINDOW(0x1030,2);
    }
    uVar1 = 1;
  }
  return uVar1;
}



void __cdecl16near FUN_1008_0f00(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  long lVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  int local_6 [2];
  
  lVar2 = FUN_1008_00c8(param_1);
  if (lVar2 == 0) {
    FUN_1008_1f44(param_1,param_2,0,param_3);
  }
  else {
    iVar1 = GETPROP(unaff_CS,DAT_1018_0290,0);
    if (iVar1 == 0) {
      local_6[0] = 0x29a;
      uVar5 = 0x1944;
      uVar6 = param_1;
      SENDMESSAGE(0x1030,local_6,unaff_SS,0,0x1944);
      if (local_6[0] == 0x29a) {
        uVar5 = param_1;
        SENDMESSAGE(0x1030,local_6,unaff_SS,0,0x1943);
      }
      if (local_6[0] == 0x29a) {
        uVar4 = param_1;
        REMOVEPROP(0x1030,DAT_1018_028e,0);
        uVar3 = param_1;
        REMOVEPROP(0x1030,DAT_1018_028c,0);
        FUN_1008_1f44(param_1,param_2,0,param_3,uVar3,uVar4,uVar5,uVar6);
      }
    }
  }
  return;
}



undefined2 __stdcall16far FUN_1008_0fd4(undefined2 param_1,undefined2 param_2)

{
  undefined2 uVar1;
  undefined2 unaff_CS;
  int iVar2;
  int local_c;
  int local_a;
  
  if (DAT_1018_0280 == 0) {
    uVar1 = 0;
  }
  else {
    local_a = GETWINDOW(unaff_CS,5);
    while (local_a != 0) {
      FUN_1008_0f00(local_a,param_1,0,param_2);
      iVar2 = local_a;
      local_c = GETWINDOW(0x1030,5);
      while (local_c != 0) {
        FUN_1008_0f00(local_c,param_1,local_a,iVar2);
        local_c = GETWINDOW(0x1030,2);
      }
      local_a = GETWINDOW(0x1030,2);
    }
    uVar1 = 1;
  }
  return uVar1;
}



undefined2 __stdcall16far
CTL3DSUBCLASSDLGEX(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 uVar1;
  undefined2 unaff_CS;
  int local_a;
  
  if (DAT_1018_0280 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_3;
    local_a = GETWINDOW(unaff_CS,5);
    while (local_a != 0) {
      FUN_1008_1f44(local_a,param_1,0,0,uVar1);
      local_a = GETWINDOW(0x1030,2);
    }
    FUN_1008_01cc(param_3,0x1576,0x1008);
    uVar1 = 1;
  }
  return uVar1;
}



// WARNING: Removing unreachable block (ram,0x1008119a)

undefined2 __stdcall16far CTL3DCTLCOLOR(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  uint uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_CS;
  
  if ((DAT_1018_0280 != 0) && (uVar1 = FUN_1008_410c(), 1 < uVar1)) {
    iVar2 = FUN_1008_410c();
    if (iVar2 != 2) {
LAB_1008_11a0:
      SETTEXTCOLOR(unaff_CS,DAT_1018_02a6,DAT_1018_02a8);
      SETBKCOLOR(0x1030,DAT_1018_029e,DAT_1018_02a0);
      return DAT_1018_02bc;
    }
    if (DAT_1018_0296 < 0x35f) {
      iVar2 = GETWINDOW(unaff_CS,5);
      unaff_CS = 0x1030;
      if (iVar2 != 0) {
        unaff_CS = 0x1030;
        uVar1 = GETWINDOWLONG(0x1030,0xfff0);
        if ((uVar1 & 3) != 3) goto LAB_1008_11a0;
      }
    }
  }
  iVar2 = GETPARENT(unaff_CS,param_1);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = DEFWINDOWPROC(0x1030,param_1,param_2,param_3,0x19);
  }
  return uVar3;
}



void __stdcall16far CTL3DCTLCOLOREX(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  CTL3DCTLCOLOR(param_1,param_2,param_3);
  return;
}



void __stdcall16far
CTL3DDLGFRAMEPAINT(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
                  undefined2 param_5)

{
  FUN_1008_126a(1,param_1,param_2,param_3,param_4,param_5);
  return;
}



// WARNING: Removing unreachable block (ram,0x1008137f)

undefined4 __stdcall16far
FUN_1008_126a(int param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5,undefined2 param_6)

{
  int iVar1;
  undefined2 uVar2;
  uint uVar3;
  int unaff_BP;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 uVar4;
  int local_36;
  int local_34;
  int iStack_32;
  int local_30;
  int local_2e;
  int local_2c;
  int local_2a;
  int local_28;
  uint local_26;
  undefined2 local_24;
  undefined2 local_22;
  int local_20;
  int local_1e;
  int local_1c;
  int local_1a;
  int local_18;
  undefined4 local_16;
  undefined4 local_12;
  undefined4 local_e;
  int local_a [3];
  undefined2 local_4;
  int iStack_2;
  
  iStack_2 = unaff_BP + 1;
  local_4 = 0x1018;
  if (param_1 == 0) {
    local_16 = FUN_1008_0128(param_6,6);
  }
  else {
    local_16 = 0;
  }
  uVar2 = (undefined2)((ulong)local_16 >> 0x10);
  if (local_16 == 0) {
    uVar2 = param_6;
    local_12 = DEFWINDOWPROC(unaff_CS,param_2,param_3,param_4,param_5);
  }
  else {
    local_12 = CALLWINDOWPROC(unaff_CS,param_2,param_3,param_4,param_5,param_6,(int)local_16);
  }
  if (DAT_1018_0280 != 0) {
    iVar1 = ISICONIC(0x1030,param_6,uVar2);
    if (iVar1 == 0) {
      local_a[0] = 1;
      uVar4 = param_6;
      SENDMESSAGE(0x1030,local_a,unaff_SS,0,0x11ef);
      uVar2 = param_6;
      local_e = GETWINDOWLONG(0x1030,0xfff0);
      uVar3 = (uint)((ulong)local_e >> 0x10);
      if (((local_a[0] != 0) && (((uint)local_e & 0x80) == 0x80)) && ((uVar3 & 0x1040) == 0x1040)) {
        local_26 = (uint)((uVar3 & 0xc0) == 0xc0);
        local_18 = DAT_1018_051e - (uint)(local_26 != 0);
        local_24 = GETWINDOWDC(0x1030,param_6,uVar2,uVar4);
        GETWINDOWRECT(0x1030,&local_2e,unaff_SS);
        local_2a = local_2a - local_2e;
        local_28 = local_28 - local_2c;
        local_2c = 0;
        local_2e = 0;
        FUN_1008_04ea(local_24,&local_2e);
        INFLATERECT(0x1030,0xffff,0xffff,&local_2e);
        FUN_1008_04ea(local_24,&local_2e);
        INFLATERECT(0x1030,0xffff,0xffff,&local_2e);
        local_22 = SELECTOBJECT(0x1030,DAT_1018_02bc);
        local_20 = local_2e;
        local_1e = local_2c;
        local_1a = local_28;
        local_1c = local_2e + DAT_1018_051c;
        FUN_1008_04a0(local_24,&local_20);
        OFFSETRECT(0x1030,0,(local_2a - local_2e) - DAT_1018_051c,&local_20);
        FUN_1008_04a0(local_24,&local_20);
        local_20 = local_2e + DAT_1018_051c;
        local_1c = local_2a - DAT_1018_051c;
        local_1a = local_1e + local_18;
        FUN_1008_04a0(local_24,&local_20);
        if (local_26 != 0) {
          local_36 = local_20;
          iStack_32 = local_1c;
          local_34 = local_1e + local_18;
          local_30 = local_34 + DAT_1018_0520;
          FUN_1008_04ea(local_24,&local_36);
        }
        local_1e = local_1e + ((local_28 - local_2c) - DAT_1018_051c);
        local_1a = local_1e + DAT_1018_051e;
        FUN_1008_04a0(local_24,&local_20);
        SELECTOBJECT(0x1030,local_22);
        RELEASEDC(0x1030,local_24);
      }
    }
  }
  return local_12;
}



// WARNING: Removing unreachable block (ram,0x100816e7)

int __stdcall16far
CTL3DDLGPROC(undefined2 *param_1,undefined2 param_2,undefined2 param_3,int param_4,
            undefined2 param_5)

{
  int iVar1;
  uint uVar2;
  undefined2 uVar3;
  int unaff_BP;
  undefined2 unaff_CS;
  undefined2 uVar4;
  undefined2 unaff_SS;
  undefined2 uVar5;
  int local_28;
  undefined4 local_26;
  undefined4 local_22;
  int local_1e;
  undefined4 local_1c;
  undefined local_18 [20];
  undefined2 local_4;
  int iStack_2;
  
  iStack_2 = unaff_BP + 1;
  local_4 = 0x1018;
  if (param_4 == 0x82) {
    iVar1 = FUN_1008_0426(param_5,0x82,param_3,param_1,param_2,6);
    return iVar1;
  }
  uVar4 = 0x1030;
  uVar3 = param_5;
  iVar1 = GETPROP(unaff_CS,DAT_1018_0290,0);
  if (iVar1 != 0) {
    uVar3 = FUN_1008_0128(param_5,6,uVar3);
    iVar1 = CALLWINDOWPROC(0x1030,param_1,param_2,param_3,param_4,param_5,uVar3);
    return iVar1;
  }
  if (param_4 == 0xc) {
LAB_1008_16ff:
    if ((DAT_1018_0296 < 0x35f) && (iVar1 = ISICONIC(0x1030,param_5), iVar1 == 0)) {
      iVar1 = FUN_1008_126a(0,param_1,param_2,param_3,param_4,param_5);
      return iVar1;
    }
    uVar3 = FUN_1008_0128(param_5,6);
    iVar1 = CALLWINDOWPROC(0x1030,param_1,param_2,param_3,param_4,param_5,uVar3);
    return iVar1;
  }
  if (param_4 == 0x19) {
    uVar3 = param_5;
    GETCLASSNAME(0x1030,0x10,local_18,unaff_SS);
    uVar4 = 0x1018;
    iVar1 = LSTRCMP(0x1030,local_18,unaff_SS,0x10);
    if (iVar1 == 0) {
      uVar3 = param_5;
      local_1c = GETWINDOWLONG(0x1030,4);
      uVar5 = (undefined2)((ulong)local_1c >> 0x10);
      if (local_1c == 0) {
        uVar4 = 0x1008;
        local_1e = CTL3DCTLCOLOREX(param_1,param_2,param_3,0x19);
      }
      else {
        uVar4 = 0x1030;
        local_1e = CALLWINDOWPROC(0x1030,param_1,param_2,param_3,0x19,param_5,(int)local_1c);
        if ((local_1e == 0) || (local_1e == 1)) {
          uVar3 = FUN_1008_0128(param_5,6,uVar5,uVar3);
          uVar4 = 0x1030;
          local_1e = CALLWINDOWPROC(0x1030,param_1,param_2,param_3,0x11f1,param_5,uVar3);
          if ((local_1e == 0) || (local_1e == 1)) {
            uVar4 = 0x1008;
            local_1e = CTL3DCTLCOLOREX(param_1,param_2,param_3,0x19);
          }
        }
      }
    }
    else {
      uVar3 = FUN_1008_0128(param_5,6,uVar4,uVar3);
      uVar4 = 0x1030;
      local_1e = CALLWINDOWPROC(0x1030,param_1,param_2,param_3,0x11f1,param_5,uVar3);
      if ((local_1e == 0) || (local_1e == 1)) {
        uVar4 = 0x1008;
        local_1e = CTL3DCTLCOLOREX(param_1,param_2,param_3,0x19);
      }
    }
    if (local_1e != 0) {
      return local_1e;
    }
LAB_1008_18e6:
    uVar3 = FUN_1008_0128(param_5,6);
    iVar1 = CALLWINDOWPROC(uVar4,param_1,param_2,param_3,param_4,param_5,uVar3);
    return iVar1;
  }
  if ((param_4 == 0x85) || (param_4 == 0x86)) goto LAB_1008_16ff;
  if (param_4 != 0x110) {
    if ((param_4 == 0x1943) || (param_4 == 0x1944)) {
      *param_1 = 1;
      return 0x3ee;
    }
    goto LAB_1008_18e6;
  }
  local_26 = FUN_1008_0128(param_5,6,uVar3);
  if (0x35e < DAT_1018_0296) {
    uVar2 = GETWINDOWLONG(0x1030,0xfff0);
    if ((uVar2 & 4) != 0) {
      local_28 = 0;
      goto LAB_1008_1658;
    }
  }
  local_28 = 1;
LAB_1008_1658:
  SENDMESSAGE(0x1030,&local_28,unaff_SS,0,0x11f0);
  if (local_28 == 0) {
    CTL3DUNSUBCLASSCTL(param_5);
    local_22._0_2_ =
         CALLWINDOWPROC(0x1008,param_1,param_2,param_3,0x110,param_5,(undefined2)local_26);
  }
  else {
    local_22 = CALLWINDOWPROC(0x1030,param_1,param_2,param_3,0x110,param_5,(undefined2)local_26);
    if (0x35e < DAT_1018_0296) {
      uVar2 = GETWINDOWLONG(0x1030,0xfff0);
      if ((uVar2 & 4) != 0) {
        return (int)local_22;
      }
    }
    FUN_1008_0fd4(0xffff,param_5);
  }
  return (int)local_22;
}



undefined2 __cdecl16near FUN_1008_1918(undefined2 param_1)

{
  uint uVar1;
  undefined2 uVar2;
  undefined2 unaff_CS;
  long lVar3;
  
  lVar3 = FUN_1008_00c8(param_1);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else if ((DAT_1018_0296 < 0x35f) || (uVar1 = GETWINDOWLONG(unaff_CS,0xfff0), (uVar1 & 4) == 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// WARNING: Removing unreachable block (ram,0x10081afa)

void __stdcall16far CTL3DHOOK(int *param_1,undefined2 param_2,undefined2 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int unaff_BP;
  undefined2 uVar4;
  undefined2 unaff_SS;
  undefined2 uVar5;
  int local_12;
  undefined4 local_10;
  int local_c;
  int local_a;
  undefined2 local_4;
  int iStack_2;
  
  iStack_2 = unaff_BP + 1;
  local_4 = 0x1018;
  uVar5 = 0x199a;
  local_c = GETCURRENTTASK();
  if (local_c != DAT_1018_02c2) {
    for (local_a = 0; local_a < DAT_1018_02c6; local_a = local_a + 1) {
      if (*(int *)(local_a * 0xe + 0x2ca) == local_c) {
        DAT_1018_02c4 = local_a;
        DAT_1018_02c2 = local_c;
        break;
      }
    }
    if (local_a == DAT_1018_02c6) {
      CALLNEXTHOOKEX(0x1030,param_1,param_2,param_3,param_4,0);
      return;
    }
  }
  local_a = DAT_1018_02c4;
  if (param_4 == 3) {
    iVar3 = *param_1;
    iVar1 = param_1[1];
    local_10 = CONCAT22(iVar1,iVar3);
    if ((*(int *)(iVar3 + 0x1a) == -0x7ffe) && (*(int *)(iVar3 + 0x1c) == 0)) {
      if (DAT_1018_0298 == 0x20) {
        if ((DAT_1018_0296 < 0x35f) || (uVar2 = GETWINDOWLONG(0x1030,0xfff0), (uVar2 & 4) == 0)) {
          local_12 = 1;
        }
        else {
          local_12 = 0;
        }
        uVar5 = param_3;
        SENDMESSAGE(0x1030,&local_12,unaff_SS,0,0x11f0);
        if (local_12 != 0) {
          FUN_1008_01cc(param_3,0x1576,0x1008,uVar5);
        }
      }
      else {
        uVar5 = 0x1008;
        FUN_1008_03e2(param_3,0x1576,0x1008);
      }
    }
    else if ((*(uint *)(DAT_1018_02c4 * 0xe + 0x2d2) & 1) != 0) {
      uVar5 = *(undefined2 *)(iVar3 + 8);
      iVar3 = FUN_1008_1918(uVar5);
      if (iVar3 == 0) {
        uVar4 = (undefined2)((ulong)local_10 >> 0x10);
        if ((*(int *)((int)local_10 + 8) == 0) || (DAT_1018_0298 == 0x18)) goto LAB_1008_1b5f;
        uVar5 = *(undefined2 *)((int)local_10 + 8);
        uVar4 = GETPARENT(0x1030,uVar5);
        iVar3 = FUN_1008_1918(uVar4);
        if (iVar3 == 0) goto LAB_1008_1b5f;
      }
      FUN_1008_1f44(param_3,0xffff,1,*(undefined2 *)((int)local_10 + 8));
    }
  }
LAB_1008_1b5f:
  (*DAT_1018_0528)(0x1030,param_1,param_2,param_3,param_4,*(undefined2 *)(local_a * 0xe + 0x2cc),
                   *(undefined2 *)(local_a * 0xe + 0x2ce),uVar5);
  return;
}



// WARNING: Removing unreachable block (ram,0x10081be1)
// WARNING: Removing unreachable block (ram,0x10081bc3)
// WARNING: Removing unreachable block (ram,0x10081bdc)
// WARNING: Removing unreachable block (ram,0x10081bcb)
// WARNING: Removing unreachable block (ram,0x10081bbe)

bool __cdecl16near FUN_1008_1b8e(undefined2 param_1_00,uint param_1)

{
  bool bVar1;
  
  if (DAT_1018_0296 < 0x35f) {
    bVar1 = (param_1 & 0xffdf) < 10;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



undefined2 __cdecl16near FUN_1008_1bfe(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  int param_1;
  undefined local_14 [18];
  
  if ((DAT_1018_0296 < 0x35f) || (param_1 == 0)) {
    uVar2 = 1;
  }
  else {
    GETCLASSNAME(unaff_CS,0x10,local_14,unaff_SS);
    iVar1 = LSTRCMP(0x1030,100,0x1030,local_14);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}



undefined2 __cdecl16near FUN_1008_1c68(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  int param_1;
  undefined local_14 [18];
  
  if ((DAT_1018_0296 < 0x35f) || (param_1 == 0)) {
    uVar2 = 1;
  }
  else {
    GETCLASSNAME(unaff_CS,0x10,local_14,unaff_SS);
    iVar1 = LSTRCMP(0x1030,100,0x1030,local_14);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}



undefined2 __cdecl16near FUN_1008_1cd2(void)

{
  uint uVar1;
  undefined2 uVar2;
  undefined2 unaff_CS;
  int param_1;
  
  if (DAT_1018_0296 < 0x35f) {
    if (param_1 == 1) {
      uVar1 = GETWINDOWLONG(unaff_CS,0xfff0);
      if (((uVar1 & 3) == 2) || ((uVar1 & 3) == 3)) {
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// WARNING: Removing unreachable block (ram,0x10081d8d)
// WARNING: Removing unreachable block (ram,0x10081dec)

undefined2 __cdecl16near
FUN_1008_1d5a(undefined2 param_1,uint param_2,undefined2 param_3,undefined2 param_4_00,int param_4)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_CS;
  
  if (DAT_1018_0296 < 0x35f) {
    if ((param_2 & 3) == 2) {
      if (param_4 == 1) {
        uVar3 = 0;
      }
      else {
        uVar3 = param_1;
        iVar1 = GETWINDOW(unaff_CS,5);
        if (iVar1 != 0) {
          FUN_1008_1f44(iVar1,4,param_4,param_1,uVar3);
        }
        uVar3 = 1;
      }
    }
    else if ((param_2 & 3) == 3) {
      uVar3 = 1;
    }
    else if (param_4 == 1) {
      uVar3 = 1;
    }
    else {
      uVar3 = param_1;
      iVar1 = GETWINDOW(unaff_CS,5);
      if (iVar1 == 0) {
        uVar3 = 0;
      }
      else {
        FUN_1008_1f44(iVar1,2,param_4,param_1,uVar3);
        iVar2 = GETWINDOW(0x1030,2);
        if (iVar2 != 0) {
          FUN_1008_1f44(iVar2,4,param_4,param_1,iVar1);
        }
        uVar3 = 1;
      }
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



// WARNING: Removing unreachable block (ram,0x10081eeb)
// WARNING: Removing unreachable block (ram,0x10081f04)
// WARNING: Removing unreachable block (ram,0x10081eb0)

undefined2 __cdecl16near
FUN_1008_1e70(undefined2 param_1_00,uint param_1,undefined2 param_2,uint param_3)

{
  undefined2 uVar1;
  
  param_1 = param_1 & 0x1f;
  if ((param_1 == 3) ||
     ((((param_3 & 0x10) == 0 || ((2 < param_1 && (param_1 != 0xc)))) &&
      (((param_3 & 0x20) == 0 ||
       ((((-1 < (int)param_1 && (param_1 < 4)) || (9 < param_1)) &&
        (((0x35e < DAT_1018_0296 || (param_1 < 0x10)) || (0x12 < param_1)))))))))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



bool __cdecl16near FUN_1008_1f44(undefined2 param_1,uint param_2,int param_3,undefined2 param_4)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  long lVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  int local_1c;
  undefined local_1a [16];
  int local_a;
  undefined4 local_8;
  
  lVar2 = FUN_1008_00c8(param_1);
  if (lVar2 == 0) {
    uVar5 = param_1;
    GETCLASSNAME(unaff_CS,0x10,local_1a,unaff_SS);
    for (local_1c = 0; local_1c < 6; local_1c = local_1c + 1) {
      if ((*(uint *)(local_1c * 0x1c + 0x2a) & param_2) != 0) {
        uVar4 = 0x1030;
        iVar1 = LSTRCMP(0x1030,local_1a,unaff_SS,local_1c * 0x1c + 0x10);
        if (iVar1 == 0) {
          uVar3 = param_1;
          local_8 = GETWINDOWLONG(0x1030,0xfff0);
          local_a = (**(code **)(local_1c * 0x1c + 0x28))
                              (param_1,local_8,param_2,param_3,param_4,uVar3,uVar4,uVar5);
          if (local_a == 1) {
            if ((param_3 == 1) && (DAT_1018_0298 == 0x10)) {
              FUN_1008_03e2(param_1,*(undefined2 *)(local_1c * 0x18 + 0x488),
                            *(undefined2 *)(local_1c * 0x18 + 0x48a));
            }
            else {
              FUN_1008_01cc(param_1,*(undefined2 *)(local_1c * 0x18 + 0x488),
                            *(undefined2 *)(local_1c * 0x18 + 0x48a));
            }
          }
          return local_a != 0;
        }
      }
    }
  }
  return false;
}



// WARNING: Removing unreachable block (ram,0x100820c0)
// WARNING: Removing unreachable block (ram,0x100821b7)

void __cdecl16near FUN_1008_2084(undefined2 param_1,undefined4 param_2)

{
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  int local_14;
  int local_12;
  int local_10;
  int local_e;
  undefined2 local_c;
  uint local_a;
  undefined4 local_8;
  
  GETWINDOWRECT(unaff_CS,&local_14,unaff_SS);
  local_8 = GETWINDOWLONG(0x1030,0xfff0);
  if ((local_8 & 0x10000000) != 0) {
    if (((int)param_2 != 0) || (param_2._2_2_ != 0)) {
      local_a = *(uint *)((int)param_2 + 0xc);
      if (((local_a & 0x80) == 0) &&
         ((((local_a & 0x40) == 0 && ((local_a & 2) != 0)) && ((local_a & 1) != 0)))) {
        return;
      }
      if ((((local_a & 3) == 2) && (*(int *)((int)param_2 + 8) == local_10 - local_14)) &&
         (*(int *)((int)param_2 + 10) <= local_e - local_12)) {
        local_12 = local_12 + *(int *)((int)param_2 + 10) + 1;
      }
    }
    INFLATERECT(0x1030,1,1,&local_14);
    local_c = GETPARENT(0x1030,param_1);
    SCREENTOCLIENT(0x1030,&local_14,unaff_SS);
    SCREENTOCLIENT(0x1030,&local_10,unaff_SS);
    if ((local_8 & 0x200000) != 0) {
      local_10 = local_10 + 1;
    }
    INVALIDATERECT(0x1030,0,&local_14,unaff_SS,local_c);
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x1008225d)

void __cdecl16near FUN_1008_21e0(undefined2 param_1)

{
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 uVar1;
  undefined local_12 [4];
  int local_e [2];
  undefined2 local_a;
  undefined4 local_8;
  
  local_8 = GETWINDOWLONG(unaff_CS,0xfff0);
  GETWINDOWRECT(0x1030,local_12,unaff_SS);
  INFLATERECT(0x1030,1,1,local_12);
  local_a = GETPARENT(0x1030,param_1);
  SCREENTOCLIENT(0x1030,local_12,unaff_SS);
  uVar1 = local_a;
  SCREENTOCLIENT(0x1030,local_e,unaff_SS);
  if ((local_8 & 0x200000) != 0) {
    local_e[0] = local_e[0] + 1;
  }
  VALIDATERECT(0x1030,local_12,unaff_SS,local_a,uVar1);
  return;
}



// WARNING: Removing unreachable block (ram,0x10082453)

void __cdecl16near
FUN_1008_2282(int param_1,int param_2,int *param_3,undefined2 param_5,undefined2 param_6,
             undefined2 param_7,int param_8,int param_9)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_14;
  int local_12;
  int local_10;
  int local_e;
  int local_c;
  int local_a;
  int local_8;
  int local_6;
  
  local_e = *param_3;
  local_c = ((int *)param_3)[1];
  local_a = ((int *)param_3)[2];
  local_8 = ((int *)param_3)[3];
  FUN_1008_04ea(param_2,(int *)param_3,param_3._2_2_,7,7,0xf);
  INFLATERECT(unaff_CS,0xffff,0xffff,&local_e);
  if ((param_8 == 1) && (iVar1 = ISWINDOWENABLED(0x1030,param_1), iVar1 != 0)) {
    FUN_1008_04ea(param_2,&local_e);
    INFLATERECT(0x1030,0xffff,0xffff,&local_e);
  }
  PATBLT(0x1030,0x21,0xf0,1,1,((int *)param_3)[1],*param_3);
  PATBLT(0x1030,0x21,0xf0,1,1,((int *)param_3)[1],((int *)param_3)[2] + -1);
  PATBLT(0x1030,0x21,0xf0,1,1,((int *)param_3)[3] + -1,*param_3);
  PATBLT(0x1030,0x21,0xf0,1,1,((int *)param_3)[3] + -1,((int *)param_3)[2] + -1);
  local_10 = (param_9 == 0) + 1;
  if (param_9 == 0) {
    local_6 = SELECTOBJECT(0x1030,uRam101802ba);
  }
  else {
    local_6 = SELECTOBJECT(0x1030,uRam101802be);
  }
  PATBLT(0x1030,0x21,0xf0,local_8 - local_c,local_10,local_c,local_e);
  iVar1 = local_e;
  iVar4 = param_2;
  PATBLT(0x1030,0x21,0xf0,local_10,local_a - local_e,local_c,local_e);
  if (param_9 == 0) {
    iVar1 = param_2;
    SELECTOBJECT(0x1030,uRam101802be);
    local_8 = local_8 + -1;
    local_a = local_a + -1;
    for (local_12 = 0; local_12 < local_10; local_12 = local_12 + 1) {
      PATBLT(0x1030,0x21,0xf0,1,(local_a - local_e) + 1,local_8,local_e);
      PATBLT(0x1030,0x21,0xf0,local_8 - local_c,1,local_c,local_a);
      if (local_12 < local_10 + -1) {
        INFLATERECT(0x1030,0xffff,0xffff,&local_e);
      }
    }
  }
  local_e = local_e + 1;
  local_c = local_c + 1;
  iVar3 = param_2;
  SELECTOBJECT(0x1030,DAT_1018_02bc);
  iVar2 = param_2;
  PATBLT(0x1030,0x21,0xf0,local_8 - local_c,local_a - local_e,local_c,local_e);
  iVar1 = ISWINDOWENABLED(0x1030,param_1,iVar2,iVar3,iVar1,iVar4);
  if (iVar1 == 0) {
    SETTEXTCOLOR(0x1030,DAT_1018_02b2,DAT_1018_02b4);
  }
  FUN_1008_074a(param_2,param_5,param_6,&local_12);
  local_c = local_c + ((local_8 - local_c) - local_14) / 2;
  local_e = local_e + ((local_a - local_e) - local_12) / 2;
  if (local_c + local_14 < local_8) {
    local_8 = local_c + local_14;
  }
  if (local_e + local_12 < local_a) {
    local_a = local_e + local_12;
  }
  if (param_9 != 0) {
    OFFSETRECT(0x1030,1,1,&local_e);
    if (((int *)param_3)[2] + -3 <= local_a) {
      local_a = ((int *)param_3)[2] + -3;
    }
    if (((int *)param_3)[3] + -3 <= local_8) {
      local_8 = ((int *)param_3)[3] + -3;
    }
  }
  DRAWTEXT(0x1030,0x20,&local_e,unaff_SS,param_7,param_5,param_6);
  iVar1 = GETFOCUS(0x1030,param_2);
  if (param_1 == iVar1) {
    INFLATERECT(0x1030,1,1,&local_e);
    INTERSECTRECT(0x1030,(int *)param_3,param_3._2_2_,&local_e,unaff_SS,&local_e);
    DRAWFOCUSRECT(0x1030,&local_e,unaff_SS);
  }
  if (local_6 != 0) {
    SELECTOBJECT(0x1030,local_6);
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x100828c4)

void __cdecl16near FUN_1008_26ae(undefined2 param_1,int param_2,uint param_3)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_138;
  int iStack_136;
  int local_134;
  int local_132;
  int local_130;
  uint local_12e;
  uint local_12c;
  int local_12a;
  int local_128;
  int local_126;
  int local_124;
  int local_122;
  int local_120;
  undefined2 local_11e;
  uint local_11c;
  undefined2 local_11a;
  int local_118;
  int local_116;
  int local_114;
  int local_112;
  int local_110;
  undefined local_10e [256];
  int local_e;
  uint local_c;
  int local_a;
  undefined2 local_8;
  undefined2 local_6;
  
  uVar2 = param_1;
  local_11c = GETWINDOWLONG(unaff_CS,0xfff0);
  local_c = local_11c & 0x20;
  local_11c = local_11c & 0x1f;
  local_11e = GETPARENT(0x1030,param_1,uVar2);
  iVar4 = param_2;
  SETBKMODE(0x1030,2);
  uVar1 = param_1;
  GETCLIENTRECT(0x1030,&local_118,unaff_SS);
  local_12a = local_118;
  local_128 = local_116;
  local_126 = local_114;
  local_124 = local_112;
  iVar6 = 0x31;
  uVar2 = param_1;
  local_e = SENDMESSAGE(0x1030,0,0,0,0x31);
  if (local_e == 0) {
    local_e = 0;
  }
  else {
    iVar6 = param_2;
    local_e = SELECTOBJECT(0x1030,local_e);
  }
  uVar3 = GETSYSCOLOR(0x1030,0xf,param_2,iVar6,uVar2,uVar1,iVar4);
  SETBKCOLOR(0x1030,uVar3);
  uVar3 = GETSYSCOLOR(0x1030,0x12,param_2);
  SETTEXTCOLOR(0x1030,uVar3);
  uVar2 = local_11e;
  local_11a = SENDMESSAGE(0x1030,param_1,3,param_2,0x19);
  iVar5 = param_2;
  local_11a = SELECTOBJECT(0x1030,local_11a);
  iVar6 = local_12a;
  iVar4 = param_2;
  INTERSECTCLIPRECT(0x1030,local_124,local_126,local_128,local_12a);
  if (((param_3 & 0x10) != 0) && (local_11c != 7)) {
    iVar6 = param_2;
    PATBLT(0x1030,0x21,0xf0,local_124 - local_128,local_126 - local_12a,local_128,local_12a);
  }
  local_110 = ISWINDOWENABLED(0x1030,param_1,iVar6,iVar4,iVar5,uVar2);
  local_12c = SENDMESSAGE(0x1030,0,0,0,0x402);
  local_8 = 0;
  local_12e = (int)(local_12c & 4) >> 1;
  local_a = ((local_12c & 3) != 0 | local_12e) * 0xe;
  if (local_110 == 0) {
    local_a = local_a + (((local_12c & 3) != 0) + 2) * 0xe;
  }
  if ((((param_3 & 10) != 0) || (local_11c == 0)) || (local_11c == 1)) {
    local_6 = GETWINDOWTEXT(0x1030,0x100,local_10e);
  }
  uVar2 = 0x1008;
  switch(local_11c) {
  case 0:
  case 1:
    FUN_1008_2282(param_1,param_2,&local_118);
    goto switchD_1008_2d00_caseD_8;
  case 2:
  case 3:
    break;
  case 4:
  case 9:
    local_8 = 0xd;
    break;
  case 5:
  case 6:
    if ((local_12c & 3) == 2) {
      local_8 = 0x1a;
    }
    break;
  case 7:
    if ((param_3 & 6) != 0) {
      FUN_1008_074a(param_2,local_10e);
      if (local_130 == 0) {
        FUN_1008_074a(param_2,0x17,0x1018,&local_132);
      }
      local_138 = local_12a + 4;
      local_126 = local_138 + local_12e + 4;
      local_132 = local_128 + local_130;
      local_12a = local_138;
      local_124 = local_132;
      if ((param_3 & 0x20) != 0) {
        iStack_136 = local_128;
        local_134 = local_114;
        CLIENTTOSCREEN(0x1008,&local_138,unaff_SS);
        CLIENTTOSCREEN(0x1030,&local_134,unaff_SS);
        SCREENTOCLIENT(0x1030,&local_138,unaff_SS);
        SCREENTOCLIENT(0x1030,&local_134,unaff_SS);
        INVALIDATERECT(0x1030,1,&local_138,unaff_SS,local_11e);
        return;
      }
      local_116 = local_116 + local_130 / 2;
      local_114 = local_114 + -1;
      local_112 = local_112 + -1;
      FUN_1008_04ea(param_2,&local_118);
      OFFSETRECT(0x1008,1,1,&local_118);
      FUN_1008_04ea(param_2,&local_118);
      if (local_110 == 0) {
        SETTEXTCOLOR(0x1030,DAT_1018_02b2,DAT_1018_02b4);
      }
      uVar2 = 0x1030;
      DRAWTEXT(0x1030,0x20,&local_12a,unaff_SS,local_6,local_10e,unaff_SS);
    }
  default:
    goto switchD_1008_2d00_caseD_8;
  }
  if ((param_3 & 4) != 0) {
    uVar2 = 0x1030;
    local_120 = CREATECOMPATIBLEDC(0x1008,param_2);
    if (local_120 != 0) {
      local_122 = SELECTOBJECT(0x1030,uRam101802c0);
      if (local_122 != 0) {
        if (local_c == 0) {
          BITBLT(0x1030,0x20,0xcc,local_8,local_a,local_120,0xd,0xe,
                 ((local_124 - local_128) + -0xd) / 2 + local_128,local_12a);
        }
        else {
          BITBLT(0x1030,0x20,0xcc,local_8,local_a,local_120,0xd,0xe,
                 ((local_124 - local_128) + -0xd) / 2 + local_128,local_126 + -0xe);
        }
        SELECTOBJECT(0x1030,local_122);
      }
      uVar2 = 0x1030;
      DELETEDC(0x1030,local_120);
    }
  }
  if ((param_3 & 2) != 0) {
    if (local_c == 0) {
      local_12a = local_118 + 0x12;
    }
    else {
      local_126 = local_114 + -0x12;
    }
    uVar1 = uVar2;
    if (local_110 == 0) {
      SETTEXTCOLOR(uVar2,DAT_1018_02b2,DAT_1018_02b4);
      uVar1 = 0x1030;
    }
    uVar2 = 0x1030;
    DRAWTEXT(uVar1,0x24,&local_12a,unaff_SS,local_6,local_10e,unaff_SS);
  }
  if ((param_3 & 8) != 0) {
    FUN_1008_074a(param_2,local_10e);
    local_128 = ((local_124 - local_128) - local_130) / 2;
    local_124 = local_128 + local_130;
    if (local_c == 0) {
      local_12a = local_118 + 0x12;
    }
    else {
      local_12a = local_118;
      local_114 = local_114 + -0x12;
    }
    local_126 = local_12a + local_12e;
    INFLATERECT(uVar2,1,1,&local_12a);
    INTERSECTRECT(0x1030,&local_118,unaff_SS,&local_12a,unaff_SS,&local_12a);
    uVar2 = 0x1030;
    DRAWFOCUSRECT(0x1030,&local_12a,unaff_SS);
  }
switchD_1008_2d00_caseD_8:
  SELECTOBJECT(uVar2,local_11a);
  if (local_e != 0) {
    SELECTOBJECT(0x1030,local_e);
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x10082ec0)
// WARNING: Removing unreachable block (ram,0x10083035)
// WARNING: Removing unreachable block (ram,0x10082e1d)
// WARNING: Removing unreachable block (ram,0x10082df9)
// WARNING: Removing unreachable block (ram,0x10082e57)

undefined2 __stdcall16far
BTNWNDPROC3D(undefined2 *param_1,undefined2 param_2,int param_3,int param_4,undefined2 param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint extraout_DX;
  int unaff_BP;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  ulong uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  uint local_36;
  int local_2e;
  undefined local_28 [36];
  undefined2 local_4;
  int iStack_2;
  
  iStack_2 = unaff_BP + 1;
  local_4 = 0x1018;
  if (param_4 == 0x82) {
    uVar11 = FUN_1008_0426(param_5,0x82,param_3,param_1,param_2,0);
    return uVar11;
  }
  uVar11 = 0x2d8b;
  uVar10 = param_5;
  iVar1 = GETPROP(unaff_CS,DAT_1018_0290,0);
  if (iVar1 != 0) {
    uVar11 = FUN_1008_0128(param_5,0,uVar10);
    uVar11 = CALLWINDOWPROC(0x1030,param_1,param_2,param_3,param_4,param_5,uVar11);
    return uVar11;
  }
  if (param_4 == 7) {
    local_36 = 0x16;
  }
  else if (param_4 == 8) {
    uVar2 = GETWINDOWLONG(0x1030,0xfff0);
    if ((uVar2 & 0x1f) == 9) {
      SENDMESSAGE(0x1030,0,0,0,0x403);
    }
    local_36 = 0;
  }
  else if (param_4 == 10) {
    local_36 = 6;
  }
  else if (param_4 == 0xc) {
    uVar4 = GETWINDOWLONG(0x1030,0xfff0);
    if (((uVar4 & 0x10000000) == 0) || (((uint)uVar4 & 0x1f) != 7)) {
      local_36 = 0x16;
    }
    else {
      local_36 = 0x22;
    }
  }
  else {
    if (param_4 == 0xf) {
      uVar11 = param_5;
      uVar2 = SENDMESSAGE(0x1030,0,0,0,0x402);
      local_2e = param_3;
      if (param_3 == 0) {
        local_2e = BEGINPAINT(0x1030,local_28,unaff_SS,param_5);
      }
      uVar10 = param_5;
      GETWINDOWLONG(0x1030,0xfff0);
      if ((extraout_DX & 0x1000) != 0) {
        FUN_1008_26ae(param_5,local_2e,uVar2 & 8 | 6,uVar10,uVar11);
      }
      if (param_3 == 0) {
        ENDPAINT(0x1030,local_28,unaff_SS);
      }
      return 0;
    }
    if ((param_4 != 0x401) && (param_4 != 0x403)) {
      if ((param_4 == 0x1943) || (param_4 == 0x1944)) {
        *param_1 = 1;
        return 1000;
      }
      goto LAB_1008_30c5;
    }
    local_36 = 4;
  }
  uVar8 = param_5;
  uVar2 = SENDMESSAGE(0x1030,0,0,0,0x402);
  uVar10 = 0xfff0;
  uVar11 = param_5;
  uVar4 = GETWINDOWLONG(0x1030,0xfff0);
  if ((uVar4 & 0x10000000) != 0) {
    if (param_4 != 7) {
      uVar10 = param_5;
      SETWINDOWLONG(0x1030,(int)uVar4,(uint)(uVar4 >> 0x10) & 0xefff,0xfff0);
    }
    uVar5 = FUN_1008_0128(param_5,0,uVar10,uVar11,uVar8);
    uVar11 = param_5;
    uVar10 = CALLWINDOWPROC(0x1030,param_1,param_2,param_3,param_4,param_5,(int)uVar5);
    uVar8 = (undefined2)((ulong)uVar5 >> 0x10);
    if (param_4 != 7) {
      uVar11 = 0xfff0;
      uVar7 = param_5;
      uVar9 = param_5;
      uVar5 = GETWINDOWLONG(0x1030,0xfff0);
      SETWINDOWLONG(0x1030,(int)uVar5,(uint)((ulong)uVar5 >> 0x10) | 0x1000,uVar7);
      uVar5 = CONCAT22(uVar8,uVar9);
    }
    uVar8 = param_5;
    uVar3 = SENDMESSAGE(0x1030,0,0,0,0x402);
    if (((param_4 == 0x403) || (param_4 == 0x401)) && (uVar2 == uVar3)) {
      return uVar10;
    }
    iVar1 = GETDC(0x1030,param_5,uVar8,uVar11,uVar5);
    if (iVar1 == 0) {
      return uVar10;
    }
    if ((uVar2 & 3) != (uVar3 & 3)) {
      local_36 = local_36 | 4;
    }
    iVar6 = iVar1;
    EXCLUDEUPDATERGN(0x1030,param_5);
    FUN_1008_26ae(param_5,iVar1,(uVar2 ^ uVar3) & 8 | local_36,iVar6);
    RELEASEDC(0x1030,iVar1);
    return uVar10;
  }
LAB_1008_30c5:
  uVar11 = FUN_1008_0128(param_5,0,uVar11);
  uVar11 = CALLWINDOWPROC(0x1030,param_1,param_2,param_3,param_4,param_5,uVar11);
  return uVar11;
}



// WARNING: Removing unreachable block (ram,0x10083489)
// WARNING: Removing unreachable block (ram,0x1008320d)
// WARNING: Removing unreachable block (ram,0x1008314d)
// WARNING: Removing unreachable block (ram,0x1008311d)
// WARNING: Removing unreachable block (ram,0x100831e8)
// WARNING: Removing unreachable block (ram,0x1008343c)
// WARNING: Removing unreachable block (ram,0x10083502)

void __cdecl16near FUN_1008_30f6(undefined2 param_1,int param_2,int param_3)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  long lVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  int local_3c [2];
  int local_38;
  undefined2 local_34;
  undefined4 local_32;
  undefined2 local_2e;
  int local_2c;
  undefined local_2a [16];
  int local_1a;
  int local_18;
  int local_16;
  int local_14;
  int local_12;
  undefined2 local_10;
  uint local_e;
  undefined2 local_c;
  undefined4 local_a;
  int local_6;
  
  uVar6 = 0xfff0;
  uVar1 = param_1;
  local_a = GETWINDOWLONG(unaff_CS,0xfff0);
  if ((local_a & 0x10000000) != 0) {
    if ((param_3 == 3) && (((uint)local_a & 3) == 3)) {
      uVar6 = param_1;
      lVar3 = SENDMESSAGE(0x1030,0,0,0,0x417);
      if (lVar3 != 0) {
        return;
      }
    }
    if (param_2 != 0) {
      HIDECARET(0x1030,param_1,uVar6,uVar1);
    }
    uVar6 = param_1;
    GETWINDOWRECT(0x1030,&local_18,unaff_SS);
    uVar1 = GETPARENT(0x1030,param_1,uVar6);
    local_c = uVar1;
    SCREENTOCLIENT(0x1030,&local_18,unaff_SS);
    uVar6 = local_c;
    SCREENTOCLIENT(0x1030,&local_14,unaff_SS);
    local_10 = GETDC(0x1030,local_c,uVar6,uVar1);
    local_e = 0xf;
    if ((local_a & 0x100000) != 0) {
      local_e = 7;
    }
    if ((local_a & 0x200000) != 0) {
      local_e = local_e & 0xfffb;
    }
    local_6 = GETWINDOWWORD(0x1030,0xfff4);
    if (local_6 == param_2 + 1000) {
      local_2c = 0x29a;
      local_1a = SENDMESSAGE(0x1030,&local_2c,unaff_SS,0,0x1944);
      if (local_2c == 0x29a) {
        local_1a = SENDMESSAGE(0x1030,&local_2c,unaff_SS,0,0x1943);
      }
      GETCLASSNAME(0x1030,0x10,local_2a,unaff_SS);
      iVar2 = LSTRCMP(0x1030,100,0x1030,local_2a);
      if ((iVar2 == 0) ||
         ((local_2c == 1 &&
          (local_32 = CONCAT22(local_32._2_2_,(undefined2)local_32), local_1a == 0x3eb)))) {
        local_2e = GETPARENT(0x1030,local_c);
        uVar5 = param_1;
        GETWINDOWRECT(0x1030,&local_18,unaff_SS);
        uVar4 = local_2e;
        SCREENTOCLIENT(0x1030,&local_18,unaff_SS);
        uVar1 = local_2e;
        SCREENTOCLIENT(0x1030,&local_14,unaff_SS);
        uVar6 = local_c;
        RELEASEDC(0x1030,local_10);
        local_10 = GETDC(0x1030,local_2e,uVar6,uVar1,uVar4,uVar5);
        if (param_2 == 0) {
          local_16 = local_16 + 1;
          local_e = local_e & 0xfffd;
        }
        else {
          uVar6 = local_c;
          local_32 = GETWINDOWLONG(0x1030,0xfff0);
          if ((((uint)local_32 & 3) == 2) || (((uint)local_32 & 3) == 3)) {
            uVar1 = local_c;
            lVar3 = SENDMESSAGE(0x1030,0,0,0,0x417);
            if (lVar3 != 0) {
              uVar4 = local_2e;
              RELEASEDC(0x1030,local_10);
              SHOWCARET(0x1030,param_1,uVar4,uVar1,uVar6);
              return;
            }
          }
          else {
            local_e = local_e & 0xfff7;
            local_34 = GETWINDOW(0x1030,5);
            GETWINDOWRECT(0x1030,local_3c,unaff_SS);
            local_14 = local_14 - (local_38 - local_3c[0]);
            FUN_1008_06a8(local_10,&local_18);
            local_14 = local_14 + (local_38 - local_3c[0]);
          }
        }
        local_c = local_2e;
      }
    }
    FUN_1008_06a8(local_10,&local_18);
    if ((param_3 == 3) && (((uint)local_a & 3) == 3)) {
      local_18 = GETSYSTEMMETRICS(0x1030,2);
      local_18 = local_14 - local_18;
      FUN_1008_04ea(local_10,&local_18);
      FUN_1008_21e0(param_1);
    }
    else {
      if ((local_a & 0x200000) != 0) {
        local_14 = local_14 + 1;
        FUN_1008_04ea(local_10,&local_18);
        local_14 = local_14 + -1;
        local_1a = local_18;
        local_18 = GETSYSTEMMETRICS(0x1030,2);
        local_18 = local_14 - local_18;
        FUN_1008_04ea(local_10,&local_18);
        local_18 = local_1a;
      }
      if ((local_a & 0x100000) != 0) {
        local_12 = local_12 + 1;
        FUN_1008_04ea(local_10,&local_18);
        local_12 = local_12 + -1;
        local_16 = GETSYSTEMMETRICS(0x1030,0x15);
        local_16 = local_12 - local_16;
        FUN_1008_04ea(local_10,&local_18);
      }
    }
    uVar6 = local_c;
    RELEASEDC(0x1030,local_10);
    if (param_2 != 0) {
      SHOWCARET(0x1030,param_1,uVar6);
    }
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x10083647)
// WARNING: Removing unreachable block (ram,0x100836f4)

undefined2 __cdecl16near
FUN_1008_3580(undefined2 param_1,int param_2,int param_3,undefined2 *param_4,undefined2 param_5,
             int param_6)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_CS;
  undefined4 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  uint local_8;
  
  if (param_2 == 0x82) {
    uVar2 = FUN_1008_0426(param_1,0x82,param_3,param_4,param_5,param_6);
  }
  else {
    uVar2 = param_1;
    iVar1 = GETPROP(unaff_CS,DAT_1018_0290,0);
    if (iVar1 == 0) {
      uVar3 = FUN_1008_0128(param_1,param_6,uVar2);
      uVar2 = CALLWINDOWPROC(0x1030,param_4,param_5,param_3,param_2,param_1,(int)uVar3);
      uVar5 = (undefined2)((ulong)uVar3 >> 0x10);
      if (param_6 == 3) {
        uVar4 = param_1;
        local_8 = GETWINDOWLONG(0x1030,0xfff0);
        uVar3 = CONCAT22(uVar5,uVar4);
        if ((local_8 & 3) == 2) {
          return uVar2;
        }
      }
      if (param_2 == 0xf) {
        if (((param_6 != 3) || ((local_8 & 3) == 2)) || ((local_8 & 3) == 3)) {
          FUN_1008_30f6(param_1,1,param_6);
        }
      }
      else if (param_2 == 0x18) {
        if ((DAT_1018_0296 < 0x30a) && (param_3 == 0)) {
          FUN_1008_2084(param_1,0,0,uVar3);
        }
      }
      else if (param_2 == 0x46) {
        if (0x309 < DAT_1018_0296) {
          FUN_1008_2084(param_1,param_4,param_5,uVar3);
        }
      }
      else if ((param_2 == 0x1943) || (param_2 == 0x1944)) {
        *param_4 = 1;
        uVar2 = 0x3ea;
      }
    }
    else {
      uVar2 = FUN_1008_0128(param_1,param_6,uVar2);
      uVar2 = CALLWINDOWPROC(0x1030,param_4,param_5,param_3,param_2,param_1,uVar2);
    }
  }
  return uVar2;
}



void __stdcall16far
EDITWNDPROC3D(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5)

{
  FUN_1008_3580(param_5,param_4,param_3,param_1,param_2,2);
  return;
}



undefined2 __cdecl16near
FUN_1008_3784(undefined2 param_1,int param_2,int param_3,undefined2 *param_4,undefined2 param_5,
             undefined2 param_6)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined4 uVar3;
  undefined local_1a [6];
  int local_14;
  undefined2 local_12;
  int local_10;
  undefined2 uStack_e;
  int local_c;
  undefined2 local_a;
  undefined4 local_8;
  
  if (param_2 == 0x82) {
    local_8._0_2_ = FUN_1008_0426(param_1,0x82,param_3,param_4,param_5,param_6);
  }
  else {
    uVar2 = param_1;
    iVar1 = GETPROP(unaff_CS,DAT_1018_0290,0);
    if (iVar1 == 0) {
      if (param_2 == 0xf) {
        uVar3 = FUN_1008_0128(param_1,param_6,uVar2);
        uVar2 = (undefined2)((ulong)uVar3 >> 0x10);
        local_8 = CALLWINDOWPROC(0x1030,param_4,param_5,param_3,0xf,param_1,(int)uVar3);
        FUN_1008_30f6(param_1,0,param_6,uVar2);
      }
      else {
        if (param_2 == 0x18) {
          if ((DAT_1018_0296 < 0x30a) && (param_3 == 0)) {
            FUN_1008_2084(param_1,0,0);
          }
        }
        else if (param_2 == 0x46) {
          if (0x309 < DAT_1018_0296) {
            FUN_1008_2084(param_1,param_4,param_5);
          }
        }
        else if (param_2 == 0x83) {
          if (DAT_1018_0296 < 0x30a) {
            uVar2 = param_1;
            GETWINDOWRECT(0x1030,local_1a,unaff_SS);
            uVar2 = FUN_1008_0128(param_1,param_6,uVar2);
            local_8 = CALLWINDOWPROC(0x1030,param_4,param_5,param_3,0x83,param_1,uVar2);
            local_12 = *param_4;
            local_10 = param_4[1];
            uStack_e = param_4[2];
            local_c = param_4[3];
            INFLATERECT(0x1030,1,2,&local_12);
            if (local_14 <= local_c) {
              return (undefined2)local_8;
            }
            local_10 = local_c + 1;
            local_c = local_14 + 1;
            local_a = GETPARENT(0x1030,param_1);
            SCREENTOCLIENT(0x1030,&local_12,unaff_SS);
            SCREENTOCLIENT(0x1030,&uStack_e,unaff_SS);
            INVALIDATERECT(0x1030,1,&local_12,unaff_SS,local_a);
            return (undefined2)local_8;
          }
        }
        else if ((param_2 == 0x1943) || (param_2 == 0x1944)) {
          *param_4 = 1;
          return 0x3e9;
        }
        uVar2 = FUN_1008_0128(param_1,param_6,uVar2);
        local_8._0_2_ = CALLWINDOWPROC(0x1030,param_4,param_5,param_3,param_2,param_1,uVar2);
      }
    }
    else {
      uVar2 = FUN_1008_0128(param_1,param_6,uVar2);
      local_8._0_2_ = CALLWINDOWPROC(0x1030,param_4,param_5,param_3,param_2,param_1,uVar2);
    }
  }
  return (undefined2)local_8;
}



void __stdcall16far
LISTWNDPROC3D(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5)

{
  FUN_1008_3784(param_5,param_4,param_3,param_1,param_2,1);
  return;
}



undefined2 __stdcall16far
COMBOWNDPROC3D(undefined2 *param_1,undefined2 param_2,undefined2 param_3,int param_4,
              undefined2 param_5)

{
  undefined2 uVar1;
  
  if ((param_4 == 0x1943) || (param_4 == 0x1944)) {
    *param_1 = 1;
    uVar1 = 0x3eb;
  }
  else {
    uVar1 = FUN_1008_3580(param_5,param_4,param_3,param_1,param_2,3);
  }
  return uVar1;
}



// WARNING: Removing unreachable block (ram,0x10083b7e)
// WARNING: Removing unreachable block (ram,0x10083b2b)
// WARNING: Removing unreachable block (ram,0x10083bd5)

void __cdecl16near
FUN_1008_3a7c(undefined2 param_1,undefined2 param_2,int *param_3,uint param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined2 uVar4;
  undefined2 unaff_CS;
  undefined4 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 local_c;
  undefined2 local_a;
  uint local_8;
  
  uVar5 = CONCAT22(local_a,local_c);
  uVar4 = (undefined2)((ulong)param_3 >> 0x10);
  piVar3 = (int *)param_3;
  uVar7 = param_2;
  PATBLT(unaff_CS,0x21,0xf0,piVar3[3] - piVar3[1],piVar3[2] - *param_3,piVar3[1],*param_3);
  iVar1 = GETWINDOWTEXTLENGTH(0x1030,param_1,uVar7);
  uVar7 = 0x60;
  iVar2 = LOCALALLOC(0x1030,iVar1 + 5);
  if (iVar2 != 0) {
    uVar6 = 0x3aff;
    iVar1 = GETWINDOWTEXT(0x1030,iVar1 + 2,iVar2,0x1018,param_1,uVar7);
    if (iVar1 == 0) {
      LOCALFREE(0x1030,iVar2);
    }
    else {
      if ((param_4 & 0xf) == 0xc) {
        local_8 = 0x140;
      }
      else {
        local_8 = param_4 & 0xf | 0x150;
      }
      if ((param_4 & 0x80) != 0) {
        local_8 = local_8 | 0x800;
      }
      if ((param_5 & 0x800) != 0) {
        uVar6 = param_2;
        uVar5 = SETTEXTCOLOR(0x1030,DAT_1018_02b2,DAT_1018_02b4);
      }
      DRAWTEXT(0x1030,local_8,piVar3,uVar4,0xffff,iVar2,0x1018);
      LOCALFREE(0x1030,iVar2,param_2,uVar6);
      if ((param_5 & 0x800) != 0) {
        SETTEXTCOLOR(0x1030,uVar5);
      }
    }
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x10083c29)

void __cdecl16near FUN_1008_3bfc(undefined2 param_1,undefined2 param_2)

{
  uint uVar1;
  int iVar2;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  int local_14;
  int local_12;
  int local_10;
  int local_e;
  undefined4 local_8;
  
  local_8 = GETWINDOWLONG(unaff_CS,0xfff0);
  if ((local_8 & 0x10000000) == 0) {
    return;
  }
  uVar6 = param_1;
  GETCLIENTRECT(0x1030,&local_10,unaff_SS);
  uVar1 = (uint)local_8 & 0x1f;
  if ((((local_8 & 0x1f) == 0) || (uVar1 == 1)) || (uVar1 == 2)) {
LAB_1008_3cea:
    uVar4 = 0x31;
    uVar5 = param_1;
    iVar2 = SENDMESSAGE(0x1030,0,0,0,0x31);
    if (iVar2 == 0) {
      local_12 = 0;
    }
    else {
      uVar4 = param_2;
      local_12 = SELECTOBJECT(0x1030,iVar2);
    }
    uVar3 = param_2;
    SETBKMODE(0x1030,2);
    GETPARENT(0x1030,param_1,uVar3,uVar4,uVar5,uVar6);
    iVar2 = SENDMESSAGE(0x1030,param_1,6,param_2,0x19);
    if (iVar2 == 0) {
      local_14 = 0;
    }
    else {
      local_14 = SELECTOBJECT(0x1030,iVar2);
    }
    FUN_1008_3a7c(param_1,param_2,&local_10);
    if (local_12 != 0) {
      SELECTOBJECT(0x1030,local_12);
    }
    if (local_14 == 0) {
      return;
    }
    SELECTOBJECT(0x1030,local_14);
    return;
  }
  if (uVar1 == 4) {
LAB_1008_3c55:
    FUN_1008_04ea(param_2,&local_10);
  }
  else {
    if (uVar1 != 5) {
      if (uVar1 == 6) {
LAB_1008_3ccb:
        FUN_1008_04ea(param_2,&local_10);
        return;
      }
      if (uVar1 == 7) goto LAB_1008_3c55;
      if (uVar1 != 8) {
        if (uVar1 == 9) goto LAB_1008_3ccb;
        if (uVar1 == 0xc) goto LAB_1008_3cea;
        if (((uVar1 != 0x10) && (uVar1 != 0x11)) && (uVar1 != 0x12)) {
          return;
        }
      }
    }
    local_10 = local_10 + 1;
    local_e = local_e + 1;
    FUN_1008_04ea(param_2,&local_10);
    OFFSETRECT(0x1030,0xffff,0xffff,&local_10);
    FUN_1008_04ea(param_2,&local_10);
  }
  return;
}



undefined2 __stdcall16far
STATICWNDPROC3D(undefined2 *param_1,undefined2 param_2,int param_3,int param_4,undefined2 param_5)

{
  int iVar1;
  undefined2 uVar2;
  int unaff_BP;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  int local_2a;
  undefined local_28 [36];
  undefined2 local_4;
  int iStack_2;
  
  iStack_2 = unaff_BP + 1;
  local_4 = 0x1018;
  if (param_4 == 0x82) {
    uVar2 = FUN_1008_0426(param_5,0x82,param_3,param_1,param_2,4);
  }
  else {
    uVar2 = param_5;
    iVar1 = GETPROP(unaff_CS,DAT_1018_0290,0);
    if (iVar1 == 0) {
      if (param_4 == 10) {
        uVar2 = GETDC(0x1030,param_5);
        FUN_1008_0718(param_5,uVar2);
        FUN_1008_3bfc(param_5,uVar2);
        RELEASEDC(0x1030,uVar2);
        uVar2 = 0;
      }
      else if (param_4 == 0xf) {
        local_2a = param_3;
        if (param_3 == 0) {
          local_2a = BEGINPAINT(0x1030,local_28,unaff_SS,param_5);
          FUN_1008_0718(param_5,local_2a);
        }
        FUN_1008_3bfc(param_5,local_2a);
        if (param_3 == 0) {
          ENDPAINT(0x1030,local_28,unaff_SS);
        }
        uVar2 = 0;
      }
      else if ((param_4 == 0x1943) || (param_4 == 0x1944)) {
        *param_1 = 1;
        uVar2 = 0x3ec;
      }
      else {
        uVar2 = FUN_1008_0128(param_5,4,uVar2);
        uVar2 = CALLWINDOWPROC(0x1030,param_1,param_2,param_3,param_4,param_5,uVar2);
      }
    }
    else {
      uVar2 = FUN_1008_0128(param_5,4,uVar2);
      uVar2 = CALLWINDOWPROC(0x1030,param_1,param_2,param_3,param_4,param_5,uVar2);
    }
  }
  return uVar2;
}



undefined2 __stdcall16far FUN_1008_40cf(void)

{
  return 1;
}



void __cdecl16far FUN_1008_40e8(void)

{
  uint in_CX;
  uint uVar1;
  
  for (uVar1 = in_CX & 0xff; uVar1 != 0; uVar1 = uVar1 - 1) {
  }
  return;
}



void __cdecl16far FUN_1008_40f4(void)

{
  uint in_CX;
  uint uVar1;
  
  for (uVar1 = in_CX & 0xff; uVar1 != 0; uVar1 = uVar1 - 1) {
  }
  return;
}



void __cdecl16near FUN_1008_4100(void)

{
  uint in_CX;
  uint uVar1;
  
  for (uVar1 = in_CX & 0xff; uVar1 != 0; uVar1 = uVar1 - 1) {
  }
  return;
}



void __cdecl16near FUN_1008_410c(void)

{
  uint in_CX;
  uint uVar1;
  
  for (uVar1 = in_CX & 0xff; uVar1 != 0; uVar1 = uVar1 - 1) {
  }
  return;
}



uint __cdecl16far FUN_1008_4118(byte *param_1,byte *param_2,uint param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  
  if (param_3 == 0) {
    return 0;
  }
  iVar8 = (int)((ulong)param_1 >> 0x10);
  pbVar5 = (byte *)param_1;
  iVar7 = (int)((ulong)param_2 >> 0x10);
  pbVar6 = (byte *)param_2;
  do {
    uVar3 = ~(uint)pbVar6;
    uVar3 = ((param_3 - 1) - uVar3 & -(uint)(param_3 - 1 < uVar3)) + uVar3;
    uVar4 = ~(uint)pbVar5;
    uVar3 = (uVar3 - uVar4 & -(uint)(uVar3 < uVar4)) + uVar4 + 1;
    bVar9 = param_3 < uVar3;
    param_3 = param_3 - uVar3;
    bVar10 = param_3 == 0;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pbVar2 = pbVar6;
      pbVar6 = pbVar6 + 1;
      pbVar1 = pbVar5;
      pbVar5 = pbVar5 + 1;
      bVar9 = *pbVar1 < *pbVar2;
      bVar10 = *pbVar1 == *pbVar2;
    } while (bVar10);
    if (!bVar10) {
      return (1 - (uint)bVar9) - (uint)(bVar9 != 0);
    }
    if (param_3 == 0) {
      return uVar3;
    }
    if (pbVar5 == (byte *)0x0) {
      iVar8 = iVar8 + 0x68;
    }
    if (pbVar6 == (byte *)0x0) {
      iVar7 = iVar7 + 0x68;
    }
  } while( true );
}



undefined2 __cdecl16near FUN_1008_41c8(void)

{
  DAT_1018_006f = 1;
  FUN_1008_4244();
  FUN_1008_4253();
  FUN_1008_4244();
  FUN_1008_4244();
  FUN_1008_4253();
  FUN_1008_434e();
  FUN_1008_434e();
  return 0x100;
}



void __cdecl16near FUN_1008_4244(void)

{
  code **unaff_SI;
  code **unaff_DI;
  
  while (unaff_SI < unaff_DI) {
    unaff_DI = unaff_DI + -1;
    if (*unaff_DI != (code *)0x0) {
      (**unaff_DI)();
    }
  }
  return;
}



void __cdecl16near FUN_1008_4253(void)

{
  code **ppcVar1;
  code **unaff_SI;
  code **unaff_DI;
  code **ppcVar2;
  
  while (unaff_SI < unaff_DI) {
    ppcVar2 = unaff_DI + -2;
    ppcVar1 = unaff_DI + -1;
    unaff_DI = ppcVar2;
    if (((uint)*ppcVar2 | (uint)*ppcVar1) != 0) {
      (**ppcVar2)();
    }
  }
  return;
}



void __cdecl16near FUN_1008_4266(void)

{
  FUN_1008_4311(0xfc);
  FUN_1008_4311(0xff);
  return;
}



void FUN_1008_4311(void)

{
  return;
}



void __cdecl16near FUN_1008_434e(void)

{
  return;
}



int __cdecl16near FUN_1008_44be(int param_1)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 uVar2;
  
  if (param_1 == 0) {
    param_1 = 1;
  }
  while( true ) {
    LOCKSEGMENT(unaff_CS,0xffff);
    uVar2 = 0x20;
    iVar1 = LOCALALLOC(0x1030,param_1);
    UNLOCKSEGMENT(0x1030,0xffff,uVar2);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (DAT_1018_0074 == (code *)0x0) break;
    unaff_CS = 0x1008;
    iVar1 = (*DAT_1018_0074)(param_1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 0;
}



void __cdecl16near FUN_1008_4512(int param_1)

{
  if (param_1 != 0) {
    LOCALFREE();
  }
  return;
}



undefined2 __cdecl16near FUN_1008_4528(int param_1,int param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  
  if (param_1 == 0) {
    uVar1 = FUN_1008_44be(param_2);
  }
  else if (param_2 == 0) {
    FUN_1008_4512(param_1);
    uVar1 = 0;
  }
  else {
    uVar2 = 0xffff;
    LOCKSEGMENT();
    if (param_2 == 0) {
      param_2 = 1;
    }
    uVar1 = LOCALREALLOC(0x1030,0x62,param_2);
    UNLOCKSEGMENT(0x1030,0xffff,param_1,uVar2);
  }
  return uVar1;
}



void __cdecl16near FUN_1008_458c(void)

{
  LOCALSIZE();
  return;
}



undefined2 __cdecl16far ___EXPORTEDSTUB(void)

{
  return 0;
}



void __cdecl16near FUN_1010_0000(int *param_1)

{
                    // Segment:    3
                    // Offset:     00004cc0
                    // Length:     0f18
                    // Min Alloc:  0f18
                    // Flags:      1d50
                    //     Code
                    //     Discardable
                    //     Moveable
                    //     Preload
                    //     Impure (Non-shareable)
                    // 
  if (*param_1 != 0) {
    DELETEOBJECT();
    *param_1 = 0;
  }
  return;
}



void __cdecl16near FUN_1010_002e(void)

{
  int local_6;
  
  for (local_6 = 0; local_6 < 3; local_6 = local_6 + 1) {
    FUN_1010_0000(local_6 * 2 + 0x2ba,0x1018);
  }
  FUN_1010_0000(0x2c0,0x1018);
  return;
}



undefined2 __stdcall16far CTL3DREGISTER(undefined2 param_1)

{
  int iVar1;
  
  DAT_1018_0282 = DAT_1018_0282 + 1;
  if (DAT_1018_0282 == 1) {
    FUN_1010_03de();
  }
  iVar1 = CTL3DISAUTOSUBCLASS();
  if (iVar1 != 0) {
    CTL3DAUTOSUBCLASS(param_1);
  }
  return DAT_1018_0280;
}



undefined2 __stdcall16far CTL3DUNREGISTER(int param_1)

{
  int *piVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  int local_a;
  
  iVar4 = GETCURRENTTASK();
  for (local_a = 0; local_a < DAT_1018_02c6; local_a = local_a + 1) {
    if ((*(int *)(local_a * 0xe + 0x2ca) == iVar4) &&
       ((piVar1 = (int *)(local_a * 0xe + 0x2d0), *piVar1 = *piVar1 + -1,
        *(int *)(local_a * 0xe + 0x2d0) == 0 || (param_1 == *(int *)(local_a * 0xe + 0x2c8))))) {
      (*DAT_1018_052c)(0x1030,*(undefined2 *)(local_a * 0xe + 0x2cc),
                       *(undefined2 *)(local_a * 0xe + 0x2ce));
      DAT_1018_02c6 = DAT_1018_02c6 + -1;
      for (; local_a < DAT_1018_02c6; local_a = local_a + 1) {
        puVar6 = (undefined2 *)((local_a + 1) * 0xe + 0x2c8);
        puVar7 = (undefined2 *)(local_a * 0xe + 0x2c8);
        for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
          puVar3 = puVar7;
          puVar7 = puVar7 + 1;
          puVar2 = puVar6;
          puVar6 = puVar6 + 1;
          *puVar3 = *puVar2;
        }
      }
    }
  }
  DAT_1018_0282 = DAT_1018_0282 + -1;
  if (DAT_1018_0282 == 0) {
    FUN_1010_06ba();
  }
  return 1;
}



void __stdcall16far CTL3DAUTOSUBCLASS(undefined2 param_1)

{
  CTL3DAUTOSUBCLASSEX(0,0,param_1);
  return;
}



undefined2 __stdcall16far CTL3DSETSTYLE(void)

{
  return 0;
}



undefined2 __cdecl16far CTL3DGETVER(void)

{
  return 0x231;
}



undefined2 __cdecl16far CTL3DENABLED(void)

{
  return DAT_1018_0280;
}



undefined2 __cdecl16far CTL3DCOLORCHANGE(void)

{
  undefined2 uVar1;
  
  uVar1 = FUN_1010_07dc(0);
  return uVar1;
}



void __cdecl16far CTL3DWININICHANGE(void)

{
  int iVar1;
  int unaff_BP;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined local_22 [10];
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_4;
  int iStack_2;
  
  iStack_2 = unaff_BP + 1;
  local_4 = 0x1018;
  local_10 = 0x288;
  local_e = 0x1010;
  local_14 = 0x29e;
  local_12 = 0x1010;
  local_c = 0x2ac;
  local_a = 0x1010;
  local_18 = 0x2b2;
  local_16 = 0x1010;
  if (DAT_1018_0531 != '\0') {
    DAT_1018_0530 = 0x1e;
    GETPROFILESTRING(unaff_CS,9,local_22,unaff_SS,0x29e,0x1010,0x288,0x1010,0x280);
    iVar1 = LSTRCMPI(0x1030,local_c,local_a,local_22);
    if (iVar1 == 0) {
      DAT_1018_0530 = 0x1f;
    }
    GETPROFILESTRING(0x1030,9,local_22,unaff_SS,0x2a4,0x1010,0x292,0x1010,0x280);
    iVar1 = LSTRCMPI(0x1030,local_18,local_16,local_22);
    if (iVar1 == 0) {
      DAT_1018_0530 = 0x1f;
    }
  }
  return;
}



uint __cdecl16far FUN_1010_03de(void)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int unaff_BP;
  undefined2 unaff_SS;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  int local_144;
  undefined local_12e [2];
  undefined2 local_12c;
  undefined2 local_12a;
  undefined2 local_114;
  undefined2 local_4;
  int iStack_2;
  
  iStack_2 = unaff_BP + 1;
  local_4 = 0x1018;
  uVar6 = 0;
  uVar1 = GETDC();
  local_114 = uVar1;
  iVar2 = GETDEVICECAPS(0x1030,0xc);
  uVar5 = local_114;
  iVar3 = GETDEVICECAPS(0x1030,0xe);
  DAT_1018_0280 = (uint)(3 < iVar2 * iVar3);
  iVar2 = GETSYSTEMMETRICS(0x1030,1,uVar5,uVar1,uVar6);
  if ((iVar2 == 0x15e) && (iVar2 = GETSYSTEMMETRICS(0x1030,0), iVar2 == 0x280)) {
    DAT_1018_0280 = 0;
  }
  RELEASEDC(0x1030,local_114);
  if (DAT_1018_0280 != 0) {
    DAT_1018_0284 = GLOBALADDATOM(0x1030,0x3b6);
    if (DAT_1018_0284 == 0) {
      DAT_1018_0280 = 0;
    }
    else {
      DAT_1018_028a = GLOBALADDATOM(0x1030,0x3c6);
      if (DAT_1018_028a == 0) {
        DAT_1018_0280 = 0;
      }
      else {
        DAT_1018_0288 = GLOBALADDATOM(0x1030,0x3ba);
        uVar5 = 0x1010;
        DAT_1018_0286 = GLOBALADDATOM(0x1030,0x3c0);
        if ((DAT_1018_0288 == 0) || (DAT_1018_0286 == 0)) {
          DAT_1018_0280 = 0;
        }
        else {
          uVar6 = 0x1010;
          DAT_1018_028e = GLOBALADDATOM(0x1030,0x3ce);
          uVar1 = 0x1010;
          DAT_1018_028c = GLOBALADDATOM(0x1030,0x3d6);
          if ((DAT_1018_028e == 0) || (DAT_1018_028c == 0)) {
            DAT_1018_0280 = 0;
          }
          else {
            uVar4 = 0x1010;
            DAT_1018_0290 = GLOBALADDATOM(0x1030,0x3b0);
            if (DAT_1018_0290 == 0) {
              DAT_1018_0280 = 0;
            }
            else {
              DAT_1018_0531 = GETSYSTEMMETRICS(0x1030,0x2a,uVar4,uVar1,uVar6,uVar5);
              CTL3DWININICHANGE();
              iVar2 = FUN_1010_07dc(1);
              if (iVar2 == 0) {
                DAT_1018_0280 = 0;
              }
              else {
                uVar5 = 0x1010;
                for (local_144 = 0; local_144 < 6; local_144 = local_144 + 1) {
                  uVar1 = *(undefined2 *)(local_144 * 0x1c + 0x26);
                  *(undefined2 *)(local_144 * 0x18 + 0x488) =
                       *(undefined2 *)(local_144 * 0x1c + 0x24);
                  *(undefined2 *)(local_144 * 0x18 + 0x48a) = uVar1;
                  GETCLASSINFO(uVar5,local_12e,unaff_SS,local_144 * 0x1c + 0x10,0x1008);
                  *(undefined2 *)(local_144 * 0x18 + 0x48c) = local_12c;
                  *(undefined2 *)(local_144 * 0x18 + 0x48e) = local_12a;
                  uVar5 = 0x1030;
                }
                iVar2 = GETCLASSINFO(uVar5,local_12e,unaff_SS,0x8002,0);
                if (iVar2 == 0) {
                  DAT_1018_0518 = 0x164;
                  DAT_1018_051a = 0x1030;
                }
                else {
                  DAT_1018_0518 = local_12c;
                  DAT_1018_051a = local_12a;
                }
              }
            }
          }
        }
      }
    }
  }
  return DAT_1018_0280;
}



undefined2 __cdecl16near FUN_1010_06ba(void)

{
  undefined2 uVar1;
  undefined2 unaff_CS;
  int local_6;
  
  for (local_6 = 0; local_6 < 6; local_6 = local_6 + 1) {
    if ((*(int *)(local_6 * 0x18 + 0x488) != 0) || (*(int *)(local_6 * 0x18 + 0x48a) != 0)) {
      FREEPROCINSTANCE(unaff_CS,*(undefined2 *)(local_6 * 0x18 + 0x488));
      *(undefined2 *)(local_6 * 0x18 + 0x488) = 0;
      *(undefined2 *)(local_6 * 0x18 + 0x48a) = 0;
      unaff_CS = 0x1030;
    }
  }
  FUN_1010_002e();
  if (DAT_1018_0284 != 0) {
    GLOBALDELETEATOM(unaff_CS,DAT_1018_0284);
    unaff_CS = 0x1030;
  }
  if (DAT_1018_028a != 0) {
    GLOBALDELETEATOM(unaff_CS,DAT_1018_028a);
    unaff_CS = 0x1030;
  }
  if (DAT_1018_0288 != 0) {
    GLOBALDELETEATOM(unaff_CS,DAT_1018_0288);
    unaff_CS = 0x1030;
  }
  if (DAT_1018_0286 != 0) {
    GLOBALDELETEATOM(unaff_CS,DAT_1018_0286);
    unaff_CS = 0x1030;
  }
  if (DAT_1018_028e != 0) {
    GLOBALDELETEATOM(unaff_CS,DAT_1018_028e);
    unaff_CS = 0x1030;
  }
  if (DAT_1018_028c != 0) {
    GLOBALDELETEATOM(unaff_CS,DAT_1018_028c);
    unaff_CS = 0x1030;
  }
  if (DAT_1018_0290 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = GLOBALDELETEATOM(unaff_CS,DAT_1018_0290);
  }
  DAT_1018_0280 = 0;
  return uVar1;
}



undefined2 __cdecl16near FUN_1010_07dc(int param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined2 uVar5;
  int *piVar6;
  int *piVar7;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined4 uVar8;
  int local_2e [4];
  undefined2 local_26;
  int local_24;
  int local_22;
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  int local_10;
  int local_e;
  undefined2 local_c;
  undefined2 local_a;
  uint local_8;
  int local_6 [2];
  
  if (DAT_1018_0280 == 0) {
    uVar5 = 0;
  }
  else {
    for (local_8 = 0; local_8 < 8; local_8 = local_8 + 1) {
      unaff_CS = 0x1030;
      uVar8 = GETSYSCOLOR();
      uVar3 = local_8;
      local_2e[local_8 * 2 + 3] = (int)uVar8;
      local_2e[uVar3 * 2 + 4] = (int)((ulong)uVar8 >> 0x10);
    }
    if (DAT_1018_0296 == 0x300) {
      local_2e[3] = 0xffff;
      local_26 = 0xff;
    }
    if (((local_10 == 0) && (local_e == 0)) || ((local_10 == local_24 && (local_e == local_22)))) {
      if ((local_24 == -0x7f80) && (local_22 == 0x80)) {
        local_10 = -0x3f40;
        local_e = 0xc0;
      }
      else {
        local_10 = -0x7f80;
        local_e = 0x80;
      }
    }
    if (param_1 == 0) {
      unaff_CS = 0x1008;
      iVar4 = FUN_1008_4118(0x29a,0x1018,local_2e + 3);
      if (iVar4 == 0) {
        return 1;
      }
    }
    local_6[0] = FUN_1010_0b8c(local_c,local_a,local_18,local_16,local_2e[3],local_26,local_20,
                               local_1e,local_24,local_22,local_14,local_12,0x67c7,0,DAT_1018_0292);
    for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
      iVar4 = CREATESOLIDBRUSH(unaff_CS,local_2e[local_8 * 2 + 3]);
      local_2e[local_8] = iVar4;
      unaff_CS = 0x1030;
    }
    for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
      if (local_2e[local_8] == 0) goto LAB_1010_09a0;
    }
    if (local_6[0] == 0) {
LAB_1010_09a0:
      for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
        FUN_1010_0000(local_2e + local_8);
      }
      FUN_1010_0000(local_6);
      uVar5 = 0;
    }
    else {
      FUN_1010_002e();
      iRam101802ba = local_2e[0];
      DAT_1018_02bc = local_2e[1];
      uRam101802be = local_2e[2];
      piVar6 = local_2e + 3;
      piVar7 = (int *)0x29a;
      for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
        piVar2 = piVar7;
        piVar7 = piVar7 + 1;
        piVar1 = piVar6;
        piVar6 = piVar6 + 1;
        *piVar2 = *piVar1;
      }
      iRam101802c0 = local_6[0];
      uVar5 = 1;
    }
  }
  return uVar5;
}



undefined2 __stdcall16far FUN_1010_0a30(void)

{
  uint uVar1;
  int iVar2;
  undefined2 unaff_CS;
  undefined4 uVar3;
  undefined2 param_1;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined2 uVar7;
  
  DAT_1018_0292 = param_1;
  uVar7 = 0x1010;
  DAT_1018_0294 = GETMODULEHANDLE(unaff_CS,0x9e8);
  uVar1 = GETVERSION(0x1030,uVar7);
  DAT_1018_0296 = uVar1 << 8 | uVar1 >> 8;
  uVar1 = GETWINFLAGS(0x1030);
  if ((uVar1 & 0x4000) == 0) {
    DAT_1018_0298 = 0x10;
  }
  else {
    DAT_1018_0298 = 0x18;
  }
  iVar2 = GETSYSTEMMETRICS(0x1030,7);
  DAT_1018_051c = iVar2 + -1;
  iVar2 = GETSYSTEMMETRICS(0x1030,8);
  DAT_1018_051e = iVar2 + -1;
  DAT_1018_0520 = GETSYSTEMMETRICS(0x1030,4);
  DAT_1018_0522 = GETSYSTEMMETRICS(0x1030,0x1e);
  if (0x309 < DAT_1018_0296) {
    uVar7 = 0x1010;
    uVar1 = LOADLIBRARY(0x1030,0x9f0);
    if (0x20 < uVar1) {
      uVar6 = uVar1;
      uVar3 = GETPROCADDRESS(0x1030,0x9fa,0x1010);
      DAT_1018_0526 = (undefined2)((ulong)uVar3 >> 0x10);
      DAT_1018_0524 = (undefined2)uVar3;
      uVar5 = uVar1;
      uVar3 = GETPROCADDRESS(0x1030,0xa0c,0x1010);
      DAT_1018_052e = (undefined2)((ulong)uVar3 >> 0x10);
      DAT_1018_052c = (undefined2)uVar3;
      uVar4 = uVar1;
      uVar3 = GETPROCADDRESS(0x1030,0xa20,0x1010);
      DAT_1018_052a = (undefined2)((ulong)uVar3 >> 0x10);
      DAT_1018_0528 = (undefined2)uVar3;
      FREELIBRARY(0x1030,uVar1,uVar4,uVar5,uVar6,uVar7);
    }
  }
  return 1;
}



undefined2
FUN_1010_0b8c(uint param_1,undefined2 param_2,uint param_3,undefined2 param_4,uint param_5,
             undefined2 param_6,uint param_7,undefined2 param_8,uint param_9,undefined2 param_10,
             uint param_11,undefined2 param_12,undefined2 param_13,undefined2 param_14,
             undefined2 param_15)

{
  undefined2 uVar1;
  uint uVar2;
  uint uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  uint *puVar6;
  uint uVar7;
  undefined2 unaff_CS;
  int *piVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  uint *local_16;
  
  uVar5 = param_15;
  uVar1 = FINDRESOURCE(unaff_CS,2,0,param_13,param_14);
  uVar1 = LOADRESOURCE(0x1030,uVar1);
  piVar8 = (int *)LOCKRESOURCE(0x1030,uVar1,param_15,uVar5);
  uVar5 = (undefined2)((ulong)piVar8 >> 0x10);
  if (piVar8 == (int *)0x0) {
    uVar5 = 0;
  }
  else {
    puVar6 = (uint *)((int)(int *)piVar8 + *piVar8);
    local_16 = (uint *)CONCAT22(uVar5,puVar6);
    uVar7 = 0;
    uVar2 = FUN_1008_40e8();
    uVar3 = FUN_1008_40f4();
    *local_16 = uVar3 & 0xff | param_11 & 0xff00 | uVar2;
    puVar6[1] = uVar7;
    uVar7 = 0;
    uVar2 = FUN_1008_40e8();
    uVar3 = FUN_1008_40f4();
    puVar6[0xe] = uVar3 & 0xff | param_7 & 0xff00 | uVar2;
    puVar6[0xf] = uVar7;
    uVar7 = 0;
    uVar2 = FUN_1008_40e8();
    uVar3 = FUN_1008_40f4();
    puVar6[0x10] = uVar3 & 0xff | param_9 & 0xff00 | uVar2;
    puVar6[0x11] = uVar7;
    uVar7 = 0;
    uVar2 = FUN_1008_40e8();
    uVar3 = FUN_1008_40f4();
    puVar6[0x1e] = uVar3 & 0xff | param_5 & 0xff00 | uVar2;
    puVar6[0x1f] = uVar7;
    uVar7 = 0;
    uVar2 = FUN_1008_40e8();
    uVar3 = FUN_1008_40f4();
    puVar6[0x16] = uVar3 & 0xff | param_3 & 0xff00 | uVar2;
    puVar6[0x17] = uVar7;
    uVar7 = 0;
    uVar2 = FUN_1008_40e8();
    uVar3 = FUN_1008_40f4();
    puVar6[0x14] = uVar3 & 0xff | param_1 & 0xff00 | uVar2;
    puVar6[0x15] = uVar7;
    uVar4 = GETDC(0x1008,0);
    uVar10 = uVar4;
    uVar5 = CREATEDIBITMAP(0x1030,0,piVar8,puVar6 + 0x20,uVar5,4,0,piVar8);
    uVar9 = 0;
    RELEASEDC(0x1030,uVar4);
    GLOBALUNLOCK(0x1030,uVar1,uVar9,uVar10);
    FREERESOURCE(0x1030,uVar1);
  }
  return uVar5;
}



void __cdecl16far entry(void)

{
  int iVar1;
  int in_CX;
  undefined2 unaff_SI;
  undefined2 unaff_ES;
  undefined2 unaff_CS;
  undefined2 in_stack_0000fff0;
  undefined2 uVar2;
  
  uVar2 = 0x1018;
  if (in_CX != 0) {
    in_stack_0000fff0 = 0x1018;
    iVar1 = LOCALINIT(unaff_CS,in_CX,0);
    if (iVar1 == 0) {
      return;
    }
  }
  FUN_1010_0a30(in_stack_0000fff0,unaff_SI,unaff_ES,in_CX,uVar2);
  return;
}


