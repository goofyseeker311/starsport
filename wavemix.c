#include "wavemix.h"



uint FUN_1000_001a(int param_1,undefined2 param_2)

{
  uint uVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined4 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  
  if (param_1 == 0) {
    uVar2 = TIMEGETTIME();
    uVar4 = 0;
    uVar3 = 1000;
    uVar2 = FUN_1000_35d8(*(undefined2 *)(DAT_1008_09d0 + 0x6a),
                          *(undefined2 *)(DAT_1008_09d0 + 0x6c),
                          (uint)uVar2 - *(uint *)(DAT_1008_09d0 + 0x7c),
                          ((int)((ulong)uVar2 >> 0x10) - *(int *)(DAT_1008_09d0 + 0x7e)) -
                          (uint)((uint)uVar2 < *(uint *)(DAT_1008_09d0 + 0x7c)));
    uVar1 = FUN_1000_3616(uVar2,uVar3,uVar4);
    if ((1 < *(uint *)(DAT_1008_09d0 + 0x6e)) && ((uVar1 & 1) != 0)) {
      uVar1 = uVar1 - 1;
    }
  }
  else {
    local_a = 4;
    WAVEOUTGETPOSITION(unaff_CS,8,&local_a,unaff_SS);
    uVar1 = (**(code **)(DAT_1008_09d0 + 0x88))
                      (*(undefined2 *)(DAT_1008_09d0 + 0x82),*(undefined2 *)(DAT_1008_09d0 + 0x84),
                       local_8,local_6,param_2);
  }
  return uVar1;
}



undefined4 FUN_1000_00ae(uint param_1,int param_2,uint param_3,int param_4)

{
  return CONCAT22(param_2 + param_4 + (uint)CARRY2(param_1,param_3),param_1 + param_3);
}



undefined4 FUN_1000_00c4(uint param_1,int param_2,uint param_3,int param_4)

{
  return CONCAT22((param_4 - param_2) - (uint)(param_3 < param_1),param_3 - param_1);
}



void FUN_1000_00da(uint param_1,uint param_2)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 local_a;
  uint local_8;
  uint local_6;
  
  local_a = 4;
  if (*(int *)(DAT_1008_09d0 + 6) == 0) {
    local_6 = 0;
    local_8 = 0;
  }
  else {
    WAVEOUTGETPOSITION(unaff_CS,8,&local_a,unaff_SS);
    unaff_CS = 0x1018;
  }
  iVar1 = DAT_1008_09d0;
  if ((local_6 < param_2) || ((local_6 <= param_2 && (local_8 < param_1)))) {
    *(int *)(DAT_1008_09d0 + 0x82) = param_1 - local_8;
    *(int *)(iVar1 + 0x84) = (param_2 - local_6) - (uint)(param_1 < local_8);
    *(undefined2 *)(DAT_1008_09d0 + 0x88) = 0xae;
  }
  else {
    *(int *)(DAT_1008_09d0 + 0x82) = local_8 - param_1;
    *(int *)(iVar1 + 0x84) = (local_6 - param_2) - (uint)(local_8 < param_1);
    *(undefined2 *)(DAT_1008_09d0 + 0x88) = 0xc4;
  }
  lVar2 = TIMEGETTIME(unaff_CS);
  uVar6 = *(undefined2 *)(DAT_1008_09d0 + 0x6c);
  uVar5 = *(undefined2 *)(DAT_1008_09d0 + 0x6a);
  uVar3 = FUN_1000_35d8(param_1,param_2,1000,0);
  lVar4 = FUN_1000_3616(uVar3,uVar5,uVar6);
  iVar1 = DAT_1008_09d0;
  *(undefined2 *)(DAT_1008_09d0 + 0x7c) = (int)(lVar2 - lVar4);
  *(undefined2 *)(iVar1 + 0x7e) = (int)((ulong)(lVar2 - lVar4) >> 0x10);
  iVar1 = DAT_1008_09d0;
  *(uint *)(DAT_1008_09d0 + 0x78) = param_1;
  *(uint *)(iVar1 + 0x7a) = param_2;
  return;
}



void FUN_1000_01ae(int param_1,int param_2,undefined2 *param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined2 unaff_CS;
  uint local_8;
  int local_6;
  int local_4;
  
  if (param_2 == 1) {
    HMEMCPY(unaff_CS,param_1,0,*param_3,param_3[1],(undefined *)param_4);
  }
  else {
    local_8 = 0;
    for (; puVar1 = param_4, param_1 != 0; param_1 = param_1 + -1) {
      local_6 = 0x80;
      for (local_4 = 0; local_4 < param_2; local_4 = local_4 + 1) {
        local_6 = local_6 + (*(byte *)(local_8 + param_3[local_4 * 2]) - 0x80);
      }
      if (local_6 < 0) {
        local_6 = 0;
      }
      else if (0xff < local_6) {
        local_6 = 0xff;
      }
      if ((undefined *)param_4 == (undefined *)0xffff) {
        param_4._2_2_ = param_4._2_2_ + 0x68;
      }
      param_4 = (undefined *)CONCAT22(param_4._2_2_,(undefined *)param_4 + 1);
      *puVar1 = (undefined)local_6;
      local_8 = local_8 + 1;
    }
  }
  return;
}



void __cdecl16near FUN_1000_0262(void)

{
  int local_4;
  
  local_4 = 0;
  do {
    *(int *)(local_4 * 0x2c + 0x9f2) = local_4 * 0x2c + 0xa1e;
    local_4 = local_4 + 1;
  } while (local_4 < 0x62);
  DAT_1008_1af6 = 0;
  DAT_1008_09d4 = 0x9f2;
  return;
}



undefined2 * __cdecl16near FUN_1000_0296(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  
  puVar2 = DAT_1008_09d4;
  if (DAT_1008_09d4 == (undefined2 *)0x0) {
    puVar2 = (undefined2 *)0x0;
  }
  else {
    puVar1 = DAT_1008_09d4;
    DAT_1008_09d4 = (undefined2 *)*DAT_1008_09d4;
    *puVar1 = 0;
  }
  return puVar2;
}



void FUN_1000_02c2(undefined2 param_1)

{
  int iVar1;
  undefined2 uVar2;
  uint *puVar3;
  undefined2 unaff_CS;
  int local_4;
  
  local_4 = 0;
  do {
    iVar1 = local_4 * 4;
    puVar3 = (uint *)(iVar1 + 0x9d8);
    if ((*(uint *)(iVar1 + 0x9da) | *puVar3) != 0) {
      uVar2 = param_1;
      WAVEOUTUNPREPAREHEADER(unaff_CS,0x20,*puVar3,*(undefined2 *)(iVar1 + 0x9da));
      uVar2 = GLOBALHANDLE(0x1018,*(undefined2 *)(iVar1 + 0x9da),uVar2);
      GLOBALUNLOCK(0x1018,uVar2);
      uVar2 = GLOBALHANDLE(0x1018,*(undefined2 *)(iVar1 + 0x9da));
      unaff_CS = 0x1018;
      GLOBALFREE(0x1018,uVar2);
      *(undefined2 *)(iVar1 + 0x9da) = 0;
      *puVar3 = 0;
    }
    local_4 = local_4 + 1;
  } while (local_4 < 6);
  return;
}



undefined2 FUN_1000_032e(undefined2 param_1)

{
  byte *pbVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined2 unaff_CS;
  undefined4 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  int local_4;
  
  local_4 = 0;
  while( true ) {
    if (5 < local_4) {
      local_4 = 0;
      while( true ) {
        if (5 < local_4) {
          return 1;
        }
        puVar5 = (undefined4 *)(local_4 * 4 + 0x9d8);
        uVar8 = *(undefined2 *)(local_4 * 4 + 0x9da);
        uVar7 = param_1;
        iVar3 = WAVEOUTPREPAREHEADER(unaff_CS,0x20,*(undefined2 *)puVar5,uVar8);
        if (iVar3 != 0) break;
        uVar6 = *puVar5;
        pbVar1 = (byte *)((int)uVar6 + 0x10);
        *pbVar1 = *pbVar1 | 1;
        local_4 = local_4 + 1;
        unaff_CS = 0x1018;
      }
      if (DAT_1008_0020 != 0) {
        uVar8 = 0;
        MESSAGEBOX(0x1018,0x30,0x24,0x1008,0x1bc,0x1008);
      }
      FUN_1000_02c2(param_1,uVar8,uVar7);
      return 0;
    }
    uVar9 = 0x2000;
    uVar8 = GLOBALALLOC(unaff_CS,0x102c,0);
    uVar7 = 0x1018;
    unaff_CS = 0x1018;
    uVar6 = GLOBALLOCK(0x1018,uVar8,uVar9);
    uVar4 = (uint)((ulong)uVar6 >> 0x10);
    iVar3 = local_4 * 4;
    puVar5 = (undefined4 *)(iVar3 + 0x9d8);
    *(uint *)puVar5 = (uint)uVar6;
    *(uint *)(iVar3 + 0x9da) = uVar4;
    if ((uVar4 | *(uint *)puVar5) == 0) break;
    piVar2 = *(int **)puVar5;
    iVar3 = *(int *)(iVar3 + 0x9da);
    *piVar2 = (int)(piVar2 + 0x16);
    piVar2[1] = iVar3;
    uVar8 = *(undefined2 *)(DAT_1008_09d0 + 0x74);
    uVar7 = (undefined2)((ulong)*puVar5 >> 0x10);
    iVar3 = (int)*puVar5;
    *(undefined2 *)(iVar3 + 4) = *(undefined2 *)(DAT_1008_09d0 + 0x72);
    *(undefined2 *)(iVar3 + 6) = uVar8;
    uVar8 = (undefined2)((ulong)*puVar5 >> 0x10);
    iVar3 = (int)*puVar5;
    *(undefined2 *)(iVar3 + 0x12) = 0;
    *(undefined2 *)(iVar3 + 0x10) = 0;
    uVar8 = (undefined2)((ulong)*puVar5 >> 0x10);
    iVar3 = (int)*puVar5;
    *(undefined2 *)(iVar3 + 0x16) = 0;
    *(undefined2 *)(iVar3 + 0x14) = 0;
    *(undefined2 *)((int)*puVar5 + 0x20) = 1;
    uVar8 = (undefined2)((ulong)*puVar5 >> 0x10);
    iVar3 = (int)*puVar5;
    *(undefined2 *)(iVar3 + 0x24) = 0;
    *(undefined2 *)(iVar3 + 0x22) = 0;
    local_4 = local_4 + 1;
  }
  if (DAT_1008_0020 != 0) {
    uVar7 = 0;
    MESSAGEBOX(0x1018,0x30,0x24,0x1008,0x42,0x1008);
  }
  while (local_4 = local_4 + -1, -1 < local_4) {
    iVar3 = local_4 * 4;
    uVar8 = GLOBALHANDLE(0x1018,*(undefined2 *)(iVar3 + 0x9da),uVar7);
    GLOBALUNLOCK(0x1018,uVar8);
    uVar8 = GLOBALHANDLE(0x1018,*(undefined2 *)(iVar3 + 0x9da));
    GLOBALFREE(0x1018,uVar8);
    *(undefined2 *)(iVar3 + 0x9da) = 0;
    *(undefined2 *)(iVar3 + 0x9d8) = 0;
  }
  return 0;
}



undefined4 FUN_1000_0492(undefined4 param_1)

