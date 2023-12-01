#include "hyprfind.h"



// Title:  WinHelp Free Text Search DLL
// Format: New Executable (NE) Windows
// CRC:    00000000
// 
// Program Entry Point (CS:IP):   0001:0000
// Initial Stack Pointer (SS:SP): 0000:0000
// Auto Data Segment Index:       0017
// Initial Heap Size:             0200
// Initial Stack Size:            0000
// Minimum Code Swap Size:        0000
// 
// Linker Version:  5.10
// Target OS:       Windows
// Windows Version: 3.10
// 
// Program Flags:     09
//         Single Data
//         Protected Mode
// Application Flags: 83
//         Windows P.M. API
//         Library Module
// Other Flags:       08
// 

undefined2 __cdecl16far entry(void)

{
  undefined *puVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int in_CX;
  undefined2 extraout_DX;
  undefined2 unaff_SI;
  undefined2 unaff_DI;
  undefined *puVar6;
  undefined2 unaff_CS;
  undefined2 uVar7;
  undefined2 uVar8;
  
                    // Segment:    1
                    // Offset:     00000600
                    // Length:     210b
                    // Min Alloc:  210b
                    // Flags:      1d50
                    //     Code
                    //     Discardable
                    //     Moveable
                    //     Preload
                    //     Impure (Non-shareable)
                    // 
  uVar8 = 0x10b0;
  uVar7 = unaff_CS;
  DAT_10b0_001d = unaff_DI;
  if (in_CX != 0) {
    uVar7 = 0x1168;
    iVar4 = LOCALINIT(unaff_CS,in_CX,0);
    if (iVar4 == 0) {
      return 0;
    }
  }
  puVar6 = (undefined *)0xc00;
  for (iVar4 = 0x2b2; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar1 = puVar6;
    puVar6 = puVar6 + 1;
    *puVar1 = 0;
  }
  pcVar2 = (code *)swi(0x1a);
  cVar3 = (*pcVar2)();
  if (cVar3 != '\0') {
    DAT_0040_0070 = 1;
  }
  pcVar2 = (code *)swi(0x21);
  DAT_10b0_0016 = extraout_DX;
  DAT_10b0_0018 = iVar4;
  DAT_10b0_001a = (*pcVar2)();
  uVar5 = GETWINFLAGS(uVar7,uVar8);
  if ((uVar5 & 1) != 0) {
    DAT_10b0_0012 = 8;
  }
  if ((uVar5 & 0x400) != 0) {
    DAT_10b0_0014 = 1;
  }
  DAT_10b0_001f = 0x2000;
  FUN_1000_00f6();
  DAT_10b0_001f = 0;
  DAT_10b0_0023 = 0;
  uVar7 = FUN_1060_0000(uVar7,uVar8,unaff_DI,unaff_SI);
  return uVar7;
}



void __cdecl16far FUN_1000_009e(void)

{
  FUN_1000_013a();
  return;
}



void __cdecl16far FUN_1000_00b0(void)

{
  return;
}



void __cdecl16far FUN_1000_00b1(void)

{
  return;
}



void __cdecl16far FUN_1000_00b2(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return;
}



undefined2 __stdcall16far WEP(undefined2 param_1)

{
  undefined2 uVar1;
  
  if (DAT_10b0_0023 == 0) {
    uVar1 = FUN_1060_0018(param_1);
    FUN_1000_04ff();
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



void __cdecl16near FUN_1000_00f6(void)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  char *unaff_SI;
  char *unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_CS;
  
  while( true ) {
    uVar2 = 0x100;
    pcVar3 = unaff_DI;
    for (pcVar4 = unaff_SI; pcVar4 != unaff_DI; pcVar4 = pcVar4 + 6) {
      if ((*pcVar4 != -1) && ((byte)pcVar4[1] < uVar2)) {
        uVar2 = (uint)(byte)pcVar4[1];
        pcVar3 = pcVar4;
      }
    }
    if (pcVar3 == unaff_DI) break;
    cVar1 = *pcVar3;
    *pcVar3 = -1;
    if (cVar1 == '\0') {
      unaff_CS = 0x1000;
      (**(code **)(pcVar3 + 2))();
    }
    else {
      (**(code **)(pcVar3 + 2))(unaff_CS);
    }
  }
  return;
}



void __cdecl16near FUN_1000_013a(void)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  char *pcVar4;
  char *unaff_SI;
  char *unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_CS;
  
  while( true ) {
    bVar2 = 0;
    pcVar3 = unaff_DI;
    for (pcVar4 = unaff_SI; pcVar4 != unaff_DI; pcVar4 = pcVar4 + 6) {
      if ((*pcVar4 != -1) && (bVar2 <= (byte)pcVar4[1])) {
        bVar2 = pcVar4[1];
        pcVar3 = pcVar4;
      }
    }
    if (pcVar3 == unaff_DI) break;
    cVar1 = *pcVar3;
    *pcVar3 = -1;
    if (cVar1 == '\0') {
      unaff_CS = 0x1000;
      (**(code **)(pcVar3 + 2))();
    }
    else {
      (**(code **)(pcVar3 + 2))(unaff_CS);
    }
  }
  return;
}



undefined4 __cdecl16near FUN_1000_017b(void)

{
  undefined2 in_AX;
  undefined2 in_DX;
  
  FUN_1000_1c48();
  return CONCAT22(in_DX,in_AX);
}



uint __cdecl16far FUN_1000_01e0(void)

{
  undefined4 *puVar1;
  uint in_AX;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  int in_DX;
  uint uVar5;
  undefined4 *unaff_DI;
  undefined4 *puVar6;
  uint unaff_ES;
  uint uVar7;
  uint uVar8;
  undefined2 uVar9;
  bool bVar10;
  undefined4 *puVar11;
  
  uVar4 = in_AX + 7 & 0xfffc;
  if (in_DX + (uint)(0xfff8 < in_AX) == 0) {
    FUN_1000_017b();
    puVar11 = (undefined4 *)CONCAT22(unaff_ES,unaff_DI);
    if ((unaff_ES | (uint)unaff_DI) != 0) {
      do {
        puVar6 = (undefined4 *)(undefined4 *)*puVar11;
        uVar7 = (uint)((ulong)(undefined4 *)*puVar11 >> 0x10);
        uVar2 = uVar4;
        while ((uVar7 | (uint)puVar6) != 0) {
          bVar10 = *(uint *)(puVar6 + 3) < uVar2;
          if ((!bVar10) && (uVar2 = FUN_1000_02d8(), bVar10)) {
            return uVar2;
          }
          puVar1 = puVar6;
          puVar6 = (undefined4 *)(undefined4 *)*puVar1;
          uVar7 = (uint)((ulong)(undefined4 *)*puVar1 >> 0x10);
        }
        if (uVar4 < 0x7ff1) {
          uVar2 = 0x8000;
        }
        else {
          if (0xfef0 < uVar4) break;
          uVar2 = uVar4 + 0x10f & 0xff00;
        }
        uVar7 = 0;
        puVar3 = (uint *)FUN_1000_1eb6();
        if ((uVar7 | (uint)puVar3) == 0) {
          return 0;
        }
        uVar8 = (uint)((ulong)*puVar11 >> 0x10);
        uVar5 = (uint)*puVar11;
        *puVar3 = uVar5;
        puVar3[1] = uVar8;
        if ((uVar8 | uVar5) != 0) {
          *(uint **)(uVar5 + 4) = puVar3;
          *(uint *)(uVar5 + 6) = uVar7;
        }
        uVar9 = (undefined2)((ulong)puVar11 >> 0x10);
        puVar1 = (undefined4 *)puVar11 + 1;
        *(int *)puVar1 = *(int *)puVar1 + 1;
        *(uint **)puVar11 = puVar3;
        *(uint *)((int)(undefined4 *)puVar11 + 2) = uVar7;
        puVar3[2] = 0;
        puVar3[3] = 0;
        *(undefined2 *)((int)puVar3 + (uVar2 - 2)) = 0;
        puVar3[4] = uVar2;
        puVar3[6] = uVar2 - 0x10;
        puVar3[5] = (uint)(puVar3 + 7);
        puVar3[7] = uVar2 - 0xf;
        puVar3[8] = 0;
      } while( true );
    }
  }
  uVar4 = FUN_1000_1eb6();
  if (uVar4 != 0) {
    FUN_1000_1ee6();
    uVar4 = 0;
  }
  return uVar4;
}



void __cdecl16near FUN_1000_02d8(void)

{
  uint in_AX;
  int iVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  uint unaff_DI;
  undefined2 unaff_ES;
  
  piVar3 = *(int **)(unaff_DI + 10);
  piVar2 = (int *)(unaff_DI + 10);
  do {
    while( true ) {
      iVar1 = *piVar3;
      uVar4 = iVar1 - 1;
      if (in_AX <= uVar4) {
        *(int *)(unaff_DI + 0xc) = *(int *)(unaff_DI + 0xc) - in_AX;
        iVar1 = (*piVar3 + -1) - in_AX;
        if (iVar1 != 0) {
          *(uint *)((int)piVar3 + iVar1) = in_AX;
          ((uint *)((int)piVar3 + iVar1))[1] = unaff_DI;
          *piVar3 = iVar1 + 1;
          return;
        }
        *piVar3 = *piVar3 + -1;
        iVar1 = piVar3[1];
        piVar3[1] = unaff_DI;
        *piVar2 = iVar1;
        return;
      }
      uVar4 = *(uint *)((int)piVar3 + uVar4);
      if ((uVar4 & 1) == 0) break;
      *piVar3 = *piVar3 + (uVar4 - 1);
      piVar3[1] = *(int *)((int)piVar3 + iVar1 + 1);
    }
    piVar2 = piVar3 + 1;
    piVar3 = (int *)piVar3[1];
  } while (piVar3 != (int *)0x0);
  return;
}



void __cdecl16far FUN_1000_0356(void)

{
  undefined4 *puVar1;
  uint uVar2;
  uint **ppuVar3;
  uint *puVar4;
  uint uVar5;
  uint *unaff_DI;
  uint *puVar6;
  int unaff_ES;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  
  if (unaff_DI == (uint *)0x0) {
    FUN_1000_1ee6();
  }
  else {
    puVar8 = unaff_DI;
    iVar9 = unaff_ES;
    FUN_1000_017b();
    puVar6 = puVar8 + -2;
    puVar1 = (undefined4 *)puVar8[-1];
    *(uint *)(puVar1 + 3) = *(int *)(puVar1 + 3) + *puVar6;
    if ((*(int *)(puVar1 + 2) + -0x10 == *(int *)(puVar1 + 3)) && (1 < unaff_DI[2])) {
      uVar7 = (uint)((ulong)*puVar1 >> 0x10);
      uVar5 = (uint)*puVar1;
      puVar8 = *(uint **)(puVar1 + 1);
      uVar2 = *(uint *)((int)puVar1 + 6);
      if ((uVar7 | uVar5) != 0) {
        *(uint **)(uVar5 + 4) = puVar8;
        *(uint *)(uVar5 + 6) = uVar2;
      }
      if ((uVar2 | (uint)puVar8) == 0) {
        *(uint *)CONCAT22(unaff_ES,unaff_DI) = uVar5;
        unaff_DI[1] = uVar7;
      }
      else {
        *puVar8 = uVar5;
        puVar8[1] = uVar7;
      }
      FUN_1000_1ee6();
      *(int *)(iVar9 + 4) = *(int *)(iVar9 + 4) + -1;
      return;
    }
    *puVar6 = *puVar6 + 1;
    ppuVar3 = (uint **)((int)puVar1 + 10);
    for (puVar4 = *(uint **)((int)puVar1 + 10); (puVar4 != (uint *)0x0 && (puVar4 <= puVar6));
        puVar4 = (uint *)puVar4[1]) {
      ppuVar3 = (uint **)(puVar4 + 1);
    }
    puVar8[-1] = (uint)puVar4;
    *ppuVar3 = puVar6;
  }
  return;
}



