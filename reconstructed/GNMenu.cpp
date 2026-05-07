// Reconstructed implementation of GNMenu
// From MikeCore binary — reverse-engineered pseudocode

#include "GNMenu.h"

// ============================================================
// @01d03810 — 1601 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01d03bea) */
/* WARNING: Removing unreachable block (ram,0x01d03bf6) */
/* WARNING: Removing unreachable block (ram,0x01d03d46) */
/* WARNING: Removing unreachable block (ram,0x01d03d53) */

void FUN_01d03810(undefined8 param_1,float param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined7 uVar9;
  char *pcVar8;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  ulonglong uVar10;
  longlong *plVar11;
  bool bVar12;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 uVar13;
  float local_d8;
  longlong local_68;
  char local_60;
  longlong *local_50;
  char local_48 [8];
  undefined8 local_40;
  char local_38 [8];
  
  plVar11 = unaff_RDI + 0x39;
  lVar5 = *unaff_RSI;
  lVar1 = unaff_RDI[0x39];
  if (lVar1 != lVar5) {
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    *plVar11 = lVar5;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*unaff_RDI + 0x620))();
  if ((longlong *)unaff_RDI[0x3a] != (longlong *)0x0) {
    (**(code **)(*(longlong *)unaff_RDI[0x3a] + 0x918))();
  }
  plVar7 = (longlong *)*plVar11;
  if ((plVar7 == (longlong *)0x0) || ((char)plVar7[4] != '\0')) {
    while( true ) {
      (**(code **)(*unaff_RDI + 0x4a0))();
      iVar3 = *(int *)((longlong)local_50 + 0xc);
      if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (iVar3 == 0) break;
      (**(code **)(*unaff_RDI + 0x4a0))();
      FUN_00d23340();
      local_38[0] = local_48[0];
      pcVar8 = local_48;
      if (local_48[0] == '\0') {
        pcVar8 = local_38;
      }
      *pcVar8 = '\0';
      if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*local_50 + 0x478))();
      if (local_38[0] != '\0') {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    FUN_001b9d20();
    (**(code **)(*plVar7 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') {
      plVar11 = &DAT_02802688;
    }
    if (*plVar11 != 0) {
      FUN_00d50b00();
      local_d8 = (float)FUN_01e3f820();
      iVar3 = FUN_01f7c6f0();
      local_40 = 0;
      plVar11 = (longlong *)0x0;
      for (uVar10 = 0; iVar4 = FUN_01f7c6f0(), (longlong)uVar10 < (longlong)iVar4;
          uVar10 = uVar10 + 1) {
        if ((longlong)uVar10 < (longlong)*(int *)(unaff_RDI[7] + 0xc)) {
          lVar5 = *(longlong *)(unaff_RDI[7] + 0x10);
          plVar7 = *(longlong **)(lVar5 + uVar10 * 8);
          uVar13 = extraout_XMM0_Da;
          if (plVar11 == plVar7) {
            if (((char)local_40 == '\0') && (plVar11 != (longlong *)0x0)) {
              local_40 = CONCAT71((int7)((ulonglong)lVar5 >> 8),1);
              uVar13 = FUN_00d50b00();
            }
          }
          else {
            if (plVar7 != (longlong *)0x0) {
              lVar5 = FUN_00d50b00();
              uVar13 = extraout_XMM0_Da_00;
            }
            if (((char)local_40 == '\0') || (plVar11 == (longlong *)0x0)) {
              local_40 = CONCAT71((int7)((ulonglong)lVar5 >> 8),1);
              plVar11 = plVar7;
            }
            else {
              uVar6 = FUN_00d50b20();
              local_40 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
              plVar11 = plVar7;
              uVar13 = extraout_XMM0_Da_01;
            }
          }
        }
        else {
          plVar7 = (longlong *)FUN_00e8fc40();
          FUN_0006daf0();
          *(undefined4 *)(plVar7 + 0x27) = 0;
          plVar7[0x2e] = 0;
          *(undefined4 *)(plVar7 + 0x2f) = 0;
          plVar7[0x30] = 0;
          *(undefined1 *)(plVar7 + 0x31) = 0;
          plVar7[0x28] = 0;
          plVar7[0x29] = 0;
          *(undefined4 *)(plVar7 + 0x2a) = 0;
          plVar7[0x2b] = 0;
          plVar7[0x2c] = 0;
          *(undefined8 *)((longlong)plVar7 + 0x165) = 0;
          *(undefined8 *)((longlong)plVar7 + 0x18c) = 0;
          *(undefined8 *)((longlong)plVar7 + 0x194) = 0;
          *(undefined8 *)((longlong)plVar7 + 0x199) = 0;
          plVar7[0x35] = 0;
          plVar7[0x36] = 0;
          plVar7[0x37] = 0;
          plVar7[0x38] = 0;
          *plVar7 = (longlong)&DAT_02679c28;
          plVar7[2] = (longlong)&DAT_0267a6f0;
          plVar7[0x39] = 0;
          plVar7[0x3a] = 0;
          uVar6 = FUN_00d500e0();
          uVar9 = (undefined7)((ulonglong)uVar6 >> 8);
          if (plVar7 == plVar11) {
            plVar7 = plVar11;
            if ((char)local_40 == '\0') {
              local_40 = CONCAT71(uVar9,1);
            }
            else {
              FUN_00d50b20();
            }
          }
          else {
            bVar12 = (char)local_40 != '\0';
            local_40 = CONCAT71(uVar9,1);
            if ((bVar12) && (plVar11 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          plVar11 = plVar7;
          uVar13 = (**(code **)(*unaff_RDI + 0x450))();
        }
        FUN_01f7c770(uVar13,uVar10 & 0xffffffff);
        if (local_48[0] == '\0') {
          if (local_50 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48[0] = '\0';
        }
        FUN_01d03810();
        if (local_50 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        (**(code **)(*plVar11 + 0x4d0))(local_d8,param_2 / (float)iVar3);
        FUN_00d50b00();
        (**(code **)(*plVar11 + 0xa20))();
        if (unaff_RDI != (longlong *)0x0) {
          FUN_00d50b20();
        }
        lVar5 = DAT_027ef470;
        if (DAT_027ef470 != 0) {
          FUN_00d50b00();
        }
        (**(code **)(*plVar11 + 0xa10))();
        if (lVar5 != 0) {
          FUN_00d50b20();
        }
        (**(code **)(*plVar11 + 0x6e8))();
        local_d8 = local_d8 + param_2 / (float)iVar3;
      }
      while( true ) {
        (**(code **)(*unaff_RDI + 0x4a0))();
        iVar3 = *(int *)((longlong)local_50 + 0xc);
        iVar4 = FUN_01f7c6f0();
        if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (iVar3 <= iVar4) break;
        (**(code **)(*unaff_RDI + 0x4a0))();
        FUN_00d23340();
        local_38[0] = local_48[0];
        pcVar8 = local_48;
        if (local_48[0] == '\0') {
          pcVar8 = local_38;
        }
        *pcVar8 = '\0';
        if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        (**(code **)(*local_50 + 0x478))();
        if (local_38[0] != '\0') {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
      }
      if (((char)local_40 != '\0') && (plVar11 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
  }
  return;
}




// ============================================================
// @01d61e70 — 1500 bytes
// str: ""GNMenu""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01d61f48) */
/* WARNING: Removing unreachable block (ram,0x01d61f54) */
/* WARNING: Removing unreachable block (ram,0x01d61f62) */
/* WARNING: Removing unreachable block (ram,0x01d61f6e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_01d61e70(undefined8 param_1,longlong *param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  char *pcVar9;
  longlong lVar10;
  longlong *unaff_RDI;
  bool bVar11;
  longlong **pplVar12;
  undefined4 uVar13;
  longlong *local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong *local_88;
  char local_80;
  longlong *local_70;
  char local_68 [8];
  longlong *local_60;
  int local_58;
  int iStack_54;
  int iStack_50;
  longlong *local_48;
  longlong *local_40;
  char local_38 [8];
  
  plVar6 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  local_48 = plVar6;
  (**(code **)(*plVar6 + 0x18))();
  plVar7 = (longlong *)FUN_00e8fc40();
  FUN_00d4ff40();
  *plVar7 = (longlong)&DAT_02572358;
  uVar13 = (*DAT_02572370)();
  plVar6 = local_48;
  local_a0 = '\0';
  local_a8 = plVar7;
  uVar13 = FUN_01e2af10(uVar13,&local_a8);
  if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
    uVar13 = FUN_00d50b20();
  }
  if (*param_2 == 0) {
    bVar11 = false;
LAB_01d62060:
    FUN_00ca1380();
    plVar8 = local_70;
    pcVar9 = local_38;
    if (local_68[0] != '\0') {
      pcVar9 = local_68;
    }
    local_38[0] = local_68[0];
    *pcVar9 = '\0';
    if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_38[0] == '\0') {
      if (local_70 != (longlong *)0x0) {
        FUN_00d50b00();
        goto LAB_01d620ca;
      }
      local_40 = (longlong *)0x0;
      bVar2 = true;
    }
    else if (local_70 == (longlong *)0x0) {
      local_40 = (longlong *)0x0;
      bVar2 = true;
    }
    else {
LAB_01d620ca:
      local_68[0] = '\0';
      local_70 = (longlong *)0x0;
      local_40 = plVar8;
      local_60 = plVar8;
      local_58 = -1;
      iStack_54 = 0;
      iStack_50 = 0;
      while( true ) {
        lVar10 = (longlong)local_58;
        local_58 = local_58 + 1;
        if (*(int *)((longlong)local_60 + 0xc) <= local_58) break;
        plVar6 = *(longlong **)(local_60[2] + 8 + lVar10 * 8);
        local_70 = plVar6;
        if ((DAT_026ee720 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
          _DAT_027f8498 = FUN_00d4fe50();
          _DAT_027f8480 = "GNMenu";
          _DAT_027f8488 = 0x50;
          _DAT_027f8490 = FUN_001d7d70;
          _DAT_027f84a0 = 0;
          uRam00000000027f84a8 = 0;
          _DAT_027f84b0 = 0;
          uRam00000000027f84b8 = 0;
          _DAT_027f84c0 = 0;
          uRam00000000027f84c8 = 0;
          _DAT_027f84d0 = 0;
          uRam00000000027f84d8 = 0;
          _DAT_027f84e0 = 0;
          uRam00000000027f84e8 = 0;
          _DAT_027f84f0 = 0;
          uRam00000000027f84f8 = 0;
          _DAT_027f8500 = 0;
          uRam00000000027f8508 = 0;
          _DAT_027f8510 = 0;
          uRam00000000027f8518 = 0;
          _DAT_027f8520 = 0;
          uRam00000000027f8528 = 0;
          _DAT_027f8530 = 0;
          uRam00000000027f8538 = 0;
          _DAT_027f8540 = 0;
          ___cxa_guard_release();
        }
        pplVar12 = &DAT_02802688;
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x360))();
          cVar4 = FUN_00e85ea0();
          pplVar12 = &local_70;
          if (cVar4 == '\0') {
            pplVar12 = &DAT_02802688;
          }
        }
        plVar6 = local_48;
        plVar8 = *pplVar12;
        if (plVar8 != (longlong *)0x0) {
          if (*(char *)(pplVar12 + 1) == '\0') {
            FUN_00d50b00();
            bVar11 = true;
          }
          else {
            *(undefined1 *)(pplVar12 + 1) = 0;
            bVar11 = true;
            plVar6 = local_48;
          }
          goto LAB_01d6228a;
        }
        if (iStack_54 != 0) {
          if (iStack_54 < 1) {
            iStack_54 = -iStack_54;
          }
          else {
            local_58 = local_58 - iStack_54;
            FUN_00d23690();
            iStack_50 = iStack_50 + iStack_54;
            iStack_54 = 0;
          }
        }
      }
      plVar8 = (longlong *)0x0;
      plVar6 = local_48;
LAB_01d6228a:
      FUN_00083b20();
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (plVar8 != (longlong *)0x0) goto LAB_01d622aa;
      bVar1 = true;
      local_40 = (longlong *)0x0;
      bVar2 = true;
      if (plVar7 == (longlong *)0x0) goto LAB_01d6234a;
    }
LAB_01d622e1:
    bVar1 = bVar2;
    local_68[0] = '\0';
    local_70 = (longlong *)0x0;
    iStack_54 = 0;
    iStack_50 = 0;
    local_60 = plVar7;
    for (lVar10 = 0; local_58 = (int)lVar10, local_58 < *(int *)((longlong)plVar7 + 0xc);
        lVar10 = lVar10 + 1) {
      local_70 = *(longlong **)(plVar7[2] + lVar10 * 8);
      FUN_00d50130();
    }
    FUN_00083b20();
    bVar2 = false;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    bVar3 = false;
    if (bVar11) goto LAB_01d62367;
  }
  else {
    local_90 = '\0';
    pplVar12 = &local_70;
    local_98 = *param_2;
    FUN_000175c0(uVar13,&local_98);
    plVar8 = local_70;
    if ((DAT_026ee720 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
      _DAT_027f8498 = FUN_00d4fe50();
      _DAT_027f8480 = "GNMenu";
      _DAT_027f8488 = 0x50;
      _DAT_027f8490 = FUN_001d7d70;
      _DAT_027f84a0 = 0;
      uRam00000000027f84a8 = 0;
      _DAT_027f84b0 = 0;
      uRam00000000027f84b8 = 0;
      _DAT_027f84c0 = 0;
      uRam00000000027f84c8 = 0;
      _DAT_027f84d0 = 0;
      uRam00000000027f84d8 = 0;
      _DAT_027f84e0 = 0;
      uRam00000000027f84e8 = 0;
      _DAT_027f84f0 = 0;
      uRam00000000027f84f8 = 0;
      _DAT_027f8500 = 0;
      uRam00000000027f8508 = 0;
      _DAT_027f8510 = 0;
      uRam00000000027f8518 = 0;
      _DAT_027f8520 = 0;
      uRam00000000027f8528 = 0;
      _DAT_027f8530 = 0;
      uRam00000000027f8538 = 0;
      _DAT_027f8540 = 0;
      ___cxa_guard_release();
    }
    plVar6 = local_48;
    if (plVar8 == (longlong *)0x0) {
      pplVar12 = &DAT_02802688;
      plVar8 = DAT_02802688;
      if (DAT_02802688 == (longlong *)0x0) goto LAB_01d62011;
LAB_01d61fe8:
      if (*(char *)(pplVar12 + 1) == '\0') {
        FUN_00d50b00();
      }
      else {
        *(undefined1 *)(pplVar12 + 1) = 0;
      }
      bVar11 = true;
    }
    else {
      (**(code **)(*plVar8 + 0x360))();
      cVar4 = FUN_00e85ea0();
      if (cVar4 == '\0') {
        pplVar12 = &DAT_02802688;
      }
      plVar8 = *pplVar12;
      if (*pplVar12 != (longlong *)0x0) goto LAB_01d61fe8;
LAB_01d62011:
      bVar11 = false;
      plVar8 = (longlong *)0x0;
    }
    if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if (plVar8 == (longlong *)0x0) goto LAB_01d62060;
LAB_01d622aa:
    local_80 = '\0';
    local_88 = plVar8;
    local_40 = plVar8;
    FUN_00d23d90();
    if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    bVar1 = false;
    bVar2 = bVar1;
    if (plVar7 != (longlong *)0x0) goto LAB_01d622e1;
LAB_01d6234a:
    bVar2 = true;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    bVar3 = true;
    if (bVar11) goto LAB_01d62367;
  }
  bVar2 = bVar3;
  if (!bVar1) {
    FUN_00d50b00();
  }
LAB_01d62367:
  *unaff_RDI = (longlong)local_40;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (!bVar2) {
    FUN_00d50b20();
  }
  if (plVar6 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}




// ============================================================
// @01d614c0 — 1373 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01d61a06) */
/* WARNING: Removing unreachable block (ram,0x01d61a12) */

void FUN_01d614c0(void)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  code *pcVar5;
  bool bVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *unaff_RSI;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *local_50;
  longlong local_48;
  char local_40;
  
  pcVar5 = DAT_026846e8;
  lVar7 = *unaff_RSI;
  uVar1 = *(uint *)(*(longlong *)(lVar7 + 0x18) + 0xc);
  if ((int)uVar1 < 1) {
    return;
  }
  lVar12 = 0;
  lVar11 = 0;
  bVar3 = false;
  bVar2 = false;
  local_50 = (longlong *)0x0;
  bVar4 = false;
  puVar10 = (undefined8 *)0x0;
  do {
    lVar7 = *(longlong *)(*(longlong *)(*(longlong *)(lVar7 + 0x18) + 0x10) + lVar12 * 8);
    if (lVar7 != 0) {
      FUN_00d50b00();
    }
    if (lVar11 == lVar7) {
      if ((!bVar3) && (lVar7 = lVar11, lVar11 != 0)) goto LAB_01d61583;
      if (lVar11 == 0) {
        lVar11 = 0;
      }
      else {
        FUN_00d50b20();
      }
    }
    else {
      if ((bVar3) && (lVar11 != 0)) {
        FUN_00d50b20();
      }
LAB_01d61583:
      lVar11 = lVar7;
      bVar3 = true;
    }
    puVar8 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar8 = &DAT_026846d0;
    puVar8[2] = &DAT_02684a60;
    *(undefined1 *)(puVar8 + 3) = 0;
    *(undefined8 *)((longlong)puVar8 + 0x1c) = 0;
    *(undefined8 *)((longlong)puVar8 + 0x24) = 0;
    *(undefined8 *)((longlong)puVar8 + 0x2c) = 0;
    *(undefined8 *)((longlong)puVar8 + 0x34) = 0;
    *(undefined8 *)((longlong)puVar8 + 0x3a) = 0;
    *(undefined8 *)((longlong)puVar8 + 0x42) = 0;
    puVar8[10] = 0;
    puVar8[0xb] = 0;
    puVar8[0xc] = 0;
    puVar8[0xd] = 0;
    *(undefined2 *)(puVar8 + 0xe) = 0;
    (*pcVar5)();
    if (puVar8 == puVar10) {
      puVar8 = puVar10;
      if (bVar2) {
        FUN_00d50b20();
        bVar6 = bVar2;
      }
      else {
        bVar6 = true;
      }
    }
    else {
      bVar6 = true;
      if ((bVar2) && (puVar10 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    bVar2 = bVar6;
    FUN_01d65230();
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    FUN_01d64eb0();
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    FUN_01d65460();
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    FUN_01d65120();
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    FUN_01d654b0();
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    FUN_01d65190();
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    FUN_01d65ec0();
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    FUN_01d651e0();
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    FUN_01d5d8d0();
    FUN_01d65320();
    FUN_01d65260();
    FUN_01d65e30();
    FUN_01d66ab0();
    FUN_01d654a0();
    FUN_01d65490();
    FUN_01d64cb0();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (local_48 != 0) {
      plVar9 = (longlong *)FUN_00e8fc40();
      FUN_001d7da0();
      (**(code **)(*plVar9 + 0x18))();
      if (plVar9 == local_50) {
        plVar9 = local_50;
        if (bVar4) {
          FUN_00d50b20();
          bVar6 = bVar4;
        }
        else {
          bVar6 = true;
        }
      }
      else {
        bVar6 = true;
        if ((bVar4) && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      local_50 = plVar9;
      FUN_01d64cb0();
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      FUN_01d614c0();
      if (local_48 != 0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      FUN_01d654e0();
      bVar4 = bVar6;
    }
    if ((ulonglong)uVar1 - 1 == lVar12) {
      if ((bVar4) && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (puVar8 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      if (!bVar3) {
        return;
      }
      if (lVar11 == 0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
    lVar7 = *unaff_RSI;
    lVar12 = lVar12 + 1;
    puVar10 = puVar8;
  } while( true );
}




// ============================================================
// @001d7ee0 — 1345 bytes
// str: ""GNMenu""
// str: ""GNLocalizationTarget""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001d7ee0(void)

{
  int iVar1;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff80();
  unaff_RDI[2] = &DAT_0258bc60;
  if (DAT_026df950 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026d6330 = "GNLocalizationTarget";
      DAT_026d6340 = 0;
      _DAT_026d6338 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c40();
  *unaff_RDI = &DAT_02684308;
  unaff_RDI[2] = &DAT_02684690;
  FUN_001d84c0();
  *(undefined1 *)(unaff_RDI + 4) = 0;
  if (DAT_026ee720 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027f8498 = FUN_00d4fe50();
      _DAT_027f8480 = "GNMenu";
      _DAT_027f8488 = 0x50;
      _DAT_027f8490 = FUN_001d7d70;
      _DAT_027f84a0 = 0;
      uRam00000000027f84a8 = 0;
      _DAT_027f84b0 = 0;
      uRam00000000027f84b8 = 0;
      _DAT_027f84c0 = 0;
      uRam00000000027f84c8 = 0;
      _DAT_027f84d0 = 0;
      uRam00000000027f84d8 = 0;
      _DAT_027f84e0 = 0;
      uRam00000000027f84e8 = 0;
      _DAT_027f84f0 = 0;
      uRam00000000027f84f8 = 0;
      _DAT_027f8500 = 0;
      uRam00000000027f8508 = 0;
      _DAT_027f8510 = 0;
      uRam00000000027f8518 = 0;
      _DAT_027f8520 = 0;
      uRam00000000027f8528 = 0;
      _DAT_027f8530 = 0;
      _uRam00000000027f8538 = 0;
      _DAT_027f8540 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027f853b == '\0') {
    FUN_001d87d0();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x21) = 0;
  if (DAT_026ee720 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027f8498 = FUN_00d4fe50();
      _DAT_027f8480 = "GNMenu";
      _DAT_027f8488 = 0x50;
      _DAT_027f8490 = FUN_001d7d70;
      _DAT_027f84a0 = 0;
      uRam00000000027f84a8 = 0;
      _DAT_027f84b0 = 0;
      uRam00000000027f84b8 = 0;
      _DAT_027f84c0 = 0;
      uRam00000000027f84c8 = 0;
      _DAT_027f84d0 = 0;
      uRam00000000027f84d8 = 0;
      _DAT_027f84e0 = 0;
      uRam00000000027f84e8 = 0;
      _DAT_027f84f0 = 0;
      uRam00000000027f84f8 = 0;
      _DAT_027f8500 = 0;
      uRam00000000027f8508 = 0;
      _DAT_027f8510 = 0;
      uRam00000000027f8518 = 0;
      _DAT_027f8520 = 0;
      uRam00000000027f8528 = 0;
      _DAT_027f8530 = 0;
      _uRam00000000027f8538 = 0;
      _DAT_027f8540 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027f853b == '\0') {
    FUN_001d8940();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x22) = 0;
  if (DAT_026ee720 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027f8498 = FUN_00d4fe50();
      _DAT_027f8480 = "GNMenu";
      _DAT_027f8488 = 0x50;
      _DAT_027f8490 = FUN_001d7d70;
      _DAT_027f84a0 = 0;
      uRam00000000027f84a8 = 0;
      _DAT_027f84b0 = 0;
      uRam00000000027f84b8 = 0;
      _DAT_027f84c0 = 0;
      uRam00000000027f84c8 = 0;
      _DAT_027f84d0 = 0;
      uRam00000000027f84d8 = 0;
      _DAT_027f84e0 = 0;
      uRam00000000027f84e8 = 0;
      _DAT_027f84f0 = 0;
      uRam00000000027f84f8 = 0;
      _DAT_027f8500 = 0;
      uRam00000000027f8508 = 0;
      _DAT_027f8510 = 0;
      uRam00000000027f8518 = 0;
      _DAT_027f8520 = 0;
      uRam00000000027f8528 = 0;
      _DAT_027f8530 = 0;
      _uRam00000000027f8538 = 0;
      _DAT_027f8540 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027f853b == '\0') {
    FUN_001d8ab0();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x23) = 0;
  if (DAT_026ee720 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027f8498 = FUN_00d4fe50();
      _DAT_027f8480 = "GNMenu";
      _DAT_027f8488 = 0x50;
      _DAT_027f8490 = FUN_001d7d70;
      _DAT_027f84a0 = 0;
      uRam00000000027f84a8 = 0;
      _DAT_027f84b0 = 0;
      uRam00000000027f84b8 = 0;
      _DAT_027f84c0 = 0;
      uRam00000000027f84c8 = 0;
      _DAT_027f84d0 = 0;
      uRam00000000027f84d8 = 0;
      _DAT_027f84e0 = 0;
      uRam00000000027f84e8 = 0;
      _DAT_027f84f0 = 0;
      uRam00000000027f84f8 = 0;
      _DAT_027f8500 = 0;
      uRam00000000027f8508 = 0;
      _DAT_027f8510 = 0;
      uRam00000000027f8518 = 0;
      _DAT_027f8520 = 0;
      uRam00000000027f8528 = 0;
      _DAT_027f8530 = 0;
      _uRam00000000027f8538 = 0;
      _DAT_027f8540 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027f853b == '\0') {
    FUN_001d8c20();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x24) = 0;
  if (DAT_026ee720 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027f8498 = FUN_00d4fe50();
      _DAT_027f8480 = "GNMenu";
      _DAT_027f8488 = 0x50;
      _DAT_027f8490 = FUN_001d7d70;
      _DAT_027f84a0 = 0;
      uRam00000000027f84a8 = 0;
      _DAT_027f84b0 = 0;
      uRam00000000027f84b8 = 0;
      _DAT_027f84c0 = 0;
      uRam00000000027f84c8 = 0;
      _DAT_027f84d0 = 0;
      uRam00000000027f84d8 = 0;
      _DAT_027f84e0 = 0;
      uRam00000000027f84e8 = 0;
      _DAT_027f84f0 = 0;
      uRam00000000027f84f8 = 0;
      _DAT_027f8500 = 0;
      uRam00000000027f8508 = 0;
      _DAT_027f8510 = 0;
      uRam00000000027f8518 = 0;
      _DAT_027f8520 = 0;
      uRam00000000027f8528 = 0;
      _DAT_027f8530 = 0;
      _uRam00000000027f8538 = 0;
      _DAT_027f8540 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027f853b == '\0') {
    FUN_001d8d90();
    FUN_00e87980();
  }
  FUN_001d8f00();
  FUN_001d9180();
  FUN_001d9470();
  FUN_001d9760();
  unaff_RDI[9] = *(undefined8 *)(unaff_RSI + 0x48);
  return;
}




// ============================================================
// @01d03340 — 829 bytes
// str: ""GNMenu""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01d035b1) */
/* WARNING: Removing unreachable block (ram,0x01d035bd) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_01d03340(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong *unaff_RSI;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong *local_50;
  longlong local_48;
  char local_40;
  char local_32;
  char local_31;
  
  plVar7 = (longlong *)*unaff_RSI;
  local_50 = param_1;
  if ((DAT_026ee720 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
    _DAT_027f8498 = FUN_00d4fe50();
    _DAT_027f8480 = "GNMenu";
    _DAT_027f8488 = 0x50;
    _DAT_027f8490 = FUN_001d7d70;
    _DAT_027f84a0 = 0;
    uRam00000000027f84a8 = 0;
    _DAT_027f84b0 = 0;
    uRam00000000027f84b8 = 0;
    _DAT_027f84c0 = 0;
    uRam00000000027f84c8 = 0;
    _DAT_027f84d0 = 0;
    uRam00000000027f84d8 = 0;
    _DAT_027f84e0 = 0;
    uRam00000000027f84e8 = 0;
    _DAT_027f84f0 = 0;
    uRam00000000027f84f8 = 0;
    _DAT_027f8500 = 0;
    uRam00000000027f8508 = 0;
    _DAT_027f8510 = 0;
    uRam00000000027f8518 = 0;
    _DAT_027f8520 = 0;
    uRam00000000027f8528 = 0;
    _DAT_027f8530 = 0;
    uRam00000000027f8538 = 0;
    _DAT_027f8540 = 0;
    ___cxa_guard_release();
  }
  if (plVar7 == (longlong *)0x0) {
LAB_01d0339a:
    unaff_RSI = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar7 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01d0339a;
  }
  local_32 = (char)unaff_RSI[1];
  if ((local_32 == '\0') || (*unaff_RSI == 0)) {
    if (*unaff_RSI == 0) goto LAB_01d0353d;
  }
  else {
    FUN_00d50b00();
  }
  lVar2 = DAT_027ef478;
  plVar7 = (longlong *)*param_2;
  if (DAT_027ef478 != 0) {
    FUN_00d50b00();
  }
  cVar3 = (**(code **)(*plVar7 + 0x50))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (cVar3 != '\0') {
    plVar7 = (longlong *)*local_50;
    FUN_01e7eb20();
    if (plVar7 == (longlong *)0x0) {
LAB_01d03453:
      plVar7 = &DAT_02802688;
    }
    else {
      (**(code **)(*plVar7 + 0x360))();
      cVar3 = FUN_00e85ea0();
      plVar7 = local_50;
      if (cVar3 == '\0') goto LAB_01d03453;
    }
    plVar1 = (longlong *)*plVar7;
    local_31 = (char)plVar7[1];
    if ((local_31 == '\0') || (plVar1 == (longlong *)0x0)) {
      if (plVar1 == (longlong *)0x0) goto LAB_01d0352f;
    }
    else {
      FUN_00d50b00();
    }
    (**(code **)(*plVar1 + 0x6f0))();
    local_48 = local_60;
    local_40 = 0;
    if (local_58 == '\0') {
      if (local_60 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    local_40 = '\x01';
    uVar4 = FUN_00d51e10();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((char)uVar4 != '\0') {
      if (local_31 != '\0') {
        FUN_00d50b20();
      }
      uVar8 = CONCAT71((uint7)(uint3)((uint)uVar4 >> 8),1);
      if (local_32 == '\0') {
        return uVar8;
      }
      FUN_00d50b20();
      return uVar8;
    }
    if (local_31 != '\0') {
      FUN_00d50b20();
    }
  }
LAB_01d0352f:
  if (local_32 != '\0') {
    FUN_00d50b20();
  }
LAB_01d0353d:
  local_80 = *param_2;
  local_78 = '\0';
  local_70 = *local_50;
  local_68 = '\0';
  uVar5 = FUN_00d59fc0(&local_70,&local_80);
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  return (ulonglong)uVar5;
}




// ============================================================
// @01d62660 — 799 bytes
// ============================================================

void FUN_01d62660(void)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong unaff_RDI;
  uint uVar4;
  ulonglong uVar5;
  longlong local_48;
  char local_40;
  
  lVar3 = *(longlong *)(unaff_RDI + 0x18);
  uVar4 = *(uint *)(lVar3 + 0xc);
  uVar5 = (ulonglong)uVar4;
  if (0 < (int)uVar4) {
    while( true ) {
      uVar4 = uVar4 - 1;
      lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + (ulonglong)uVar4 * 8);
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      cVar2 = FUN_01d65330();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if (cVar2 == '\0') break;
      lVar3 = *(longlong *)
               (*(longlong *)(*(longlong *)(unaff_RDI + 0x18) + 0x10) + (ulonglong)uVar4 * 8);
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      FUN_01d5dde0();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if ((longlong)uVar5 < 2) break;
      uVar5 = uVar5 - 1;
      lVar3 = *(longlong *)(unaff_RDI + 0x18);
    }
    lVar3 = *(longlong *)(unaff_RDI + 0x18);
    uVar4 = *(uint *)(lVar3 + 0xc);
    if (1 < (int)uVar4) {
      uVar5 = (ulonglong)(uVar4 - 2);
      lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + uVar5 * 8);
      while( true ) {
        if (lVar3 != 0) {
          FUN_00d50b00();
        }
        cVar2 = FUN_01d65330();
        if (cVar2 == '\0') {
          cVar2 = '\0';
        }
        else {
          lVar1 = *(longlong *)
                   (*(longlong *)(*(longlong *)(unaff_RDI + 0x18) + 0x10) + 8 + uVar5 * 8);
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          cVar2 = FUN_01d65330();
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
        }
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        if (cVar2 != '\0') {
          lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x18) + 0x10) + uVar5 * 8);
          if (lVar3 != 0) {
            FUN_00d50b00();
          }
          FUN_01d5dde0();
          if (lVar3 != 0) {
            FUN_00d50b20();
          }
        }
        if ((longlong)uVar5 < 1) break;
        uVar5 = uVar5 - 1;
        lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x18) + 0x10) + uVar5 * 8);
      }
      lVar3 = *(longlong *)(unaff_RDI + 0x18);
      uVar4 = *(uint *)(lVar3 + 0xc);
    }
  }
  if (uVar4 != 0) {
    lVar3 = **(longlong **)(lVar3 + 0x10);
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    cVar2 = FUN_01d65330();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (cVar2 != '\0') {
      lVar3 = **(longlong **)(*(longlong *)(unaff_RDI + 0x18) + 0x10);
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      FUN_01d5dde0();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
  }
  lVar3 = *(longlong *)(unaff_RDI + 0x18);
  uVar4 = *(uint *)(lVar3 + 0xc);
  uVar5 = (ulonglong)uVar4;
  if (0 < (int)uVar4) {
    while( true ) {
      uVar4 = uVar4 - 1;
      lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + (ulonglong)uVar4 * 8);
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      cVar2 = FUN_01d64c70();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if (cVar2 != '\0') {
        lVar3 = *(longlong *)
                 (*(longlong *)(*(longlong *)(unaff_RDI + 0x18) + 0x10) + (ulonglong)uVar4 * 8);
        if (lVar3 != 0) {
          FUN_00d50b00();
        }
        FUN_01d64cb0();
        FUN_01d62660();
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
      }
      if ((longlong)uVar5 < 2) break;
      uVar5 = uVar5 - 1;
      lVar3 = *(longlong *)(unaff_RDI + 0x18);
    }
  }
  return;
}




// ============================================================
// @00809560 — 708 bytes
// str: ""GNMenu""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x008097f3) */
/* WARNING: Removing unreachable block (ram,0x008097e5) */
/* WARNING: Removing unreachable block (ram,0x00809801) */

void FUN_00809560(void)

{
  longlong lVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  longlong local_2d0;
  longlong local_2c0;
  longlong local_2b0;
  
  lVar1 = FUN_00822d90();
  if (*(char *)(lVar1 + 0xbb) == '\0') {
    FUN_001871b0();
    FUN_00e87760();
    FUN_0006daf0();
    FUN_00d50c00();
    FUN_001e7990();
    lVar1 = FUN_00822d90();
    if (*(char *)(lVar1 + 0xbb) == '\0') {
      FUN_008230a0();
      iVar2 = FUN_00e7ddf0();
      pcVar3 = "GNUni";
      if (iVar2 == 0) {
        pcVar3 = (char *)0x0;
      }
      FUN_00e879c0(pcVar3,"GNMenu");
    }
    FUN_00d50c00();
    uVar4 = FUN_00e87770();
    FUN_00e87920(uVar4,0);
    if (local_2b0 != 0) {
      FUN_00d50b20();
    }
    if (local_2c0 != 0) {
      FUN_00d50b20();
    }
    if (local_2d0 != 0) {
      FUN_00d50b20();
    }
    FUN_000fba40();
    FUN_000fba40();
  }
  return;
}




// ============================================================
// @01d61100 — 531 bytes
// ============================================================

undefined8 FUN_01d61100(void)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong unaff_RDI;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  float fVar8;
  float extraout_XMM0_Dc;
  float fVar9;
  float extraout_XMM0_Dd;
  undefined1 auVar10 [16];
  undefined1 local_88 [8];
  float fStack_80;
  float fStack_7c;
  longlong *local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  longlong *local_58;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  FUN_01cb4790();
  plVar3 = local_40;
  if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01cb4790();
  (**(code **)(*local_78 + 0x370))();
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
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar4 = *(longlong *)(unaff_RDI + 0x18);
  if (*(int *)(lVar4 + 0xc) < 1) {
    local_88 = (undefined1  [8])0x0;
  }
  else {
    _local_88 = ZEXT816(0);
    lVar6 = 0;
    local_58 = plVar5;
    do {
      lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + lVar6 * 8);
      if (lVar4 != 0) {
        FUN_00d50b00();
      }
      FUN_01d65230();
      local_50 = local_40;
      local_48 = 0;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      plVar5 = local_58;
      local_48 = '\x01';
      local_68 = local_58;
      local_60 = '\0';
      uVar7 = (**(code **)(*plVar3 + 0x5d0))(0,&local_68);
      if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      fVar8 = extraout_XMM0_Dc;
      fVar9 = extraout_XMM0_Dd;
      uVar2 = uVar7;
      if ((float)uVar7 <= (float)local_88._0_4_) {
        fVar8 = fStack_80;
        fVar9 = fStack_7c;
        uVar2 = local_88;
      }
      auVar10._0_4_ = (float)local_88._0_4_ + (float)uVar7;
      auVar10._4_4_ = (float)local_88._4_4_ + (float)((ulonglong)uVar7 >> 0x20);
      auVar10._8_4_ = fStack_80 + extraout_XMM0_Dc;
      auVar10._12_4_ = fStack_7c + extraout_XMM0_Dd;
      auVar1._8_4_ = fVar8;
      auVar1._0_8_ = uVar2;
      auVar1._12_4_ = fVar9;
      _local_88 = blendps(auVar10,auVar1,0xd);
      lVar6 = lVar6 + 1;
      lVar4 = *(longlong *)(unaff_RDI + 0x18);
    } while (lVar6 < *(int *)(lVar4 + 0xc));
  }
  if (plVar5 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return local_88;
}