{
  uint uVar1;
  uint uVar2;
  undefined2 uVar3;
  uint uVar4;
  uint uVar5;
  
  if ((DAT_1008_00b2 | DAT_1008_00b0) == 0) {
LAB_1000_04a1:
    param_1._0_2_ = 0;
    param_1._2_2_ = 0;
  }
  else {
    uVar1 = DAT_1008_00b0;
    uVar2 = DAT_1008_00b2;
    if (((uint)param_1 == DAT_1008_00b0) && (param_1._2_2_ == DAT_1008_00b2)) {
      DAT_1008_00b0 = *(uint *)((uint)param_1 + 0x28);
      DAT_1008_00b2 = *(uint *)((uint)param_1 + 0x2a);
      if ((DAT_1008_00b2 | DAT_1008_00b0) == 0) {
        DAT_1008_00b6 = 0;
        DAT_1008_00b4 = 0;
      }
    }
    else {
      do {
        uVar5 = uVar2;
        uVar4 = uVar1;
        uVar1 = *(uint *)(uVar4 + 0x28);
        uVar2 = *(uint *)(uVar4 + 0x2a);
        if ((uVar2 | uVar1) == 0) break;
      } while ((uVar1 != (uint)param_1) || (uVar2 != param_1._2_2_));
      if ((uVar2 | uVar1) == 0) goto LAB_1000_04a1;
      uVar3 = *(undefined2 *)(uVar1 + 0x2a);
      *(undefined2 *)(uVar4 + 0x28) = *(undefined2 *)(uVar1 + 0x28);
      *(undefined2 *)(uVar4 + 0x2a) = uVar3;
      if ((uVar1 == DAT_1008_00b4) && (uVar2 == DAT_1008_00b6)) {
        DAT_1008_00b4 = DAT_1008_00b0;
        DAT_1008_00b6 = DAT_1008_00b2;
      }
    }
    *(undefined2 *)((uint)param_1 + 0x2a) = 0;
    *(undefined2 *)((uint)param_1 + 0x28) = 0;
  }
  return CONCAT22(param_1._2_2_,(uint)param_1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1000_0564(int param_1)

{
  undefined4 uVar1;
  undefined2 uVar2;
  
  if ((*(int *)(param_1 + 8) != 0) && (*(int *)(param_1 + 6) != 0)) {
    uVar2 = *(undefined2 *)(param_1 + 6);
    uVar1 = FUN_1000_001a(*(undefined2 *)(DAT_1008_09d0 + 0x80),uVar2);
    WAVEOUTRESET();
    FUN_1000_00da(uVar1);
    while ((DAT_1008_00b2 | DAT_1008_00b0) != 0) {
      *(undefined2 *)(DAT_1008_00b0 + 0x20) = 1;
      FUN_1000_0492(DAT_1008_00b0,DAT_1008_00b2);
    }
    FUN_1000_02c2(*(undefined2 *)(param_1 + 6),uVar2);
    WAVEOUTCLOSE(0x1018,*(undefined2 *)(param_1 + 6));
    *(undefined2 *)(param_1 + 6) = 0;
    DESTROYWINDOW(0x1018,*(undefined2 *)(param_1 + 2));
    *(undefined2 *)(param_1 + 2) = 0;
  }
  return;
}



int __cdecl16near FUN_1000_05f6(void)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 unaff_CS;
  undefined2 in_stack_0000fffc;
  
  if (*(int *)(DAT_1008_09d0 + 6) == 0) {
    uVar1 = CREATEWINDOW(unaff_CS,0,0,DAT_1008_09f0,0,0,0,0,0,0,0,0x800,0x1db,0x1008,0x24,0x1008,
                         in_stack_0000fffc);
    *(undefined2 *)(DAT_1008_09d0 + 2) = uVar1;
    if (*(int *)(DAT_1008_09d0 + 2) == 0) {
      if (DAT_1008_0020 != 0) {
        MESSAGEBOX(0x1018,0x30,0x24,0x1008,0x1dc,0x1008);
      }
    }
    else {
      iVar2 = WAVEOUTOPEN(0x1018,0,1,0,0,*(undefined2 *)(DAT_1008_09d0 + 2),0,DAT_1008_09d0 + 0x62,
                          0x1008,*(undefined2 *)(DAT_1008_09d0 + 10),DAT_1008_09d0 + 6);
      if (iVar2 != 0) {
        DESTROYWINDOW(0x1018,*(undefined2 *)(DAT_1008_09d0 + 2));
        *(undefined2 *)(DAT_1008_09d0 + 2) = 0;
        return iVar2;
      }
      iVar2 = FUN_1000_032e(*(undefined2 *)(DAT_1008_09d0 + 6));
      if (iVar2 != 0) goto LAB_1000_06d4;
      WAVEOUTCLOSE(0x1018,*(undefined2 *)(DAT_1008_09d0 + 6));
      *(undefined2 *)(DAT_1008_09d0 + 6) = 0;
      DESTROYWINDOW(0x1018,*(undefined2 *)(DAT_1008_09d0 + 2));
    }
    iVar2 = 1;
  }
  else {
LAB_1000_06d4:
    iVar2 = 0;
  }
  return iVar2;
}



int __stdcall16far WAVEMIXACTIVATE(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined2 unaff_CS;
  undefined4 uVar3;
  undefined2 uVar4;
  
  if (((param_2 == (int *)0x0) || (*param_2 != 0x5432)) || (param_2[0x46] != 0x5432)) {
    uVar4 = 0xffff;
    MESSAGEBEEP();
    unaff_CS = 0x1018;
    _WSPRINTF(0x1018,0xb8,0x1008,0x82c,0x1008,param_2,uVar4);
    DAT_1008_09d0 = (int *)0x0;
  }
  else {
    DAT_1008_09d0 = param_2;
  }
  if (DAT_1008_09d0 == (int *)0x0) {
    iVar2 = 5;
  }
  else {
    if (param_1 == 0) {
      if (DAT_1008_09d0[4] != 0) {
        uVar3 = FUN_1000_001a(DAT_1008_09d0[0x40],DAT_1008_09d0[3]);
        piVar1 = DAT_1008_09d0;
        DAT_1008_09d0[0x3c] = (int)uVar3;
        piVar1[0x3d] = (int)((ulong)uVar3 >> 0x10);
      }
      FUN_1000_0564(DAT_1008_09d0);
      DAT_1008_09d0[4] = 0;
      if (DAT_1008_09d2 == DAT_1008_09d0) {
        DAT_1008_09d2 = (int *)0x0;
      }
    }
    else {
      if (DAT_1008_09d2 != (int *)0x0) {
        WAVEMIXACTIVATE(0,DAT_1008_09d2);
      }
      DAT_1008_09d2 = DAT_1008_09d0;
      uVar4 = 0;
      SNDPLAYSOUND(unaff_CS,0,0);
      iVar2 = FUN_1000_05f6(uVar4);
      if (iVar2 != 0) {
        return iVar2;
      }
      DAT_1008_09d0[4] = 1;
      FUN_1000_00da(DAT_1008_09d0[0x3c],DAT_1008_09d0[0x3d]);
      do {
        uVar3 = FUN_1000_3b64();
        iVar2 = FUN_1000_08e2(1,uVar3);
      } while (iVar2 != 0);
    }
    iVar2 = 0;
  }
  return iVar2;
}



undefined2 __stdcall16far WAVEMIXOPENCHANNEL(uint param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  
  if (((param_4 == (int *)0x0) || (*param_4 != 0x5432)) || (param_4[0x46] != 0x5432)) {
    uVar3 = 0xffff;
    MESSAGEBEEP();
    _WSPRINTF(0x1018,0xb8,0x1008,0x82c,0x1008,param_4,uVar3);
    DAT_1008_09d0 = (int *)0x0;
  }
  else {
    DAT_1008_09d0 = param_4;
  }
  if (DAT_1008_09d0 == (int *)0x0) {
    return 5;
  }
  if ((param_2 == 0) && (param_1 < 3)) {
    if (((param_1 == 0) && (7 < param_3)) || ((param_1 == 2 && ((8 < param_3 || (param_3 < 1)))))) {
      return 0xb;
    }
    if (param_1 == 0) {
      if (DAT_1008_09d0[param_3 + 0x16] != -1) {
        return 4;
      }
      DAT_1008_09d0[param_3 + 0x16] = 0;
      DAT_1008_09d0[0x1e] = DAT_1008_09d0[0x1e] + 1;
    }
    else {
      if (param_1 == 1) {
        param_3 = 8;
      }
      else if (param_1 != 2) goto LAB_1000_083d;
      while (iVar1 = param_3 + -1, -1 < iVar1) {
        iVar2 = param_3 + 0x15;
        param_3 = iVar1;
        if (DAT_1008_09d0[iVar2] == -1) {
          DAT_1008_09d0[iVar2] = 0;
          DAT_1008_09d0[0x1e] = DAT_1008_09d0[0x1e] + 1;
        }
      }
    }
    uVar3 = 0;
  }
  else {
LAB_1000_083d:
    uVar3 = 10;
  }
  return uVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined2 FUN_1000_08e2(int param_1,uint *param_2)

{
  uint *puVar1;
  uint *puVar2;
  undefined2 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int **ppiVar8;
  int *piVar9;
  undefined2 uVar10;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  bool bVar11;
  uint local_28;
  uint local_26;
  uint local_24;
  uint local_22;
  int local_20;
  uint local_1e;
  uint local_1c;
  uint local_1a;
  int local_18;
  uint local_16;
  uint local_14;
  undefined2 *local_e;
  uint local_c;
  uint local_a;
  uint local_8;
  uint local_6;
  uint local_4;
  
  if ((param_2._2_2_ | (uint)(uint *)param_2) != 0) {
    local_1e = 0xffff;
    local_1c = 0xffff;
    local_8 = 0;
    for (local_6 = 0; local_6 < 8; local_6 = local_6 + 1) {
      puVar3 = (undefined2 *)*(int *)(DAT_1008_09d0 + local_6 * 2 + 0x2c);
      if (puVar3 != (undefined2 *)0xffff) {
        for (; puVar3 != (undefined2 *)0x0; puVar3 = (undefined2 *)*puVar3) {
          if ((*(uint *)(DAT_1008_09d0 + 0x7a) < (uint)puVar3[0x11]) ||
             ((*(uint *)(DAT_1008_09d0 + 0x7a) <= (uint)puVar3[0x11] &&
              (*(uint *)(DAT_1008_09d0 + 0x78) < (uint)puVar3[0x10])))) break;
        }
        local_e = puVar3;
        if (puVar3 != (undefined2 *)0x0) {
          if (((uint)puVar3[0xf] <= local_1c) &&
             (((uint)puVar3[0xf] < local_1c || ((uint)puVar3[0xe] < local_1e)))) {
            local_1e = puVar3[0xe];
            local_1c = puVar3[0xf];
          }
          *(undefined2 **)(local_8 * 2 + 0x938) = puVar3;
          local_8 = local_8 + 1;
        }
      }
    }
    if (local_8 != 0) {
      local_c = *param_2;
      local_a = ((uint *)param_2)[1];
      local_28 = *(uint *)(DAT_1008_09d0 + 0x72);
      local_16 = *(uint *)(DAT_1008_09d0 + 0x78);
      local_14 = *(uint *)(DAT_1008_09d0 + 0x7a);
      do {
        do {
          while( true ) {
            if (local_28 == 0) {
              uVar5 = *(uint *)(DAT_1008_09d0 + 0x7a);
              ((uint *)param_2)[0x11] = *(uint *)(DAT_1008_09d0 + 0x78);
              ((uint *)param_2)[0x12] = uVar5;
              iVar6 = DAT_1008_09d0;
              uVar7 = *(uint *)(DAT_1008_09d0 + 0x72);
              iVar4 = *(int *)(DAT_1008_09d0 + 0x74);
              puVar1 = (uint *)(DAT_1008_09d0 + 0x78);
              uVar5 = *puVar1;
              *puVar1 = *puVar1 + uVar7;
              *(int *)(iVar6 + 0x7a) = *(int *)(iVar6 + 0x7a) + iVar4 + (uint)CARRY2(uVar5,uVar7);
              if (param_1 != 0) {
                ((uint *)param_2)[0x15] = 0;
                ((uint *)param_2)[0x14] = 0;
                puVar2 = (uint *)param_2;
                uVar5 = param_2._2_2_;
                if ((DAT_1008_00b2 | (uint)DAT_1008_00b0) != 0) {
                  uVar10 = (undefined2)((ulong)_DAT_1008_00b4 >> 0x10);
                  ((uint *)_DAT_1008_00b4)[0x14] = (uint)(uint *)param_2;
                  ((uint *)_DAT_1008_00b4)[0x15] = param_2._2_2_;
                  puVar2 = DAT_1008_00b0;
                  uVar5 = DAT_1008_00b2;
                }
                DAT_1008_00b2 = uVar5;
                DAT_1008_00b0 = puVar2;
                _DAT_1008_00b4 = param_2;
                iVar4 = WAVEOUTWRITE(unaff_CS,0x20,(uint *)param_2,param_2._2_2_);
                if (iVar4 != 0) {
                  if (DAT_1008_0020 != 0) {
                    MESSAGEBOX(0x1018,0x30,0x24,0x1008,0x1fe,0x1008);
                  }
                  ((uint *)param_2)[0x10] = 1;
                  FUN_1000_0492((uint *)param_2,param_2._2_2_);
                }
              }
              return 1;
            }
            if ((local_1c < local_14) || ((local_1c <= local_14 && (local_1e <= local_16)))) break;
            uVar5 = local_14 + CARRY2(local_28,local_16);
            if ((local_1c < uVar5) || ((local_1c <= uVar5 && (local_1e <= local_28 + local_16)))) {
              local_22 = local_1e - local_16;
              local_20 = (local_1c - local_14) - (uint)(local_1e < local_16);
            }
            else {
              local_22 = local_28;
              local_20 = 0;
            }
            unaff_CS = 0x1000;
            FUN_1000_3676(local_c,local_a,0x80,local_22);
            bVar11 = CARRY2(local_c,local_22);
            local_c = local_c + local_22;
            local_a = local_a + (local_20 + (uint)bVar11) * 0x10;
            bVar11 = CARRY2(local_16,local_22);
            local_16 = local_16 + local_22;
            local_14 = local_14 + local_20 + (uint)bVar11;
            local_28 = local_28 - local_22;
          }
          local_26 = local_16 + local_28;
          local_24 = local_14 + CARRY2(local_16,local_28);
          local_6 = 0;
          for (local_4 = 0; local_4 < local_8; local_4 = local_4 + 1) {
            iVar4 = *(int *)(local_4 * 2 + 0x938);
            if ((*(uint *)(iVar4 + 0x1e) < local_14) ||
               ((*(uint *)(iVar4 + 0x1e) <= local_14 && (*(uint *)(iVar4 + 0x1c) <= local_16)))) {
              if ((*(uint *)(iVar4 + 0x22) <= local_24) &&
                 ((*(uint *)(iVar4 + 0x22) < local_24 || (*(uint *)(iVar4 + 0x20) < local_26)))) {
                local_26 = *(uint *)(iVar4 + 0x20);
                local_24 = *(uint *)(iVar4 + 0x22);
              }
              local_1a = local_16 - *(uint *)(iVar4 + 0x1c);
              local_18 = (local_14 - *(int *)(iVar4 + 0x1e)) -
                         (uint)(local_16 < *(uint *)(iVar4 + 0x1c));
              if (*(int *)(iVar4 + 0x12) != 0) {
                FUN_1000_351c(&local_1a,unaff_SS,*(undefined2 *)(iVar4 + 0x18),
                              *(undefined2 *)(iVar4 + 0x1a));
                uVar5 = *(uint *)(iVar4 + 0x18) - local_1a;
                iVar6 = (*(int *)(iVar4 + 0x1a) - local_18) -
                        (uint)(*(uint *)(iVar4 + 0x18) < local_1a);
                uVar7 = iVar6 + local_14 + (uint)CARRY2(uVar5,local_16);
                if ((uVar7 <= local_24) && ((uVar7 < local_24 || (uVar5 + local_16 < local_26)))) {
                  local_26 = uVar5 + local_16;
                  local_24 = iVar6 + local_14 + (uint)CARRY2(uVar5,local_16);
                }
              }
              uVar5 = *(uint *)(iVar4 + 0x24);
              iVar6 = *(int *)(iVar4 + 0x26);
              *(int *)(local_6 * 4 + 0x948) = local_1a + *(uint *)(iVar4 + 0x24);
              *(int *)(local_6 * 4 + 0x94a) =
                   (local_18 + (uint)CARRY2(local_1a,uVar5)) * 0x10 + iVar6;
              local_6 = local_6 + 1;
            }
            else if ((*(uint *)(iVar4 + 0x1e) <= local_24) &&
                    ((*(uint *)(iVar4 + 0x1e) < local_24 || (*(uint *)(iVar4 + 0x1c) < local_26))))
            {
              local_26 = *(uint *)(iVar4 + 0x1c);
              local_24 = *(uint *)(iVar4 + 0x1e);
            }
          }
        } while (local_6 == 0);
        uVar5 = local_26 - local_16;
        iVar4 = (local_24 - local_14) - (uint)(local_26 < local_16);
        unaff_CS = 0x1000;
        (*DAT_1008_09d6)(uVar5,local_6,0x948,local_c,local_a);
        bVar11 = CARRY2(local_c,uVar5);
        local_c = local_c + uVar5;
        local_a = local_a + (iVar4 + (uint)bVar11) * 0x10;
        local_28 = local_28 - uVar5;
        bVar11 = CARRY2(local_16,uVar5);
        local_16 = local_16 + uVar5;
        local_14 = local_14 + iVar4 + (uint)bVar11;
        local_1e = 0xffff;
        local_1c = 0xffff;
        local_6 = 0;
LAB_1000_0bb9:
        do {
          if (local_8 <= local_6) break;
          while (ppiVar8 = (int **)(local_6 * 2 + 0x938), *ppiVar8 != (int *)0x0) {
            uVar5 = (*ppiVar8)[0x11];
            if ((local_14 < uVar5) || ((local_14 <= uVar5 && (local_16 < (uint)(*ppiVar8)[0x10]))))
            break;
            *ppiVar8 = (int *)**ppiVar8;
          }
          piVar9 = (int *)(local_6 * 2 + 0x938);
          if (*piVar9 != 0) {
            uVar5 = *(uint *)(*piVar9 + 0x1e);
            if ((uVar5 <= local_1c) &&
               ((uVar5 < local_1c || (*(uint *)(*piVar9 + 0x1c) < local_1e)))) {
              local_1e = *(uint *)(*piVar9 + 0x1c);
              local_1c = *(uint *)(*piVar9 + 0x1e);
            }
            local_6 = local_6 + 1;
            goto LAB_1000_0bb9;
          }
          local_8 = local_8 - 1;
          *piVar9 = *(int *)(local_8 * 2 + 0x938);
        } while (local_8 != 0);
      } while( true );
    }
    if (param_1 != 0) {
      ((uint *)param_2)[0x10] = 1;
    }
  }
  return 0;
}



void __cdecl16near FUN_1000_0d10(void)

{
  undefined2 *puVar1;
  uint uVar2;
  undefined2 unaff_CS;
  undefined2 uVar3;
  undefined4 uVar4;
  int local_4;
  
  uVar4 = FUN_1000_001a(1,*(undefined2 *)(DAT_1008_09d0 + 6));
  uVar2 = (uint)((ulong)uVar4 >> 0x10);
  local_4 = 0;
  do {
    puVar1 = (undefined2 *)*(int *)(DAT_1008_09d0 + local_4 * 2 + 0x2c);
    if ((puVar1 != (undefined2 *)0x0) && (puVar1 != (undefined2 *)0xffff)) {
      while (((puVar1 != (undefined2 *)0x0 && ((uint)puVar1[0x11] <= uVar2)) &&
             (((uint)puVar1[0x11] < uVar2 || ((uint)puVar1[0x10] <= (uint)uVar4))))) {
        *(undefined2 *)(DAT_1008_09d0 + local_4 * 2 + 0x2c) = *puVar1;
        uVar3 = unaff_CS;
        if (puVar1[6] != 0) {
          uVar3 = 0x1018;
          POSTMESSAGE(unaff_CS,puVar1[10],puVar1[0xb],local_4,0x3bd);
        }
        if (puVar1 != (undefined2 *)0x0) {
          *puVar1 = DAT_1008_09d4;
          DAT_1008_09d4 = puVar1;
        }
        unaff_CS = uVar3;
        puVar1 = *(undefined2 **)(DAT_1008_09d0 + local_4 * 2 + 0x2c);
      }
    }
    local_4 = local_4 + 1;
  } while (local_4 < 8);
  return;
}



void __cdecl16far WAVEMIXPUMP(void)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  
  DAT_1008_09d0 = DAT_1008_09d2;
  uVar2 = DAT_1008_00b0;
  uVar4 = DAT_1008_00b2;
  while ((uVar4 | uVar2) != 0) {
    if ((*(byte *)(uVar2 + 0x10) & 1) == 0) {
      puVar1 = (uint *)(uVar2 + 0x2a);
      uVar2 = *(uint *)(uVar2 + 0x28);
      uVar4 = *puVar1;
    }
    else {
      FUN_1000_0492(uVar2,uVar4);
      *(undefined2 *)(uVar2 + 0x20) = 1;
      uVar2 = DAT_1008_00b0;
      uVar4 = DAT_1008_00b2;
    }
  }
  FUN_1000_0d10();
  do {
    uVar5 = FUN_1000_3b64();
    iVar3 = FUN_1000_08e2(1,uVar5);
  } while (iVar3 != 0);
  return;
}



void __stdcall16far WNDPROC(undefined4 param_1,undefined2 param_3,int param_4)

{
  int unaff_BP;
  undefined2 unaff_CS;
  
  if (param_4 == 0x3bd) {
    if (*(int *)((int)param_1 + 0x26) != DAT_1008_09d2) {
      DAT_1008_09d0 = DAT_1008_09d2;
    }
    WAVEMIXPUMP(0x1008,unaff_BP + 1);
  }
  else {
    DEFWINDOWPROC(unaff_CS,(int)param_1,param_1._2_2_,param_3,param_4);
  }
  return;
}



undefined2 FUN_1000_0e70(int param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  if (param_1 != 0) {
    uVar3 = *(uint *)(DAT_1008_09d0 + 0x78) - *(uint *)(param_1 + 0x1c);
    iVar4 = (*(int *)(DAT_1008_09d0 + 0x7a) - *(int *)(param_1 + 0x1e)) -
            (uint)(*(uint *)(DAT_1008_09d0 + 0x78) < *(uint *)(param_1 + 0x1c));
    puVar1 = (uint *)(param_1 + 0x1c);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + uVar3;
    *(int *)(param_1 + 0x1e) = *(int *)(param_1 + 0x1e) + iVar4 + (uint)CARRY2(uVar2,uVar3);
    puVar1 = (uint *)(param_1 + 0x20);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + uVar3;
    *(int *)(param_1 + 0x22) = *(int *)(param_1 + 0x22) + iVar4 + (uint)CARRY2(uVar2,uVar3);
    if ((*(uint *)(param_1 + 0x22) <= *(uint *)(param_1 + 0x1e)) &&
       ((*(uint *)(param_1 + 0x22) < *(uint *)(param_1 + 0x1e) ||
        (*(uint *)(param_1 + 0x20) < *(uint *)(param_1 + 0x1c))))) {
      *(undefined2 *)(param_1 + 0x20) = 0xffff;
      *(undefined2 *)(param_1 + 0x22) = 0xffff;
    }
  }
  WAVEMIXPUMP();
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined2 FUN_1000_0ed4(undefined2 param_1_00,undefined2 param_1,undefined2 param_2)

{
  uint *puVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined2 uVar6;
  uint uVar7;
  undefined2 uVar8;
  long lVar9;
  undefined4 uVar10;
  undefined2 uVar11;
  
  iVar5 = DAT_1008_09d0;
  *(undefined2 *)(DAT_1008_09d0 + 0x78) = param_1;
  *(undefined2 *)(iVar5 + 0x7a) = param_2;
  while( true ) {
    lVar2 = _DAT_1008_00b0;
    lVar9 = _DAT_1008_00b4;
    if ((DAT_1008_00b2 | DAT_1008_00b0) == 0) break;
    *(undefined2 *)(DAT_1008_00b0 + 0x20) = 1;
    FUN_1000_0492(DAT_1008_00b0,DAT_1008_00b2);
  }
  do {
    _DAT_1008_00b4 = lVar9;
    _DAT_1008_00b0 = lVar2;
    lVar9 = FUN_1000_3b64();
    uVar6 = (undefined2)((ulong)lVar9 >> 0x10);
    iVar5 = (int)lVar9;
    if (lVar9 == 0) {
LAB_1000_0f73:
      uVar6 = *(undefined2 *)(DAT_1008_09d0 + 0x78);
      uVar8 = *(undefined2 *)(DAT_1008_09d0 + 0x7a);
      uVar11 = *(undefined2 *)(DAT_1008_09d0 + 6);
      uVar10 = FUN_1000_001a(*(undefined2 *)(DAT_1008_09d0 + 0x80),uVar11);
      WAVEOUTRESET();
      FUN_1000_00da(uVar10);
      iVar5 = DAT_1008_09d0;
      *(undefined2 *)(DAT_1008_09d0 + 0x78) = uVar6;
      *(undefined2 *)(iVar5 + 0x7a) = uVar8;
      WAVEOUTPAUSE(0x1018,*(undefined2 *)(DAT_1008_09d0 + 6),uVar11);
      uVar4 = DAT_1008_00b0;
      uVar7 = DAT_1008_00b2;
      while ((uVar7 | uVar4) != 0) {
        iVar5 = WAVEOUTWRITE(0x1018,0x20,uVar4,uVar7);
        if (iVar5 != 0) {
          if (DAT_1008_0020 != 0) {
            MESSAGEBOX(0x1018,0x30,0x24,0x1008,0x21e,0x1008);
          }
          *(undefined2 *)(uVar4 + 0x20) = 1;
          FUN_1000_0492(uVar4,uVar7);
        }
        puVar1 = (uint *)(uVar4 + 0x28);
        uVar7 = *(uint *)(uVar4 + 0x2a);
        uVar4 = *puVar1;
      }
      WAVEOUTRESTART(0x1018,*(undefined2 *)(DAT_1008_09d0 + 6));
      return 1;
    }
    iVar3 = FUN_1000_08e2(0,lVar9);
    if (iVar3 == 0) {
      *(undefined2 *)(iVar5 + 0x20) = 1;
      goto LAB_1000_0f73;
    }
    *(undefined2 *)(iVar5 + 0x2a) = 0;
    *(undefined2 *)(iVar5 + 0x28) = 0;
    lVar2 = lVar9;
    if ((DAT_1008_00b2 | DAT_1008_00b0) != 0) {
      uVar8 = (undefined2)((ulong)_DAT_1008_00b4 >> 0x10);
      *(int *)((int)_DAT_1008_00b4 + 0x28) = iVar5;
      *(undefined2 *)((int)_DAT_1008_00b4 + 0x2a) = uVar6;
      lVar2 = _DAT_1008_00b0;
    }
  } while( true );
}



// WARNING: Restarted to delay deadcode elimination for space: ram

undefined2 __stdcall16far WAVEMIXPLAY(int *param_1)

{
  uint *puVar1;
  int *piVar2;
  int *piVar3;
  undefined2 *puVar4;
  bool bVar5;
  bool bVar6;
  int *piVar7;
  undefined2 uVar8;
  uint uVar9;
  undefined2 *puVar10;
  int **ppiVar11;
  int iVar12;
  int *piVar13;
  int *piVar14;
  undefined2 unaff_CS;
  int *piVar15;
  undefined4 uVar16;
  int *local_1c;
  int *local_e;
  int **local_8;
  
  bVar5 = false;
  bVar6 = false;
  if ((param_1._2_2_ | (uint)(int *)param_1) == 0) {
    if (DAT_1008_0020 == 0) {
      return 5;
    }
    uVar8 = 0x23e;
  }
  else {
    piVar2 = (int *)((int *)param_1)[1];
    if (((piVar2 == (int *)0x0) || (*piVar2 != 0x5432)) || (piVar2[0x46] != 0x5432)) {
      uVar8 = 0xffff;
      MESSAGEBEEP();
      unaff_CS = 0x1018;
      _WSPRINTF(0x1018,0xb8,0x1008,0x82c,0x1008,piVar2,uVar8);
      DAT_1008_09d0 = (int *)0x0;
      piVar2 = DAT_1008_09d0;
    }
    DAT_1008_09d0 = piVar2;
    piVar2 = DAT_1008_09d0;
    if (DAT_1008_09d0 == (int *)0x0) {
      if (DAT_1008_0020 == 0) {
        return 5;
      }
      uVar8 = 0x26d;
    }
    else if ((((int *)param_1)[4] | ((int *)param_1)[3]) == 0) {
      if (DAT_1008_0020 == 0) {
        return 5;
      }
      uVar8 = 0x29a;
    }
    else {
      if (DAT_1008_09d0[0x1e] != 0) {
        if ((*(byte *)((int *)param_1 + 6) & 2) == 0) {
          local_1c = (int *)((int *)param_1)[2];
        }
        else {
          local_1c = (int *)0xffff;
          local_e = (int *)0x0;
          do {
            if (DAT_1008_09d0[(int)(local_e + 0xb)] != -1) {
              if (local_1c != (int *)0xffff) {
                if (((uint)DAT_1008_09d0[(int)local_1c * 2 + 0x20] <
                     (uint)DAT_1008_09d0[(int)local_e * 2 + 0x20]) ||
                   (((uint)DAT_1008_09d0[(int)local_1c * 2 + 0x20] <=
                     (uint)DAT_1008_09d0[(int)local_e * 2 + 0x20] &&
                    ((uint)DAT_1008_09d0[(int)local_1c * 2 + 0x1f] <=
                     (uint)DAT_1008_09d0[(int)local_e * 2 + 0x1f])))) goto LAB_1000_1166;
              }
              local_1c = local_e;
            }
LAB_1000_1166:
            local_e = (int *)((int)local_e + 1);
          } while ((int)local_e < 8);
        }
        puVar1 = (uint *)(DAT_1008_09d0 + 0x2f);
        uVar9 = *puVar1;
        *puVar1 = *puVar1 + 1;
        piVar2[0x30] = piVar2[0x30] + (uint)(0xfffe < uVar9);
        piVar2 = DAT_1008_09d0;
        iVar12 = DAT_1008_09d0[0x30];
        DAT_1008_09d0[(int)local_1c * 2 + 0x1f] = DAT_1008_09d0[0x2f];
        piVar2[(int)local_1c * 2 + 0x20] = iVar12;
        if (DAT_1008_09d0[(int)(local_1c + 0xb)] == -1) {
          return 5;
        }
        if (DAT_1008_09d0[4] != 0) {
          local_8 = (int **)FUN_1000_0296();
          if (local_8 == (int **)0x0) {
            return 7;
          }
          ppiVar11 = local_8;
          for (iVar12 = 9; ppiVar11 = (int **)((int *)ppiVar11 + 1), iVar12 != 0;
              iVar12 = iVar12 + -1) {
            piVar15 = (int *)param_1;
            param_1._0_2_ = (int *)param_1 + 1;
            *ppiVar11 = (int *)*piVar15;
          }
                    // WARNING: Load size is inaccurate
          piVar14 = (int *)((ulong)local_8[4] >> 0x10);
          piVar13 = (int *)local_8[4];
          local_8[10] = piVar13;
          local_8[0xb] = piVar14;
          piVar2 = (int *)piVar13[0xb];
          local_8[0xc] = (int *)piVar13[10];
          local_8[0xd] = piVar2;
          uVar8 = (undefined2)((ulong)*(undefined4 *)(local_8 + 10) >> 0x10);
          iVar12 = (int)*(undefined4 *)(local_8 + 10);
          piVar2 = *(int **)(iVar12 + 0x12);
          local_8[0x12] = *(int **)(iVar12 + 0x10);
          local_8[0x13] = piVar2;
          piVar2 = local_8[0xc];
          piVar13 = local_8[0xd];
          uVar9 = (int)piVar2 - 1;
          piVar14 = local_8[0x12];
          piVar3 = local_8[0x13];
          local_8[0x14] = (int *)(uVar9 + (int)local_8[0x12]);
          local_8[0x15] =
               piVar3 + ((int)piVar13 +
                        ((uint)CARRY2(uVar9,(uint)piVar14) - (uint)(piVar2 == (int *)0x0))) * 8;
          local_8[3] = local_1c;
          if (DAT_1008_09d0[0x45] == 0) {
            DAT_1008_09d0[0x45] = (int)local_8;
            *local_8 = (int *)local_8;
          }
          else {
            *local_8 = *(int **)DAT_1008_09d0[0x45];
            *(int **)DAT_1008_09d0[0x45] = (int *)local_8;
            DAT_1008_09d0[0x45] = (int)local_8;
          }
          if ((*(byte *)(local_8 + 7) & 8) == 0) {
            if ((DAT_1008_00b2 | DAT_1008_00b0) == 0) {
              FUN_1000_00da(0,0);
            }
            piVar15 = (int *)FUN_1000_001a(DAT_1008_09d0[0x40],DAT_1008_09d0[3]);
            while (DAT_1008_09d0[0x45] != 0) {
              local_8 = (int **)*(int *)DAT_1008_09d0[0x45];
              if (local_8 == (int **)(int *)DAT_1008_09d0[0x45]) {
                DAT_1008_09d0[0x45] = 0;
              }
              else {
                *(int *)DAT_1008_09d0[0x45] = (int)*local_8;
              }
              *local_8 = (int *)0x0;
              piVar2 = local_8[3];
              if ((*(byte *)(local_8 + 7) & 1) == 0) {
                if (DAT_1008_09d0[(int)(piVar2 + 0xb)] == 0) {
                  DAT_1008_09d0[(int)(piVar2 + 0xb)] = (int)local_8;
                  piVar7 = piVar15;
                  if ((*(byte *)(local_8 + 7) & 4) == 0) {
                    piVar7 = (int *)CONCAT22(DAT_1008_09d0[0x3d],(int *)DAT_1008_09d0[0x3c]);
                  }
                }
                else {
                  for (ppiVar11 = (int **)DAT_1008_09d0[(int)(piVar2 + 0xb)];
                      *ppiVar11 != (int *)0x0; ppiVar11 = (int **)*ppiVar11) {
                  }
                  *ppiVar11 = (int *)local_8;
                  if ((*(byte *)(local_8 + 7) & 4) == 0) {
                    piVar2 = ppiVar11[0x10];
                    piVar13 = ppiVar11[0x11];
                    piVar7 = (int *)CONCAT22(piVar13,piVar2);
                    if ((piVar13 <= (int *)DAT_1008_09d0[0x3d]) &&
                       ((piVar13 < (int *)DAT_1008_09d0[0x3d] ||
                        (piVar7 = (int *)CONCAT22(piVar13,piVar2),
                        piVar2 < (int *)DAT_1008_09d0[0x3c])))) {
                      piVar7 = (int *)CONCAT22(DAT_1008_09d0[0x3d],(int *)DAT_1008_09d0[0x3c]);
                    }
                  }
                  else {
                    piVar7 = (int *)CONCAT22(ppiVar11[0x11],ppiVar11[0x10]);
                  }
                }
                local_8[0xe] = (int *)piVar7;
                local_8[0xf] = (int *)((ulong)piVar7 >> 0x10);
                if ((local_8[0xf] <= (int *)DAT_1008_09d0[0x3d]) &&
                   ((local_8[0xf] < (int *)DAT_1008_09d0[0x3d] ||
                    (local_8[0xe] < (int *)DAT_1008_09d0[0x3c])))) {
                  bVar5 = true;
                }
              }
              else {
                puVar4 = (undefined2 *)DAT_1008_09d0[(int)(piVar2 + 0xb)];
                while (puVar10 = puVar4, puVar10 != (undefined2 *)0x0) {
                  puVar4 = (undefined2 *)*puVar10;
                  if (puVar10 != (undefined2 *)0x0) {
                    *puVar10 = DAT_1008_09d4;
                    DAT_1008_09d4 = puVar10;
                  }
                }
                DAT_1008_09d0[(int)(piVar2 + 0xb)] = (int)local_8;
                if ((DAT_1008_00b2 | DAT_1008_00b0) != 0) {
                  bVar5 = true;
                }
                piVar7 = piVar15;
                if ((*(byte *)(local_8 + 7) & 4) == 0) {
                  piVar7 = (int *)CONCAT22(DAT_1008_09d0[0x3d],(int *)DAT_1008_09d0[0x3c]);
                }
                local_8[0xe] = (int *)piVar7;
                local_8[0xf] = (int *)((ulong)piVar7 >> 0x10);
              }
              if (local_8[9] == (int *)0xffff) {
                local_8[0x10] = (int *)0xffff;
                local_8[0x11] = (int *)0xffff;
              }
              else {
                uVar16 = FUN_1000_35d8((int)local_8[9] + 1,0,local_8[0xc],local_8[0xd]);
                piVar2 = local_8[0xe];
                iVar12 = (uint)uVar16 + (int)local_8[0xe];
                piVar13 = local_8[0xf];
                local_8[0x10] = (int *)(iVar12 + -1);
                local_8[0x11] =
                     (int *)((int)piVar13 +
                            (((uint)CARRY2((uint)uVar16,(uint)piVar2) + (int)((ulong)uVar16 >> 0x10)
                             ) - (uint)(iVar12 == 0)));
              }
            }
            if (bVar5) {
              unaff_CS = 0x1000;
              iVar12 = (*(code *)DAT_1008_09d0[0x43])(local_8,local_8[0xe],local_8[0xf]);
              if (iVar12 != 0) {
                return 0;
              }
            }
            uVar8 = unaff_CS;
            if ((DAT_1008_00b2 | DAT_1008_00b0) == 0) {
              bVar6 = true;
              uVar8 = 0x1018;
              WAVEOUTPAUSE(unaff_CS,DAT_1008_09d0[3]);
            }
            do {
              uVar16 = FUN_1000_3b64();
              iVar12 = FUN_1000_08e2(1,uVar16);
            } while (iVar12 != 0);
            if (bVar6) {
              WAVEOUTRESTART(uVar8,DAT_1008_09d0[3]);
            }
          }
        }
        return 0;
      }
      if (DAT_1008_0020 == 0) {
        return 5;
      }
      uVar8 = 0x2c3;
    }
  }
  MESSAGEBOX(unaff_CS,0x30,0x24,0x1008,uVar8,0x1008);
  return 5;
}



undefined2 __stdcall16far
WAVEMIXFLUSHCHANNEL(byte param_1,undefined2 param_2_00,int param_2,int *param_3)

{
  undefined2 *puVar1;
  bool bVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  int local_a;
  undefined2 *local_6;
  
  bVar2 = false;
  if (((param_3 == (int *)0x0) || (*param_3 != 0x5432)) || (param_3[0x46] != 0x5432)) {
    uVar3 = 0xffff;
    MESSAGEBEEP();
    _WSPRINTF(0x1018,0xb8,0x1008,0x82c,0x1008,param_3,uVar3);
    DAT_1008_09d0 = (int *)0x0;
  }
  else {
    DAT_1008_09d0 = param_3;
  }
  if (DAT_1008_09d0 == (int *)0x0) {
LAB_1000_14ec:
    uVar3 = 5;
  }
  else {
    if ((param_1 & 1) == 0) {
      if ((param_2 < 0) || (7 < param_2)) {
        return 0xb;
      }
      if (DAT_1008_09d0[param_2 + 0x16] == -1) goto LAB_1000_14ec;
      local_a = param_2 + 1;
    }
    else {
      param_2 = 0;
      local_a = 8;
    }
    for (; param_2 < local_a; param_2 = param_2 + 1) {
      local_6 = (undefined2 *)DAT_1008_09d0[param_2 + 0x16];
      if (local_6 != (undefined2 *)0xffff) {
        DAT_1008_09d0[param_2 + 0x16] = 0;
        while (local_6 != (undefined2 *)0x0) {
          puVar1 = (undefined2 *)*local_6;
          if (local_6 != (undefined2 *)0x0) {
            *local_6 = DAT_1008_09d4;
            DAT_1008_09d4 = local_6;
          }
          bVar2 = true;
          local_6 = puVar1;
        }
      }
    }
    if (((bVar2) && ((param_1 & 2) == 0)) && (DAT_1008_09d0[4] != 0)) {
      uVar4 = FUN_1000_001a(DAT_1008_09d0[0x40],DAT_1008_09d0[3]);
      (*(code *)DAT_1008_09d0[0x43])(0,uVar4);
    }
    uVar3 = 0;
  }
  return uVar3;
}



int __stdcall16far WAVEMIXCLOSECHANNEL(uint param_1,undefined2 param_2,int param_3,int *param_4)

{
  int iVar1;
  undefined2 uVar2;
  int local_8;
  
  if (((param_4 == (int *)0x0) || (*param_4 != 0x5432)) || (param_4[0x46] != 0x5432)) {
    uVar2 = 0xffff;
    MESSAGEBEEP();
    _WSPRINTF(0x1018,0xb8,0x1008,0x82c,0x1008,param_4,uVar2);
    DAT_1008_09d0 = (int *)0x0;
  }
  else {
    DAT_1008_09d0 = param_4;
  }
  if (DAT_1008_09d0 == (int *)0x0) {
    iVar1 = 5;
  }
  else {
    iVar1 = WAVEMIXFLUSHCHANNEL(param_1 | 2,param_2,param_3,param_4);
    if (iVar1 == 0) {
      if ((param_1 & 1) == 0) {
        local_8 = param_3 + 1;
      }
      else {
        local_8 = 8;
        param_3 = 0;
      }
      for (; param_3 < local_8; param_3 = param_3 + 1) {
        if (DAT_1008_09d0[param_3 + 0x16] != -1) {
          DAT_1008_09d0[param_3 + 0x16] = -1;
          DAT_1008_09d0[0x1e] = DAT_1008_09d0[0x1e] + -1;
        }
      }
      iVar1 = 0;
    }
  }
  return iVar1;
}



undefined2 __stdcall16far WAVEMIXFREEWAVE(int *param_1,int *param_3)

{
  int **ppiVar1;
  undefined2 uVar2;
  int **ppiVar3;
  int **ppiVar4;
  undefined2 unaff_CS;
  int *local_c;
  int **local_a;
  int **local_8;
  int local_6;
  
  if (((param_3 == (int *)0x0) || (*param_3 != 0x5432)) || (param_3[0x46] != 0x5432)) {
    uVar2 = 0xffff;
    MESSAGEBEEP();
    unaff_CS = 0x1018;
    _WSPRINTF(0x1018,0xb8,0x1008,0x82c,0x1008,param_3,uVar2);
    local_c = (int *)0x0;
  }
  else {
    local_c = param_3;
  }
  if (local_c != (int *)0x0) {
    if (((uint)param_1._2_2_ | (uint)(int *)param_1) != 0) {
      local_6 = 0;
      while (ppiVar3 = (int **)(local_c + local_6 + 0x16), *ppiVar3 == (int *)0xffff) {
LAB_1000_1760:
        local_6 = local_6 + 1;
        if (7 < local_6) {
          if ((((int *)param_1)[9] | ((int *)param_1)[8]) != 0) {
            uVar2 = GLOBALHANDLE(unaff_CS,((int *)param_1)[9]);
            GLOBALUNLOCK(0x1018,uVar2);
            uVar2 = GLOBALHANDLE(0x1018,((int *)param_1)[9]);
            unaff_CS = 0x1018;
            GLOBALFREE(0x1018,uVar2);
          }
          uVar2 = GLOBALHANDLE(unaff_CS,param_1._2_2_);
          GLOBALUNLOCK(0x1018,uVar2);
          uVar2 = GLOBALHANDLE(0x1018,param_1._2_2_);
          GLOBALFREE(0x1018,uVar2);
          return 0;
        }
      }
      local_a = (int **)0x0;
      ppiVar4 = ppiVar3;
      ppiVar1 = local_a;
LAB_1000_16f8:
      do {
        local_a = ppiVar1;
        local_8 = (int **)*ppiVar4;
        while( true ) {
          if (local_8 == (int **)0x0) goto LAB_1000_1760;
          ppiVar4 = local_8;
          ppiVar1 = local_8;
          if ((local_8[10] != (int *)param_1) || (local_8[0xb] != param_1._2_2_))
          goto LAB_1000_16f8;
          if (local_a != (int **)0x0) break;
          local_8 = (int **)*local_8;
          ppiVar4 = (int **)*ppiVar3;
          if (ppiVar4 != (int **)0x0) {
            *ppiVar4 = (int *)DAT_1008_09d4;
            DAT_1008_09d4 = ppiVar4;
          }
          *ppiVar3 = (int *)local_8;
        }
        *local_a = *local_8;
        ppiVar4 = local_a;
        ppiVar1 = local_a;
        if (local_8 != (int **)0x0) {
          *local_8 = (int *)DAT_1008_09d4;
          DAT_1008_09d4 = local_8;
        }
      } while( true );
    }
  }
  return 5;
}



int * FUN_1000_17c4(undefined2 *param_1,uint param_2,uint param_3,int *param_4,undefined2 param_5)

{
  int *piVar1;
  int *piVar2;
  undefined2 uVar3;
  undefined2 unaff_CS;
  long lVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined2 uVar7;
  int local_12;
  int local_10;
  undefined4 local_e;
  undefined4 local_a;
  
  piVar6 = (int *)CONCAT22(param_5,param_4);
  if (param_2 != param_3) {
    if (((param_3 == 8) || (param_3 == 0x10)) && ((param_2 == 8 || (param_2 == 0x10)))) {
      uVar3 = (undefined2)((ulong)param_1 >> 0x10);
      lVar4 = FUN_1000_3616(*param_1,((undefined2 *)param_1)[1],param_3 >> 3,0);
      uVar7 = 0x2002;
      uVar5 = FUN_1000_35d8(lVar4,param_2 >> 3,0);
      *param_1 = (int)uVar5;
      ((undefined2 *)param_1)[1] = (int)((ulong)uVar5 >> 0x10);
      uVar3 = GLOBALALLOC(unaff_CS,uVar5);
      unaff_CS = 0x1018;
      piVar6 = (int *)GLOBALLOCK(0x1018,uVar3,uVar7);
      if (piVar6 != (int *)0x0) {
        if (param_2 >> 3 < param_3 >> 3) {
          local_e = (int *)CONCAT22(param_5,param_4);
          local_a = piVar6;
          while( true ) {
            piVar2 = local_a;
            piVar1 = local_e;
            local_10 = (int)((ulong)lVar4 >> 0x10);
            local_12 = (int)lVar4;
            if (lVar4 == 0) break;
            if ((int *)0xfffd < (int *)local_e) {
              local_e._2_2_ = local_e._2_2_ + 0x68;
            }
            local_e = (int *)CONCAT22(local_e._2_2_,(int *)local_e + 1);
            if ((int *)local_a == (int *)0xffff) {
              local_a._2_2_ = local_a._2_2_ + 0x68;
            }
            local_a = (int *)CONCAT22(local_a._2_2_,(int *)((int)(int *)local_a + 1));
            *(char *)piVar2 = (char)(*piVar1 + (uint)(byte)(*piVar1 >> 0xf) >> 8) + -0x80;
            lVar4 = CONCAT22(local_10 - (uint)(local_12 == 0),local_12 + -1);
          }
        }
        else {
          local_a = (int *)CONCAT22(param_5,param_4);
          local_e = piVar6;
          while( true ) {
            piVar2 = local_a;
            piVar1 = local_e;
            local_10 = (int)((ulong)lVar4 >> 0x10);
            local_12 = (int)lVar4;
            if (lVar4 == 0) break;
            if ((int *)local_a == (int *)0xffff) {
              local_a._2_2_ = local_a._2_2_ + 0x68;
            }
            local_a = (int *)CONCAT22(local_a._2_2_,(int *)((int)(int *)local_a + 1));
            if ((int *)0xfffd < (int *)local_e) {
              local_e._2_2_ = local_e._2_2_ + 0x68;
            }
            local_e = (int *)CONCAT22(local_e._2_2_,(int *)local_e + 1);
            *piVar1 = (uint)(byte)(*(char *)piVar2 + 0x80) << 8;
            lVar4 = CONCAT22(local_10 - (uint)(local_12 == 0),local_12 + -1);
          }
        }
        uVar3 = GLOBALHANDLE(0x1018,param_5);
        GLOBALUNLOCK(0x1018,uVar3);
        uVar3 = GLOBALHANDLE(0x1018,param_5);
        GLOBALFREE(0x1018,uVar3);
        return piVar6;
      }
      if (DAT_1008_0020 != 0) {
        unaff_CS = 0x1018;
        MESSAGEBOX(0x1018,0x40,0x24,0x1008,0x42,0x1008);
      }
    }
    uVar3 = GLOBALHANDLE(unaff_CS,param_5);
    GLOBALUNLOCK(0x1018,uVar3);
    uVar3 = GLOBALHANDLE(0x1018,param_5);
    GLOBALFREE(0x1018,uVar3);
    piVar6 = (int *)0x0;
  }
  return piVar6;
}



int * FUN_1000_196e(undefined2 *param_1,int param_2,uint param_3,uint param_4,int *param_5,
                   undefined2 param_6)

{
  byte *pbVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined2 uVar5;
  undefined2 unaff_CS;
  undefined4 uVar6;
  long lVar7;
  int *piVar8;
  uint uVar9;
  undefined2 uVar10;
  int iVar11;
  undefined2 uVar12;
  uint uVar13;
  undefined2 uVar14;
  int local_1a;
  int local_18;
  undefined4 local_16;
  undefined4 local_12;
  undefined4 local_e;
  undefined4 local_a;
  
  piVar8 = (int *)CONCAT22(param_6,param_5);
  if (param_3 != param_4) {
    uVar14 = 0;
    uVar12 = 0;
    uVar10 = 0;
    uVar5 = (undefined2)((ulong)param_1 >> 0x10);
    uVar9 = param_4;
    iVar11 = param_2;
    uVar13 = param_3;
    uVar6 = FUN_1000_3616(*param_1,((undefined2 *)param_1)[1],param_2,0);
    lVar7 = FUN_1000_3616(uVar6,uVar9,uVar10);
    uVar6 = FUN_1000_35d8(lVar7,iVar11,uVar12);
    uVar6 = FUN_1000_35d8(uVar6,uVar13,uVar14);
    *param_1 = (int)uVar6;
    ((undefined2 *)param_1)[1] = (int)((ulong)uVar6 >> 0x10);
    uVar5 = GLOBALALLOC(unaff_CS,uVar6);
    uVar10 = 0x1018;
    piVar8 = (int *)GLOBALLOCK(0x1018,uVar5);
    if (piVar8 == (int *)0x0) {
      if (DAT_1008_0020 != 0) {
        uVar10 = 0;
        MESSAGEBOX(0x1018,0x40,0x24,0x1008,0x42,0x1008);
      }
      uVar5 = GLOBALHANDLE(0x1018,param_6,uVar10);
      GLOBALUNLOCK(0x1018,uVar5);
      uVar5 = GLOBALHANDLE(0x1018,param_6);
      GLOBALFREE(0x1018,uVar5);
      piVar8 = (int *)0x0;
    }
    else {
      local_16 = piVar8;
      local_e = piVar8;
      if (param_4 < param_3) {
        if (param_2 == 1) {
          local_a = (int *)CONCAT22(param_6,param_5);
          while( true ) {
            piVar4 = local_e;
            local_18 = (int)((ulong)lVar7 >> 0x10);
            local_1a = (int)lVar7;
            if (lVar7 == 0) break;
            piVar2 = (int *)local_e;
            pbVar1 = (byte *)((int)(int *)local_e + 1);
            if ((int *)local_e == (int *)0xffff) {
              local_e._2_2_ = local_e._2_2_ + 0x68;
            }
            local_e = (int *)CONCAT22(local_e._2_2_,pbVar1);
            *(byte *)piVar4 = *(byte *)local_a;
            *(byte *)local_e = *(byte *)local_a;
            local_a = (int *)CONCAT22(local_a._2_2_ +
                                      (-(uint)((int *)0xfffe < (int *)local_a) & 0x68),
                                      (int *)((int)(int *)local_a + 1));
            local_e = (int *)CONCAT22(local_e._2_2_ + (-(uint)((byte *)0xfffe < pbVar1) & 0x68),
                                      piVar2 + 1);
            lVar7 = CONCAT22(local_18 - (uint)(local_1a == 0),local_1a + -1);
          }
        }
        else {
          local_12 = (int *)CONCAT22(param_6,param_5);
          while( true ) {
            piVar4 = local_16;
            local_18 = (int)((ulong)lVar7 >> 0x10);
            local_1a = (int)lVar7;
            if (lVar7 == 0) break;
            piVar3 = (int *)local_16;
            piVar2 = (int *)local_16 + 1;
            if ((int *)0xfffd < (int *)local_16) {
              local_16._2_2_ = local_16._2_2_ + 0x68;
            }
            local_16 = (int *)CONCAT22(local_16._2_2_,piVar2);
            *piVar4 = *local_12;
            *local_16 = *local_12;
            local_12 = (int *)CONCAT22(local_12._2_2_ +
                                       (-(uint)((int *)0xfffd < (int *)local_12) & 0x68),
                                       (int *)local_12 + 1);
            local_16 = (int *)CONCAT22(local_16._2_2_ + (-(uint)((int *)0xfffd < piVar2) & 0x68),
                                       piVar3 + 2);
            lVar7 = CONCAT22(local_18 - (uint)(local_1a == 0),local_1a + -1);
          }
        }
      }
      else if (param_2 == 1) {
        local_a = (int *)CONCAT22(param_6,param_5);
        while( true ) {
          piVar4 = local_e;
          local_18 = (int)((ulong)lVar7 >> 0x10);
          local_1a = (int)lVar7;
          if (lVar7 == 0) break;
          if ((int *)local_e == (int *)0xffff) {
            local_e._2_2_ = local_e._2_2_ + 0x68;
          }
          local_e = (int *)CONCAT22(local_e._2_2_,(int *)((int)(int *)local_e + 1));
          *(byte *)piVar4 =
               (byte)(((uint)*(byte *)((int)(int *)local_a + 1) + (uint)*(byte *)local_a) / 2);
          local_a = (int *)CONCAT22(local_a._2_2_ + (-(uint)((int *)0xfffd < (int *)local_a) & 0x68)
                                    ,(int *)local_a + 1);
          lVar7 = CONCAT22(local_18 - (uint)(local_1a == 0),local_1a + -1);
        }
      }
      else {
        local_12 = (int *)CONCAT22(param_6,param_5);
        while( true ) {
          piVar4 = local_16;
          local_18 = (int)((ulong)lVar7 >> 0x10);
          local_1a = (int)lVar7;
          if (lVar7 == 0) break;
          if ((int *)0xfffd < (int *)local_16) {
            local_16._2_2_ = local_16._2_2_ + 0x68;
          }
          local_16 = (int *)CONCAT22(local_16._2_2_,(int *)local_16 + 1);
          *piVar4 = (((int *)local_12)[1] + *local_12) / 2;
          local_12 = (int *)CONCAT22(local_12._2_2_ +
                                     (-(uint)((int *)0xfffb < (int *)local_12) & 0x68),
                                     (int *)local_12 + 2);
          lVar7 = CONCAT22(local_18 - (uint)(local_1a == 0),local_1a + -1);
        }
      }
      uVar5 = GLOBALHANDLE(0x1018,param_6);
      GLOBALUNLOCK(0x1018,uVar5);
      uVar5 = GLOBALHANDLE(0x1018,param_6);
      GLOBALFREE(0x1018,uVar5);
    }
  }
  return piVar8;
}



void FUN_1000_1c18(uint param_1,int param_2,int param_3,uint *param_4,int param_5,
                  undefined2 *param_6)

{
  uint uVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 uVar4;
  bool bVar5;
  int local_20;
  int local_1e;
  uint local_1c;
  int local_1a;
  undefined4 local_18;
  uint *local_14;
  int local_12;
  int local_c;
  int local_a;
  int local_8;
  undefined4 local_6;
  
  if (param_2 == 1) {
    for (local_a = 0; puVar3 = param_6, iVar2 = param_5, local_a < (int)param_1;
        local_a = local_a + 1) {
      if (param_4 == (uint *)0xffff) {
        param_5 = param_5 + 0x68;
      }
      local_6 = (uint *)CONCAT22(iVar2,param_4);
      local_8 = 0;
      for (local_c = 0; local_c < param_3; local_c = local_c + 1) {
        local_8 = local_8 + (*(byte *)local_6 - 0x80);
        local_6 = (uint *)CONCAT22(local_6._2_2_ +
                                   (((int)param_1 >> 0xf) +
                                   (uint)CARRY2((uint)(uint *)local_6,param_1)) * 0x10,
                                   (uint *)((int)(uint *)local_6 + param_1));
      }
      if ((undefined2 *)param_6 == (undefined2 *)0xffff) {
        param_6._2_2_ = param_6._2_2_ + 0x68;
      }
      param_6 = (undefined2 *)CONCAT22(param_6._2_2_,(undefined2 *)((int)(undefined2 *)param_6 + 1))
      ;
      *(char *)puVar3 = (char)(local_8 / param_3) + -0x80;
      param_4 = (uint *)((int)param_4 + 1);
    }
  }
  else {
    local_14 = param_4;
    local_12 = param_5;
    for (local_1e = 0; iVar2 = local_12, local_1e < (int)param_1; local_1e = local_1e + 1) {
      if ((uint *)0xfffd < local_14) {
        local_12 = local_12 + 0x68;
      }
      local_18 = (uint *)CONCAT22(iVar2,local_14);
      local_1a = 0;
      local_1c = 0;
      for (local_20 = 0; local_20 < param_3; local_20 = local_20 + 1) {
        uVar1 = *local_18;
        bVar5 = CARRY2(local_1c,uVar1);
        local_1c = local_1c + uVar1;
        local_1a = local_1a + ((int)uVar1 >> 0xf) + (uint)bVar5;
        local_18 = (uint *)CONCAT22(local_18._2_2_ +
                                    (((int)param_1 >> 0xf) * 2 + (uint)CARRY2(param_1,param_1) +
                                    (uint)CARRY2((uint)(uint *)local_18,param_1 * 2)) * 0x10,
                                    (uint *)local_18 + param_1);
      }
      uVar4 = FUN_1000_353e(local_1c,local_1a,param_3,param_3 >> 0xf);
      *param_6 = uVar4;
      local_14 = local_14 + 1;
    }
  }
  return;
}



void FUN_1000_1d3a(uint param_1,int param_2,int param_3,int *param_4,int *param_6)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int local_22;
  int local_20;
  int local_1e;
  int *local_1a;
  int local_18;
  undefined4 local_16;
  undefined4 local_12;
  int local_e;
  int local_c;
  byte local_a;
  int *local_6;
  int local_4;
  
  iVar5 = (int)param_1 >> 0xf;
  if (param_2 == 1) {
    local_6 = (int *)param_6;
    local_4 = param_6._2_2_;
    for (local_c = 0; iVar6 = local_4, local_c < (int)param_1; local_c = local_c + 1) {
      bVar1 = *(byte *)(param_1 + (int)(int *)param_4);
      local_a = *(byte *)param_4;
      uVar4 = (uint)local_a;
      if (local_6 == (int *)0xffff) {
        local_4 = local_4 + 0x68;
      }
      *(byte *)local_6 = local_a;
      param_6 = (int *)CONCAT22((iVar5 + (uint)CARRY2(param_1,(uint)local_6)) * 0x10 + iVar6,
                                (byte *)(param_1 + (int)local_6));
      for (local_e = 1; local_e < param_3; local_e = local_e + 1) {
        local_a = local_a + (char)((int)(bVar1 - uVar4) / param_3);
        *(byte *)param_6 = local_a;
        param_6 = (int *)CONCAT22(param_6._2_2_ +
                                  (iVar5 + (uint)CARRY2((uint)(int *)param_6,param_1)) * 0x10,
                                  (byte *)((int)(int *)param_6 + param_1));
      }
      param_4 = (int *)CONCAT22(param_4._2_2_ + (-(uint)((int *)0xfffe < (int *)param_4) & 0x68),
                                (int *)((int)(int *)param_4 + 1));
      local_6 = (int *)((int)local_6 + 1);
    }
  }
  else {
    local_12 = param_4;
    local_1a = (int *)param_6;
    local_18 = param_6._2_2_;
    for (local_20 = 0; iVar6 = local_18, local_20 < (int)param_1; local_20 = local_20 + 1) {
      if ((int *)0xfffd < local_1a) {
        local_18 = local_18 + 0x68;
      }
      local_16 = (int *)CONCAT22(iVar6,local_1a);
      iVar6 = (iVar5 * 2 + (uint)CARRY2(param_1,param_1) + (uint)CARRY2(param_1 * 2,(uint)local_1a))
              * 0x10 + iVar6;
      iVar2 = local_1a[param_1];
      iVar3 = *local_12;
      local_1e = *local_12;
      *local_16 = local_1e;
      local_16 = (int *)CONCAT22(iVar6,local_1a + param_1);
      for (local_22 = 1; local_22 < param_3; local_22 = local_22 + 1) {
        local_1e = local_1e + (iVar2 - iVar3) / param_3;
        *local_16 = local_1e;
        local_16 = (int *)CONCAT22(local_16._2_2_ +
                                   (iVar5 * 2 + (uint)CARRY2(param_1,param_1) +
                                   (uint)CARRY2((uint)(int *)local_16,param_1 * 2)) * 0x10,
                                   (int *)local_16 + param_1);
      }
      local_12 = (int *)CONCAT22(local_12._2_2_ + (-(uint)((int *)0xfffd < (int *)local_12) & 0x68),
                                 (int *)local_12 + 1);
      local_1a = local_1a + 1;
    }
  }
  return;
}



undefined *
FUN_1000_1ef0(undefined2 *param_1,int param_2,int param_3,uint param_4,uint param_5,uint param_6,
             uint param_7,undefined *param_8)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined2 uVar4;
  uint uVar5;
  int iVar6;
  undefined2 uVar7;
  undefined2 unaff_CS;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined *puVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  undefined4 local_2c;
  undefined4 local_1c;
  uint local_18;
  uint local_16;
  int local_c;
  int local_a;
  int local_8;
  int local_6;
  
  uVar4 = param_8._2_2_;
  if ((param_4 != param_6) || (param_5 != param_7)) {
    uVar1 = param_2 * param_3;
    iVar6 = (int)uVar1 >> 0xf;
    uVar7 = (undefined2)((ulong)param_1 >> 0x10);
    uVar8 = FUN_1000_3616(*param_1,((undefined2 *)param_1)[1],uVar1,iVar6);
    if ((param_5 < param_7) || ((param_5 <= param_7 && (param_4 <= param_6)))) {
      local_6 = 0;
      local_8 = FUN_1000_3616(param_6,param_7,param_4,param_5);
      uVar9 = FUN_1000_3616(uVar8,local_8,local_8 >> 0xf);
    }
    else {
      local_6 = FUN_1000_3616(param_4,param_5,param_6,param_7);
      local_8 = 0;
      uVar9 = FUN_1000_35d8(local_6,local_6 >> 0xf,uVar8);
    }
    local_18 = (uint)uVar9;
    uVar13 = 0x2002;
    uVar10 = FUN_1000_35d8(uVar1,iVar6,uVar9);
    *param_1 = (int)uVar10;
    ((undefined2 *)param_1)[1] = (int)((ulong)uVar10 >> 0x10);
    uVar7 = GLOBALALLOC(unaff_CS,uVar10);
    uVar12 = 0x1018;
    puVar11 = (undefined *)GLOBALLOCK(0x1018,uVar7,uVar13);
    if (puVar11 == (undefined *)0x0) {
      if (DAT_1008_0020 != 0) {
        uVar12 = 0;
        MESSAGEBOX(0x1018,0x40,0x24,0x1008,0x42,0x1008);
      }
      uVar4 = GLOBALHANDLE(0x1018,param_8._2_2_,uVar12);
      GLOBALUNLOCK(0x1018,uVar4);
      uVar4 = GLOBALHANDLE(0x1018,param_8._2_2_);
      GLOBALFREE(0x1018,uVar4);
      param_8 = (undefined *)0x0;
    }
    else {
      local_1c = puVar11;
      if (local_6 < 1) {
        local_16 = (int)((ulong)uVar9 >> 0x10) - (uint)(local_18 == 0);
        while( true ) {
          local_18 = local_18 - 1;
          if ((local_16 | local_18) == 0) break;
          FUN_1000_1c18(param_2,param_3,local_8,(undefined *)param_8,param_8._2_2_,
                        (undefined *)local_1c,local_1c._2_2_);
          local_1c = (undefined *)
                     CONCAT22(local_1c._2_2_ +
                              (iVar6 + (uint)CARRY2((uint)(undefined *)local_1c,uVar1)) * 0x10,
                              (undefined *)local_1c + uVar1);
          uVar5 = local_8 * uVar1;
          param_8 = (undefined *)
                    CONCAT22(param_8._2_2_ +
                             (((int)uVar5 >> 0xf) + (uint)CARRY2((uint)(undefined *)param_8,uVar5))
                             * 0x10,(undefined *)param_8 + uVar5);
          local_16 = local_16 - (local_18 == 0);
        }
        for (local_a = 0; puVar3 = local_1c, puVar2 = param_8, local_a < (int)uVar1;
            local_a = local_a + 1) {
          if ((undefined *)param_8 == (undefined *)0xffff) {
            param_8._2_2_ = param_8._2_2_ + 0x68;
          }
          param_8 = (undefined *)CONCAT22(param_8._2_2_,(undefined *)param_8 + 1);
          if ((undefined *)local_1c == (undefined *)0xffff) {
            local_1c._2_2_ = local_1c._2_2_ + 0x68;
          }
          local_1c = (undefined *)CONCAT22(local_1c._2_2_,(undefined *)local_1c + 1);
          *puVar3 = *puVar2;
        }
      }
      else {
        local_16 = (int)((ulong)uVar8 >> 0x10) - (uint)((uint)uVar8 == 0);
        local_18 = (uint)uVar8;
        while( true ) {
          local_18 = local_18 - 1;
          if ((local_16 | local_18) == 0) break;
          FUN_1000_1d3a(param_2,param_3,local_6,(undefined *)param_8,param_8._2_2_,
                        (undefined *)local_1c,local_1c._2_2_);
          uVar5 = local_6 * uVar1;
          local_1c = (undefined *)
                     CONCAT22(local_1c._2_2_ +
                              (((int)uVar5 >> 0xf) + (uint)CARRY2((uint)(undefined *)local_1c,uVar5)
                              ) * 0x10,(undefined *)local_1c + uVar5);
          param_8 = (undefined *)
                    CONCAT22(param_8._2_2_ +
                             (iVar6 + (uint)CARRY2((uint)(undefined *)param_8,uVar1)) * 0x10,
                             (undefined *)param_8 + uVar1);
          local_16 = local_16 - (local_18 == 0);
        }
        for (local_c = 0; local_c < local_6; local_c = local_c + 1) {
          local_2c = param_8;
          for (local_a = 0; puVar3 = local_1c, puVar2 = local_2c, local_a < (int)uVar1;
              local_a = local_a + 1) {
            if ((undefined *)local_2c == (undefined *)0xffff) {
              local_2c._2_2_ = local_2c._2_2_ + 0x68;
            }
            local_2c = (undefined *)CONCAT22(local_2c._2_2_,(undefined *)local_2c + 1);
            if ((undefined *)local_1c == (undefined *)0xffff) {
              local_1c._2_2_ = local_1c._2_2_ + 0x68;
            }
            local_1c = (undefined *)CONCAT22(local_1c._2_2_,(undefined *)local_1c + 1);
            *puVar3 = *puVar2;
          }
        }
      }
      uVar7 = GLOBALHANDLE(0x1018,uVar4);
      GLOBALUNLOCK(0x1018,uVar7);
      uVar4 = GLOBALHANDLE(0x1018,uVar4);
      GLOBALFREE(0x1018,uVar4);
      param_8 = puVar11;
    }
  }
  return param_8;
}