void __cdecl16far FUN_1000_0448(undefined2 param_1,undefined2 param_2)

{
  int unaff_BP;
  
  FUN_1000_1bf1(param_1,param_2,unaff_BP + 1);
  return;
}



void __cdecl16far FUN_1000_0482(void)

{
  return;
}



void FUN_1000_0483(undefined2 param_1,int param_2,int param_3)

{
  code **ppcVar1;
  
  if (param_3 == 0) {
    while (DAT_10b0_0748 != 0) {
      DAT_10b0_0748 = DAT_10b0_0748 + -1;
      ppcVar1 = (code **)(DAT_10b0_0748 * 4 + 0xe22);
      (**ppcVar1)();
    }
    FUN_1000_009e();
    (*DAT_10b0_084c)();
  }
  FUN_1000_00b1();
  FUN_1000_00b0();
  if (param_2 == 0) {
    if (param_3 == 0) {
      (*DAT_10b0_0850)();
      (*DAT_10b0_0854)();
    }
    FUN_1000_00b2(param_1);
  }
  return;
}



void __cdecl16far FUN_1000_04ff(void)

{
  FUN_1000_0483(0,1,0);
  return;
}



// WARNING: Removing unreachable block (ram,0x100005da)
// WARNING: Removing unreachable block (ram,0x100005b9)

