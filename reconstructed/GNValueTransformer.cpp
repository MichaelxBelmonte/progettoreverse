// Reconstructed implementation of GNValueTransformer
// From MikeCore binary — reverse-engineered pseudocode

#include "GNValueTransformer.h"

// ============================================================
// @01cc7b90 — 1254 bytes
// str: ""GNValueTransformer""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cc7b90(void)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong **pplVar6;
  bool bVar7;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar8;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  if ((*unaff_RSI == 0) || (iVar4 = FUN_00d8c7a0(), iVar4 == 0)) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return;
  }
  if ((DAT_028b74d0 == (longlong *)0x0) || (uVar8 = extraout_XMM0_Da, DAT_028b74d9 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028b74d0 == (longlong *)0x0) {
      plVar5 = (longlong *)FUN_00e8fc40();
      FUN_00022d50();
      (**(code **)(*plVar5 + 0x18))();
      bVar7 = DAT_028b74d0 == (longlong *)0x0;
      DAT_028b74d0 = plVar5;
      if (((bVar7) || (FUN_00d50b20(), DAT_028b74d0 != (longlong *)0x0)) && (DAT_028b74d8 == '\0'))
      {
        DAT_028b74d8 = '\x01';
        FUN_00e8cb90();
      }
      DAT_028b74d9 = '\x01';
      uVar8 = FUN_00e8cb70();
    }
    else {
      DAT_028b74d9 = '\x01';
      uVar8 = FUN_00e8cb70();
    }
  }
  local_90 = *unaff_RSI;
  local_88 = '\0';
  FUN_01cc8810(uVar8,&local_90);
  plVar5 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_027edfa0;
  if (plVar5 != (longlong *)0x0) goto LAB_01cc7faa;
  plVar1 = (longlong *)*unaff_RSI;
  if (DAT_027edfa0 != 0) {
    FUN_00d50b00();
  }
  local_80 = lVar2;
  local_78 = '\x01';
  cVar3 = (**(code **)(*plVar1 + 0x50))();
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_027edfa8;
  if (cVar3 == '\0') {
    plVar1 = (longlong *)*unaff_RSI;
    if (DAT_027edfa8 != 0) {
      FUN_00d50b00();
    }
    local_70 = lVar2;
    local_68 = '\x01';
    cVar3 = (**(code **)(*plVar1 + 0x50))();
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = DAT_027edfb0;
    if (cVar3 == '\0') {
      plVar1 = (longlong *)*unaff_RSI;
      if (DAT_027edfb0 != 0) {
        FUN_00d50b00();
      }
      local_60 = lVar2;
      local_58 = '\x01';
      cVar3 = (**(code **)(*plVar1 + 0x50))();
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if (cVar3 == '\0') {
        local_50 = *unaff_RSI;
        local_48 = '\0';
        FUN_00c80cd0();
        plVar1 = local_40;
        if (local_38 == '\0') {
          if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
             (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38 = '\0';
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if (plVar1 != (longlong *)0x0) {
          pplVar6 = &local_40;
          FUN_00c811e0();
          plVar1 = local_40;
          if ((DAT_027edff0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
            _DAT_027e6478 = FUN_00d4fe50();
            _DAT_027e6460 = "GNValueTransformer";
            _DAT_027e6468 = 0x10;
            _DAT_027e6470 = FUN_01ccef80;
            _DAT_027e6480 = 0;
            uRam00000000027e6488 = 0;
            _DAT_027e6490 = 0;
            uRam00000000027e6498 = 0;
            _DAT_027e64a0 = 0;
            uRam00000000027e64a8 = 0;
            _DAT_027e64b0 = 0;
            uRam00000000027e64b8 = 0;
            _DAT_027e64c0 = 0;
            uRam00000000027e64c8 = 0;
            _DAT_027e64d0 = 0;
            uRam00000000027e64d8 = 0;
            _DAT_027e64e0 = 0;
            uRam00000000027e64e8 = 0;
            _DAT_027e64f0 = 0;
            uRam00000000027e64f8 = 0;
            _DAT_027e6500 = 0;
            uRam00000000027e6508 = 0;
            _DAT_027e6510 = 0;
            uRam00000000027e6518 = 0;
            _DAT_027e6520 = 0;
            ___cxa_guard_release();
          }
          if (plVar1 == (longlong *)0x0) {
LAB_01cc7ee1:
            pplVar6 = (longlong **)&DAT_02802688;
          }
          else {
            (**(code **)(*plVar1 + 0x360))();
            cVar3 = FUN_00e85ea0();
            if (cVar3 == '\0') goto LAB_01cc7ee1;
          }
          plVar1 = *pplVar6;
          if (plVar1 != (longlong *)0x0) {
            plVar5 = plVar1;
            if (*(char *)(pplVar6 + 1) == '\0') {
              FUN_00d50b00();
            }
            else {
              *(undefined1 *)(pplVar6 + 1) = 0;
            }
          }
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar5 != (longlong *)0x0) {
            (**(code **)(*plVar5 + 0x18))();
          }
          FUN_00d50b20();
        }
        if (plVar5 == (longlong *)0x0) {
          plVar5 = (longlong *)0x0;
          goto LAB_01cc7faa;
        }
      }
      else {
        plVar5 = (longlong *)FUN_00e8fc40();
        FUN_00d4ff40();
        *plVar5 = (longlong)&DAT_02673f68;
        FUN_00d500e0();
      }
    }
    else {
      plVar5 = (longlong *)FUN_00e8fc40();
      FUN_00d4ff40();
      *plVar5 = (longlong)&DAT_02673bd8;
      FUN_00d500e0();
    }
  }
  else {
    plVar5 = (longlong *)FUN_00e8fc40();
    FUN_00d4ff40();
    *plVar5 = (longlong)&DAT_02673848;
    FUN_00d500e0();
  }
  FUN_01cc85d0();
LAB_01cc7faa:
  *unaff_RDI = plVar5;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}