long FUN_1000_219c(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  long lVar5;
  
  lVar5 = CONCAT22(param_4,param_3);
  uVar3 = (undefined2)((ulong)param_6 >> 0x10);
  iVar1 = (int)param_6;
  uVar4 = (undefined2)((ulong)param_5 >> 0x10);
  iVar2 = (int)param_5;
  if (((((*(int *)(iVar2 + 2) != *(int *)(iVar1 + 2)) ||
        (*(int *)(iVar2 + 4) != *(int *)(iVar1 + 4))) ||
       (*(int *)(iVar2 + 6) != *(int *)(iVar1 + 6))) ||
      (*(int *)(iVar2 + 0xe) != *(int *)(iVar1 + 0xe))) &&
     (((lVar5 = FUN_1000_17c4(param_1,param_2,*(undefined2 *)(iVar1 + 0xe),
                              *(undefined2 *)(iVar2 + 0xe),param_3,param_4), lVar5 == 0 ||
       (lVar5 = FUN_1000_196e(param_1,param_2,*(uint *)(iVar1 + 0xe) >> 3,*(undefined2 *)(iVar1 + 2)
                              ,*(undefined2 *)(iVar2 + 2),lVar5), lVar5 == 0)) ||
      (lVar5 = FUN_1000_1ef0(param_1,param_2,*(undefined2 *)(iVar1 + 2),*(uint *)(iVar1 + 0xe) >> 3,
                             *(undefined2 *)(iVar1 + 4),*(undefined2 *)(iVar1 + 6),
                             *(undefined2 *)(iVar2 + 4),*(undefined2 *)(iVar2 + 6),lVar5),
      lVar5 == 0)))) {
    lVar5 = 0;
  }
  return lVar5;
}