undefined4 __stdcall16far FUN_1000_0531(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int in_stack_00000002;
  
  if ((param_3 == 0) && ((param_1 == 0 || (param_2 == 0)))) {
    in_stack_00000002 = (int)(CONCAT22(param_1,in_stack_00000002) / (ulong)param_2);
    param_1 = 0;
  }
  else {
    bVar6 = (int)param_1 < 0;
    if (bVar6) {
      bVar4 = in_stack_00000002 != 0;
      in_stack_00000002 = -in_stack_00000002;
      param_1 = -(uint)bVar4 - param_1;
    }
    if ((int)param_3 < 0) {
      bVar4 = param_2 != 0;
      param_2 = -param_2;
      param_3 = -(uint)bVar4 - param_3;
      bVar6 = !bVar6;
    }
    iVar1 = 0x20;
    uVar3 = 0;
    uVar2 = 0;
    do {
      bVar4 = in_stack_00000002 < 0;
      in_stack_00000002 = in_stack_00000002 * 2;
      bVar5 = (int)param_1 < 0;
      param_1 = param_1 << 1 | (uint)bVar4;
      bVar4 = (int)uVar2 < 0;
      uVar2 = uVar2 << 1 | (uint)bVar5;
      uVar3 = uVar3 << 1 | (uint)bVar4;
      if ((param_3 <= uVar3) && ((param_3 < uVar3 || (param_2 <= uVar2)))) {
        bVar4 = uVar2 < param_2;
        uVar2 = uVar2 - param_2;
        uVar3 = (uVar3 - param_3) - (uint)bVar4;
        in_stack_00000002 = in_stack_00000002 + 1;
      }
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    if (bVar6) {
      bVar6 = in_stack_00000002 != 0;
      in_stack_00000002 = -in_stack_00000002;
      param_1 = -(uint)bVar6 - param_1;
    }
  }
  return CONCAT22(param_1,in_stack_00000002);
}



undefined2 FUN_1000_0620(int param_1)

{
  if (param_1 < 0) {
    if (param_1 == -0x30 || -param_1 < 0x30) {
      DAT_10b0_0010 = -param_1;
      DAT_10b0_0a12 = 0xffff;
      return 0xffff;
    }
  }
  else if (param_1 < 0x59) goto LAB_1000_0633;
  param_1 = 0x57;
LAB_1000_0633:
  DAT_10b0_0a12 = param_1;
  DAT_10b0_0010 = (int)*(char *)(param_1 + 0xa14);
  return 0xffff;
}



undefined2 FUN_1000_0659(undefined2 param_1)

{
  FUN_1000_0620(param_1);
  return param_1;
}



char * FUN_1000_0680(char param_1,char param_2,uint param_3,char *param_4,uint param_5,uint param_6)

{
  char *pcVar1;
  byte bVar2;
  ulong uVar3;
  char cVar4;
  int iVar5;
  byte *pbVar6;
  char *pcVar7;
  undefined2 uVar8;
  undefined2 unaff_SS;
  bool bVar9;
  byte local_24 [34];
  
  uVar8 = (undefined2)((ulong)param_4 >> 0x10);
  pcVar7 = (char *)param_4;
  if ((param_3 < 0x25) && (1 < (byte)param_3)) {
    if (((int)param_6 < 0) && (param_2 != '\0')) {
      *param_4 = '-';
      pcVar7 = pcVar7 + 1;
      bVar9 = param_5 != 0;
      param_5 = -param_5;
      param_6 = -(uint)bVar9 - param_6;
    }
    pbVar6 = local_24;
    if (param_6 == 0) goto LAB_1000_06ca;
    do {
      uVar3 = (ulong)param_6;
      param_6 = param_6 / param_3;
      uVar3 = uVar3 % (ulong)param_3 << 0x10 | (ulong)param_5;
      param_5 = (uint)(uVar3 / param_3);
      *pbVar6 = (byte)(uVar3 % (ulong)param_3);
      pbVar6 = pbVar6 + 1;
    } while (param_6 != 0);
    while (param_5 != 0) {
LAB_1000_06ca:
      *pbVar6 = (byte)(param_5 % param_3);
      pbVar6 = pbVar6 + 1;
      param_5 = param_5 / param_3;
    }
    iVar5 = (int)pbVar6 - (int)local_24;
    do {
      pbVar6 = pbVar6 + -1;
      bVar2 = *pbVar6;
      if (bVar2 < 10) {
        cVar4 = bVar2 + 0x30;
      }
      else {
        cVar4 = (bVar2 - 10) + param_1;
      }
      pcVar1 = pcVar7;
      pcVar7 = pcVar7 + 1;
      *pcVar1 = cVar4;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  *pcVar7 = '\0';
  return param_4;
}



void FUN_1000_0702(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  FUN_1000_0680(0x61,0,10,param_1,param_2,param_3,0);
  return;
}



uint __cdecl16far FUN_1000_077a(int param_1)

{
  uint uVar1;
  uint in_DX;
  uint extraout_DX;
  
  if (param_1 == 0) {
    param_1 = 1;
  }
  while ((uVar1 = FUN_1000_1b9c(param_1), (uVar1 | in_DX) == 0 &&
         (((uint)DAT_10b0_0ea2 | DAT_10b0_0ea4) != 0))) {
    (*DAT_10b0_0ea2)();
    in_DX = extraout_DX;
  }
  return uVar1;
}



int FUN_1000_1014(uint *param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  undefined2 uVar8;
  undefined4 local_6;
  
  uVar8 = (undefined2)((ulong)param_1 >> 0x10);
  puVar6 = (uint *)param_1;
  if ((int)*param_1 < 0) {
    iVar2 = puVar6[3] + *param_1 + 1;
  }
  else {
    uVar5 = (int)*param_1 >> 0xf;
    iVar2 = (*param_1 ^ uVar5) - uVar5;
  }
  iVar7 = iVar2;
  if ((puVar6[1] & 0x40) == 0) {
    local_6 = (char *)CONCAT22(puVar6[7],(char *)puVar6[6]);
    iVar3 = iVar2;
    if ((int)*param_1 < 0) {
      while (iVar3 = iVar2 + -1, iVar2 != 0) {
        local_6 = (char *)CONCAT22(local_6._2_2_,(char *)local_6 + -1);
        iVar2 = iVar3;
        if (*local_6 == '\n') {
          iVar7 = iVar7 + 1;
        }
      }
    }
    else {
      while (pcVar1 = local_6, iVar4 = iVar3 + -1, iVar7 = iVar2, iVar3 != 0) {
        local_6 = (char *)CONCAT22(local_6._2_2_,(char *)local_6 + 1);
        iVar3 = iVar4;
        if (*pcVar1 == '\n') {
          iVar2 = iVar2 + 1;
        }
      }
    }
  }
  return iVar7;
}



void __cdecl16far FUN_1000_11fa(int param_1,undefined2 param_2,undefined2 param_3,int param_4)

{
  int iVar1;
  
  if (param_4 == 10) {
    iVar1 = param_1 >> 0xf;
  }
  else {
    iVar1 = 0;
  }
  FUN_1000_0680(0x61,1,param_4,param_2,param_3,param_1,iVar1);
  return;
}



void FUN_1000_1270(undefined2 *param_1,undefined2 *param_2)

{
  undefined2 *puVar1;
  undefined uVar2;
  undefined2 uVar3;
  uint uVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  
  uVar7 = (undefined2)((ulong)param_1 >> 0x10);
  puVar6 = (undefined2 *)param_1;
  uVar8 = (undefined2)((ulong)param_2 >> 0x10);
  uVar4 = DAT_10b0_0ea6 >> 1;
  puVar5 = (undefined2 *)param_2;
  if ((DAT_10b0_0ea6 & 1) != 0) {
    uVar2 = *(undefined *)param_1;
    puVar6 = (undefined2 *)((int)puVar6 + 1);
    *(undefined *)param_1 = *(undefined *)param_2;
    *(undefined *)param_2 = uVar2;
    puVar5 = (undefined2 *)((int)(undefined2 *)param_2 + 1);
    if (uVar4 == 0) {
      return;
    }
  }
  do {
    uVar3 = *puVar6;
    puVar1 = puVar6;
    puVar6 = puVar6 + 1;
    *puVar1 = *puVar5;
    *puVar5 = uVar3;
    uVar4 = uVar4 - 1;
    puVar5 = puVar5 + 1;
  } while (uVar4 != 0);
  return;
}



void FUN_1000_129e(uint param_1,uint param_2,undefined2 param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined2 uVar5;
  uint local_16;
  uint local_12;
  uint local_e;
  uint local_a;
  uint local_6;
  
  while (2 < param_1) {
    local_a = param_2 + (param_1 - 1) * DAT_10b0_0ea6;
    uVar2 = param_2 + (param_1 >> 1) * DAT_10b0_0ea6;
    iVar1 = (*DAT_10b0_0ea8)();
    if (0 < iVar1) {
      FUN_1000_1270(local_a,param_3,uVar2,param_3);
    }
    iVar1 = (*DAT_10b0_0ea8)();
    uVar3 = param_2;
    uVar4 = uVar2;
    if ((0 < iVar1) || (iVar1 = (*DAT_10b0_0ea8)(), uVar3 = local_a, uVar4 = param_2, 0 < iVar1)) {
      FUN_1000_1270(uVar3,param_3,uVar4,param_3);
    }
    if (param_1 == 3) goto LAB_1000_12e8;
    local_e = param_2 + DAT_10b0_0ea6;
    local_6 = local_e;
    do {
      while (iVar1 = (*DAT_10b0_0ea8)(), iVar1 < 1) {
        if (iVar1 == 0) {
          FUN_1000_1270(local_e,param_3,local_6,param_3);
          local_e = local_e + DAT_10b0_0ea6;
        }
        if (local_a <= local_6) goto LAB_1000_1449;
        local_6 = local_6 + DAT_10b0_0ea6;
      }
      for (; local_6 < local_a; local_a = local_a - DAT_10b0_0ea6) {
        iVar1 = (*DAT_10b0_0ea8)();
        if (-1 < iVar1) {
          FUN_1000_1270(local_a,param_3,local_6,param_3);
          if (iVar1 != 0) {
            local_6 = local_6 + DAT_10b0_0ea6;
            local_a = local_a - DAT_10b0_0ea6;
          }
          break;
        }
      }
    } while (local_6 < local_a);
LAB_1000_1449:
    uVar2 = param_2;
    uVar5 = param_3;
    iVar1 = (*DAT_10b0_0ea8)();
    if (iVar1 < 1) {
      local_6 = local_6 + DAT_10b0_0ea6;
    }
    local_12 = param_2;
    for (local_16 = local_6 - DAT_10b0_0ea6; (local_12 < local_e && (local_e <= local_16));
        local_16 = local_16 - DAT_10b0_0ea6) {
      FUN_1000_1270(local_16,param_3,local_12,param_3);
      local_12 = local_12 + DAT_10b0_0ea6;
    }
    uVar2 = FUN_1000_0531(-(uint)(local_6 < local_e),DAT_10b0_0ea6,0,uVar2);
    param_1 = FUN_1000_0531(-(uint)(param_2 + param_1 * DAT_10b0_0ea6 < local_6),DAT_10b0_0ea6,0,
                            uVar5);
    if (param_1 < uVar2) {
      FUN_1000_129e(param_1,local_6,param_3);
      param_1 = uVar2;
    }
    else {
      FUN_1000_129e(uVar2,param_2,param_3);
      param_2 = local_6;
    }
  }
  if (param_1 == 2) {
    uVar2 = param_2 + DAT_10b0_0ea6;
    iVar1 = (*DAT_10b0_0ea8)();
    if (0 < iVar1) {
LAB_1000_12e8:
      FUN_1000_1270(uVar2,param_3,param_2,param_3);
    }
  }
  return;
}



void __cdecl16far FUN_1000_1b9c(undefined2 param_1)

{
  int unaff_BP;
  
  FUN_1000_1f12(param_1,0,DAT_10b0_001f,unaff_BP + 1);
  return;
}



void __cdecl16far FUN_1000_1bf1(undefined2 param_1,undefined2 param_2)

{
  int unaff_BP;
  
  FUN_1000_1fd8(param_1,param_2,DAT_10b0_001f,unaff_BP + 1);
  return;
}



undefined2 __cdecl16far FUN_1000_1c48(void)

{
  return 0xeac;
}



void __cdecl16far FUN_1000_1eb6(void)

{
  undefined2 in_AX;
  uint uVar1;
  int iVar2;
  undefined2 in_DX;
  undefined2 unaff_CS;
  
  uVar1 = DAT_10b0_001f | 2;
  iVar2 = GLOBALALLOC(unaff_CS,in_AX,in_DX);
  if (iVar2 != 0) {
    GLOBALLOCK(0x1168,iVar2,uVar1);
  }
  return;
}



void __cdecl16far FUN_1000_1ee6(void)

{
  int iVar1;
  
  iVar1 = GLOBALHANDLE();
  if (iVar1 != 0) {
    GLOBALUNLOCK(0x1168,iVar1,iVar1);
    GLOBALFREE(0x1168);
  }
  return;
}



undefined2 __cdecl16far FUN_1000_1f12(uint param_1,uint param_2,undefined2 param_3)

{
  undefined2 uVar1;
  undefined2 unaff_DI;
  
  uVar1 = DAT_10b0_001f;
  if ((param_1 | param_2) == 0) {
    unaff_DI = 0;
  }
  else {
    DAT_10b0_001f = param_3;
    FUN_1000_01e0();
  }
  DAT_10b0_001f = uVar1;
  return unaff_DI;
}



void __cdecl16far FUN_1000_1fd8(uint param_1,uint param_2_00,undefined2 param_2)

{
  undefined2 uVar1;
  
  uVar1 = DAT_10b0_001f;
  if ((param_1 | param_2_00) != 0) {
    DAT_10b0_001f = param_2;
    FUN_1000_0356();
  }
  DAT_10b0_001f = uVar1;
  return;
}



undefined2 __cdecl16far FUN_1030_01ea(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_CS;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if (*(int *)(iVar2 + 2) != 0) {
    return 0xffff;
  }
  *(undefined2 *)(iVar2 + 0x10) = 1;
  uVar1 = DIALOGBOX(unaff_CS,*(undefined2 *)(iVar2 + 10),*(undefined2 *)(iVar2 + 0xc),param_3,
                    *(undefined2 *)(iVar2 + 4),*(undefined2 *)(iVar2 + 6));
  *(undefined2 *)(iVar2 + 0x10) = 0;
  return uVar1;
}



void __stdcall16far
_Dialog__DlgProc_qpx6HWND__uiuil(undefined2 param_1,undefined2 param_2,int param_3,int param_4)

{
  int *in_BX;
  undefined2 unaff_ES;
  int *piVar1;
  
  piVar1 = (int *)CONCAT22(unaff_ES,in_BX);
  if (param_4 == 0x10) {
    (**(code **)(*piVar1 + 0x10))();
    return;
  }
  if (param_4 == 0x110) {
    (**(code **)(*piVar1 + 0x14))();
    return;
  }
  if (param_4 == 0x111) {
    if (param_3 == 1) {
      (**(code **)(*piVar1 + 8))();
      return;
    }
    if (param_3 == 2) {
      (**(code **)(*piVar1 + 0xc))();
      return;
    }
  }
  (**(code **)(*piVar1 + 0x18))();
  return;
}



void __cdecl16far
FUN_1038_0188(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  int unaff_BP;
  
  FUN_1030_01ea(param_1,param_2,param_3,param_4,unaff_BP + 1);
  return;
}



undefined2 __cdecl16far FUN_1040_0000(undefined4 param_1,undefined2 param_3,undefined2 param_4)

{
  uint uVar1;
  uint in_DX;
  int unaff_BP;
  
                    // Segment:    9
                    // Offset:     00007800
                    // Length:     0a85
                    // Min Alloc:  0a85
                    // Flags:      1d10
                    //     Code
                    //     Discardable
                    //     Moveable
                    //     LoadOnCall
                    //     Impure (Non-shareable)
                    // 
  if (((uint)param_1 | param_1._2_2_) == 0) {
    uVar1 = FUN_1000_077a(0x20,unaff_BP + 1);
    param_1 = CONCAT22(in_DX,uVar1);
    if ((uVar1 | in_DX) == 0) goto LAB_1040_004b;
  }
  FUN_1058_011c((uint)param_1,param_1._2_2_,param_3,param_4);
  *(undefined2 *)((uint)param_1 + 0xc) = 0;
  *(undefined2 *)((uint)param_1 + 10) = 0;
  *(undefined2 *)((uint)param_1 + 8) = 0;
  *(undefined2 *)((uint)param_1 + 6) = 0;
LAB_1040_004b:
  return (uint)param_1;
}



undefined2 __cdecl16far FUN_1040_00d4(undefined4 param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  int unaff_BP;
  int iVar3;
  undefined2 uVar4;
  
  iVar3 = unaff_BP + 1;
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  *(int *)(iVar2 + 0xe) = param_2;
  if ((param_2 != 0) && ((*(uint *)(iVar2 + 6) | *(uint *)(iVar2 + 8)) == 0)) {
    uVar1 = FUN_1000_077a(0x1000,iVar3);
    *(int *)(iVar2 + 8) = param_2;
    *(undefined2 *)(iVar2 + 6) = uVar1;
  }
  if ((*(uint *)(iVar2 + 10) | *(uint *)(iVar2 + 0xc)) == 0) {
    uVar1 = FUN_1000_077a(0x4000,iVar3);
    *(int *)(iVar2 + 0xc) = param_2;
    *(undefined2 *)(iVar2 + 10) = uVar1;
  }
  if (((*(int *)(iVar2 + 0xe) == 0) || ((*(uint *)(iVar2 + 6) | *(uint *)(iVar2 + 8)) != 0)) &&
     ((*(uint *)(iVar2 + 10) | *(uint *)(iVar2 + 0xc)) != 0)) {
    iVar3 = FUN_1058_0191(iVar2,uVar4,0x12a,0x10b0);
    if (iVar3 == 0) {
      return 0;
    }
    *(undefined2 *)(iVar2 + 0x12) = 0xffff;
    *(undefined2 *)(iVar2 + 0x10) = 0xffff;
    *(undefined2 *)(iVar2 + 0x1e) = 0;
    *(undefined2 *)(iVar2 + 0x1c) = 0;
    *(undefined2 *)(iVar2 + 0x16) = 0;
    *(undefined2 *)(iVar2 + 0x14) = 0;
    *(undefined2 *)(iVar2 + 0x1a) = 0;
    *(undefined2 *)(iVar2 + 0x18) = 0;
    return 1;
  }
  return 0;
}



void __cdecl16far FUN_1050_01fb(void)

{
  return;
}



void __cdecl16far FUN_1050_0202(undefined4 param_1)

{
  int iVar1;
  int unaff_BP;
  undefined2 unaff_CS;
  
  iVar1 = FUN_1050_09c1((int)param_1,param_1._2_2_,unaff_BP + 1);
  if (iVar1 == 0) {
    MESSAGEBOX(unaff_CS,0x30,0x21f,0x10b0,0x1db,0x10b0);
    return;
  }
  *(undefined2 *)((int)param_1 + 0x46) = 1;
  return;
}



void __cdecl16far FUN_1050_0377(undefined4 param_1,int param_2)

{
  char cVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  undefined2 uVar5;
  uint in_DX;
  uint uVar6;
  
  if ((param_2 == 0) || (*(int *)((int)param_1 + 0x46) != 0)) {
    if ((*(uint *)((int)param_1 + 0xb4) | *(uint *)((int)param_1 + 0xb6)) == 0) {
      FUN_1060_00bc(*(undefined2 *)((int)param_1 + 0x44),0x66,100,0x10);
      return;
    }
    uVar2 = FUN_1068_0401((int)param_1,param_1._2_2_,2,0);
    *(undefined2 *)((int)param_1 + 0x44) = uVar2;
    if ((*(uint *)((int)param_1 + 0xf8) | *(uint *)((int)param_1 + 0xfa)) == 0) {
      uVar2 = FUN_1058_0000(0,0);
      *(uint *)((int)param_1 + 0xfa) = in_DX;
      *(undefined2 *)((int)param_1 + 0xf8) = uVar2;
      uVar3 = FUN_1050_0958((int)param_1,param_1._2_2_);
      if ((uVar3 | in_DX) == 0) {
        FUN_1060_00bc(*(undefined2 *)((int)param_1 + 0x44),0x66,100,0x10);
        return;
      }
      uVar6 = in_DX;
      iVar4 = FUN_1058_0074(*(undefined2 *)((int)param_1 + 0xf8),
                            *(undefined2 *)((int)param_1 + 0xfa),uVar3,in_DX);
      FUN_1000_0448(uVar3,in_DX);
      in_DX = uVar6;
      if (iVar4 == 0) {
        FUN_1060_00bc(*(undefined2 *)((int)param_1 + 0x44),0x67,100,0x10);
        return;
      }
    }
    if ((*(uint *)((int)param_1 + 0xfc) | *(uint *)((int)param_1 + 0xfe)) == 0) {
      uVar2 = FUN_1058_0399(0,0,*(undefined2 *)((int)param_1 + 0xf8),
                            *(undefined2 *)((int)param_1 + 0xfa));
      *(uint *)((int)param_1 + 0xfe) = in_DX;
      *(undefined2 *)((int)param_1 + 0xfc) = uVar2;
    }
    if (*(int *)((int)*(undefined4 *)((int)param_1 + 0xfc) + 0x12) != 0) {
      FUN_1060_00bc(*(undefined2 *)((int)param_1 + 0x44),0x68,100,0x10);
      return;
    }
    if ((*(char *)((int)*(undefined4 *)((int)param_1 + 0xfc) + 7) == '\x03') &&
       (cVar1 = FUN_1058_0524(*(undefined2 *)((int)param_1 + 0xfc),
                              *(undefined2 *)((int)param_1 + 0xfe)), cVar1 == '\x02')) {
      FUN_1060_00bc(*(undefined2 *)((int)param_1 + 0x44),0x6f,100,0x10);
      return;
    }
    if ((*(char *)((int)*(undefined4 *)((int)param_1 + 0xfc) + 7) != '\x03') ||
       (cVar1 = FUN_1058_0524(*(undefined2 *)((int)param_1 + 0xfc),
                              *(undefined2 *)((int)param_1 + 0xfe)), cVar1 != '\x01')) {
      FUN_1060_00bc(*(undefined2 *)((int)param_1 + 0x44),0x69,100,0x10);
      return;
    }
    if ((*(uint *)((int)param_1 + 0x100) | *(uint *)((int)param_1 + 0x102)) == 0) {
      uVar2 = FUN_1040_0000(0,0,*(undefined2 *)((int)param_1 + 0xf8),
                            *(undefined2 *)((int)param_1 + 0xfa));
      *(uint *)((int)param_1 + 0x102) = in_DX;
      *(undefined2 *)((int)param_1 + 0x100) = uVar2;
    }
    iVar4 = FUN_1040_00d4(*(undefined2 *)((int)param_1 + 0x100),
                          *(undefined2 *)((int)param_1 + 0x102),
                          *(undefined2 *)((int)*(undefined4 *)((int)param_1 + 0xfc) + 0x10));
    if (iVar4 == 0) {
      FUN_1060_00bc(*(undefined2 *)((int)param_1 + 0x44),0x6b,100,0x10);
      return;
    }
    uVar2 = *(undefined2 *)((int)param_1 + 0x100);
    *(undefined2 *)((int)param_1 + 0xba) = *(undefined2 *)((int)param_1 + 0x102);
    *(undefined2 *)((int)param_1 + 0xb8) = uVar2;
    uVar5 = FUN_1058_0556(0,0,*(undefined2 *)((int)param_1 + 0xf8),
                          *(undefined2 *)((int)param_1 + 0xfa));
    *(undefined2 *)((int)param_1 + 0x106) = uVar2;
    *(undefined2 *)((int)param_1 + 0x104) = uVar5;
    if (*(int *)((int)*(undefined4 *)((int)param_1 + 0x104) + 6) != 0) {
      FUN_1060_00bc(*(undefined2 *)((int)param_1 + 0x44),0x6a,100,0x10);
      return;
    }
    uVar2 = *(undefined2 *)((int)param_1 + 0x104);
    *(undefined2 *)((int)param_1 + 0xbe) = *(undefined2 *)((int)param_1 + 0x106);
    *(undefined2 *)((int)param_1 + 0xbc) = uVar2;
    uVar2 = FUN_1060_0024(*(undefined2 *)((int)param_1 + 0x44));
    FUN_1038_0188((int)param_1 + 0x48,param_1._2_2_,uVar2);
  }
  return;
}



uint __cdecl16far FUN_1050_0958(undefined2 param_1,undefined2 param_2)

{
  undefined2 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined2 uVar8;
  
  uVar1 = FUN_1068_0401(param_1,param_2,8,0);
  uVar6 = GLOBALLOCK(0x1068,uVar1);
  uVar8 = (undefined2)((ulong)uVar6 >> 0x10);
  uVar7 = LSTRLEN(0x1168,(int)uVar6);
  uVar4 = (uint)((ulong)uVar7 >> 0x10);
  uVar2 = (int)uVar7 + 1;
  uVar5 = 0x1000;
  uVar3 = FUN_1000_077a(uVar2,uVar8);
  if ((uVar3 | uVar4) != 0) {
    uVar5 = 0x1168;
    LSTRCPY(0x1000,uVar6,uVar3);
    uVar2 = uVar4;
  }
  GLOBALUNLOCK(uVar5,uVar1,uVar2);
  GLOBALFREE(0x1168,uVar1);
  return uVar3;
}



undefined2 __cdecl16far FUN_1050_09c1(void)

{
  return 1;
}



undefined2 * __cdecl16far FUN_1058_0000(undefined2 *param_1)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  uint in_DX;
  int unaff_BP;
  undefined2 uVar3;
  
                    // Segment:    12
                    // Offset:     0000b200
                    // Length:     0ea8
                    // Min Alloc:  0ea8
                    // Flags:      1d10
                    //     Code
                    //     Discardable
                    //     Moveable
                    //     LoadOnCall
                    //     Impure (Non-shareable)
                    // 
  if (((uint)(undefined2 *)param_1 | param_1._2_2_) == 0) {
    puVar1 = (undefined2 *)FUN_1000_077a(6,unaff_BP + 1);
    param_1 = (undefined2 *)CONCAT22(in_DX,puVar1);
    if (((uint)puVar1 | in_DX) == 0) goto LAB_1058_0035;
  }
  uVar2 = FUN_1060_0028();
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  ((undefined2 *)param_1)[1] = in_DX;
  *param_1 = uVar2;
  ((undefined2 *)param_1)[2] = 0;
LAB_1058_0035:
  return (undefined2 *)param_1;
}



bool __cdecl16far FUN_1058_0074(undefined2 *param_1,undefined2 param_3,undefined2 param_4)

{
  undefined2 uVar1;
  int unaff_BP;
  
  FUN_1058_00b8((undefined2 *)param_1,param_1._2_2_,unaff_BP + 1);
  uVar1 = FUN_1068_02b0(*param_1,((undefined2 *)param_1)[1],param_3,param_4,2);
  ((undefined2 *)param_1)[2] = uVar1;
  return ((undefined2 *)param_1)[2] != 0;
}



void __cdecl16far FUN_1058_00b8(undefined2 *param_1)

{
  undefined2 *puVar1;
  int unaff_BP;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  puVar1 = (undefined2 *)param_1;
  if (puVar1[2] != 0) {
    FUN_1068_02c8(*param_1,puVar1[1],puVar1[2],unaff_BP + 1);
    puVar1[2] = 0;
  }
  return;
}



undefined2 * __cdecl16far FUN_1058_011c(undefined2 *param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 *puVar1;
  uint in_DX;
  int unaff_BP;
  undefined2 uVar2;
  
  if (((uint)(undefined2 *)param_1 | param_1._2_2_) == 0) {
    puVar1 = (undefined2 *)FUN_1000_077a(6,unaff_BP + 1);
    param_1 = (undefined2 *)CONCAT22(in_DX,puVar1);
    if (((uint)puVar1 | in_DX) == 0) goto LAB_1058_0152;
  }
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  ((undefined2 *)param_1)[1] = param_3;
  *param_1 = param_2;
  ((undefined2 *)param_1)[2] = 0;
LAB_1058_0152:
  return (undefined2 *)param_1;
}



bool __cdecl16far FUN_1058_0191(undefined4 *param_1,undefined2 param_3,undefined2 param_4)

{
  undefined2 *puVar1;
  int unaff_BP;
  undefined2 uVar2;
  
  FUN_1058_01dc((undefined4 *)param_1,param_1._2_2_,unaff_BP + 1);
  puVar1 = (undefined2 *)*param_1;
  uVar2 = (undefined2)((ulong)puVar1 >> 0x10);
  uVar2 = FUN_1068_02d9(*puVar1,((undefined2 *)puVar1)[1],((undefined2 *)puVar1)[2],param_3,param_4,
                        2);
  *(undefined2 *)((undefined4 *)param_1 + 1) = uVar2;
  return *(int *)((undefined4 *)param_1 + 1) != 0;
}



void __cdecl16far FUN_1058_01dc(undefined4 *param_1)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  int unaff_BP;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (undefined4 *)param_1;
  if (*(int *)(puVar2 + 1) != 0) {
    puVar1 = (undefined2 *)*param_1;
    FUN_1068_02f4(*puVar1,((undefined2 *)puVar1)[1],*(undefined2 *)(puVar2 + 1),unaff_BP + 1);
    *(undefined2 *)(puVar2 + 1) = 0;
  }
  return;
}



undefined2 __cdecl16far
FUN_1058_020c(undefined4 *param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5)

{
  undefined2 *puVar1;
  int unaff_BP;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  if (*(int *)((undefined4 *)param_1 + 1) == 0) {
    return 0xffff;
  }
  puVar1 = (undefined2 *)*param_1;
  uVar2 = FUN_1068_0305(*puVar1,((undefined2 *)puVar1)[1],*(undefined2 *)((undefined4 *)param_1 + 1)
                        ,param_2,param_3,param_4,param_5,unaff_BP + 1);
  return uVar2;
}



undefined2 __cdecl16far FUN_1058_024e(undefined4 *param_1)

{
  undefined2 *puVar1;
  int unaff_BP;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  if (*(int *)((undefined4 *)param_1 + 1) == 0) {
    return 0xffff;
  }
  puVar1 = (undefined2 *)*param_1;
  uVar2 = FUN_1068_0322(*puVar1,((undefined2 *)puVar1)[1],*(undefined2 *)((undefined4 *)param_1 + 1)
                        ,unaff_BP + 1);
  return uVar2;
}



undefined2 __cdecl16far
FUN_1058_0284(undefined4 *param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 *puVar1;
  int unaff_BP;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  if (*(int *)((undefined4 *)param_1 + 1) == 0) {
    return 0xffff;
  }
  puVar1 = (undefined2 *)*param_1;
  uVar2 = FUN_1068_0333(*puVar1,((undefined2 *)puVar1)[1],*(undefined2 *)((undefined4 *)param_1 + 1)
                        ,param_2,param_3,param_4,unaff_BP + 1);
  return uVar2;
}



undefined2 __cdecl16far FUN_1058_02c3(undefined4 *param_1)

{
  undefined2 *puVar1;
  int unaff_BP;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  if (*(int *)((undefined4 *)param_1 + 1) == 0) {
    return 0xffff;
  }
  puVar1 = (undefined2 *)*param_1;
  uVar2 = FUN_1068_035e(*puVar1,((undefined2 *)puVar1)[1],*(undefined2 *)((undefined4 *)param_1 + 1)
                        ,unaff_BP + 1);
  return uVar2;
}



int __cdecl16far FUN_1058_032c(undefined *param_1,undefined2 param_2_00,uint *param_2,int param_3)

{
  uint *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  byte local_3;
  
  uVar12 = (undefined2)((ulong)param_1 >> 0x10);
  puVar11 = (undefined *)param_1;
  uVar13 = (undefined2)((ulong)param_2 >> 0x10);
  puVar9 = (uint *)param_2;
  iVar6 = 0;
  while (param_3 != 0) {
    local_3 = *(byte *)puVar9;
    puVar9 = (uint *)((int)puVar9 + 1);
    iVar8 = 0;
    for (param_3 = param_3 + -1; (iVar8 < 8 && (param_3 != 0)); param_3 = param_3 + iVar4) {
      if ((local_3 & 1) == 0) {
        puVar2 = puVar11;
        puVar11 = puVar11 + 1;
        puVar1 = puVar9;
        puVar9 = (uint *)((int)puVar9 + 1);
        *puVar2 = *(undefined *)puVar1;
        iVar6 = iVar6 + 1;
        iVar4 = -1;
      }
      else {
        puVar1 = puVar9;
        puVar9 = puVar9 + 1;
        iVar4 = -2;
        puVar10 = puVar11 + -((*puVar1 & 0xfff) + 1);
        iVar5 = (*puVar1 >> 0xc) + 3;
        for (iVar7 = iVar5; iVar7 != 0; iVar7 = iVar7 + -1) {
          puVar3 = puVar11;
          puVar11 = puVar11 + 1;
          puVar2 = puVar10;
          puVar10 = puVar10 + 1;
          *puVar3 = *puVar2;
        }
        iVar6 = iVar6 + iVar5;
      }
      local_3 = (char)local_3 >> 1;
      iVar8 = iVar8 + 1;
    }
  }
  return iVar6;
}



undefined2 __cdecl16far FUN_1058_0399(undefined4 param_1,undefined2 param_3,undefined2 param_4)

{
  uint uVar1;
  int iVar2;
  undefined2 uVar3;
  uint in_DX;
  int unaff_BP;
  bool bVar4;
  int local_e;
  uint local_c;
  uint local_a;
  uint local_8;
  uint local_6;
  uint local_4;
  int iStack_2;
  
  iStack_2 = unaff_BP + 1;
  if (((uint)param_1 | param_1._2_2_) == 0) {
    uVar1 = FUN_1000_077a(0x18);
    param_1 = CONCAT22(in_DX,uVar1);
    if ((uVar1 | in_DX) == 0) goto LAB_1058_051b;
  }
  FUN_1058_011c((uint)param_1,param_1._2_2_,param_3,param_4);
  *(undefined2 *)((uint)param_1 + 0x12) = 1;
  iVar2 = FUN_1058_0191((uint)param_1,param_1._2_2_,0x260,0x10b0);
  if (iVar2 != 0) {
    iVar2 = FUN_1058_020c((uint)param_1,param_1._2_2_,(uint)param_1 + 6,param_1._2_2_,0xc,0);
    if ((in_DX == 0) && (iVar2 == 0xc)) {
      *(undefined2 *)((uint)param_1 + 0x12) = 0;
    }
    local_6 = FUN_1058_02c3((uint)param_1,param_1._2_2_);
    local_4 = in_DX;
    local_a = FUN_1058_024e((uint)param_1,param_1._2_2_);
    *(undefined2 *)((uint)param_1 + 0x16) = 0xffff;
    *(undefined2 *)((uint)param_1 + 0x14) = 0xffff;
    local_8 = in_DX;
    while ((((*(int *)((uint)param_1 + 0x12) == 0 && (*(int *)((uint)param_1 + 0x16) == -1)) &&
            (*(int *)((uint)param_1 + 0x14) == -1)) &&
           (((int)local_8 < (int)local_4 || ((local_8 == local_4 && (local_a < local_6))))))) {
      uVar1 = local_a;
      iVar2 = FUN_1058_020c((uint)param_1,param_1._2_2_,&local_e);
      if ((uVar1 == 0) && (iVar2 == 4)) {
        if (local_e == 3) {
          iVar2 = FUN_1058_020c((uint)param_1,param_1._2_2_,(uint)param_1 + 0x14,param_1._2_2_,4,0);
          if ((uVar1 == 0) && (iVar2 == 4)) {
            uVar3 = 0;
          }
          else {
            uVar3 = 1;
          }
          *(undefined2 *)((uint)param_1 + 0x12) = uVar3;
        }
        bVar4 = CARRY2(local_a,local_c + 4);
        local_a = local_a + local_c + 4;
        local_8 = local_8 + (0xfffb < local_c) + (uint)bVar4;
        FUN_1058_0284((uint)param_1,param_1._2_2_,local_a,local_8,0);
      }
      else {
        *(undefined2 *)((uint)param_1 + 0x12) = 1;
      }
    }
    FUN_1058_01dc((uint)param_1,param_1._2_2_);
  }
LAB_1058_051b:
  return (uint)param_1;
}



undefined2 __cdecl16far FUN_1058_0524(undefined4 param_1)

{
  char cVar1;
  
  cVar1 = *(char *)((int)param_1 + 8);
  if (cVar1 == '\x0f') {
    return 0;
  }
  if (cVar1 != '\x15') {
    if (cVar1 != '!') {
      return 0xff;
    }
    return 2;
  }
  return 1;
}



undefined2 __cdecl16far FUN_1058_0556(undefined4 param_1,undefined2 param_3,undefined2 param_4)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  undefined2 uVar10;
  uint uVar11;
  uint in_DX;
  uint uVar12;
  undefined2 *puVar13;
  undefined2 *puVar14;
  uint *puVar15;
  int unaff_BP;
  int *piVar16;
  undefined2 *puVar17;
  undefined2 uVar18;
  bool bVar19;
  int local_24;
  int *local_22;
  int *local_20;
  uint local_14;
  undefined2 local_e [2];
  uint local_a;
  uint local_8;
  int local_6 [2];
  int iStack_2;
  
  iStack_2 = unaff_BP + 1;
  if (((uint)param_1 | param_1._2_2_) == 0) {
    uVar4 = FUN_1000_077a(0xe);
    param_1 = CONCAT22(in_DX,uVar4);
    if ((uVar4 | in_DX) == 0) goto LAB_1058_08e0;
  }
  FUN_1058_011c((uint)param_1,param_1._2_2_,param_3,param_4);
  *(undefined2 *)((uint)param_1 + 8) = 0;
  *(undefined2 *)((uint)param_1 + 6) = 0;
  *(undefined2 *)((uint)param_1 + 0xc) = 0;
  *(undefined2 *)((uint)param_1 + 10) = 0;
  iVar5 = FUN_1058_0191((uint)param_1,param_1._2_2_,0x268,0x10b0);
  if (iVar5 != 0) {
    iVar5 = FUN_1058_020c((uint)param_1,param_1._2_2_,local_6);
    if ((in_DX == 0) && (iVar5 == 4)) {
      *(int *)((uint)param_1 + 8) = local_6[0];
      uVar4 = FUN_1058_02c3((uint)param_1,param_1._2_2_);
      local_a = uVar4 - 8;
      uVar4 = (in_DX - 1) + (uint)(7 < uVar4);
      local_8 = uVar4;
      iVar5 = FUN_1058_020c((uint)param_1,param_1._2_2_,local_e);
      if ((uVar4 == 0) && (iVar5 == 4)) {
        uVar6 = local_6[0] * 2 + 2;
        piVar7 = (int *)FUN_1000_077a(local_6[0] * 2 + 2);
        if (((((uint)piVar7 | uVar4) == 0) ||
            (uVar11 = uVar4, uVar8 = FUN_1058_020c((uint)param_1,param_1._2_2_,piVar7,uVar4,uVar6,0)
            , uVar11 != 0)) || (uVar8 != uVar6)) {
          *(undefined2 *)((uint)param_1 + 6) = 1;
          FUN_1000_0448(piVar7,uVar4);
        }
        else {
          piVar16 = piVar7;
          for (local_14 = 0; local_14 < local_6[0] + 1U; local_14 = local_14 + 1) {
            *piVar16 = *piVar16 - uVar6;
            piVar16 = piVar16 + 1;
          }
          bVar19 = local_a < uVar6;
          local_a = local_a - uVar6;
          local_8 = local_8 - bVar19;
          uVar8 = FUN_1000_077a(local_a);
          uVar6 = uVar11;
          uVar9 = FUN_1000_077a(local_e[0]);
          if ((((uVar8 | uVar11) == 0) || ((uVar9 | uVar6) == 0)) ||
             ((uVar12 = uVar6,
              iVar5 = FUN_1058_020c((uint)param_1,param_1._2_2_,uVar8,uVar11,local_a,local_8),
              uVar12 != local_8 || (iVar5 != local_a)))) {
            *(undefined2 *)((uint)param_1 + 6) = 1;
            FUN_1000_0448(piVar7,uVar4);
            FUN_1000_0448(uVar8,uVar11);
            FUN_1000_0448(uVar9,uVar6);
          }
          else {
            FUN_1058_032c(uVar9,uVar6,local_e[0],uVar8,uVar11,local_a);
            FUN_1000_0448(uVar8,uVar11);
            uVar10 = FUN_1000_077a(*(int *)((uint)param_1 + 8) << 2);
            *(uint *)((uint)param_1 + 0xc) = uVar12;
            *(undefined2 *)((uint)param_1 + 10) = uVar10;
            if ((*(uint *)((uint)param_1 + 10) | *(uint *)((uint)param_1 + 0xc)) == 0) {
              *(undefined2 *)((uint)param_1 + 6) = 1;
              FUN_1000_0448(piVar7,uVar4);
              FUN_1000_0448(uVar9,uVar6);
            }
            else {
              local_24 = 0;
              local_20 = piVar7;
              local_22 = piVar7;
              for (local_14 = 0; local_22 = local_22 + 1, local_14 < *(uint *)((uint)param_1 + 8);
                  local_14 = local_14 + 1) {
                puVar13 = (undefined2 *)(uVar9 + *local_20);
                uVar11 = *local_22 - *local_20;
                puVar17 = puVar13;
                uVar10 = FUN_1000_077a(uVar11 + 1);
                uVar18 = (undefined2)((ulong)*(undefined4 *)((uint)param_1 + 10) >> 0x10);
                puVar14 = (undefined2 *)((int)*(undefined4 *)((uint)param_1 + 10) + local_24);
                puVar14[1] = puVar17;
                *puVar14 = uVar10;
                uVar10 = (undefined2)((ulong)*(undefined4 *)((uint)param_1 + 10) >> 0x10);
                puVar15 = (uint *)((int)*(undefined4 *)((uint)param_1 + 10) + local_24);
                if ((*puVar15 | puVar15[1]) == 0) {
                  *(undefined2 *)((uint)param_1 + 6) = 1;
                  FUN_1000_0448(piVar7,uVar4);
                  FUN_1000_0448(uVar9,uVar6);
                  FUN_1000_0448(*(undefined2 *)((uint)param_1 + 10),
                                *(undefined2 *)((uint)param_1 + 0xc));
                  *(undefined2 *)((uint)param_1 + 0xc) = 0;
                  *(undefined2 *)((uint)param_1 + 10) = 0;
                  goto LAB_1058_08e0;
                }
                puVar2 = (undefined2 *)
                         *(undefined4 *)((int)*(undefined4 *)((uint)param_1 + 10) + local_24);
                uVar10 = (undefined2)((ulong)puVar2 >> 0x10);
                puVar17 = (undefined2 *)puVar2;
                for (uVar8 = uVar11 >> 1; uVar8 != 0; uVar8 = uVar8 - 1) {
                  puVar1 = puVar17;
                  puVar17 = puVar17 + 1;
                  puVar2 = puVar13;
                  puVar13 = puVar13 + 1;
                  *puVar1 = *puVar2;
                }
                for (uVar8 = (uint)((uVar11 & 1) != 0); uVar8 != 0; uVar8 = uVar8 - 1) {
                  puVar1 = puVar17;
                  puVar17 = (undefined2 *)((int)puVar17 + 1);
                  puVar2 = puVar13;
                  puVar13 = (undefined2 *)((int)puVar13 + 1);
                  *(undefined *)puVar1 = *(undefined *)puVar2;
                }
                uVar3 = *(undefined4 *)((int)*(undefined4 *)((uint)param_1 + 10) + local_24);
                *(undefined *)((int)uVar3 + uVar11) = 0;
                local_20 = local_20 + 1;
                local_24 = local_24 + 4;
              }
              FUN_1000_0448(piVar7,uVar4);
              FUN_1000_0448(uVar9,uVar6);
            }
          }
        }
      }
      else {
        *(undefined2 *)((uint)param_1 + 6) = 1;
      }
    }
    else {
      *(undefined2 *)((uint)param_1 + 6) = 1;
    }
  }
LAB_1058_08e0:
  return (uint)param_1;
}



