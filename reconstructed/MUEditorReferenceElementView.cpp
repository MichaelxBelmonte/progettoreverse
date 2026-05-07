// Reconstructed implementation of MUEditorReferenceElementView
// From MikeCore binary — reverse-engineered pseudocode

#include "MUEditorReferenceElementView.h"

// ============================================================
// @019a7d70 — 1072 bytes
// str: ""MUEditorReferenceElementView""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_019a7d70(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong **pplVar6;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined7 uVar11;
  ulonglong uVar12;
  longlong *local_58;
  char local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong *local_38;
  
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &DAT_02572358;
  (*DAT_02572370)();
  lVar3 = *(longlong *)(unaff_RSI + 0x38);
  uVar5 = *(uint *)(lVar3 + 0xc);
  uVar12 = (ulonglong)uVar5;
  if (0 < (int)uVar5) {
    local_38 = (longlong *)0x0;
    local_48 = 0;
    uVar8 = 0;
    plVar7 = (longlong *)0x0;
    do {
      uVar5 = uVar5 - 1;
      plVar10 = *(longlong **)(*(longlong *)(lVar3 + 0x10) + (ulonglong)uVar5 * 8);
      local_58 = plVar10;
      local_50 = '\0';
      uVar4 = 0;
      if ((DAT_02734210 == '\0') && (uVar4 = ___cxa_guard_acquire(), (int)uVar4 != 0)) {
        _DAT_02734160 = FUN_0034cf20();
        _DAT_02734148 = "MUEditorReferenceElementView";
        _DAT_02734150 = 0x1f8;
        _DAT_02734158 = FUN_0082d150;
        _DAT_02734168 = 0;
        uRam0000000002734170 = 0;
        _DAT_02734178 = 0;
        _DAT_027341f0 = 0;
        uRam00000000027341f8 = 0;
        _DAT_02734200 = 0;
        DAT_02734202 = 1;
        _DAT_02734180 = 0;
        uRam0000000002734188 = 0;
        _DAT_02734190 = 0;
        uRam0000000002734198 = 0;
        _DAT_027341a0 = 0;
        uRam00000000027341a8 = 0;
        _DAT_027341b0 = 0;
        uRam00000000027341b8 = 0;
        _DAT_027341c0 = 0;
        uRam00000000027341c8 = 0;
        _DAT_027341d0 = 0;
        uRam00000000027341d8 = 0;
        _DAT_027341e0 = 0;
        uRam00000000027341e8 = 0;
        DAT_0273420b = 0;
        _DAT_02734203 = 0;
        uVar4 = ___cxa_guard_release();
      }
      pplVar6 = (longlong **)&DAT_02802688;
      if (plVar10 != (longlong *)0x0) {
        (**(code **)(*plVar10 + 0x360))();
        uVar4 = FUN_00e85ea0();
        pplVar6 = &local_58;
        if ((char)uVar4 == '\0') {
          pplVar6 = (longlong **)&DAT_02802688;
        }
      }
      plVar10 = *pplVar6;
      cVar1 = (char)uVar8;
      if (plVar10 == plVar7) {
        plVar9 = plVar7;
        if ((cVar1 == '\0') && (plVar10 != (longlong *)0x0)) {
          if (*(char *)(pplVar6 + 1) != '\0') goto LAB_019a7e83;
          local_40 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
          FUN_00d50b00();
        }
        else {
          local_40 = uVar8;
        }
      }
      else {
        plVar9 = plVar10;
        if (*(char *)(pplVar6 + 1) == '\0') {
          if (plVar10 != (longlong *)0x0) {
            uVar4 = FUN_00d50b00();
          }
          local_40 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
          if ((cVar1 != '\0') && (plVar7 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if ((cVar1 != '\0') && (plVar7 != (longlong *)0x0)) {
            uVar4 = FUN_00d50b20();
          }
LAB_019a7e83:
          *(undefined1 *)(pplVar6 + 1) = 0;
          local_40 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
          plVar10 = plVar9;
        }
      }
      if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      uVar8 = local_48;
      if ((plVar9 != (longlong *)0x0) &&
         (cVar1 = (**(code **)(*plVar9 + 0x958))(param_1,param_2), uVar8 = local_48, cVar1 != '\0'))
      {
        (**(code **)(*plVar9 + 0x928))();
        plVar7 = local_58;
        uVar11 = (undefined7)((ulonglong)plVar10 >> 8);
        plVar10 = local_58;
        if (local_58 == local_38) {
          uVar8 = local_48;
          plVar7 = local_38;
          if (((char)local_48 == '\0') && (local_58 != (longlong *)0x0)) {
            uVar8 = CONCAT71(uVar11,1);
            plVar7 = local_38;
            if (local_50 != '\0') goto joined_r0x019a8071;
            FUN_00d50b00();
LAB_019a7feb:
            uVar8 = CONCAT71(uVar11,1);
            plVar7 = local_38;
          }
joined_r0x019a808d:
          local_38 = plVar7;
          plVar10 = local_58;
          if (local_50 != '\0') {
LAB_019a7ff1:
            plVar10 = local_58;
            plVar7 = local_38;
            if (local_58 != (longlong *)0x0) {
              FUN_00d50b20();
              plVar10 = local_58;
              plVar7 = local_38;
            }
          }
        }
        else {
          if (local_50 == '\0') {
            if (local_58 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            uVar8 = CONCAT71(uVar11,1);
            if ((char)local_48 == '\0') goto joined_r0x019a808d;
            if (local_38 != (longlong *)0x0) {
              FUN_00d50b20();
              local_38 = plVar7;
              goto LAB_019a7feb;
            }
            local_38 = plVar7;
            plVar10 = local_58;
            if (local_50 == '\0') goto joined_r0x019a8071;
            goto LAB_019a7ff1;
          }
          uVar8 = CONCAT71(uVar11,1);
          if (((char)local_48 != '\0') && (local_38 != (longlong *)0x0)) {
            FUN_00d50b20();
            plVar10 = local_58;
          }
        }
joined_r0x019a8071:
        local_58 = plVar7;
        if (local_58 == (longlong *)0x0) {
          local_38 = (longlong *)0x0;
          local_58 = plVar10;
        }
        else {
          local_50 = '\0';
          local_38 = local_58;
          FUN_00d235a0();
          if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      if ((longlong)uVar12 < 2) goto LAB_019a815b;
      uVar12 = uVar12 - 1;
      lVar3 = *(longlong *)(unaff_RSI + 0x38);
      local_48 = uVar8;
      uVar8 = local_40;
      plVar7 = plVar9;
    } while( true );
  }
  uVar8 = 0;
  plVar7 = (longlong *)0x0;
  cVar1 = '\0';
  plVar9 = (longlong *)0x0;
LAB_019a8170:
  *unaff_RDI = puVar2;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (((char)uVar8 != '\0') && (plVar7 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((cVar1 != '\0') && (plVar9 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
LAB_019a815b:
  cVar1 = (char)local_40;
  plVar7 = local_38;
  goto LAB_019a8170;
}