int * __stdcall16far
WAVEMIXOPENWAVE(byte param_1,undefined2 param_2_00,undefined2 param_2,int param_3,int param_4,
               int *param_5)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 uVar3;
  int *piVar4;
  int iVar5;
  int unaff_BP;
  undefined2 *puVar6;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  int *piVar7;
  long lVar8;
  long lVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  int iVar13;
  int iVar14;
  int local_88;
  int local_86;
  undefined2 local_82;
  int local_7c;
  int local_7a;
  undefined local_78 [2];
  uint local_76;
  uint local_74;
  undefined2 local_6e;
  undefined2 local_6c;
  uint local_6a;
  uint local_68;
  undefined local_5a [8];
  undefined2 local_52;
  undefined2 local_50;
  undefined2 local_46 [2];
  undefined2 local_42;
  undefined2 local_40;
  undefined4 local_36;
  undefined4 local_32;
  undefined2 local_1a;
  undefined2 local_18;
  undefined2 local_4;
  int iStack_2;
  
  iStack_2 = unaff_BP + 1;
  local_4 = 0x1008;
  local_7a = 0;
  local_7c = 0;
  lVar9 = 0;
  if (((param_5 == (int *)0x0) || (*param_5 != 0x5432)) || (param_5[0x46] != 0x5432)) {
    uVar10 = 0xffff;
    MESSAGEBEEP();
    unaff_CS = 0x1018;
    _WSPRINTF(0x1018,0xb8,0x1008,0x82c,0x1008,param_5,uVar10);
    DAT_1008_09d0 = (int *)0x0;
  }
  else {
    DAT_1008_09d0 = param_5;
  }
  if (DAT_1008_09d0 == (int *)0x0) {
    local_88 = -1;
  }
  else {
    local_88 = DAT_1008_09d0[5];
  }
  uVar11 = 0;
  uVar10 = 0;
  iVar2 = WAVEOUTOPEN(unaff_CS,1,0,0,0,0,0,DAT_1008_09d0 + 0x31,0x1008,local_88,local_78);
  if (iVar2 != 0) {
    if (DAT_1008_0020 == 0) {
      return (int *)0x0;
    }
    uVar12 = 0x24;
    uVar3 = 0x30;
LAB_1000_2334:
    MESSAGEBOX(0x1018,uVar3,uVar10,uVar11,uVar12,0x1008);
    return (int *)0x0;
  }
  uVar11 = 0x2040;
  uVar10 = GLOBALALLOC(0x1018,0x40,0);
  piVar7 = (int *)GLOBALLOCK(0x1018,uVar10,uVar11);
  uVar10 = (undefined2)((ulong)piVar7 >> 0x10);
  piVar4 = (int *)piVar7;
  if (piVar7 == (int *)0x0) {
    if (DAT_1008_0020 == 0) {
      return (int *)0x0;
    }
    uVar12 = 0x42;
    uVar11 = 0x1008;
    uVar10 = 0x24;
    uVar3 = 0x40;
    goto LAB_1000_2334;
  }
  puVar6 = local_46;
  for (iVar2 = 0x21; iVar2 != 0; iVar2 = iVar2 + -1) {
    puVar1 = puVar6;
    puVar6 = puVar6 + 1;
    *puVar1 = 0;
  }
  if ((param_1 & 2) == 0) {
    if ((param_1 & 4) == 0) {
      iVar2 = param_4;
      local_7c = MMIOOPEN(0x1018,0,1,0,0,param_3);
      if (local_7c == 0) {
        if (DAT_1008_0020 == 0) goto LAB_1000_26b7;
        _WSPRINTF(0x1018,0xb8,0x1008,0x3c8,0x1008,param_3,param_4,iVar2);
        goto LAB_1000_24de;
      }
    }
    else {
      local_7c = MMIOOPEN(0x1018,0,0,param_3,param_4,0);
      if (local_7c == 0) {
        if (DAT_1008_0020 == 0) goto LAB_1000_26b7;
        uVar11 = 0x3ac;
        lVar9 = 0;
        goto LAB_1000_26a7;
      }
    }
LAB_1000_24e7:
    local_52 = 0x4157;
    local_50 = 0x4556;
    iVar2 = MMIODESCEND(0x1018,0x20,0,0,local_5a,unaff_SS);
    if (iVar2 != 0) {
      if (DAT_1008_0020 == 0) goto LAB_1000_26b7;
      uVar11 = 0x3e5;
      lVar9 = 0;
      goto LAB_1000_26a7;
    }
    local_6e = 0x6d66;
    local_6c = 0x2074;
    iVar2 = MMIODESCEND(0x1018,0x10,local_5a,unaff_SS,&local_6e,unaff_SS);
    if (iVar2 != 0) {
      if (DAT_1008_0020 == 0) goto LAB_1000_26b7;
      uVar11 = 0x3fe;
      lVar9 = 0;
      goto LAB_1000_26a7;
    }
    iVar2 = local_7c;
    lVar8 = MMIOREAD(0x1018,0x10,0,piVar7);
    if (lVar8 != 0x10) {
      if (DAT_1008_0020 == 0) goto LAB_1000_26b7;
      uVar11 = 0x416;
      lVar9 = 0;
      goto LAB_1000_26a7;
    }
    if (*piVar7 != 1) {
      if (DAT_1008_0020 == 0) goto LAB_1000_26b7;
      uVar11 = 0x433;
      lVar9 = 0;
      goto LAB_1000_26a7;
    }
    iVar14 = local_7c;
    MMIOASCEND(0x1018,0,&local_6e,unaff_SS);
    local_6e = 0x6164;
    local_6c = 0x6174;
    iVar13 = local_7c;
    iVar5 = MMIODESCEND(0x1018,0x10,local_5a,unaff_SS,&local_6e,unaff_SS);
    if (iVar5 != 0) {
      if (DAT_1008_0020 == 0) goto LAB_1000_26b7;
      uVar11 = 0x44f;
      lVar9 = 0;
      goto LAB_1000_26a7;
    }
    local_76 = local_6a;
    local_74 = local_68;
    if ((local_68 | local_6a) == 0) {
      if (DAT_1008_0020 == 0) goto LAB_1000_26b7;
      uVar11 = 0x46c;
      lVar9 = 0;
      goto LAB_1000_26a7;
    }
    uVar3 = 0x2002;
    uVar11 = GLOBALALLOC(0x1018,local_6a,local_68);
    lVar9 = GLOBALLOCK(0x1018,uVar11,uVar3,iVar13,iVar14,iVar2);
    if (lVar9 != 0) {
      iVar2 = local_7c;
      lVar8 = MMIOREAD(0x1018,local_76,local_74,lVar9);
      if (lVar8 == CONCAT22(local_74,local_76)) {
        lVar9 = FUN_1000_219c(&local_76,unaff_SS,lVar9,piVar7,DAT_1008_09d0 + 0x31,0x1008);
        if (lVar9 != 0) {
          MMIOCLOSE(0x1018,0);
          if (local_7a != 0) {
            GLOBALUNLOCK(0x1018,local_7a,local_7c,iVar2);
            FREERESOURCE(0x1018,local_7a);
          }
          piVar4[8] = (int)lVar9;
          piVar4[9] = (int)((ulong)lVar9 >> 0x10);
          piVar4[10] = local_76;
          piVar4[0xb] = local_74;
          piVar4[0x11] = 0;
          piVar4[0x10] = 0;
          piVar4[0x13] = 0;
          piVar4[0x12] = 0;
          piVar4[0xf] = 0;
          piVar4[0xe] = 0;
          if (param_4 != 0) {
            local_86 = LSTRLEN(0x1018,param_3);
            if (local_86 < 0x10) {
              local_86 = 0;
            }
            else {
              local_86 = local_86 + -0xf;
            }
            LSTRCPY(0x1018,param_3 + local_86,param_4,piVar4 + 0x18);
            return piVar7;
          }
          _WSPRINTF(0x1018,piVar4 + 0x18,uVar10,0x4c2,0x1008,param_3);
          return piVar7;
        }
        lVar9 = 0;
        if (DAT_1008_0020 == 0) goto LAB_1000_26b7;
        uVar11 = 0x4a3;
      }
      else {
        if (DAT_1008_0020 == 0) goto LAB_1000_26b7;
        uVar11 = 0x488;
      }
      goto LAB_1000_26a7;
    }
    if (DAT_1008_0020 == 0) goto LAB_1000_26b7;
    uVar11 = 0x42;
    uVar3 = 0x40;
  }
  else {
    uVar11 = param_2;
    uVar3 = FINDRESOURCE(0x1018,0x323,0x1008,param_3,param_4);
    local_7a = LOADRESOURCE(0x1018,uVar3);
    if (local_7a == 0) {
      if (param_4 == 0) {
        _WSPRINTF(0x1018,0xb8,0x1008,0x34d,0x1008,param_3);
      }
      else {
        _WSPRINTF(0x1018,0xb8,0x1008,0x328,0x1008,param_3,param_4);
      }
      if (DAT_1008_0020 == 0) goto LAB_1000_26b7;
LAB_1000_24de:
      uVar11 = 0xb8;
      lVar9 = 0;
    }
    else {
      local_32 = LOCKRESOURCE(0x1018,local_7a,param_2,uVar11);
      if (local_32 == 0) {
        if (DAT_1008_0020 != 0) {
          MESSAGEBOX(0x1018,0x30,0x24,0x1008,0x370,0x1008);
        }
        FREERESOURCE(0x1018,local_7a);
        local_7a = 0;
        goto LAB_1000_26b7;
      }
      local_36 = GLOBALSIZE(0x1018,local_7a);
      local_42 = 0x454d;
      local_40 = 0x204d;
      local_18 = 0;
      local_1a = 0;
      local_7c = MMIOOPEN(0x1018,0,0,local_46,unaff_SS,0);
      if (local_7c != 0) goto LAB_1000_24e7;
      if (DAT_1008_0020 == 0) goto LAB_1000_26b7;
      uVar11 = 0x390;
    }
LAB_1000_26a7:
    uVar3 = 0x30;
  }
  MESSAGEBOX(0x1018,uVar3,0x24,0x1008,uVar11,0x1008);