undefined2 __stdcall16far FUN_1060_0000(void)

{
  undefined2 param_1;
  
                    // Segment:    13
                    // Offset:     0000c400
                    // Length:     01eb
                    // Min Alloc:  01eb
                    // Flags:      1d10
                    //     Code
                    //     Discardable
                    //     Moveable
                    //     LoadOnCall
                    //     Impure (Non-shareable)
                    // 
  DAT_10b0_001f = DAT_10b0_001f | 0x2000;
  DAT_10b0_0c1c = param_1;
  return 1;
}



undefined2 __stdcall16far FUN_1060_0018(void)

{
  return 1;
}



undefined2 __cdecl16far FUN_1060_0024(void)

{
  return DAT_10b0_0c1c;
}



void __cdecl16far FUN_1060_0028(void)

{
  FUN_1068_0529(0xc06,0x10b0);
  return;
}



void __cdecl16far HYPERFINDBTN(void)

{
  undefined2 uVar1;
  undefined2 in_DX;
  
  uVar1 = FUN_1060_0028(0,0x10b0);
  FUN_1050_0377(uVar1,in_DX);
  return;
}



void __cdecl16far HYPERFINDINIT(void)

{
  undefined2 uVar1;
  undefined2 in_DX;
  
  uVar1 = FUN_1060_0028(0x10b0);
  FUN_1050_01fb(uVar1,in_DX);
  return;
}



