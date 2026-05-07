// Reconstructed implementation of GNBinaryKeyValueUnarchiver
// From MikeCore binary — reverse-engineered pseudocode

#include "GNBinaryKeyValueUnarchiver.h"

// ============================================================
// @00e579d0 — 1004 bytes
// str: ""Assertion failed in GNBinaryKeyValueUnarchiver.cpp at line %i: %s.""
// str: ""obj""
// str: ""result != placeholder""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00e57ad2) */
/* WARNING: Removing unreachable block (ram,0x00e57ade) */
/* WARNING: Removing unreachable block (ram,0x00e57b64) */
/* WARNING: Removing unreachable block (ram,0x00e57b6d) */
/* WARNING: Removing unreachable block (ram,0x00e57c29) */
/* WARNING: Removing unreachable block (ram,0x00e57c32) */

longlong * FUN_00e579d0(undefined8 param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  longlong *plVar4;
  bool bVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong *plVar9;
  longlong *plVar10;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong local_70;
  char local_68;
  int local_5c;
  longlong *local_48;
  char local_40;
  
  lVar8 = (longlong)param_2;
  plVar10 = *(longlong **)(*(longlong *)(unaff_RSI[8] + 0x10) + lVar8 * 8);
  if (DAT_028a8c38 == plVar10) {
    lVar7 = (longlong)*(int *)(*(longlong *)(unaff_RSI[0xe] + 0x10) + lVar8 * 4);
    local_5c = param_2;
    if (unaff_RSI[0x16] == 0) {
      bVar3 = false;
LAB_00e57bf2:
      plVar4 = DAT_028a8c48;
      if (*(longlong *)(*(longlong *)(unaff_RSI[0xc] + 0x10) + lVar7 * 8) == 0) {
        plVar9 = (longlong *)0x0;
        if (DAT_028a8c48 != (longlong *)0x0) {
          FUN_00d50b00();
          bVar3 = true;
          plVar9 = plVar4;
        }
      }
      else {
        FUN_00c811e0();
        lVar8 = DAT_027815a8;
        if (local_48 == (longlong *)0x0) {
          if (DAT_027815a8 != 0) {
            FUN_00d50b00();
          }
          local_90 = lVar8;
          local_88 = '\x01';
          FUN_00cc7b40();
          if ((local_88 != '\0') && (local_90 != 0)) {
            FUN_00d50b20();
          }
          local_48 = (longlong *)0x0;
        }
        else {
          if (local_40 == '\0') {
            FUN_00d50b00();
          }
          bVar3 = true;
        }
        (**(code **)(*local_48 + 0x20))();
        plVar9 = local_48;
      }
    }
    else {
      lVar2 = unaff_RSI[0x12];
      iVar1 = *(int *)(lVar2 + 0x18);
      FUN_00c8e340(lVar7,1);
      *(int *)(*(longlong *)(lVar2 + 0x10) + (longlong)iVar1) = (int)unaff_RSI[0x11];
      unaff_RSI[0x15] = *(longlong *)(*(longlong *)(unaff_RSI[0x14] + 0x10) + lVar8 * 8);
      *(int *)(unaff_RSI + 0x11) = param_2;
      lVar8 = *(longlong *)(*(longlong *)(unaff_RSI[0xb] + 0x10) + lVar7 * 8);
      uVar6 = (**(code **)(*unaff_RSI + 0x598))();
      plVar9 = (longlong *)unaff_RSI[0x16];
      FUN_00d50b00();
      local_98 = '\0';
      local_a0 = lVar8;
      (**(code **)(*plVar9 + 0x18))(&local_a0,&stack0xffffffffffffffa8,uVar6);
      if (local_48 == (longlong *)0x0) {
        plVar9 = (longlong *)0x0;
        bVar3 = false;
      }
      else {
        plVar9 = local_48;
        if (local_40 == '\0') {
          FUN_00d50b00();
          bVar3 = true;
        }
        else {
          local_40 = '\0';
          bVar3 = true;
        }
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if (unaff_RSI != (longlong *)0x0) {
        FUN_00d50b20();
      }
      lVar8 = unaff_RSI[0x12];
      iVar1 = *(int *)((longlong)*(int *)(lVar8 + 0x18) + -4 + *(longlong *)(lVar8 + 0x10));
      *(int *)(unaff_RSI + 0x11) = iVar1;
      unaff_RSI[0x15] = *(longlong *)(*(longlong *)(unaff_RSI[0x14] + 0x10) + (longlong)iVar1 * 8);
      if (*(int *)(lVar8 + 0x18) != 0) {
        FUN_00c8e340((longlong)iVar1,0);
      }
      if (plVar9 == (longlong *)0x0) goto LAB_00e57bf2;
    }
    local_78 = '\0';
    local_80 = plVar9;
    FUN_00d233f0();
    if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar10 != plVar9) {
      plVar10 = plVar9;
    }
    bVar5 = bVar3;
    if (plVar10 != DAT_028a8c38) goto LAB_00e57d8c;
  }
  else {
    bVar3 = false;
    plVar9 = (longlong *)0x0;
    bVar5 = false;
    if (plVar10 != DAT_028a8c38) goto LAB_00e57d8c;
  }
  bVar3 = bVar5;
  lVar8 = DAT_027815a8;
  if (DAT_027815a8 != 0) {
    FUN_00d50b00();
  }
  local_70 = lVar8;
  local_68 = '\x01';
  FUN_00cc7b40();
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
LAB_00e57d8c:
  *unaff_RDI = (longlong)plVar10;
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if ((bVar3) && (plVar9 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}




// ============================================================
// @00e59160 — 775 bytes
// str: ""GNBinaryKeyValueUnarchiver::decodeFloatForKey: range overflow while reading double as float for key"
// str: ""GNBinaryKeyValueUnarchiver::decodeFloatForKey: range underflow while reading double as float for ke"
// str: ""GNBinaryKeyValueUnarchiver::decodeFloatForKey: failed for key:%@ of cTypeID:%c""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00e591a0) */
/* WARNING: Removing unreachable block (ram,0x00e591ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_00e59160(void)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong *unaff_RSI;
  undefined8 extraout_XMM0_Qa;
  double dVar4;
  undefined8 uVar5;
  double local_a0;
  undefined8 *local_58;
  undefined4 local_50;
  longlong local_48;
  char local_40;
  char local_38;
  float local_2c;
  
  cVar3 = FUN_00e58720();
  local_2c = 0.0;
  if (cVar3 != '\0') {
    cVar3 = FUN_00e58390();
    lVar2 = DAT_02786e30;
    if (cVar3 == 'd') {
      FUN_00dabbc0();
      lVar2 = DAT_02786e30;
      if (((DAT_02411188 < local_a0) && (local_a0 < DAT_023e1698)) ||
         ((local_a0 < DAT_023e11c8 && (DAT_0241f388 < local_a0)))) {
        dVar4 = local_a0;
        if (DAT_02786e30 != 0) {
          dVar4 = (double)FUN_00d50b00();
        }
        lVar1 = *unaff_RSI;
        local_50 = 1;
        local_58 = &DAT_024c5048;
        if (lVar1 != 0) {
          dVar4 = (double)FUN_00d50b00();
        }
        local_40 = '\x01';
        local_48 = lVar1;
        FUN_00cc7b40(dVar4,&local_58);
        local_58 = &DAT_024c5048;
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
      }
      else if ((((local_a0 != 0.0) || (NAN(local_a0))) && (local_a0 < DAT_02411158)) &&
              (_DAT_023e11d0 < local_a0)) {
        dVar4 = local_a0;
        if (DAT_02786e30 != 0) {
          dVar4 = (double)FUN_00d50b00();
        }
        lVar1 = *unaff_RSI;
        local_50 = 1;
        local_58 = &DAT_024c5048;
        if (lVar1 != 0) {
          dVar4 = (double)FUN_00d50b00();
        }
        local_40 = '\x01';
        local_48 = lVar1;
        FUN_00cc7b40(dVar4,&local_58);
        local_58 = &DAT_024c5048;
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
      }
      local_2c = (float)local_a0;
    }
    else if (cVar3 == 'f') {
      FUN_00dabaa0();
      local_2c = local_58._0_4_;
    }
    else {
      uVar5 = extraout_XMM0_Qa;
      if (DAT_02786e30 != 0) {
        uVar5 = FUN_00d50b00();
      }
      lVar1 = *unaff_RSI;
      local_50 = 2;
      if (lVar1 != 0) {
        uVar5 = FUN_00d50b00();
      }
      local_40 = '\x01';
      local_58 = (undefined8 *)&DAT_025ff270;
      local_48 = lVar1;
      local_38 = cVar3;
      FUN_00cc7b40(uVar5,&local_58);
      local_58 = &DAT_024c5048;
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
  }
  return local_2c;
}




// ============================================================
// @00e58c60 — 536 bytes
// str: ""GNBinaryKeyValueUnarchiver::decodeInt32ForKey: exceeded value range while reading SInt64 as SInt32 "
// str: ""GNBinaryKeyValueUnarchiver::decodeInt32ForKey: failed for key:%@ of cTypeID:%c""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00e58c93) */
/* WARNING: Removing unreachable block (ram,0x00e58c9c) */

int FUN_00e58c60(void)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong *unaff_RSI;
  int iVar4;
  int local_90;
  undefined4 uStack_8c;
  int local_58;
  
  cVar3 = FUN_00e58720();
  iVar4 = 0;
  if (cVar3 != '\0') {
    cVar3 = FUN_00e58390();
    lVar2 = DAT_02786e30;
    switch(cVar3 + -99) {
    case '\0':
      FUN_00dabce0();
      iVar4 = (int)(char)local_58;
      break;
    default:
      if (DAT_02786e30 != 0) {
        FUN_00d50b00();
      }
      lVar1 = *unaff_RSI;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc7b40();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      iVar4 = 0;
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      break;
    case '\x02':
    case '\x06':
      FUN_00dab660();
      iVar4 = local_58;
      break;
    case '\t':
      FUN_00dab880();
      lVar2 = DAT_02786e30;
      iVar4 = local_90;
      if ((longlong)local_90 != CONCAT44(uStack_8c,local_90)) {
        if (DAT_02786e30 != 0) {
          FUN_00d50b00();
        }
        lVar1 = *unaff_RSI;
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        FUN_00cc7b40();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
      }
    }
  }
  return iVar4;
}




// ============================================================
// @00e5b2a0 — 513 bytes
// str: ""Assertion failed in GNBinaryKeyValueUnarchiver.cpp at line %i: %s.""
// str: ""offset < _dataLength""
// str: ""offset != GNNotFound""
// str: ""offset < _excessDataLength""
// ============================================================

longlong FUN_00e5b2a0(undefined8 param_1)

{
  undefined *puVar1;
  longlong lVar2;
  int iVar3;
  longlong unaff_RDI;
  longlong *plVar4;
  undefined *local_40;
  ulonglong local_38;
  char *local_30;
  
  local_40 = *(undefined **)(unaff_RDI + 0x10);
  local_38 = local_38 & 0xffffffffffffff00;
  iVar3 = FUN_00e5d7f0();
  if (((char)local_38 != '\0') && (local_40 != (undefined *)0x0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_027815a8;
  if (iVar3 == -1) {
    puVar1 = *(undefined **)(unaff_RDI + 0x18);
    if (puVar1 != (undefined *)0x0) {
      FUN_00d50b00();
    }
    local_38 = CONCAT71(local_38._1_7_,1);
    local_40 = puVar1;
    iVar3 = FUN_00e5d7f0();
    if (((char)local_38 != '\0') && (local_40 != (undefined *)0x0)) {
      FUN_00d50b20();
    }
    lVar2 = DAT_027815a8;
    if (iVar3 == -1) {
      if (DAT_027815a8 != 0) {
        FUN_00d50b00();
      }
      local_38 = 0x7f00000002;
      local_40 = &DAT_0258e798;
      local_30 = "offset != GNNotFound";
      FUN_00cc7b40(param_1,&local_40);
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    lVar2 = DAT_027815a8;
    if (*(int *)(unaff_RDI + 0x24) <= iVar3) {
      if (DAT_027815a8 != 0) {
        FUN_00d50b00();
      }
      local_38 = 0x8000000002;
      local_40 = &DAT_0258e760;
      local_30 = "offset < _excessDataLength";
      FUN_00cc7b40(param_1,&local_40);
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    plVar4 = (longlong *)(unaff_RDI + 0x30);
  }
  else {
    if (*(int *)(unaff_RDI + 0x20) <= iVar3) {
      if (DAT_027815a8 != 0) {
        FUN_00d50b00();
      }
      local_38 = 0x7b00000002;
      local_40 = &DAT_0258e798;
      local_30 = "offset < _dataLength";
      FUN_00cc7b40(param_1,&local_40);
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    plVar4 = (longlong *)(unaff_RDI + 0x28);
  }
  return (longlong)iVar3 + *plVar4;
}