LAB_1000_26b7:
  local_82 = (undefined2)((ulong)lVar9 >> 0x10);
  if (local_7c != 0) {
    MMIOCLOSE(0x1018,0);
  }
  if (piVar7 != (int *)0x0) {
    uVar11 = GLOBALHANDLE(0x1018,uVar10);
    GLOBALUNLOCK(0x1018,uVar11);
    uVar10 = GLOBALHANDLE(0x1018,uVar10);
    GLOBALFREE(0x1018,uVar10);
  }
  if (lVar9 != 0) {
    uVar10 = GLOBALHANDLE(0x1018,local_82);
    GLOBALUNLOCK(0x1018,uVar10);
    uVar10 = GLOBALHANDLE(0x1018,local_82);
    GLOBALFREE(0x1018,uVar10);
  }
  if (local_7a == 0) {
    return (int *)0x0;
  }
  GLOBALUNLOCK(0x1018,local_7a);
  FREERESOURCE(0x1018,local_7a);
  return (int *)0x0;
}



void __stdcall16far FIGUREPROC(void)

{
  int param_1;
  
  if ((param_1 == 0x3bd) && (DAT_1008_04ca != 0)) {
    DAT_1008_04cc = DAT_1008_04cc + 1;
  }
  return;
}



uint FUN_1000_2822(undefined4 param_1,uint param_2)