void __cdecl16far HYPERFINDDMEXECSEARCH(void)

{
  undefined2 uVar1;
  undefined2 in_DX;
  
  uVar1 = FUN_1060_0028(1,0x10b0);
  FUN_1050_0377(uVar1,in_DX);
  return;
}



void __cdecl16far HYPERFINDDMINIT(void)

{
  undefined2 uVar1;
  undefined2 in_DX;
  
  uVar1 = FUN_1060_0028(0x10b0);
  FUN_1050_0202(uVar1,in_DX);
  return;
}



void __stdcall16far
LDLLHANDLER(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
           undefined2 param_5)

{
  int unaff_BP;
  
  FUN_1068_05a6(0xc06,0x10b0,param_5,param_3,param_4,param_1,param_2,0x10b0,unaff_BP + 1);
  return;
}



void __cdecl16far
FUN_1060_00bc(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 uVar1;
  int unaff_BP;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined local_266 [512];
  undefined local_66 [100];
  int iStack_2;
  
  iStack_2 = unaff_BP + 1;
  uVar1 = FUN_1060_0024();
  LOADSTRING(unaff_CS,100,local_66,unaff_SS,param_3);
  FUN_1060_0024(uVar1);
  LOADSTRING(0x1168,0x200,local_266,unaff_SS,param_2);
  MESSAGEBOX(0x1168,param_4,local_66,unaff_SS,local_266,unaff_SS);
  return;
}