{
  undefined2 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 uVar6;
  undefined2 unaff_CS;
  undefined2 *puVar7;
  undefined4 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  uint local_14;
  int local_12;
  undefined2 local_a;
  undefined4 local_8;
  int local_4;
  
  uVar10 = 0x1008;
  local_14 = GETPRIVATEPROFILEINT(unaff_CS,0x2e,0x1008,0,0x4ce,0x1008,DAT_1008_09d0 + 0xc);
  if (local_14 == 0) {
    local_14 = param_2;
    if (((int)param_2 >> 0xf | param_2) == 0) {
      uVar2 = GETWINFLAGS(0x1018,uVar10);
      if ((uVar2 & 0x4000) != 0) {
        FUN_1000_3616(*(undefined2 *)((int)param_1 + 4),*(undefined2 *)((int)param_1 + 6),0x2b11,0);
        uVar2 = FUN_1000_360a();
        return uVar2;
      }
      uVar8 = 0x800;
      iVar3 = WAVEOUTOPEN(0x1018,0,3,DAT_1008_09f0,0,0x27fc,0x1000,(int)param_1,param_1._2_2_,
                          *(undefined2 *)(DAT_1008_09d0 + 10),&local_a);
      if (iVar3 != 0) {
        _WSPRINTF(0x1018,0x968,0x1008,0x4db,0x1008,iVar3);
        return 0x800;
      }
      uVar9 = 0;
      uVar10 = GLOBALALLOC(0x1018,0x4000,0);
      local_8 = GLOBALLOCK(0x1018,uVar10,uVar9);
      uVar9 = 0;
      uVar10 = GLOBALALLOC(0x1018,0x10,0);
      puVar7 = (undefined2 *)GLOBALLOCK(0x1018,uVar10,uVar9);
      uVar10 = (undefined2)((ulong)puVar7 >> 0x10);
      puVar5 = (undefined2 *)puVar7;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        puVar1 = puVar5;
        puVar5 = puVar5 + 1;
        *puVar1 = 0x8080;
      }
      local_4 = 0;
      do {
        iVar3 = local_4 * 0x20;
        uVar6 = (undefined2)((ulong)local_8 >> 0x10);
        iVar4 = (int)local_8;
        *(undefined2 **)(iVar3 + iVar4) = (undefined2 *)puVar7;
        *(undefined2 *)(iVar3 + iVar4 + 2) = uVar10;
        iVar3 = iVar3 + iVar4;
        *(undefined2 *)(iVar3 + 4) = 0x10;
        *(undefined2 *)(iVar3 + 6) = 0;
        *(undefined2 *)(iVar3 + 0x12) = 0;
        *(undefined2 *)(iVar3 + 0x10) = 0;
        *(undefined2 *)(iVar3 + 0x16) = 0;
        *(undefined2 *)(iVar3 + 0x14) = 0;
        uVar9 = local_a;
        WAVEOUTPREPAREHEADER(0x1018,0x20,iVar3,uVar6);
        local_4 = local_4 + 1;
      } while (local_4 < 0x200);
      WAVEOUTPAUSE(0x1018,local_a,uVar9);
      for (local_4 = 0; (DAT_1008_04cc == 0 && (local_4 < 0x200)); local_4 = local_4 + 1) {
        iVar3 = WAVEOUTWRITE(0x1018,0x20,local_4 * 0x20 + (int)local_8,local_8._2_2_);
        if (iVar3 != 0) break;
      }
      DAT_1008_04ca = 1;
      WAVEOUTRESTART(0x1018,local_a);
      do {
      } while (DAT_1008_04cc == 0);
      DAT_1008_04ca = 0;
      if (0 < DAT_1008_04cc) {
        uVar8 = FUN_1000_360a();
      }
      local_12 = (int)((ulong)uVar8 >> 0x10);
      local_14 = (uint)uVar8;
      if ((local_12 == 0) && (local_14 < 0x200)) {
        local_14 = 0x200;
      }
      else if ((local_12 != 0) || (0x1000 < local_14)) {
        local_14 = 0x1000;
      }
      WAVEOUTRESET(0x1018,local_a);
      local_4 = 0;
      do {
        uVar9 = local_a;
        WAVEOUTUNPREPAREHEADER(0x1018,0x20,local_4 * 0x20 + (int)local_8,local_8._2_2_);
        local_4 = local_4 + 1;
      } while (local_4 < 0x200);
      WAVEOUTCLOSE(0x1018,local_a,uVar9);
      local_a = 0;
      uVar9 = local_8._2_2_;
      uVar6 = GLOBALHANDLE(0x1018,local_8._2_2_);
      GLOBALUNLOCK(0x1018,uVar6);
      uVar9 = GLOBALHANDLE(0x1018,uVar9);
      GLOBALFREE(0x1018,uVar9);
      uVar9 = GLOBALHANDLE(0x1018,uVar10);
      GLOBALUNLOCK(0x1018,uVar9);
      uVar10 = GLOBALHANDLE(0x1018,uVar10);
      GLOBALFREE(0x1018,uVar10);
      return local_14;
    }
    if ((-1 < (int)param_2) && (param_2 < 0x200)) {
      return 0x200;
    }
    if ((int)param_2 < 0) {
      return 0x1000;
    }
  }
  else if (local_14 < 0x200) {
    return 0x200;
  }
  if (0x1000 < local_14) {
    return 0x1000;
  }
  return local_14;
}



void __cdecl16near FUN_1000_2ae0(void)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_SS;
  int iVar3;
  undefined2 uVar4;
  int local_34;
  undefined local_32 [6];
  undefined local_2c [42];
  
  iVar1 = WAVEOUTGETNUMDEVS();
  if (iVar1 != 0) {
    _WSPRINTF(0x1018,0xb8,0x1008,0x50d,0x1008,iVar1);
    uVar4 = 0;
    MESSAGEBOX(0x1018,0x40,0x24,0x1008,0xb8,0x1008);
    for (local_34 = 0; local_34 < iVar1; local_34 = local_34 + 1) {
      iVar3 = local_34;
      iVar2 = WAVEOUTGETDEVCAPS(0x1018,0x30,local_32,unaff_SS);
      if (iVar2 == 0) {
        _WSPRINTF(0x1018,0xb8,0x1008,0x573,0x1008,local_34,local_2c);
      }
      else {
        _WSPRINTF(0x1018,0xb8,0x1008,0x543,0x1008,iVar2,local_34,iVar3,uVar4);
      }
      MESSAGEBOX(0x1018,0x40,0x24,0x1008,0xb8,0x1008);
    }
  }
  return;
}



undefined2 * __stdcall16far WAVEMIXCONFIGUREINIT(int *param_1)

{
  undefined2 *puVar1;
  uint uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  uint uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  int unaff_BP;
  undefined2 unaff_SS;
  undefined4 uVar9;
  char *pcVar10;
  undefined2 uVar11;
  int local_46;
  int local_36;
  undefined local_34 [6];
  char local_2e [36];
  uint local_a;
  byte local_8;
  undefined2 local_4;
  int iStack_2;
  
  iStack_2 = unaff_BP + 1;
  local_4 = 0x1008;
  if (((param_1._2_2_ | (uint)(int *)param_1) != 0) && (*param_1 != 10)) {
    param_1 = (int *)0x0;
  }
  uVar2 = WAVEOUTGETNUMDEVS();
  if (uVar2 == 0) {
    return (undefined2 *)0x0;
  }
  uVar11 = 0x1008;
  iVar3 = GETPRIVATEPROFILEINT(0x1018,0x2e,0x1008,0,0x590,0x1008,0x59c);
  DAT_1008_0020 = (uint)(iVar3 != 0);
  if (DAT_1008_0020 != 0) {
    FUN_1000_2ae0(uVar11);
  }
  DAT_1008_09d0 = (undefined2 *)LOCALALLOC(0x1018,0x8e);
  if (DAT_1008_09d0 == (undefined2 *)0x0) {
    return (undefined2 *)0x0;
  }
  DAT_1008_09d0[0x46] = 0x5432;
  *DAT_1008_09d0 = DAT_1008_09d0[0x46];
  local_36 = 0;
  do {
    DAT_1008_09d0[local_36 + 0x16] = 0xffff;
    local_36 = local_36 + 1;
  } while (local_36 < 8);
  HMEMCPY(0x1018,0x10,0,0x10,0x1008,DAT_1008_09d0 + 0x31);
  uVar11 = GETPRIVATEPROFILEINT(0x1018,0x2e,0x1008,1,0x5a4,0x1008,0x3a);
  uVar4 = GETPRIVATEPROFILEINT(0x1018,0x2e,0x1008,0,0x5aa,0x1008,0x3a);
  uVar5 = GETPRIVATEPROFILEINT(0x1018,0x2e,0x1008,3,0x5b6,0x1008,0x3a);
  uVar6 = GETPRIVATEPROFILEINT(0x1018,0x2e,0x1008,0,0x5c1,0x1008,0x3a);
  uVar7 = GETPRIVATEPROFILEINT(0x1018,0x2e,0x1008,0xb,0x5ce,0x1008,0x3a);
  LSTRCPY(0x1018,0x3a,0x1008,DAT_1008_09d0 + 6);
  uVar8 = GETPRIVATEPROFILEINT(0x1018,0x2e,0x1008,0,0x5dc,0x1008,0x5ea);
  DAT_1008_09d0[5] = uVar8;
  if (uVar2 <= (uint)DAT_1008_09d0[5]) {
    DAT_1008_09d0[5] = 0xffff;
  }
  pcVar10 = (char *)0x1018;
  iVar3 = WAVEOUTGETDEVCAPS(0x1018,0x30,local_34,unaff_SS);
  if (iVar3 != 0) {
    pcVar10 = (char *)s_Unknown_Device_1008_05f2;
    LSTRCPY(0x1018,0x5f2,0x1008,local_2e);
  }
  if ((local_8 & 0x10) == 0) {
    iVar3 = GETPRIVATEPROFILEINT(0x1018,0x2e,0x1008,0,local_2e,unaff_SS,0x67d);
    if (iVar3 == 0) {
      LSTRCPY(0x1018,local_2e,unaff_SS,DAT_1008_09d0 + 6);
      iVar3 = GETPRIVATEPROFILEINT(0x1018,0x2e,0x1008,uVar11,0x6be,0x1008,DAT_1008_09d0 + 6);
      if (iVar3 == 2) {
        uVar11 = 0xe70;
      }
      else {
        uVar11 = 0xed4;
      }
      DAT_1008_09d0[0x43] = uVar11;
      uVar11 = GETPRIVATEPROFILEINT(0x1018,0x2e,0x1008,uVar4,0x6c4,0x1008,DAT_1008_09d0 + 6);
      DAT_1008_09d0[0x40] = uVar11;
      uVar11 = GETPRIVATEPROFILEINT(0x1018,0x2e,0x1008,uVar5,0x6d0,0x1008,DAT_1008_09d0 + 6);
      DAT_1008_09d0[0x3b] = uVar11;
      if ((int)DAT_1008_09d0[0x3b] < 2) {
        DAT_1008_09d0[0x3b] = 2;
      }
      else if (6 < (int)DAT_1008_09d0[0x3b]) {
        DAT_1008_09d0[0x3b] = 6;
      }
      if (((((param_1._2_2_ | (uint)(int *)param_1) != 0) &&
           ((*(byte *)((int *)param_1 + 1) & 1) != 0)) && (1 < (uint)((int *)param_1)[3])) &&
         (1 < local_a)) {
        DAT_1008_09d0[0x32] = 2;
        DAT_1008_09d0[0x37] = 2;
      }
      local_46 = GETPRIVATEPROFILEINT(0x1018,0x2e,0x1008,uVar7,0x6db,0x1008,DAT_1008_09d0 + 6);
      puVar1 = DAT_1008_09d0;
      if (((param_1._2_2_ | (uint)(int *)param_1) != 0) &&
         ((*(byte *)((int *)param_1 + 1) & 2) != 0)) {
        uVar2 = ((int *)param_1)[4];
        if (uVar2 == 0x2c) {
          local_46 = 0x2c;
        }
        else if (uVar2 < 0x2d) {
          if ((char)uVar2 == '\v') {
            local_46 = 0xb;
          }
          else if ((char)uVar2 == '\x16') {
            local_46 = 0x16;
          }
        }
      }
      if (local_46 == 0x16) {
        DAT_1008_09d0[0x33] = 0x5622;
        puVar1[0x34] = 0;
        iVar3 = 0x5622;
      }
      else {
        if (local_46 == 0x2c) {
          DAT_1008_09d0[0x33] = 0xac44;
          puVar1[0x34] = 0;
          puVar1 = DAT_1008_09d0;
          uVar2 = DAT_1008_09d0[0x32];
          DAT_1008_09d0[0x35] = (int)((ulong)uVar2 * 0xac44);
          puVar1[0x36] = (int)((ulong)uVar2 * 0xac44 >> 0x10);
          goto LAB_1000_2f37;
        }
        iVar3 = 0x2b11;
      }
      puVar1 = DAT_1008_09d0;
      DAT_1008_09d0[0x35] = iVar3 * DAT_1008_09d0[0x32];
      puVar1[0x36] = 0;
LAB_1000_2f37:
      uVar9 = FUN_1000_2822(DAT_1008_09d0 + 0x31,0x1008,uVar6 & 0xfffc);
      puVar1 = DAT_1008_09d0;
      DAT_1008_09d0[0x39] = (int)uVar9;
      puVar1[0x3a] = (int)((ulong)uVar9 >> 0x10);
      if (DAT_1008_0020 != 0) {
        _WSPRINTF(0x1018,0xb8,0x1008,0x713,0x1008,local_2e);
        MESSAGEBOX(0x1018,0x40,0x24,0x1008,0xb8,0x1008);
        return DAT_1008_09d0;
      }
      return DAT_1008_09d0;
    }
    if (DAT_1008_0020 == 0) goto LAB_1000_2d7f;
    pcVar10 = local_2e;
    uVar11 = 0x68c;
  }
  else {
    if (DAT_1008_0020 == 0) goto LAB_1000_2d7f;
    uVar11 = 0x601;
  }
  _WSPRINTF(0x1018,0xb8,0x1008,uVar11,0x1008,pcVar10);
  MESSAGEBOX(0x1018,0x40,0x24,0x1008,0xb8,0x1008);
LAB_1000_2d7f:
  LOCALFREE(0x1018,DAT_1008_09d0);
  DAT_1008_09d0 = (undefined2 *)0x0;
  return (undefined2 *)0x0;
}



void __cdecl16far WAVEMIXINIT(void)

{
  undefined2 *puVar1;
  int iVar2;
  int unaff_BP;
  undefined2 *puVar3;
  undefined2 unaff_SS;
  undefined2 local_e [5];
  undefined2 local_4;
  int iStack_2;
  
  iStack_2 = unaff_BP + 1;
  local_4 = 0x1008;
  puVar3 = local_e;
  for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
    puVar1 = puVar3;
    puVar3 = puVar3 + 1;
    *puVar1 = 0;
  }
  local_e[0] = 10;
  WAVEMIXCONFIGUREINIT(local_e,unaff_SS);
  return;
}



undefined2 __stdcall16far WAVEMIXCLOSESESSION(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined2 unaff_CS;
  undefined2 uVar3;
  
  if (((param_1 == (int *)0x0) || (*param_1 != 0x5432)) || (param_1[0x46] != 0x5432)) {
    uVar3 = 0xffff;
    MESSAGEBEEP();
    unaff_CS = 0x1018;
    _WSPRINTF(0x1018,0xb8,0x1008,0x82c,0x1008,param_1,uVar3);
    DAT_1008_09d0 = (int *)0x0;
  }
  else {
    DAT_1008_09d0 = param_1;
  }
  if (DAT_1008_09d0 != (int *)0x0) {
    WAVEMIXACTIVATE(0,param_1);
    WAVEMIXCLOSECHANNEL(1,0,0,param_1);
    for (iVar2 = 0x47; iVar2 != 0; iVar2 = iVar2 + -1) {
      piVar1 = DAT_1008_09d0;
      DAT_1008_09d0 = DAT_1008_09d0 + 1;
      *piVar1 = 0;
    }
    DAT_1008_09d0 = (int *)0x0;
    if ((param_1 != (int *)0x0) && (iVar2 = LOCALFREE(unaff_CS,param_1), iVar2 != 0)) {
      return 0;
    }
  }
  return 5;
}



undefined2 __stdcall16far WAVEMIXGETINFO(int *param_1)

{
  undefined2 uVar1;
  undefined2 unaff_CS;
  
  if (*param_1 == 0x14) {
    HMEMCPY(unaff_CS,0x14,0,0x79e,0x1008,(int *)param_1);
    uVar1 = 0;
  }
  else {
    uVar1 = 0x14;
  }
  return uVar1;
}



int __stdcall16far FUN_1000_3106(void)

{
  int iVar1;
  uint uVar2;
  int unaff_BP;
  undefined2 unaff_CS;
  undefined2 param_1;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  int iStack_2;
  
  iStack_2 = unaff_BP + 1;
  local_4 = 0x1008;
  uVar4 = 0x1008;
  DAT_1008_0022 = GETPRIVATEPROFILEINT(unaff_CS,0x2e,0x1008,0,0x7b2,0x1008,0x7b8);
  uVar3 = 0x1008;
  iVar1 = GETPRIVATEPROFILEINT(0x1018,0x2e,0x1008,0xffff,0x7c0,0x1008,0x7c7);
  if (iVar1 != 1) {
    uVar2 = GETWINFLAGS(0x1018,uVar3,uVar4);
    if ((uVar2 & 2) == 0) {
      DAT_1008_09d6 = 0x31e8;
      goto LAB_1000_315f;
    }
  }
  DAT_1008_09d6 = 0x1ae;
LAB_1000_315f:
  DAT_1008_09f0 = param_1;
  uVar3 = 0;
  local_10 = LOADCURSOR(0x1018,0x7f00,0);
  local_12 = 0;
  local_a = 0;
  local_c = 0;
  local_8 = 0x24;
  local_6 = 0x1008;
  local_e = GETSTOCKOBJECT(0x1018,1,uVar3);
  local_14 = DAT_1008_09f0;
  local_1e = 0;
  local_1c = 0xe28;
  local_1a = 0x1000;
  local_16 = 0;
  local_18 = 0;
  iVar1 = REGISTERCLASS(0x1018,&local_1e);
  if (iVar1 != 0) {
    FUN_1000_0262();
    iVar1 = 1;
  }
  return iVar1;
}



undefined2 __stdcall16far WEP(void)

{
  return 1;
}



void FUN_1000_31e8(uint param_1,int param_2,ulong *param_3,ulong param_4)