undefined2 __cdecl16far FUN_1068_0146(undefined4 param_1,undefined4 param_2)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  
  uVar4 = (undefined2)((ulong)param_2 >> 0x10);
  iVar2 = (int)param_2;
  uVar1 = *(undefined2 *)(iVar2 + 4);
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  *(undefined2 *)(iVar3 + 6) = *(undefined2 *)(iVar2 + 6);
  *(undefined2 *)(iVar3 + 4) = uVar1;
  uVar1 = *(undefined2 *)(iVar2 + 8);
  *(undefined2 *)(iVar3 + 10) = *(undefined2 *)(iVar2 + 10);
  *(undefined2 *)(iVar3 + 8) = uVar1;
  uVar1 = *(undefined2 *)(iVar2 + 0xc);
  *(undefined2 *)(iVar3 + 0xe) = *(undefined2 *)(iVar2 + 0xe);
  *(undefined2 *)(iVar3 + 0xc) = uVar1;
  uVar1 = *(undefined2 *)(iVar2 + 0x10);
  *(undefined2 *)(iVar3 + 0x12) = *(undefined2 *)(iVar2 + 0x12);
  *(undefined2 *)(iVar3 + 0x10) = uVar1;
  uVar1 = *(undefined2 *)(iVar2 + 0x14);
  *(undefined2 *)(iVar3 + 0x16) = *(undefined2 *)(iVar2 + 0x16);
  *(undefined2 *)(iVar3 + 0x14) = uVar1;
  uVar1 = *(undefined2 *)(iVar2 + 0x18);
  *(undefined2 *)(iVar3 + 0x1a) = *(undefined2 *)(iVar2 + 0x1a);
  *(undefined2 *)(iVar3 + 0x18) = uVar1;
  uVar1 = *(undefined2 *)(iVar2 + 0x1c);
  *(undefined2 *)(iVar3 + 0x1e) = *(undefined2 *)(iVar2 + 0x1e);
  *(undefined2 *)(iVar3 + 0x1c) = uVar1;
  uVar1 = *(undefined2 *)(iVar2 + 0x20);
  *(undefined2 *)(iVar3 + 0x22) = *(undefined2 *)(iVar2 + 0x22);
  *(undefined2 *)(iVar3 + 0x20) = uVar1;
  uVar1 = *(undefined2 *)(iVar2 + 0x24);
  *(undefined2 *)(iVar3 + 0x26) = *(undefined2 *)(iVar2 + 0x26);
  *(undefined2 *)(iVar3 + 0x24) = uVar1;
  uVar1 = *(undefined2 *)(iVar2 + 0x28);
  *(undefined2 *)(iVar3 + 0x2a) = *(undefined2 *)(iVar2 + 0x2a);
  *(undefined2 *)(iVar3 + 0x28) = uVar1;
  uVar1 = *(undefined2 *)(iVar2 + 0x2c);
  *(undefined2 *)(iVar3 + 0x2e) = *(undefined2 *)(iVar2 + 0x2e);
  *(undefined2 *)(iVar3 + 0x2c) = uVar1;
  uVar1 = *(undefined2 *)(iVar2 + 0x30);
  *(undefined2 *)(iVar3 + 0x32) = *(undefined2 *)(iVar2 + 0x32);
  *(undefined2 *)(iVar3 + 0x30) = uVar1;
  uVar1 = *(undefined2 *)(iVar2 + 0x34);
  *(undefined2 *)(iVar3 + 0x36) = *(undefined2 *)(iVar2 + 0x36);
  *(undefined2 *)(iVar3 + 0x34) = uVar1;
  uVar1 = *(undefined2 *)(iVar2 + 0x38);
  *(undefined2 *)(iVar3 + 0x3a) = *(undefined2 *)(iVar2 + 0x3a);
  *(undefined2 *)(iVar3 + 0x38) = uVar1;
  uVar1 = *(undefined2 *)(iVar2 + 0x3c);
  *(undefined2 *)(iVar3 + 0x3e) = *(undefined2 *)(iVar2 + 0x3e);
  *(undefined2 *)(iVar3 + 0x3c) = uVar1;
  uVar1 = *(undefined2 *)(iVar2 + 0x40);
  *(undefined2 *)(iVar3 + 0x42) = *(undefined2 *)(iVar2 + 0x42);
  *(undefined2 *)(iVar3 + 0x40) = uVar1;
  return 1;
}



void __cdecl16far FUN_1068_02b0(int param_1)

{
  (**(code **)(param_1 + 4))();
  return;
}



void __cdecl16far FUN_1068_02c8(int param_1)

{
  (**(code **)(param_1 + 8))();
  return;
}



void __cdecl16far FUN_1068_02d9(int param_1)

{
  (**(code **)(param_1 + 0xc))();
  return;
}



void __cdecl16far FUN_1068_02f4(int param_1)

{
  (**(code **)(param_1 + 0x10))();
  return;
}



void __cdecl16far FUN_1068_0305(int param_1)

{
  (**(code **)(param_1 + 0x14))();
  return;
}



void __cdecl16far FUN_1068_0322(int param_1)

{
  (**(code **)(param_1 + 0x18))();
  return;
}



void __cdecl16far FUN_1068_0333(int param_1)

{
  (**(code **)(param_1 + 0x1c))();
  return;
}



void __cdecl16far FUN_1068_035e(int param_1)

{
  (**(code **)(param_1 + 0x24))();
  return;
}



void __cdecl16far FUN_1068_0401(int param_1)

{
  (**(code **)(param_1 + 0x3c))();
  return;
}



undefined2 __cdecl16far FUN_1068_0529(void)

{
  undefined2 uVar1;
  int iVar2;
  int unaff_BP;
  undefined4 uVar3;
  undefined local_a [8];
  int iStack_2;
  
  iStack_2 = unaff_BP + 1;
  uVar3 = GETCURRENTTASK();
  uVar1 = (undefined2)((ulong)uVar3 >> 0x10);
  FUN_1068_0c42(local_a);
  while( true ) {
    iVar2 = FUN_1068_0c02(local_a);
    if (iVar2 == 0) {
      return 0;
    }
    iVar2 = FUN_1068_0c2d(local_a);
    if (*(int *)(iVar2 + 2) == (int)uVar3) break;
    FUN_1068_0bc6(local_a);
  }
  uVar1 = FUN_1068_0c2d(local_a);
  return uVar1;
}



undefined2 __cdecl16far
FUN_1068_05a6(undefined2 *param_1,int param_3,uint param_4,uint param_5,undefined2 param_6,
             undefined2 param_7)

{
  int iVar1;
  int *piVar2;
  undefined2 uVar3;
  uint in_DX;
  int *piVar4;
  int *local_6;
  
  if (param_3 == 1) {
    return 0x1f;
  }
  if (param_3 == 4) {
    piVar4 = (int *)(**(code **)*param_1)();
    if (piVar4 != (int *)0x0) {
      iVar1 = (**(code **)(*piVar4 + 4))();
      if ((iVar1 == 0) &&
         (iVar1 = FUN_1068_096e((undefined2 *)param_1 + 1,param_1._2_2_,piVar4), iVar1 != 0)) {
        return 1;
      }
      if (piVar4 != (int *)0x0) {
        (**(code **)*piVar4)();
      }
    }
    return 0;
  }
  piVar2 = (int *)FUN_1068_0529((undefined2 *)param_1,param_1._2_2_);
  local_6 = (int *)CONCAT22(in_DX,piVar2);
  switch(param_3) {
  case 2:
    if ((param_5 == 0) && (param_4 == 2)) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
    uVar3 = (**(code **)(*local_6 + 0x18))(0x1068,piVar2,in_DX,uVar3);
    return uVar3;
  case 3:
    uVar3 = (**(code **)(*local_6 + 0x1c))(0x1068,piVar2,in_DX,param_4,param_5);
    return uVar3;
  default:
    return 0;
  case 5:
    FUN_1068_08bb((undefined2 *)param_1 + 1,param_1._2_2_,piVar2,in_DX);
    if (((uint)piVar2 | in_DX) != 0) {
      (**(code **)*local_6)(0x1068,piVar2,in_DX,3);
    }
    break;
  case 6:
    uVar3 = (**(code **)(*local_6 + 0x20))(0x1068,piVar2,in_DX);
    return uVar3;
  case 7:
    uVar3 = (**(code **)(*local_6 + 0x14))(0x1068,piVar2,in_DX,param_4,param_5,param_6,param_7);
    return uVar3;
  case 8:
    uVar3 = (**(code **)(*local_6 + 0x10))(0x1068,piVar2,in_DX,param_4,param_5,param_6,param_7);
    return uVar3;
  case 9:
    uVar3 = (**(code **)(*local_6 + 8))(0x1068,piVar2,in_DX,(param_4 | param_5) != 0);
    return uVar3;
  case 10:
    uVar3 = FUN_1068_0146(piVar2,in_DX,param_4,param_5);
    return uVar3;
  case 0xb:
    uVar3 = (**(code **)(*local_6 + 0xc))(0x1068,piVar2,in_DX,(param_4 | param_5) != 0,param_6);
    return uVar3;
  }
  return 0;
}



void __cdecl16far FUN_1068_08bb(int *param_1,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *local_a;
  int local_8;
  undefined4 local_6;
  
  local_a = (int *)param_1;
  local_8 = param_1._2_2_;
  local_6 = (int *)CONCAT22(((int *)param_1)[3],(int *)((int *)param_1)[2]);
  while ((param_1._2_2_ != local_6._2_2_ || ((int *)param_1 + 4 != (int *)local_6))) {
    if ((((int *)local_6)[1] == param_4) && (*local_6 == param_3)) break;
    local_a = (int *)local_6;
    local_8 = local_6._2_2_;
    local_6 = (int *)CONCAT22(((int *)local_6)[3],(int *)((int *)local_6)[2]);
  }
  if ((param_1._2_2_ != local_6._2_2_) || ((int *)param_1 + 4 != (int *)local_6)) {
    iVar2 = ((int *)local_6)[3];
    iVar3 = ((int *)local_6)[2];
    local_a[3] = iVar2;
    local_a[2] = iVar3;
    FUN_1000_0448((int *)local_6,local_6._2_2_,iVar3,iVar2);
    piVar1 = (int *)param_1 + 8;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    ((int *)param_1)[9] = ((int *)param_1)[9] - (uint)(iVar2 == 0);
  }
  return;
}



undefined2 __cdecl16far FUN_1068_096e(undefined4 param_1,undefined2 param_3,undefined2 param_4)

{
  int *piVar1;
  uint *puVar2;
  undefined2 uVar3;
  undefined2 *puVar4;
  uint uVar5;
  undefined2 *local_12;
  uint local_6;
  int local_4;
  
  local_6 = (uint)param_1;
  for (local_4 = param_1._2_2_;
      (*(int *)(local_6 + 6) != param_1._2_2_ || (*(int *)(local_6 + 4) != (uint)param_1 + 8));
      local_4 = *piVar1) {
    piVar1 = (int *)(local_6 + 6);
    local_6 = *(uint *)(local_6 + 4);
  }
  uVar5 = local_6;
  puVar4 = (undefined2 *)FUN_1000_077a(8);
  local_12 = (undefined2 *)CONCAT22(uVar5,puVar4);
  if (((uint)puVar4 | uVar5) != 0) {
    puVar4[1] = param_4;
    *local_12 = param_3;
    uVar3 = *(undefined2 *)(local_6 + 4);
    puVar4[3] = *(undefined2 *)(local_6 + 6);
    puVar4[2] = uVar3;
    *(uint *)(local_6 + 6) = uVar5;
    *(uint *)(local_6 + 4) = (uint)puVar4;
  }
  if (((uint)puVar4 | uVar5) != 0) {
    puVar2 = (uint *)((uint)param_1 + 0x10);
    uVar5 = *puVar2;
    *puVar2 = *puVar2 + 1;
    *(int *)((uint)param_1 + 0x12) = *(int *)((uint)param_1 + 0x12) + (uint)(0xfffe < uVar5);
    return 1;
  }
  return 0;
}



undefined2 __cdecl16far FUN_1068_0bc6(undefined4 param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 *local_6;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  local_6 = (undefined2 *)
            CONCAT22(*(undefined2 *)(iVar2 + 6),(undefined2 *)*(undefined2 *)(iVar2 + 4));
  uVar5 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 4) >> 0x10);
  iVar3 = (int)*(undefined4 *)(iVar2 + 4);
  uVar1 = *(undefined2 *)(iVar3 + 4);
  *(undefined2 *)(iVar2 + 6) = *(undefined2 *)(iVar3 + 6);
  *(undefined2 *)(iVar2 + 4) = uVar1;
  return *local_6;
}



undefined2 __cdecl16far FUN_1068_0c02(int *param_1)