{
  ulong *puVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  char cVar9;
  int iVar10;
  ulong uVar11;
  int iVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  ulong uVar17;
  ulong uVar18;
  undefined *puVar19;
  undefined4 *puVar20;
  ulong *puVar21;
  byte *pbVar22;
  ulong *puVar23;
  byte *pbVar24;
  undefined4 *puVar25;
  undefined2 uVar26;
  long in_FS_OFFSET;
  long in_GS_OFFSET;
  int local_8;
  int local_6;
  int local_4;
  
  uVar26 = (undefined2)(param_4 >> 0x10);
  if (param_2 == 2) {
    uVar17 = *param_3 & 0xffff;
    uVar11 = 0;
    puVar19 = (undefined *)(param_3[1] & 0xffff);
    pbVar24 = (byte *)(param_4 & 0xffff);
    do {
      while( true ) {
        pbVar2 = (byte *)(in_FS_OFFSET + uVar17);
        uVar17 = uVar17 + 1;
        uVar8 = ((int)CONCAT31((int3)(uVar11 >> 8),*puVar19) + (uint)*pbVar2) - 0x80;
        uVar11 = (ulong)uVar8;
        cVar9 = (char)(uVar8 >> 8);
        if (cVar9 != '\0') break;
        *pbVar24 = (byte)uVar8;
        param_1 = param_1 - 1;
        puVar19 = puVar19 + 1;
        pbVar24 = pbVar24 + 1;
        if (param_1 == 0) {
          return;
        }
      }
      uVar11 = 0;
      pbVar22 = (byte *)pbVar24;
      pbVar24 = (byte *)CONCAT22((int)((ulong)pbVar24 >> 0x10),pbVar22 + 1);
      *pbVar22 = ~(cVar9 >> 7);
      param_1 = param_1 - 1;
      puVar19 = puVar19 + 1;
    } while (param_1 != 0);
  }
  else if (param_2 == 1) {
    puVar20 = (undefined4 *)(*param_3 & 0xffff);
    puVar25 = (undefined4 *)(param_4 & 0xffff);
    for (uVar11 = (ulong)(param_1 >> 2); uVar11 != 0; uVar11 = uVar11 - 1) {
      *puVar25 = *puVar20;
      puVar20 = puVar20 + 1;
      puVar25 = puVar25 + 1;
    }
    for (uVar11 = (ulong)param_1 & 0xffff0003; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined *)puVar25 = *(undefined *)puVar20;
      puVar20 = (undefined4 *)((long)puVar20 + 1);
      puVar25 = (undefined4 *)((long)puVar25 + 1);
    }
  }
  else if (param_2 == 3) {
    uVar17 = *param_3 & 0xffff;
    uVar18 = param_3[2] & 0xffff;
    uVar11 = 0;
    puVar19 = (undefined *)(param_3[1] & 0xffff);
    pbVar24 = (byte *)(param_4 & 0xffff);
    do {
      while( true ) {
        pbVar2 = (byte *)(in_FS_OFFSET + uVar17);
        uVar17 = uVar17 + 1;
        pbVar3 = (byte *)(in_GS_OFFSET + uVar18);
        uVar18 = uVar18 + 1;
        uVar8 = ((int)CONCAT31((int3)(uVar11 >> 8),*puVar19) + (uint)*pbVar2 + (uint)*pbVar3) -
                0x100;
        uVar11 = (ulong)uVar8;
        cVar9 = (char)(uVar8 >> 8);
        if (cVar9 != '\0') break;
        *pbVar24 = (byte)uVar8;
        param_1 = param_1 - 1;
        puVar19 = puVar19 + 1;
        pbVar24 = pbVar24 + 1;
        if (param_1 == 0) {
          return;
        }
      }
      uVar11 = 0;
      pbVar22 = (byte *)pbVar24;
      pbVar24 = (byte *)CONCAT22((int)((ulong)pbVar24 >> 0x10),pbVar22 + 1);
      *pbVar22 = ~(cVar9 >> 7);
      param_1 = param_1 - 1;
      puVar19 = puVar19 + 1;
    } while (param_1 != 0);
  }
  else {
    puVar23 = (ulong *)(param_4 & 0xffff);
    iVar7 = param_2 + -1;
    param_3 = param_3 + -1;
    iVar10 = param_1 - (param_1 & 0xfffc);
    for (param_1 = param_1 >> 2; param_1 != 0; param_1 = param_1 - 1) {
      iVar12 = 0;
      local_4 = 0;
      local_6 = 0;
      local_8 = 0;
      puVar21 = param_3 + param_2;
      do {
        uVar4 = *(uint *)((int)puVar21 + 2);
        puVar5 = *(undefined4 **)puVar21;
        puVar1 = puVar21;
        uVar8 = *(uint *)puVar1;
        *(uint *)puVar1 = *(uint *)puVar1 + 4;
        if (0xfffb < uVar8) {
          *(uint *)((int)puVar21 + 2) = *(uint *)((int)puVar21 + 2) + 8;
        }
        uVar6 = *puVar5;
        iVar12 = iVar12 + ((uint)uVar6 & 0xff);
        local_4 = local_4 + (uint)(byte)((ulong)uVar6 >> 8);
        local_6 = local_6 + ((uint)((ulong)uVar6 >> 0x10) & 0xff);
        local_8 = local_8 + (uint)(byte)((ulong)uVar6 >> 0x18);
        puVar21 = puVar21 + -1;
      } while (param_3 != puVar21);
      iVar12 = iVar12 + iVar7 * -0x80;
      cVar9 = (char)((uint)iVar12 >> 8);
      if (cVar9 == '\0') {
        bVar13 = (byte)iVar12;
      }
      else {
        bVar13 = ~(cVar9 >> 7);
      }
      local_4 = local_4 + iVar7 * -0x80;
      cVar9 = (char)((uint)local_4 >> 8);
      if (cVar9 == '\0') {
        bVar14 = (byte)local_4;
      }
      else {
        bVar14 = ~(cVar9 >> 7);
      }
      local_6 = local_6 + iVar7 * -0x80;
      cVar9 = (char)((uint)local_6 >> 8);
      if (cVar9 == '\0') {
        bVar15 = (byte)local_6;
      }
      else {
        bVar15 = ~(cVar9 >> 7);
      }
      local_8 = local_8 + iVar7 * -0x80;
      cVar9 = (char)((uint)local_8 >> 8);
      if (cVar9 == '\0') {
        bVar16 = (byte)local_8;
      }
      else {
        bVar16 = ~(cVar9 >> 7);
      }
      puVar21 = (ulong *)puVar23;
      puVar23 = (ulong *)ZEXT24(puVar21 + 1);
      *puVar21 = (ulong)CONCAT11(bVar14,bVar13) |
                 CONCAT22(CONCAT11(bVar14,bVar13),CONCAT11(bVar16,bVar15)) << 0x10;
    }
    if (iVar10 != 0) {
      uVar11 = 0;
      do {
        while( true ) {
          iVar12 = 0;
          puVar21 = param_3 + param_2;
          do {
            puVar19 = (undefined *)*puVar21;
            puVar1 = puVar21;
            uVar8 = *(uint *)puVar1;
            *(uint *)puVar1 = *(uint *)puVar1 + 1;
            if (0xfffe < uVar8) {
              *(uint *)((int)puVar21 + 2) = *(uint *)((int)puVar21 + 2) + 8;
            }
            uVar11 = CONCAT31((int3)(uVar11 >> 8),*puVar19);
            iVar12 = iVar12 + (int)uVar11;
            puVar21 = puVar21 + -1;
          } while (param_3 != puVar21);
          uVar8 = iVar12 + iVar7 * -0x80;
          uVar11 = (ulong)uVar8;
          cVar9 = (char)(uVar8 >> 8);
          puVar21 = (ulong *)puVar23;
          if (cVar9 != '\0') break;
          puVar23 = (ulong *)ZEXT24((byte *)((int)puVar21 + 1));
          *(byte *)puVar21 = (byte)uVar8;
          iVar10 = iVar10 + -1;
          if (iVar10 == 0) {
            return;
          }
        }
        uVar11 = 0;
        puVar23 = (ulong *)ZEXT24((byte *)((int)puVar21 + 1));
        *(char *)puVar21 = ~(cVar9 >> 7);
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
  }
  return;
}



undefined2 __stdcall16far FUN_1000_3503(void)

{
  return 1;
}



void FUN_1000_351c(undefined2 *param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  puVar1 = (undefined2 *)param_1;
  uVar3 = FUN_1000_3830(*param_1,puVar1[1],param_2,param_3);
  puVar1[1] = (int)((ulong)uVar3 >> 0x10);
  *puVar1 = (int)uVar3;
  return;
}



undefined4 FUN_1000_353e(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar10;
  char cVar11;
  uint uVar9;
  
  cVar11 = (int)param_2 < 0;
  if ((bool)cVar11) {
    bVar10 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -(uint)bVar10 - param_2;
  }
  if ((int)param_4 < 0) {
    cVar11 = cVar11 + '\x01';
    bVar10 = param_3 != 0;
    param_3 = -param_3;
    param_4 = -(uint)bVar10 - param_4;
  }
  uVar3 = param_1;
  uVar5 = param_3;
  uVar6 = param_2;
  uVar9 = param_4;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulong)param_2 % (ulong)param_3 << 0x10 | (ulong)param_1) / (ulong)param_3);
  }
  else {
    do {
      uVar8 = uVar9 >> 1;
      uVar5 = uVar5 >> 1 | (uint)((uVar9 & 1) != 0) << 0xf;
      uVar7 = uVar6 >> 1;
      uVar3 = uVar3 >> 1 | (uint)((uVar6 & 1) != 0) << 0xf;
      uVar6 = uVar7;
      uVar9 = uVar8;
    } while (uVar8 != 0);
    uVar1 = CONCAT22(uVar7,uVar3) / (ulong)uVar5;
    iVar4 = (int)uVar1;
    lVar2 = (ulong)param_3 * (uVar1 & 0xffff);
    uVar3 = (uint)((ulong)lVar2 >> 0x10);
    uVar5 = uVar3 + iVar4 * param_4;
    if (((CARRY2(uVar3,iVar4 * param_4)) || (param_2 < uVar5)) ||
       ((param_2 <= uVar5 && (param_1 < (uint)lVar2)))) {
      iVar4 = iVar4 + -1;
    }
    uVar3 = 0;
  }
  if (cVar11 == '\x01') {
    bVar10 = iVar4 != 0;
    iVar4 = -iVar4;
    uVar3 = -(uint)bVar10 - uVar3;
  }
  return CONCAT22(uVar3,iVar4);
}



long FUN_1000_35d8(uint param_1,uint param_2,uint param_3,uint param_4)

{
  if ((param_4 | param_2) == 0) {
    return (ulong)param_1 * (ulong)param_3;
  }
  return CONCAT22((int)((ulong)param_1 * (ulong)param_3 >> 0x10) +
                  param_2 * param_3 + param_1 * param_4,(int)((ulong)param_1 * (ulong)param_3));
}



void __cdecl16near FUN_1000_360a(void)

{
  uint in_CX;
  uint uVar1;
  
  for (uVar1 = in_CX & 0xff; uVar1 != 0; uVar1 = uVar1 - 1) {
  }
  return;
}



undefined4 FUN_1000_3616(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar3 = param_1;
  uVar8 = param_4;
  uVar6 = param_2;
  uVar9 = param_3;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulong)param_2 % (ulong)param_3 << 0x10 | (ulong)param_1) / (ulong)param_3);
  }
  else {
    do {
      uVar5 = uVar8 >> 1;
      uVar9 = uVar9 >> 1 | (uint)((uVar8 & 1) != 0) << 0xf;
      uVar7 = uVar6 >> 1;
      uVar3 = uVar3 >> 1 | (uint)((uVar6 & 1) != 0) << 0xf;
      uVar8 = uVar5;
      uVar6 = uVar7;
    } while (uVar5 != 0);
    uVar1 = CONCAT22(uVar7,uVar3) / (ulong)uVar9;
    iVar4 = (int)uVar1;
    lVar2 = (ulong)param_3 * (uVar1 & 0xffff);
    uVar3 = (uint)((ulong)lVar2 >> 0x10);
    uVar8 = uVar3 + iVar4 * param_4;
    if (((CARRY2(uVar3,iVar4 * param_4)) || (param_2 < uVar8)) ||
       ((param_2 <= uVar8 && (param_1 < (uint)lVar2)))) {
      iVar4 = iVar4 + -1;
    }
    uVar3 = 0;
  }
  return CONCAT22(uVar3,iVar4);
}



undefined2 * __cdecl16far FUN_1000_3676(undefined2 *param_1,undefined param_2,uint param_3)

{
  undefined2 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined2 *puVar5;
  int iVar6;
  
  if (param_3 != 0) {
    iVar6 = (int)((ulong)param_1 >> 0x10);
    uVar3 = -(int)(undefined2 *)param_1;
    uVar4 = param_3;
    if (uVar3 != 0) {
      uVar4 = (uVar3 - param_3 & -(uint)(uVar3 < param_3)) + param_3;
      uVar3 = param_3 - uVar4;
    }
    puVar5 = (undefined2 *)param_1;
    for (uVar2 = uVar4 >> 1; uVar2 != 0; uVar2 = uVar2 - 1) {
      puVar1 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar1 = CONCAT11(param_2,param_2);
    }
    for (uVar4 = (uint)((uVar4 & 1) != 0); uVar4 != 0; uVar4 = uVar4 - 1) {
      puVar1 = puVar5;
      puVar5 = (undefined2 *)((int)puVar5 + 1);
      *(undefined *)puVar1 = param_2;
    }
    if (uVar3 != 0) {
      for (uVar4 = uVar3 >> 1; uVar4 != 0; uVar4 = uVar4 - 1) {
        puVar1 = puVar5;
        puVar5 = puVar5 + 1;
        *puVar1 = CONCAT11(param_2,param_2);
      }
      for (uVar4 = (uint)((uVar3 & 1) != 0); uVar4 != 0; uVar4 = uVar4 - 1) {
        puVar1 = puVar5;
        puVar5 = (undefined2 *)((int)puVar5 + 1);
        *(undefined *)puVar1 = param_2;
      }
    }
  }
  return (undefined2 *)param_1;
}



void __cdecl16near FUN_1000_36be(void)

{
  FUN_1000_3106(DAT_1008_07d8,DAT_1008_07da,DAT_1008_07d6,DAT_1008_07d4,DAT_1008_07d2);
  return;
}



undefined2 __cdecl16near FUN_1000_3712(void)

{
  DAT_1008_0825 = 1;
  FUN_1000_378e();
  FUN_1000_379d();
  FUN_1000_378e();
  FUN_1000_378e();
  FUN_1000_379d();
  FUN_1000_3902();
  FUN_1000_3902();
  return 0x100;
}



void __cdecl16near FUN_1000_378e(void)

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



void __cdecl16near FUN_1000_379d(void)

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



void __cdecl16near FUN_1000_37b0(void)

{
  FUN_1000_38c5(0xfc);
  FUN_1000_38c5(0xff);
  return;
}



undefined4 FUN_1000_3830(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  
  uVar3 = param_1;
  uVar4 = param_4;
  uVar9 = param_2;
  uVar10 = param_3;
  if (param_4 == 0) {
    iVar6 = (int)(((ulong)param_2 % (ulong)param_3 << 0x10 | (ulong)param_1) % (ulong)param_3);
    iVar7 = 0;
  }
  else {
    do {
      uVar5 = uVar4 >> 1;
      uVar10 = uVar10 >> 1 | (uint)((uVar4 & 1) != 0) << 0xf;
      uVar8 = uVar9 >> 1;
      uVar3 = uVar3 >> 1 | (uint)((uVar9 & 1) != 0) << 0xf;
      uVar4 = uVar5;
      uVar9 = uVar8;
    } while (uVar5 != 0);
    uVar1 = CONCAT22(uVar8,uVar3) / (ulong)uVar10;
    uVar3 = (int)uVar1 * param_4;
    lVar2 = (uVar1 & 0xffff) * (ulong)param_3;
    uVar9 = (uint)((ulong)lVar2 >> 0x10);
    uVar4 = (uint)lVar2;
    uVar10 = uVar9 + uVar3;
    if (((CARRY2(uVar9,uVar3)) || (param_2 < uVar10)) || ((param_2 <= uVar10 && (param_1 < uVar4))))
    {
      bVar11 = uVar4 < param_3;
      uVar4 = uVar4 - param_3;
      uVar10 = (uVar10 - param_4) - (uint)bVar11;
    }
    iVar6 = -(uVar4 - param_1);
    iVar7 = -(uint)(uVar4 - param_1 != 0) - ((uVar10 - param_2) - (uint)(uVar4 < param_1));
  }
  return CONCAT22(iVar7,iVar6);
}



int * FUN_1000_389a(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)&DAT_1008_0860;
  do {
    piVar1 = piVar4;
    piVar4 = piVar4 + 1;
    piVar2 = piVar4;
    if ((*piVar1 == param_1) || (piVar2 = (int *)(*piVar1 + 1), piVar2 == (int *)0x0)) {
      return piVar2;
    }
    iVar3 = -1;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      piVar1 = piVar4;
      piVar4 = (int *)((int)piVar4 + 1);
    } while (*(char *)piVar1 != '\0');
  } while( true );
}



void FUN_1000_38c5(void)

{
  return;
}



void __cdecl16near FUN_1000_3902(void)

{
  return;
}



int __cdecl16near FUN_1000_3a72(int param_1)

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
    iVar1 = LOCALALLOC(0x1018,param_1);
    UNLOCKSEGMENT(0x1018,0xffff,uVar2);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (DAT_1008_082a == (code *)0x0) break;
    unaff_CS = 0x1000;
    iVar1 = (*DAT_1008_082a)(param_1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 0;
}



void __cdecl16near FUN_1000_3ac6(int param_1)

{
  if (param_1 != 0) {
    LOCALFREE();
  }
  return;
}



undefined2 __cdecl16near FUN_1000_3adc(int param_1,int param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  
  if (param_1 == 0) {
    uVar1 = FUN_1000_3a72(param_2);
  }
  else if (param_2 == 0) {
    FUN_1000_3ac6(param_1);
    uVar1 = 0;
  }
  else {
    uVar2 = 0xffff;
    LOCKSEGMENT();
    if (param_2 == 0) {
      param_2 = 1;
    }
    uVar1 = LOCALREALLOC(0x1018,0x62,param_2);
    UNLOCKSEGMENT(0x1018,0xffff,param_1,uVar2);
  }
  return uVar1;
}



void __cdecl16near FUN_1000_3b40(void)

{
  LOCALSIZE();
  return;
}



undefined2 __cdecl16far ___EXPORTEDSTUB(void)

{
  return 0;
}



undefined4 __cdecl16near FUN_1000_3b64(void)

{
  int *piVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  int iVar5;
  int local_4;
  
  local_4 = 0;
  while ((local_4 < *(int *)(DAT_1008_09d0 + 0x76) &&
         (uVar2 = *(undefined4 *)(local_4 * 4 + 0x9d8), *(int *)((int)uVar2 + 0x20) == 0))) {
    local_4 = local_4 + 1;
  }
  if (local_4 < *(int *)(DAT_1008_09d0 + 0x76)) {
    local_4 = local_4 * 4;
    *(undefined2 *)((int)*(undefined4 *)(local_4 + 0x9d8) + 0x20) = 0;
    uVar3 = *(undefined2 *)(DAT_1008_09d0 + 0x74);
    uVar4 = (undefined2)((ulong)*(undefined4 *)(local_4 + 0x9d8) >> 0x10);
    iVar5 = (int)*(undefined4 *)(local_4 + 0x9d8);
    *(undefined2 *)(iVar5 + 4) = *(undefined2 *)(DAT_1008_09d0 + 0x72);
    *(undefined2 *)(iVar5 + 6) = uVar3;
    piVar1 = *(int **)(local_4 + 0x9d8);
    iVar5 = *(int *)(local_4 + 0x9da);
    *piVar1 = (int)(piVar1 + 0x16);
    piVar1[1] = iVar5;
    *(undefined2 *)((int)*(undefined4 *)(local_4 + 0x9d8) + 0x26) = DAT_1008_09d2;
    uVar3 = *(undefined2 *)(local_4 + 0x9d8);
    uVar4 = *(undefined2 *)(local_4 + 0x9da);
  }
  else {
    uVar3 = 0;
    uVar4 = 0;
  }
  return CONCAT22(uVar4,uVar3);
}



void __cdecl16far entry(void)

{
  int iVar1;
  int in_CX;
  undefined2 unaff_SI;
  undefined2 unaff_ES;
  undefined2 unaff_CS;
  undefined2 in_stack_0000fff4;
  undefined2 uVar2;
  
  uVar2 = 0x1008;
  if (in_CX != 0) {
    in_stack_0000fff4 = 0x1008;
    iVar1 = LOCALINIT(unaff_CS,in_CX,0);
    if (iVar1 == 0) {
      return;
    }
  }
  FUN_1000_3106(in_stack_0000fff4,unaff_SI,unaff_ES,in_CX,uVar2);
  return;
}