{
  int *piVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  piVar1 = (int *)param_1;
  if ((piVar1[3] == piVar1[1]) && (piVar1[2] == *param_1 + 8)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



undefined2 __cdecl16far FUN_1068_0c2d(undefined4 param_1)

{
  return *(undefined2 *)*(undefined4 *)((int)param_1 + 4);
}



int * __cdecl16far FUN_1068_0c42(int *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  uint in_DX;
  int unaff_BP;
  undefined2 uVar3;
  
  if (((uint)(int *)param_1 | param_1._2_2_) == 0) {
    piVar2 = (int *)FUN_1000_077a(8,unaff_BP + 1);
    param_1 = (int *)CONCAT22(in_DX,piVar2);
    if (((uint)piVar2 | in_DX) == 0) goto LAB_1068_0c88;
  }
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  piVar2 = (int *)param_1;
  piVar2[1] = param_2._2_2_;
  *param_1 = (int)param_2;
  iVar1 = *(int *)((int)param_2 + 4);
  piVar2[3] = *(int *)((int)param_2 + 6);
  piVar2[2] = iVar1;
LAB_1068_0c88:
  return (int *)param_1;
}



undefined2 __stdcall16far FUN_1078_003e(void)

{
  int iVar1;
  undefined2 uVar2;
  int unaff_BP;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined local_1a [24];
  int iStack_2;
  
  iStack_2 = unaff_BP + 1;
  iVar1 = GETCLASSNAME(unaff_CS,0x18,local_1a,unaff_SS);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_1078_006e(local_1a,unaff_SS);
  return uVar2;
}



undefined2 __stdcall16far FUN_1078_006e(uint param_1,uint param_2)

{
  int iVar1;
  undefined2 unaff_CS;
  
  if ((param_1 | param_2) == 0) {
    return 0;
  }
  iVar1 = LSTRCMPI(unaff_CS,0x2b4,0x10b0,param_1);
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = LSTRCMPI(0x1168,699,0x10b0,param_1);
  if (iVar1 == 0) {
    return 2;
  }
  iVar1 = LSTRCMPI(0x1168,0x2c0,0x10b0,param_1);
  if (iVar1 == 0) {
    return 3;
  }
  iVar1 = LSTRCMPI(0x1168,0x2c7,0x10b0,param_1);
  if (iVar1 == 0) {
    return 4;
  }
  iVar1 = LSTRCMPI(0x1168,0x2cf,0x10b0,param_1);
  if (iVar1 == 0) {
    return 5;
  }
  iVar1 = LSTRCMPI(0x1168,0x2d8,0x10b0,param_1);
  if (iVar1 == 0) {
    return 6;
  }
  iVar1 = LSTRCMPI(0x1168,0x2e2,0x10b0,param_1);
  if (iVar1 == 0) {
    return 7;
  }
  return 0;
}



undefined2 __stdcall16far FUN_1078_0c1e(void)

{
  int unaff_BP;
  undefined2 unaff_SS;
  int local_12;
  int local_10;
  int local_e;
  int local_c;
  int local_a;
  int local_8;
  int local_6;
  int local_4;
  int iStack_2;
  
  iStack_2 = unaff_BP + 1;
  local_4 = GETSYSTEMMETRICS();
  local_6 = GETSYSTEMMETRICS(0x1168,1);
  GETWINDOWRECT(0x1168,&local_12,unaff_SS);
  local_8 = local_e - local_12;
  local_a = local_c - local_10;
  MOVEWINDOW(0x1168,0,local_a,local_8,(uint)(local_6 - local_a) >> 1,(uint)(local_4 - local_8) >> 1)
  ;
  return 1;
}



void __stdcall16far FUN_1080_00bc(undefined2 param_1,undefined2 param_2)

{
  undefined2 unaff_CS;
  
  MESSAGEBOX(unaff_CS,0x2040,0x2ee,0x10b0,param_1,param_2);
  return;
}



undefined2 __stdcall16far
ZZOPENHOOK(undefined2 param_1,undefined2 param_2,int param_3,int param_4,undefined2 param_5)

{
  int iVar1;
  int unaff_BP;
  undefined2 uVar2;
  undefined2 unaff_SS;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  int iStack_2;
  
  iStack_2 = unaff_BP + 1;
  local_4 = 0x10b0;
  if (param_4 == 0x111) {
    local_8 = param_1;
    local_6 = param_2;
    if (param_3 == 0x40e) {
      param_3 = 999;
    }
  }
  uVar2 = 0x1090;
  iVar1 = FUN_1090_0074(&local_a,unaff_SS,DAT_10b0_0378,DAT_10b0_037a,DAT_10b0_037c,DAT_10b0_037e,
                        param_1,param_2,param_3,param_4,param_5);
  if (iVar1 != 0) {
    return local_a;
  }
  if (param_4 == 0x110) {
    if (DAT_10b0_0380 != 0) {
      FUN_1088_0a5b(param_5,DAT_10b0_0380);
    }
  }
  else if (param_4 == 0x111) {
    local_8 = param_1;
    local_6 = param_2;
    if (param_3 == 100) {
      uVar2 = 0x1080;
      FUN_1080_00bc(0x49a,0x10b0);
    }
  }
  if (((uint)DAT_10b0_0382 | DAT_10b0_0384) == 0) {
    return 0;
  }
  uVar2 = (*DAT_10b0_0382)(uVar2,param_5,param_4,param_3,param_1,param_2);
  return uVar2;
}



undefined2 __cdecl16far FUN_1088_0a5b(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  int unaff_BP;
  undefined2 unaff_SS;
  undefined2 uVar2;
  undefined local_78 [100];
  int local_14;
  int local_12;
  int local_10;
  int local_e;
  int local_c;
  int local_a;
  int local_8;
  int local_6;
  int local_4;
  int iStack_2;
  
  iStack_2 = unaff_BP + 1;
  iVar1 = FUN_10a8_09f4(1,100,local_78,unaff_SS,param_2);
  if (iVar1 == 0) {
    return 0;
  }
  GETDLGITEM(0x10a8,0x40e);
  GETWINDOWRECT(0x1168,&local_a,unaff_SS);
  local_10 = local_6 - local_a;
  local_e = local_a;
  local_c = local_8 + ((local_4 - local_8) * 0x16) / 0xe;
  uVar2 = param_1;
  SCREENTOCLIENT(0x1168,&local_e,unaff_SS);
  local_12 = CREATEWINDOW(0x1168,0,0,DAT_10b0_02ec,100,param_1,local_4 - local_8,local_10,local_c,
                          local_e,0,0x5001,local_78,unaff_SS,0x4ab,0x10b0,uVar2);
  if (local_12 != 0) {
    local_14 = SENDDLGITEMMESSAGE(0x1168,0,0,0,0x31,0x40e);
    if (local_14 != 0) {
      SENDDLGITEMMESSAGE(0x1168,0,0,local_14,0x30,100);
    }
  }
  return 1;
}



undefined2 __stdcall16far
FUN_1090_0074(int *param_1,uint param_2,uint param_3,uint param_4,uint param_5,undefined2 *param_6,
             uint param_7,int param_8,uint param_9,undefined2 param_10)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  uint uVar4;
  undefined2 unaff_CS;
  undefined2 *local_c;
  
  if (DAT_10b0_05b6 == 0) {
    FUN_1090_05c0();
  }
  if (param_9 == DAT_10b0_05b6) {
    if (param_8 != 1) {
      return 0;
    }
    local_c = (undefined2 *)CONCAT22(param_7,param_6);
    if (((uint)param_6 | param_7) != 0) {
      if ((param_5 & 1) == 0) {
        if ((param_5 & 2) == 0) {
          if ((param_5 & 4) == 0) {
            if ((param_5 & 8) == 0) {
              if ((param_5 & 0x10) == 0) {
                if ((param_5 & 0x20) == 0) {
                  param_6[1] = 0x40;
                  *local_c = 0;
                }
                else {
                  param_6[1] = 0x20;
                  *local_c = 0;
                }
              }
              else {
                param_6[1] = 0x10;
                *local_c = 0;
              }
            }
            else {
              param_6[1] = 8;
              *local_c = 0;
            }
          }
          else {
            param_6[1] = 4;
            *local_c = 0;
          }
        }
        else {
          param_6[1] = 2;
          *local_c = 0;
        }
      }
      else {
        param_6[1] = 1;
        *local_c = 0;
      }
      *param_1 = 1;
      return 1;
    }
    return 0;
  }
  if (param_9 == 0x110) {
    if ((param_4 & 4) != 0) {
      unaff_CS = 0x1078;
      FUN_1078_0c1e(param_10);
    }
    if (DAT_10b0_04b2 == '\0') {
      uVar3 = param_10;
      uVar1 = GETDLGITEM(unaff_CS,999);
      unaff_CS = 0x1168;
      iVar2 = ISWINDOW(0x1168,uVar1,uVar3);
      if (iVar2 != 0) {
        GETDLGITEM(0x1168,999);
        unaff_CS = 0x1168;
        SHOWWINDOW(0x1168,0);
      }
    }
  }
  if (DAT_10b0_05b4 == 0) {
    FUN_1090_047c();
  }
  iVar2 = FUN_1090_05d7(param_10,param_9,param_8,param_6,param_7,param_4,param_5);
  *param_1 = iVar2;
  if (*param_1 != 0) {
    return 1;
  }
  if ((param_3 == 0xffff) && (param_2 == 0xffff)) {
    return 0;
  }
  if ((param_9 == DAT_10b0_05b4) && ((param_2 | param_3) != 0)) {
    FUN_1090_04ee(param_2,param_3,1,param_10);
    return 1;
  }
  if (param_9 == 0x100) {
    if ((param_8 == 0x1b) && (DAT_10b0_05b2 != 0)) {
      DAT_10b0_05b2 = 0;
      uVar3 = GETACTIVEWINDOW(unaff_CS);
      uVar1 = GETCLASSWORD(0x1168,0xfff4);
      SETCURSOR(0x1168,uVar1,uVar3);
    }
  }
  else if (param_9 < 0x101) {
    if (param_9 == 2) {
      FUN_1090_04ee(0,0,2,param_10);
      DAT_10b0_05b2 = 0;
    }
    else if (param_9 == 6) {
      DAT_10b0_05b2 = 0;
    }
    else if (((param_9 == 0x20) && (DAT_10b0_05b2 != 0)) &&
            (uVar3 = DAT_10b0_02ec, iVar2 = LOADCURSOR(unaff_CS,0x5bd,0x10b0), iVar2 != 0)) {
      SETCURSOR(0x1168,iVar2,uVar3);
      *param_1 = 1;
      SETWINDOWLONG(0x1168,1,0,0);
      return 1;
    }
  }
  else if (param_9 == 0x111) {
    if ((param_8 == 999) && (iVar2 = ISWINDOW(unaff_CS,param_6), iVar2 != 0)) {
      FUN_1090_04ee(param_2,param_3,1,param_10);
      *param_1 = 1;
      return 1;
    }
  }
  else if (param_9 == 0x121) {
    if ((param_8 == 2) && (iVar2 = FUN_1090_048c(0), iVar2 != 0)) {
      DAT_10b0_05b2 = 1;
      GETACTIVEWINDOW(unaff_CS);
      POSTMESSAGE(0x1168,0,0,0xd,0x100);
      *param_1 = 0;
      return 1;
    }
    iVar2 = FUN_1090_048c(1);
    if (iVar2 != 0) {
      uVar3 = GETACTIVEWINDOW(unaff_CS);
      iVar2 = GETMENU(0x1168,uVar3);
      if (iVar2 != 0) {
        DAT_10b0_05b2 = 1;
        uVar3 = DAT_10b0_02ec;
        iVar2 = LOADCURSOR(0x1168,0x5b8,0x10b0);
        if (iVar2 != 0) {
          SETCURSOR(0x1168,iVar2,uVar3);
        }
      }
      *param_1 = 0;
      return 1;
    }
    iVar2 = FUN_1090_048c(0);
    if (iVar2 != 0) {
      DAT_10b0_05b2 = 0;
      GETACTIVEWINDOW(unaff_CS);
      POSTMESSAGE(0x1168,0,0,0,DAT_10b0_05b4);
      *param_1 = 0;
      return 1;
    }
    if ((DAT_10b0_05b2 != 0) && (param_8 == 0)) {
      uVar4 = GETKEYSTATE(unaff_CS,0x1b);
      if ((uVar4 & 0x8000) != 0) {
        DAT_10b0_05b2 = 0;
        uVar3 = GETACTIVEWINDOW(0x1168);
        uVar1 = GETCLASSWORD(0x1168,0xfff4);
        SETCURSOR(0x1168,uVar1,uVar3);
      }
      *param_1 = 0;
      return 1;
    }
  }
  return 0;
}



undefined2 __cdecl16far FUN_1090_047c(void)

{
  undefined2 unaff_CS;
  
  DAT_10b0_05b4 = REGISTERWINDOWMESSAGE(unaff_CS,0x5c2);
  return 1;
}



undefined2 __cdecl16far FUN_1090_048c(int param_1)

{
  int iVar1;
  
  iVar1 = GETKEYSTATE();
  if (-1 < iVar1) {
    return 0;
  }
  if (param_1 == 0) {
    iVar1 = GETKEYSTATE(0x1168,0x10);
    if (iVar1 < 0) {
      return 0;
    }
  }
  else {
    iVar1 = GETKEYSTATE(0x1168,0x10);
    if (-1 < iVar1) {
      return 0;
    }
  }
  iVar1 = GETKEYSTATE(0x1168,0x11);
  if (iVar1 < 0) {
    return 0;
  }
  iVar1 = GETKEYSTATE(0x1168,0x12);
  if (iVar1 < 0) {
    return 0;
  }
  return 1;
}



undefined2 __stdcall16far FUN_1090_04ee(undefined2 param_1,undefined2 param_2,int param_3)

{
  int iVar1;
  undefined2 uVar2;
  int unaff_BP;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 uVar3;
  undefined local_44 [12];
  undefined local_38 [12];
  undefined local_2c [12];
  undefined local_20 [30];
  int iStack_2;
  
  iStack_2 = unaff_BP + 1;
  if (param_3 != 2) {
    iVar1 = GETKEYSTATE();
    if (-1 < iVar1) {
      unaff_CS = 0x1168;
      iVar1 = GETKEYSTATE(0x1168,0x5a);
      if (-1 < iVar1) goto LAB_1090_0593;
    }
    FUN_10a8_0586(10,local_2c,unaff_SS,1);
    FUN_10a8_038e(2,1,local_38,unaff_SS);
    FUN_10a8_038e(4,0,local_44,unaff_SS);
    _WSPRINTF(0x10a8,local_20);
    MESSAGEBOX(0x1168,0x40,0x5e3,0x10b0,local_20,unaff_SS);
    return 1;
  }
  if (DAT_10b0_04b2 == '\0') {
    return 0;
  }
LAB_1090_0593:
  uVar3 = 0;
  uVar2 = LOADCURSOR(unaff_CS,0x7f02,0);
  SETCURSOR(0x1168,uVar2,uVar3);
  WINHELP(0x1168,param_1,param_2,param_3,0x4b2,0x10b0);
  return 1;
}



int __cdecl16far FUN_1090_05c0(void)

{
  undefined2 unaff_CS;
  
  if (DAT_10b0_05b6 == 0) {
    DAT_10b0_05b6 = REGISTERWINDOWMESSAGE(unaff_CS,0x5e6);
  }
  return DAT_10b0_05b6;
}



int __cdecl16far
FUN_1090_05d7(undefined2 param_1_00,int param_1,undefined2 param_2,undefined2 *param_3,uint param_5)

{
  int iVar1;
  
  if ((param_1 == 0x11f0) && (((uint)(undefined2 *)param_3 | param_3._2_2_) != 0)) {
    if ((param_5 & 2) == 0) {
      *param_3 = 0;
    }
    else {
      *param_3 = 1;
    }
  }
  if ((param_5 & 1) != 0) {
    if ((param_1 == 0x19) &&
       (iVar1 = FUN_1090_0643((undefined2 *)param_3,param_3._2_2_,param_2,0x19), iVar1 != 0)) {
      return iVar1;
    }
    return 0;
  }
  return 0;
}



undefined2 __stdcall16far FUN_1090_0643(undefined2 param_1,undefined2 param_2)

{
  bool bVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  uint uVar4;
  undefined2 uVar5;
  
  bVar1 = false;
  switch(param_2) {
  case 0:
  case 1:
  case 2:
    break;
  case 3:
  case 4:
  case 5:
  case 6:
    goto switchD_1090_065b_caseD_3;
  default:
    return 0;
  }
  bVar1 = true;
switchD_1090_065b_caseD_3:
  uVar5 = 0x1168;
  uVar2 = GETSTOCKOBJECT(0x1090,1);
  if (bVar1) {
    uVar3 = FUN_1078_003e(param_1);
    uVar5 = 0x1090;
    switch(uVar3) {
    case 1:
    case 3:
    case 6:
    case 7:
      break;
    default:
      return 0;
    case 5:
      uVar5 = 0x1168;
      uVar4 = GETWINDOWLONG(0x1090,0xfff0);
      if (((uVar4 & 1) == 1) || ((uVar4 & 3) == 3)) {
        return 0;
      }
    }
  }
  SETBKCOLOR(uVar5,0xc0c0,0xc0);
  SETBRUSHORG(0x1168,0,0);
  SETBKMODE(0x1168,2);
  return uVar2;
}



undefined2 __stdcall16far FUN_10a8_038e(uint param_1,int param_2,undefined2 *param_3)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 uVar3;
  uint uVar4;
  int unaff_BP;
  undefined2 *puVar5;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined local_1a [20];
  undefined *local_6;
  undefined2 local_4;
  int iStack_2;
  
  iStack_2 = unaff_BP + 1;
  uVar4 = 0;
  if (0 < (int)param_1) {
    puVar5 = (undefined2 *)param_3;
    for (uVar4 = param_1 >> 1; uVar4 != 0; uVar4 = uVar4 - 1) {
      puVar1 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar1 = 0x3030;
    }
    uVar4 = param_1;
    if ((param_1 & 1) != 0) {
      *(undefined *)puVar5 = 0x30;
    }
  }
  *(undefined *)((int)(undefined2 *)param_3 + uVar4) = 0;
  FUN_10a8_0586(10,local_1a,unaff_SS,param_2);
  iVar2 = LSTRLEN(unaff_CS,local_1a);
  if (iVar2 <= (int)param_1) {
    if ((iVar2 != 0) && (0 < param_2)) {
      local_6 = (undefined *)((int)(undefined2 *)param_3 + (param_1 - iVar2));
      local_4 = param_3._2_2_;
      LSTRCPY(0x1168,local_1a,unaff_SS,local_6);
      uVar3 = LSTRLEN(0x1168,(undefined2 *)param_3);
      return uVar3;
    }
    return 1;
  }
  return 0;
}



void __stdcall16far
FUN_10a8_0586(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  int unaff_BP;
  
  FUN_1000_11fa(param_4,0x714,0x10b0,param_1,unaff_BP + 1);
  LSTRCPY(0x1000,0x714,0x10b0,param_2);
  LSTRLEN(0x1168,0x714);
  return;
}



int __stdcall16far FUN_10a8_09f4(int param_1,undefined2 param_2,char *param_3,undefined2 param_5)

{
  int iVar1;
  undefined2 unaff_CS;
  
  iVar1 = LOADSTRING(unaff_CS,param_2,(char *)param_3,param_3._2_2_,param_5);
  if (iVar1 == 0) {
    if (param_1 != 0) {
      FUN_1080_00bc(0x734,0x10b0);
    }
    return 0;
  }
  if ((((*param_3 == '^') && (((char *)param_3)[1] == '^')) && (((char *)param_3)[2] == '^')) &&
     (((char *)param_3)[3] == '\0')) {
    return 0;
  }
  return iVar1;
}


