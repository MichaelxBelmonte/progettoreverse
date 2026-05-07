// Reconstructed implementation of GNPopUpButton
// From MikeCore binary — reverse-engineered pseudocode

#include "GNPopUpButton.h"

// ============================================================
// @01efe2c0 — 1905 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01efe9f6) */
/* WARNING: Removing unreachable block (ram,0x01efe78a) */
/* WARNING: Removing unreachable block (ram,0x01efe79a) */
/* WARNING: Removing unreachable block (ram,0x01efea02) */

void FUN_01efe2c0(void)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  code *pcVar7;
  longlong *plVar8;
  char cVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  char *pcVar13;
  longlong *unaff_RDI;
  longlong lVar14;
  longlong *plVar15;
  char local_90;
  undefined7 uStack_8f;
  char local_88;
  longlong *local_80;
  char local_68;
  undefined7 uStack_67;
  char local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined8 *local_48;
  longlong *local_40;
  char local_38 [8];
  
  FUN_01f03a80();
  plVar15 = local_40;
  if ((((local_38[0] == '\0') && (local_40 != (longlong *)0x0)) &&
      (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_80 = plVar15;
  local_48 = (undefined8 *)0x0;
  local_50 = 0;
  local_58 = (longlong *)0x0;
  FUN_00ca1340();
  pcVar7 = DAT_02572370;
  lVar10 = unaff_RDI[0xf];
  if (*(int *)(lVar10 + 0xc) < 1) {
    bVar5 = false;
    local_48 = (undefined8 *)0x0;
    bVar4 = false;
    plVar15 = (longlong *)0x0;
    local_50 = 0;
    local_58 = (longlong *)0x0;
  }
  else {
    lVar14 = 0;
    local_58 = (longlong *)0x0;
    local_50 = 0;
    plVar15 = (longlong *)0x0;
    bVar4 = false;
    local_48 = (undefined8 *)0x0;
    bVar5 = false;
    do {
      lVar10 = *(longlong *)(lVar10 + 0x10);
      plVar2 = *(longlong **)(lVar10 + lVar14 * 8);
      if (local_58 == plVar2) {
        if (((char)local_50 == '\0') && (local_58 != (longlong *)0x0)) {
          local_50 = CONCAT71((int7)((ulonglong)lVar10 >> 8),1);
          FUN_00d50b00();
        }
      }
      else {
        if (plVar2 != (longlong *)0x0) {
          lVar10 = FUN_00d50b00();
        }
        if (((char)local_50 == '\0') || (local_58 == (longlong *)0x0)) {
          local_50 = CONCAT71((int7)((ulonglong)lVar10 >> 8),1);
          local_58 = plVar2;
        }
        else {
          local_58 = plVar2;
          uVar11 = FUN_00d50b20();
          local_50 = CONCAT71((int7)((ulonglong)uVar11 >> 8),1);
        }
      }
      puVar12 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar12 = &DAT_02572358;
      (*pcVar7)();
      if (puVar12 == local_48) {
        if (bVar5) {
          FUN_00d50b20();
LAB_01efe492:
          iVar1 = *(int *)((longlong)local_80 + 0xc);
        }
        else {
          iVar1 = *(int *)((longlong)local_80 + 0xc);
          bVar5 = true;
        }
      }
      else {
        bVar6 = true;
        if (bVar5) {
          if (local_48 != (undefined8 *)0x0) {
            FUN_00d50b20();
            local_48 = puVar12;
            bVar5 = bVar6;
            goto LAB_01efe492;
          }
          iVar1 = *(int *)((longlong)local_80 + 0xc);
          local_48 = puVar12;
          bVar5 = bVar6;
        }
        else {
          iVar1 = *(int *)((longlong)local_80 + 0xc);
          local_48 = puVar12;
          bVar5 = bVar6;
        }
      }
      if (0 < iVar1) {
        lVar10 = 0;
        do {
          plVar2 = *(longlong **)(local_80[2] + lVar10 * 8);
          if (plVar15 == plVar2) {
            if ((!bVar4) && (plVar15 != (longlong *)0x0)) {
              bVar4 = true;
              FUN_00d50b00();
            }
          }
          else {
            if (plVar2 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            if ((bVar4) && (plVar15 != (longlong *)0x0)) {
              FUN_00d50b20();
              bVar4 = true;
              plVar15 = plVar2;
            }
            else {
              bVar4 = true;
              plVar15 = plVar2;
            }
          }
          (**(code **)(*plVar15 + 0x5c8))();
          if (local_40 == (longlong *)0x0) {
            cVar9 = '\0';
          }
          else {
            (**(code **)(*plVar15 + 0x5c8))();
            plVar2 = (longlong *)CONCAT71(uStack_67,local_68);
            (**(code **)(*local_58 + 0x370))();
            lVar3 = CONCAT71(uStack_8f,local_90);
            if (local_88 == '\0') {
              if (lVar3 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_88 = '\0';
            }
            cVar9 = (**(code **)(*plVar2 + 0x50))();
            if (lVar3 != 0) {
              FUN_00d50b20();
            }
            if ((local_88 != '\0') && (CONCAT71(uStack_8f,local_90) != 0)) {
              FUN_00d50b20();
            }
            if ((local_60 != '\0') && (CONCAT71(uStack_67,local_68) != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (cVar9 != '\0') {
            local_38[0] = '\0';
            local_40 = plVar15;
            FUN_00d21140();
            if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          lVar10 = lVar10 + 1;
        } while (lVar10 < *(int *)((longlong)local_80 + 0xc));
      }
      (**(code **)(*local_58 + 0x370))();
      plVar2 = (longlong *)CONCAT71(uStack_67,local_68);
      if (local_60 == '\0') {
        if (plVar2 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      local_38[0] = '\0';
      local_40 = plVar2;
      FUN_00ca0840();
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar2 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (CONCAT71(uStack_67,local_68) != 0)) {
        FUN_00d50b20();
      }
      lVar14 = lVar14 + 1;
      lVar10 = unaff_RDI[0xf];
    } while (lVar14 < *(int *)(lVar10 + 0xc));
  }
  (**(code **)(*unaff_RDI + 0x608))();
  FUN_00c9fe20();
  plVar2 = local_40;
  local_68 = local_38[0];
  pcVar13 = local_38;
  if (local_38[0] == '\0') {
    pcVar13 = &local_68;
  }
  *pcVar13 = '\0';
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar10 = unaff_RDI[0xe];
  if (lVar10 != 0) {
    FUN_00d50b00();
  }
  local_38[0] = '\0';
  local_40 = (longlong *)lVar10;
  cVar9 = FUN_00d23d70();
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar10 != 0) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (plVar2 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar9 == '\0') {
    FUN_00c9fe20();
    plVar2 = local_40;
    local_68 = local_38[0];
    pcVar13 = local_38;
    if (local_38[0] == '\0') {
      pcVar13 = &local_68;
    }
    *pcVar13 = '\0';
    if ((local_38[0] != '\0') && (plVar2 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    iVar1 = *(int *)((longlong)plVar2 + 0xc);
    if (local_68 != '\0') {
      FUN_00d50b20();
    }
    if (iVar1 == 0) {
      (**(code **)(*unaff_RDI + 0x5d0))();
    }
    else {
      FUN_00c9fe20();
      plVar2 = local_40;
      local_90 = local_38[0];
      pcVar13 = &local_90;
      if (local_38[0] != '\0') {
        pcVar13 = local_38;
      }
      *pcVar13 = '\0';
      if ((local_38[0] != '\0') && (plVar2 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d23310();
      plVar8 = local_40;
      pcVar13 = local_38;
      if (local_38[0] == '\0') {
        pcVar13 = &local_68;
      }
      local_68 = local_38[0];
      *pcVar13 = '\0';
      if ((local_38[0] != '\0') && (plVar8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_68 == '\0') && (plVar8 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      (**(code **)(*unaff_RDI + 0x5d0))();
      if (plVar8 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_90 != '\0') && (plVar2 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  if ((bVar5) && (local_48 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (local_80 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((bVar4) && (plVar15 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01c6e850 — 1754 bytes
// ============================================================

void FUN_01c6e850(undefined4 param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  char *pcVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  void *pvVar8;
  int extraout_var;
  pthread_key_t pVar9;
  undefined4 in_EDX;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined4 uVar10;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  undefined8 *local_b0;
  char local_a8;
  longlong *local_a0;
  longlong *local_58;
  char local_50;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  if ((int)unaff_RDI[0x4d] != 0) {
    *(undefined4 *)(unaff_RDI + 0x4d) = 0;
    (**(code **)(*(longlong *)unaff_RDI[0x2b] + 0x478))();
    if (unaff_RDI[0x2b] != 0) {
      unaff_RDI[0x2b] = 0;
      FUN_00d50b20();
    }
    if (unaff_RDI[0x4e] != 0) {
      unaff_RDI[0x4e] = 0;
      FUN_00d50b20();
    }
    FUN_01e436c0();
    param_1 = FUN_01c4d670();
  }
  local_d0 = *unaff_RSI;
  local_c8 = '\0';
  FUN_01c4de00(param_1,&local_d0);
  if (local_40[0] == '\0') {
    if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
       (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40[0] = '\0';
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  *(undefined4 *)(unaff_RDI + 0x4d) = in_EDX;
  lVar1 = *unaff_RSI;
  lVar2 = unaff_RDI[0x4e];
  local_a0 = local_48;
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    unaff_RDI[0x4e] = lVar1;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*local_48 + 0x4a0))();
  FUN_00d23310();
  local_38[0] = local_40[0];
  pcVar5 = local_40;
  if (local_40[0] == '\0') {
    pcVar5 = local_38;
  }
  *pcVar5 = '\0';
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  uVar10 = FUN_01e3f820();
  if ((local_38[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*local_a0 + 0x4a0))();
  FUN_00d23310();
  pcVar5 = local_40;
  if (local_40[0] == '\0') {
    pcVar5 = local_38;
  }
  local_38[0] = local_40[0];
  *pcVar5 = '\0';
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] == '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  uVar10 = FUN_01e437f0(uVar10);
  if (local_48 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_0006daf0();
  *(undefined4 *)(puVar6 + 0x27) = 0;
  puVar6[0x2e] = 0;
  *(undefined4 *)(puVar6 + 0x2f) = 0;
  puVar6[0x30] = 0;
  *(undefined1 *)(puVar6 + 0x31) = 0;
  puVar6[0x28] = 0;
  puVar6[0x29] = 0;
  *(undefined4 *)(puVar6 + 0x2a) = 0;
  puVar6[0x2b] = 0;
  puVar6[0x2c] = 0;
  *(undefined8 *)((longlong)puVar6 + 0x165) = 0;
  *(undefined8 *)((longlong)puVar6 + 0x18c) = 0;
  *(undefined8 *)((longlong)puVar6 + 0x194) = 0;
  *(undefined8 *)((longlong)puVar6 + 0x199) = 0;
  puVar6[0x35] = 0;
  puVar6[0x36] = 0;
  puVar6[0x37] = 0;
  puVar6[0x38] = 0;
  *puVar6 = &DAT_0269c118;
  puVar6[2] = &DAT_0269cc70;
  puVar6[0x39] = &DAT_0269ccb0;
  puVar6[0x45] = 0;
  *(undefined2 *)(puVar6 + 0x46) = 0;
  puVar6[0x47] = 0;
  puVar6[0x3a] = 0;
  puVar6[0x3b] = 0;
  *(undefined4 *)(puVar6 + 0x3c) = 0;
  puVar6[0x3f] = 0;
  puVar6[0x40] = 0;
  puVar6[0x3d] = 0;
  puVar6[0x3e] = 0;
  *(undefined8 *)((longlong)puVar6 + 0x205) = 0;
  puVar6[0x42] = 0;
  puVar6[0x43] = 0;
  *(undefined8 *)((longlong)puVar6 + 0x21d) = 0;
  (*DAT_0269c130)();
  puVar7 = (undefined8 *)unaff_RDI[0x2b];
  if (puVar7 == puVar6) {
    FUN_00d50b20();
  }
  else {
    unaff_RDI[0x2b] = (longlong)puVar6;
    if (puVar7 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*(longlong *)unaff_RDI[0x2b] + 0x9c8))();
  (**(code **)(*(longlong *)unaff_RDI[0x2b] + 0x4d0))(uVar10,param_2);
  plVar3 = (longlong *)unaff_RDI[0x2b];
  (**(code **)(*unaff_RDI + 0x640))();
  (**(code **)(*local_58 + 0x370))();
  if (local_40[0] == '\0') {
    if (local_48 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40[0] = '\0';
  }
  (**(code **)(*plVar3 + 0x9d8))();
  if (local_48 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)unaff_RDI[0x2b] + 0x3a0))();
  plVar3 = (longlong *)unaff_RDI[0x2b];
  FUN_00d50b00();
  (**(code **)(*plVar3 + 0xa20))();
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027ebf00;
  plVar3 = (longlong *)unaff_RDI[0x2b];
  if (DAT_027ebf00 != 0) {
    FUN_00d50b00();
  }
  local_c0 = lVar1;
  local_b8 = '\x01';
  (**(code **)(*plVar3 + 0xa10))();
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = unaff_RDI[0x2b];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*unaff_RDI + 0x450))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((int)unaff_RDI[0x4d] == 1) {
    puVar7 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    pVar9 = 0x2576110;
    *puVar7 = &DAT_02576110;
    *(undefined8 *)((longlong)puVar7 + 0xc) = 0;
    *(undefined8 *)((longlong)puVar7 + 0x14) = 0;
    *(undefined8 *)((longlong)puVar7 + 0x1a) = 0;
    puVar7[5] = 0;
    puVar7[6] = 0;
    puVar7[7] = 0;
    puVar7[8] = 0;
    puVar7[9] = 0;
    (*DAT_02576128)();
    local_a8 = '\0';
    local_b0 = puVar7;
    FUN_01e058f0();
    if ((local_a8 != '\0') && (local_b0 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    pvVar8 = _pthread_getspecific(pVar9);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0190a000();
    if (extraout_var == 1) {
      (**(code **)(*(longlong *)unaff_RDI[0x2b] + 0x918))();
    }
    bVar4 = false;
  }
  else {
    bVar4 = true;
    puVar7 = (undefined8 *)0x0;
  }
  (**(code **)(*(longlong *)unaff_RDI[0x2b] + 0xab8))();
  if (!bVar4 && puVar7 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}




// ============================================================
// @01d1bd10 — 1630 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01d1c06c) */
/* WARNING: Removing unreachable block (ram,0x01d1c05c) */
/* WARNING: Removing unreachable block (ram,0x01d1c1fb) */
/* WARNING: Removing unreachable block (ram,0x01d1c207) */

void FUN_01d1bd10(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  char cVar6;
  byte bVar7;
  longlong *unaff_RDI;
  char cVar8;
  longlong **pplVar9;
  longlong *plVar10;
  bool bVar11;
  longlong *local_58;
  char local_50;
  longlong *local_40;
  char local_38;
  
  FUN_01ccad60();
  plVar3 = local_40;
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) {
      return;
    }
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_40 == (longlong *)0x0) {
    return;
  }
  lVar1 = DAT_027057d0;
  cVar5 = (char)unaff_RDI[10];
  if (DAT_027057d0 != 0) {
    FUN_00d50b00();
  }
  FUN_01ccaae0();
  plVar4 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar2 = DAT_027057d0;
  lVar1 = DAT_027e7c20;
  if (plVar4 != (longlong *)0x0) {
    if (DAT_027057d0 != 0) {
      FUN_00d50b00();
    }
    pplVar9 = &local_40;
    (**(code **)(*unaff_RDI + 0x4c8))();
    plVar10 = local_40;
    FUN_00053ac0();
    if (plVar10 == (longlong *)0x0) {
LAB_01d1be47:
      pplVar9 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar10 + 0x360))();
      cVar5 = FUN_00e85ea0();
      if (cVar5 == '\0') goto LAB_01d1be47;
    }
    plVar10 = *pplVar9;
    if (*(char *)(pplVar9 + 1) == '\0') {
      if (plVar10 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(pplVar9 + 1) = 0;
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if (plVar10 == (longlong *)0x0) {
      cVar5 = '\0';
      lVar1 = DAT_027e7c20;
    }
    else {
      cVar5 = FUN_00d45ad0();
      FUN_00d50b20();
      lVar1 = DAT_027e7c20;
    }
  }
  DAT_027e7c20 = lVar1;
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_01ccaae0();
  plVar10 = local_40;
  if (plVar4 == local_40) {
LAB_01d1bf76:
    plVar10 = plVar4;
    if (local_38 != '\0') {
LAB_01d1bf7c:
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  else {
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      if (plVar4 != (longlong *)0x0) {
        FUN_00d50b20();
        plVar4 = plVar10;
        goto LAB_01d1bf76;
      }
      if (local_38 == '\0') goto LAB_01d1bf8a;
      goto LAB_01d1bf7c;
    }
    if (plVar4 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    local_38 = '\0';
  }
LAB_01d1bf8a:
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (plVar10 == (longlong *)0x0) goto LAB_01d1c277;
  cVar6 = FUN_01ccd010();
  cVar8 = cVar5;
  if (cVar6 == '\0') {
    cVar6 = FUN_01d26970();
    cVar8 = '\0';
    if (cVar6 == '\0') {
      cVar8 = cVar5;
    }
  }
  (**(code **)(*plVar10 + 0x3f8))();
  if (local_40 == (longlong *)0x0) {
    bVar11 = true;
  }
  else {
    (**(code **)(*plVar10 + 0x3f8))();
    bVar11 = *(int *)((longlong)local_58 + 0xc) == 0;
    if (local_50 != '\0') {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027e7c20;
  if (bVar11) {
    FUN_01e10690();
  }
  else {
    if (DAT_027e7c20 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*unaff_RDI + 0x4c8))();
    plVar4 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((char)unaff_RDI[6] == '\0') {
      if (plVar4 == (longlong *)0x0) {
LAB_01d1c1d4:
        FUN_01e10690();
        FUN_00e7b4e0();
        FUN_01e148d0();
        goto LAB_01d1c221;
      }
      FUN_01e128f0();
      if (local_40 == (longlong *)0x0) {
        bVar7 = 1;
      }
      else {
        FUN_01e128f0();
        if (local_50 == '\0') {
          if (local_58 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_50 = '\0';
        }
        bVar7 = (**(code **)(*plVar4 + 0x50))();
        if (local_58 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        bVar7 = bVar7 ^ 1;
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (bVar7 != 0) goto LAB_01d1c1d4;
LAB_01d1c226:
      FUN_00d50b20();
    }
    else {
LAB_01d1c221:
      if (plVar4 != (longlong *)0x0) goto LAB_01d1c226;
    }
    lVar1 = DAT_027e7c20;
    if (cVar8 != '\0') {
      if (DAT_027e7c20 != 0) {
        FUN_00d50b00();
      }
      cVar5 = FUN_01ccca20();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      goto LAB_01d1c277;
    }
  }
  cVar5 = '\0';
LAB_01d1c277:
  FUN_01e10580();
  (**(code **)(*plVar3 + 0x640))();
  (**(code **)(*local_58 + 0x480))(cVar5,0x11,0);
  plVar4 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_01e11fd0();
  if (plVar4 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RDI + 0x520))();
  (**(code **)(*plVar3 + 0x620))();
  if (plVar10 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}




// ============================================================
// @01d1ae90 — 1619 bytes
// str: ""GNPopUpButton""
// str: ""GNComboBox""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01d1ae90(void)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 unaff_R12;
  undefined7 uVar12;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  char cVar13;
  undefined4 uVar14;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  undefined8 *local_b0;
  char local_a8;
  undefined8 *local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  longlong *local_58;
  undefined8 local_50;
  longlong *local_48;
  char local_40;
  undefined8 *local_38;
  
  local_60 = (longlong *)0x0;
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &DAT_02572358;
  (*DAT_02572370)();
  uVar14 = FUN_01ccad60();
  plVar4 = local_48;
  if (local_48 == (longlong *)0x0) {
    uVar9 = 0;
    plVar10 = (longlong *)0x0;
joined_r0x01d1af10:
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      uVar14 = FUN_00d50b20();
    }
  }
  else {
    uVar12 = (undefined7)((ulonglong)unaff_R12 >> 8);
    if (local_40 == '\0') {
      uVar14 = FUN_00d50b00();
      uVar9 = CONCAT71(uVar12,1);
      plVar10 = plVar4;
      local_60 = plVar4;
      goto joined_r0x01d1af10;
    }
    local_60 = local_48;
    uVar9 = CONCAT71(uVar12,1);
    plVar10 = local_48;
  }
  lVar11 = DAT_027edfd8;
  if (plVar10 == (longlong *)0x0) {
    plVar10 = (longlong *)0x0;
    cVar13 = '\0';
    local_58 = (longlong *)0x0;
    bVar2 = false;
  }
  else {
    if (DAT_027edfd8 != 0) {
      uVar14 = FUN_00d50b00();
    }
    local_d0 = lVar11;
    local_c8 = '\x01';
    FUN_01ccaae0(uVar14,&local_d0);
    local_70 = local_48;
    if (local_48 == (longlong *)0x0) {
      local_70 = (longlong *)0x0;
      local_68 = 0;
    }
    else if (local_40 == '\0') {
      uVar8 = FUN_00d50b00();
      local_68 = CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40 = '\0';
      local_68 = CONCAT71((int7)((ulonglong)local_48 >> 8),1);
    }
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    uVar14 = FUN_01d25cb0();
    local_58 = local_48;
    if (local_48 == (longlong *)0x0) {
      bVar2 = false;
      local_58 = (longlong *)0x0;
    }
    else {
      if (((local_40 == '\0') && (uVar14 = FUN_00d50b00(), local_40 != '\0')) &&
         (local_48 != (longlong *)0x0)) {
        uVar14 = FUN_00d50b20();
      }
      bVar2 = true;
      if (0 < *(int *)((longlong)local_58 + 0xc)) {
        lVar11 = 0;
        local_50 = uVar9;
        local_38 = puVar7;
        do {
          lVar3 = DAT_027edfd8;
          plVar1 = *(longlong **)(local_58[2] + lVar11 * 8);
          if (DAT_027edfd8 != 0) {
            uVar14 = FUN_00d50b00();
          }
          local_c0 = lVar3;
          local_b8 = '\x01';
          uVar14 = FUN_01ccab60(uVar14,&local_c0);
          local_80 = local_90;
          local_78 = 0;
          if (local_88 == '\0') {
            if (local_90 != 0) {
              uVar14 = FUN_00d50b00();
            }
          }
          else {
            local_88 = '\0';
          }
          local_78 = '\x01';
          uVar14 = (**(code **)(*plVar1 + 0x98))(uVar14,&local_80);
          plVar1 = local_48;
          if (local_40 == '\0') {
            if (((local_48 != (longlong *)0x0) && (uVar14 = FUN_00d50b00(), local_40 != '\0')) &&
               (local_48 != (longlong *)0x0)) {
              uVar14 = FUN_00d50b20();
            }
          }
          else {
            local_40 = '\0';
          }
          if ((local_78 != '\0') && (local_80 != 0)) {
            uVar14 = FUN_00d50b20();
          }
          if ((local_88 != '\0') && (local_90 != 0)) {
            uVar14 = FUN_00d50b20();
          }
          if ((local_b8 != '\0') && (local_c0 != 0)) {
            uVar14 = FUN_00d50b20();
          }
          if (plVar1 != (longlong *)0x0) {
            local_40 = '\0';
            local_48 = plVar1;
            FUN_00d21140();
            if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            uVar14 = FUN_00d50b20();
          }
          lVar11 = lVar11 + 1;
        } while (lVar11 < *(int *)((longlong)local_58 + 0xc));
        bVar2 = true;
        uVar9 = local_50;
        puVar7 = local_38;
      }
    }
    cVar13 = (char)local_68;
    if ((DAT_027f94e0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
      local_50 = uVar9;
      local_38 = puVar7;
      _DAT_026efe08 = FUN_000f5df0();
      _DAT_026efdf0 = "GNPopUpButton";
      _DAT_026efdf8 = 0x240;
      _DAT_026efe00 = FUN_001e3bf0;
      _DAT_026efe10 = 0;
      uRam00000000026efe18 = 0;
      _DAT_026efe20 = 0;
      uRam00000000026efe28 = 0;
      _DAT_026efe30 = 0;
      uRam00000000026efe38 = 0;
      _DAT_026efe40 = 0;
      uRam00000000026efe48 = 0;
      _DAT_026efe50 = 0;
      uRam00000000026efe58 = 0;
      _DAT_026efe60 = 0;
      uRam00000000026efe68 = 0;
      _DAT_026efe70 = 0;
      uRam00000000026efe78 = 0;
      _DAT_026efe80 = 0;
      uRam00000000026efe88 = 0;
      _DAT_026efe90 = 0;
      uRam00000000026efe98 = 0;
      _DAT_026efea0 = 0;
      uRam00000000026efea8 = 0;
      _DAT_026efeb0 = 0;
      ___cxa_guard_release();
      cVar13 = (char)local_68;
      uVar9 = local_50;
      puVar7 = local_38;
    }
    if (plVar10 == (longlong *)0x0) {
LAB_01d1b232:
      if (DAT_02802688 != (longlong *)0x0) goto LAB_01d1b23f;
LAB_01d1b28e:
      plVar10 = local_60;
      if ((DAT_027f5f80 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
        local_50 = uVar9;
        local_38 = puVar7;
        _DAT_027ef558 = FUN_001f8a30();
        _DAT_027ef540 = "GNComboBox";
        _DAT_027ef548 = 0x268;
        _DAT_027ef550 = FUN_01d0cdd0;
        _DAT_027ef560 = 0;
        uRam00000000027ef568 = 0;
        _DAT_027ef570 = 0;
        uRam00000000027ef578 = 0;
        _DAT_027ef580 = 0;
        uRam00000000027ef588 = 0;
        _DAT_027ef590 = 0;
        uRam00000000027ef598 = 0;
        _DAT_027ef5a0 = 0;
        uRam00000000027ef5a8 = 0;
        _DAT_027ef5b0 = 0;
        uRam00000000027ef5b8 = 0;
        _DAT_027ef5c0 = 0;
        uRam00000000027ef5c8 = 0;
        _DAT_027ef5d0 = 0;
        uRam00000000027ef5d8 = 0;
        _DAT_027ef5e0 = 0;
        uRam00000000027ef5e8 = 0;
        _DAT_027ef5f0 = 0;
        uRam00000000027ef5f8 = 0;
        _DAT_027ef600 = 0;
        ___cxa_guard_release();
        cVar13 = (char)local_68;
        puVar7 = local_38;
      }
      plVar1 = DAT_02802688;
      if (plVar10 != (longlong *)0x0) {
        (**(code **)(*plVar10 + 0x360))();
        cVar5 = FUN_00e85ea0();
        plVar1 = DAT_02802688;
        if (cVar5 != '\0') {
          plVar1 = local_60;
        }
      }
      if (plVar1 != (longlong *)0x0) {
        local_98 = '\0';
        local_a0 = puVar7;
        FUN_01d0a580();
        if ((local_98 != '\0') && (local_a0 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      (**(code **)(*plVar10 + 0x360))();
      cVar5 = FUN_00e85ea0();
      if (cVar5 == '\0') goto LAB_01d1b232;
      if (local_60 == (longlong *)0x0) goto LAB_01d1b28e;
LAB_01d1b23f:
      local_a8 = '\0';
      local_b0 = puVar7;
      FUN_01d6f820();
      if ((local_a8 != '\0') && (local_b0 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    plVar10 = local_70;
    if (puVar7 == (undefined8 *)0x0) goto LAB_01d1b326;
  }
  FUN_00d50b20();
LAB_01d1b326:
  if ((bVar2) && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((cVar13 != '\0') && (plVar10 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((plVar4 != (longlong *)0x0) && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01d1a180 — 1506 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01d1a561) */
/* WARNING: Removing unreachable block (ram,0x01d1a571) */
/* WARNING: Removing unreachable block (ram,0x01d1a42a) */
/* WARNING: Removing unreachable block (ram,0x01d1a648) */
/* WARNING: Removing unreachable block (ram,0x01d1a716) */
/* WARNING: Removing unreachable block (ram,0x01d1a722) */

void FUN_01d1a180(void)

{
  byte bVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 uVar6;
  longlong **pplVar7;
  longlong *unaff_RDI;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  longlong local_80;
  char local_78;
  longlong *local_40;
  char local_38;
  
  FUN_01ccad60();
  plVar4 = local_40;
  if (local_40 == (longlong *)0x0) {
    plVar10 = (longlong *)0x0;
joined_r0x01d1a1cf:
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    plVar10 = local_40;
    if (local_38 == '\0') {
      FUN_00d50b00();
      plVar10 = plVar4;
      goto joined_r0x01d1a1cf;
    }
  }
  lVar3 = DAT_027057d0;
  if (plVar10 == (longlong *)0x0) {
    return;
  }
  if (DAT_027057d0 != 0) {
    FUN_00d50b00();
  }
  FUN_01ccaae0();
  plVar8 = local_40;
  if (local_40 == (longlong *)0x0) {
    bVar1 = 1;
    plVar8 = (longlong *)0x0;
    bVar2 = false;
  }
  else {
    if (local_38 == '\0') {
      FUN_00d50b00();
      bVar1 = 0;
      bVar2 = true;
      if ((local_38 == '\0') || (local_40 == (longlong *)0x0)) goto LAB_01d1a276;
      FUN_00d50b20();
    }
    else {
      local_38 = '\0';
    }
    bVar2 = true;
    bVar1 = 0;
  }
LAB_01d1a276:
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  lVar3 = DAT_027057d0;
  if (plVar8 != (longlong *)0x0) {
    if (DAT_027057d0 != 0) {
      FUN_00d50b00();
    }
    pplVar7 = &local_40;
    (**(code **)(*unaff_RDI + 0x4c8))();
    plVar9 = local_40;
    FUN_00053ac0();
    if (plVar9 == (longlong *)0x0) {
LAB_01d1a308:
      pplVar7 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar9 + 0x360))();
      cVar5 = FUN_00e85ea0();
      if (cVar5 == '\0') goto LAB_01d1a308;
    }
    plVar9 = *pplVar7;
    if (*(char *)(pplVar7 + 1) == '\0') {
      if (plVar9 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(pplVar7 + 1) = 0;
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (plVar9 == (longlong *)0x0) {
LAB_01d1a373:
      uVar6 = 0;
    }
    else {
      cVar5 = FUN_00d45ad0();
      uVar6 = 1;
      if (cVar5 == '\0') goto LAB_01d1a373;
    }
    (**(code **)(*plVar10 + 0x998))(uVar6);
    if (plVar9 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  lVar3 = DAT_027e7c20;
  if (DAT_027e7c20 != 0) {
    FUN_00d50b00();
  }
  FUN_01ccaae0();
  plVar9 = local_40;
  if (local_40 == plVar8) {
    plVar9 = plVar8;
    if ((bool)(bVar1 & local_40 != (longlong *)0x0)) {
      if (local_38 != '\0') goto LAB_01d1a40c;
      bVar2 = true;
      FUN_00d50b00();
    }
LAB_01d1a476:
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      bVar11 = (bool)(bVar2 & plVar8 != (longlong *)0x0);
      bVar2 = true;
      if (bVar11) {
        FUN_00d50b20();
      }
      goto LAB_01d1a476;
    }
    bVar11 = plVar8 != (longlong *)0x0;
    plVar8 = plVar9;
    if ((bool)(bVar2 & bVar11)) {
      FUN_00d50b20();
    }
LAB_01d1a40c:
    local_38 = '\0';
    bVar2 = true;
    plVar9 = plVar8;
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (plVar9 == (longlong *)0x0) goto LAB_01d1a742;
  (**(code **)(*plVar9 + 0x3f8))();
  if (local_40 == (longlong *)0x0) {
    bVar11 = true;
  }
  else {
    (**(code **)(*plVar9 + 0x3f8))();
    bVar11 = *(int *)(local_80 + 0xc) == 0;
    if (local_78 != '\0') {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar3 = DAT_027e7c20;
  if (bVar11) {
    (**(code **)(*plVar10 + 0x978))();
  }
  else {
    if (DAT_027e7c20 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*unaff_RDI + 0x4c8))();
    plVar8 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (plVar8 == (longlong *)0x0) {
LAB_01d1a6f2:
      (**(code **)(*plVar10 + 0x978))();
      if (plVar8 == (longlong *)0x0) goto LAB_01d1a734;
    }
    else {
      (**(code **)(*plVar10 + 0x980))();
      if (local_40 == (longlong *)0x0) {
        cVar5 = '\0';
      }
      else {
        (**(code **)(*plVar10 + 0x980))();
        if (local_78 == '\0') {
          if (local_80 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_78 = '\0';
        }
        cVar5 = (**(code **)(*plVar8 + 0x50))();
        if (local_80 != 0) {
          FUN_00d50b20();
        }
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar5 == '\0') goto LAB_01d1a6f2;
    }
    FUN_00d50b20();
  }
LAB_01d1a734:
  if (bVar2) {
    FUN_00d50b20();
  }
LAB_01d1a742:
  if (plVar4 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01c6cca0 — 1395 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01c6d1fe) */
/* WARNING: Removing unreachable block (ram,0x01c6d20b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_01c6cca0(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined8 in_RCX;
  ulonglong uVar8;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 in_XMM0_Qb;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 extraout_XMM0_Qb_03;
  undefined8 extraout_XMM0_Qb_04;
  undefined8 uVar13;
  undefined8 in_XMM1_Qb;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  undefined8 local_d8;
  undefined8 uStack_d0;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [16];
  undefined8 local_90;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  longlong local_48;
  char local_40;
  
  uVar5 = FUN_01d3b590();
  uVar5 = uVar5 & 6;
  uVar6 = FUN_01d3b590();
  uVar6 = uVar6 & 10;
  if (((uVar6 == 10) || (uVar5 == 6)) && (unaff_RDI[0x2d] != 0)) {
    FUN_00d50b00();
    FUN_00d50b20();
    if (uVar6 == 10) {
      FUN_01c4b7c0();
      if ((local_40 == '\0') && (local_48 != 0)) {
        FUN_00d50b00();
      }
      FUN_01e4ac90();
      if (local_48 != 0) {
        FUN_00d50b20();
      }
    }
    else if (uVar5 == 6) {
      FUN_01c4b550();
      if ((local_40 == '\0') && (local_48 != 0)) {
        FUN_00d50b00();
      }
      FUN_01e4ac90();
      if (local_48 != 0) {
        FUN_00d50b20();
      }
    }
    iVar7 = FUN_01d3a5a0();
    if ((iVar7 == 4) || (iVar7 = FUN_01d3a5a0(), iVar7 == 5)) goto LAB_01c6cdd6;
    iVar7 = FUN_01d3a5a0();
    if (iVar7 == 1) {
      plVar1 = (longlong *)unaff_RDI[0x2d];
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      local_90 = (**(code **)(*plVar1 + 0x930))();
      FUN_00d50b20();
      plVar1 = (longlong *)unaff_RDI[0x2d];
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar1 + 0x7b0))();
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      FUN_00d50b20();
      local_a8._0_8_ = FUN_01cf5cf0();
      local_a8._8_8_ = extraout_XMM0_Qb;
      lVar2 = unaff_RDI[0x2d];
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      FUN_01e3f820();
      uVar10 = param_2;
      uVar16 = in_XMM1_Qb;
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = unaff_RDI[0x2d];
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      FUN_01e436c0();
      uVar13 = uVar10;
      uVar17 = uVar16;
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = unaff_RDI[0x2d];
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      FUN_01e436c0();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      FUN_01d3abf0();
      local_b8 = FUN_01e466c0();
      local_c8 = (float)param_2;
      fStack_c4 = (float)((ulonglong)param_2 >> 0x20);
      fStack_c0 = (float)in_XMM1_Qb;
      fStack_bc = (float)((ulonglong)in_XMM1_Qb >> 0x20);
      local_88 = (float)uVar10;
      fStack_84 = (float)((ulonglong)uVar10 >> 0x20);
      fStack_80 = (float)uVar16;
      fStack_7c = (float)((ulonglong)uVar16 >> 0x20);
      auVar12._0_4_ = local_c8 - local_88;
      auVar12._4_4_ = fStack_c4 - fStack_84;
      auVar12._8_4_ = fStack_c0 - fStack_80;
      auVar12._12_4_ = fStack_bc - fStack_7c;
      local_f8 = (float)uVar13;
      fStack_f4 = (float)((ulonglong)uVar13 >> 0x20);
      fStack_f0 = (float)uVar17;
      fStack_ec = (float)((ulonglong)uVar17 >> 0x20);
      auVar14._0_4_ = local_c8 - local_f8;
      auVar14._4_4_ = fStack_c4 - fStack_f4;
      auVar14._8_4_ = fStack_c0 - fStack_f0;
      auVar14._12_4_ = fStack_bc - fStack_ec;
      blendps(auVar14,auVar12,0xd);
      local_d8 = param_1;
      uStack_d0 = in_XMM0_Qb;
      uStack_b0 = extraout_XMM0_Qb_00;
LAB_01c6cf60:
      (**(code **)(*unaff_RDI + 0x658))();
      lVar2 = *unaff_RSI;
      if (lVar2 == local_48) {
        if (((char)unaff_RSI[1] != '\0') || (local_48 == 0)) goto LAB_01c6cffc;
        if (local_40 == '\0') {
          FUN_00d50b00();
          goto LAB_01c6cff7;
        }
        *(undefined1 *)(unaff_RSI + 1) = 1;
      }
      else {
        lVar3 = unaff_RSI[1];
        if (local_40 == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
          *unaff_RSI = local_48;
          if (((char)lVar3 != '\0') && (lVar2 != 0)) {
            FUN_00d50b20();
          }
LAB_01c6cff7:
          *(undefined1 *)(unaff_RSI + 1) = 1;
LAB_01c6cffc:
          lVar9 = *unaff_RSI;
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          *unaff_RSI = local_48;
          lVar9 = local_48;
          if (((char)lVar3 != '\0') && (lVar2 != 0)) {
            FUN_00d50b20();
            lVar9 = *unaff_RSI;
          }
          *(undefined1 *)(unaff_RSI + 1) = 1;
        }
        if (lVar9 == 0) goto LAB_01c6d1cc;
      }
      iVar7 = FUN_01d3a5a0();
      if (iVar7 == 6) goto LAB_01c6d1cc;
      iVar7 = FUN_01d3a5a0();
      if (iVar7 == 5) {
        if (uVar6 == 10) {
          FUN_01d3abf0();
          uVar10 = FUN_01e466c0();
          plVar1 = (longlong *)unaff_RDI[0x2d];
          if (plVar1 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          local_88 = (float)uVar10;
          fStack_84 = (float)((ulonglong)uVar10 >> 0x20);
          fStack_80 = (float)extraout_XMM0_Qb_02;
          fStack_7c = (float)((ulonglong)extraout_XMM0_Qb_02 >> 0x20);
          auVar11._0_4_ = local_88 - (float)local_b8;
          auVar11._4_4_ = fStack_84 - local_b8._4_4_;
          auVar11._8_4_ = fStack_80 - (float)uStack_b0;
          auVar11._12_4_ = fStack_7c - uStack_b0._4_4_;
          auVar12 = blendps(auVar11,_DAT_0238ff00,2);
          (**(code **)(*plVar1 + 0xc60))(auVar12._0_8_,local_90,0);
          FUN_00d50b20();
          lVar2 = unaff_RDI[0x2d];
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          FUN_01d3abf0();
          local_b8 = FUN_01e466c0();
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
          plVar1 = (longlong *)unaff_RDI[0x2d];
          if (plVar1 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          local_90 = (**(code **)(*plVar1 + 0x930))();
          FUN_00d50b20();
          uStack_b0 = extraout_XMM0_Qb_03;
        }
        else if (uVar5 == 6) {
          FUN_01d3abf0();
          uVar10 = FUN_01e466c0();
          auVar15._0_4_ = local_a8._0_4_ - ((float)uVar10 - (float)local_d8);
          auVar15._4_4_ = local_a8._4_4_ - ((float)((ulonglong)uVar10 >> 0x20) - local_d8._4_4_);
          auVar15._8_4_ = local_a8._8_4_ - ((float)extraout_XMM0_Qb_01 - (float)uStack_d0);
          auVar15._12_4_ =
               local_a8._12_4_ - ((float)((ulonglong)extraout_XMM0_Qb_01 >> 0x20) - uStack_d0._4_4_)
          ;
          local_a8 = blendps(local_a8,auVar15,0xd);
          cVar4 = FUN_00d05410();
          if (cVar4 == '\0') {
            local_a8._0_8_ = FUN_01cf5cf0();
            local_a8._8_8_ = extraout_XMM0_Qb_04;
            local_d8 = uVar10;
            uStack_d0 = extraout_XMM0_Qb_01;
          }
          else {
            FUN_01cf7140();
          }
        }
      }
      goto LAB_01c6cf60;
    }
  }
  uVar8 = 0;
LAB_01c6d1b8:
  return uVar8 & 0xffffffff;
LAB_01c6d1cc:
  if (local_48 != 0) {
    FUN_00d50b20();
    uVar8 = CONCAT71((int7)((ulonglong)in_RCX >> 8),1);
    goto LAB_01c6d1b8;
  }
LAB_01c6cdd6:
  uVar8 = CONCAT71((int7)((ulonglong)in_RCX >> 8),1);
  goto LAB_01c6d1b8;
}




// ============================================================
// @01f000f0 — 1289 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01f00473) */
/* WARNING: Removing unreachable block (ram,0x01f0047f) */
/* WARNING: Removing unreachable block (ram,0x01f003d5) */
/* WARNING: Removing unreachable block (ram,0x01f003e5) */

void FUN_01f000f0(void)

{
  longlong lVar1;
  bool bVar2;
  longlong *plVar3;
  char *pcVar4;
  longlong *plVar5;
  longlong *unaff_RDI;
  undefined8 unaff_R13;
  ulonglong uVar6;
  longlong *plVar7;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong *local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong *local_60;
  char local_58 [8];
  longlong *local_50;
  char local_48;
  uint local_3c;
  char local_38 [8];
  
  (**(code **)(*unaff_RDI + 0x5d8))();
  plVar7 = local_50;
  if (local_48 == '\0') {
    if (local_50 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  FUN_01efeef0();
  plVar5 = local_60;
  if (local_60 == (longlong *)0x0) {
    uVar6 = CONCAT71((int7)((ulonglong)unaff_R13 >> 8),1);
  }
  else {
    if (local_58[0] == '\0') {
      FUN_00d50b00();
    }
    uVar6 = 0;
  }
  if (plVar7 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar1 = unaff_RDI[0x10];
  local_b8 = plVar5;
  if (*(int *)(lVar1 + 0xc) == 1) {
    local_a8 = 0;
    FUN_00d50b00();
    local_a8 = '\x01';
    local_b0 = lVar1;
    FUN_00d23310();
    pcVar4 = local_38;
    if (local_58[0] != '\0') {
      pcVar4 = local_58;
    }
    local_38[0] = local_58[0];
    *pcVar4 = '\0';
    if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_68 = 0;
    if (local_38[0] == '\0') {
      if (local_60 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38[0] = '\0';
    }
    local_68 = '\x01';
    local_70 = local_60;
    (**(code **)(*unaff_RDI + 0x660))();
    local_80 = local_d8;
    local_78 = 0;
    if (local_d0 == '\0') {
      if (local_d8 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_d0 = '\0';
    }
    local_78 = '\x01';
    FUN_01f04a00(&local_80,&local_b0);
    plVar7 = local_50;
    if (local_50 == (longlong *)0x0) {
      bVar2 = false;
    }
    else if (local_48 == '\0') {
      FUN_00d50b00();
      bVar2 = true;
      if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_48 = '\0';
      bVar2 = true;
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_98 = 0;
    FUN_00d50b00();
    local_98 = '\x01';
    local_e8 = 0;
    local_e0 = '\0';
    local_a0 = lVar1;
    FUN_01f04a00(&local_e8,&local_a0);
    plVar7 = local_60;
    if (local_60 == (longlong *)0x0) {
      bVar2 = false;
    }
    else if (local_58[0] == '\0') {
      FUN_00d50b00();
      bVar2 = true;
      if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_58[0] = '\0';
      bVar2 = true;
    }
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
  }
  plVar5 = (longlong *)unaff_RDI[0x13];
  if (plVar5 == plVar7) goto LAB_01f0055a;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
    plVar3 = plVar5;
    if (plVar7 != (longlong *)0x0) goto LAB_01f004b9;
  }
  else {
    (**(code **)(*plVar5 + 0x4d0))();
    plVar5 = (longlong *)unaff_RDI[0x13];
    plVar3 = plVar5;
    if (plVar5 != plVar7) {
LAB_01f004b9:
      if (plVar7 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      unaff_RDI[0x13] = (longlong)plVar7;
      plVar3 = plVar7;
      if (plVar5 != (longlong *)0x0) {
        FUN_00d50b20();
        plVar3 = (longlong *)unaff_RDI[0x13];
      }
    }
  }
  if (plVar3 != (longlong *)0x0) {
    local_3c = (uint)uVar6;
    local_88 = 0;
    lVar1 = unaff_RDI[0x11];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_88 = '\x01';
    local_90 = lVar1;
    FUN_01e3f820();
    (**(code **)(*plVar3 + 0x4c8))();
    uVar6 = (ulonglong)local_3c;
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
  }
LAB_01f0055a:
  plVar5 = (longlong *)unaff_RDI[0x13];
  if (plVar5 != (longlong *)0x0) {
    local_c0 = 0;
    lVar1 = unaff_RDI[0x10];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_c0 = '\x01';
    local_c8 = lVar1;
    (**(code **)(*plVar5 + 0x620))();
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((bVar2) && (plVar7 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((char)uVar6 == '\0' && local_b8 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01c6dc70 — 1228 bytes
// str: ""GNPopUpButton""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_01c6dc70(undefined8 param_1,int param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  ushort uVar5;
  pthread_key_t pVar6;
  int iVar7;
  void *pvVar8;
  longlong **pplVar9;
  longlong unaff_RDI;
  undefined4 uVar10;
  longlong *local_d8;
  undefined1 local_d0;
  longlong *local_c8;
  undefined1 local_c0;
  longlong local_b8;
  undefined1 local_b0;
  longlong *local_a8;
  undefined1 local_a0;
  undefined1 local_98 [8];
  undefined1 local_90;
  longlong local_88;
  char local_80;
  longlong *local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  char local_38;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar5 = FUN_01caea40();
  pVar6 = (pthread_key_t)uVar5;
  FUN_01c41970();
  if (*(longlong *)(unaff_RDI + 0x200) != 0) {
    FUN_00d50b00();
  }
  FUN_01c82aa0();
  local_48 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  uVar10 = FUN_00d50b20();
  local_d8 = local_48;
  local_d0 = 0;
  FUN_01c45890(uVar10,&local_d8);
  local_58 = local_40;
  if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  pplVar9 = &local_40;
  FUN_01caeb00();
  plVar2 = local_40;
  if ((DAT_027f94e0 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
    _DAT_026efe08 = FUN_000f5df0();
    _DAT_026efdf0 = "GNPopUpButton";
    _DAT_026efdf8 = 0x240;
    pVar6 = 0x1e3bf0;
    _DAT_026efe00 = FUN_001e3bf0;
    _DAT_026efe10 = 0;
    uRam00000000026efe18 = 0;
    _DAT_026efe20 = 0;
    uRam00000000026efe28 = 0;
    _DAT_026efe30 = 0;
    uRam00000000026efe38 = 0;
    _DAT_026efe40 = 0;
    uRam00000000026efe48 = 0;
    _DAT_026efe50 = 0;
    uRam00000000026efe58 = 0;
    _DAT_026efe60 = 0;
    uRam00000000026efe68 = 0;
    _DAT_026efe70 = 0;
    uRam00000000026efe78 = 0;
    _DAT_026efe80 = 0;
    uRam00000000026efe88 = 0;
    _DAT_026efe90 = 0;
    uRam00000000026efe98 = 0;
    _DAT_026efea0 = 0;
    uRam00000000026efea8 = 0;
    _DAT_026efeb0 = 0;
    ___cxa_guard_release();
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 != '\0') goto LAB_01c6dd77;
  }
  pplVar9 = (longlong **)&DAT_02802688;
LAB_01c6dd77:
  local_50 = *pplVar9;
  if (*(char *)(pplVar9 + 1) == '\0') {
    if (local_50 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar9 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar1 = *(longlong *)(unaff_RDI + 0x188);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_80 = '\x01';
  local_88 = lVar1;
  FUN_016cbba0();
  plVar2 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = *(longlong *)(unaff_RDI + 0x188);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  pvVar8 = _pthread_getspecific(pVar6);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_78 = local_58;
  local_70 = '\0';
  local_68 = local_48;
  local_60 = '\0';
  pVar6 = FUN_01d70da0();
  FUN_016fac40(pVar6,&local_68);
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  local_c8 = plVar2;
  local_c0 = 0;
  lVar1 = *(longlong *)(unaff_RDI + 0x188);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_b0 = 1;
  local_b8 = lVar1;
  uVar10 = FUN_01c44d20();
  plVar3 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      uVar10 = FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_90 = 1;
  FUN_01c44700(uVar10,local_98);
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  local_a8 = plVar2;
  local_a0 = 0;
  FUN_01c62c70();
  if (*(longlong *)(unaff_RDI + 0x188) != 0) {
    FUN_00d50b00();
    pvVar8 = _pthread_getspecific(pVar6);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_016c1150();
    FUN_00d50b20();
  }
  FUN_01c6e400();
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (local_50 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (local_58 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (local_48 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return 1;
}




// ============================================================
// @00c619b0 — 1110 bytes
// str: ""GNPopUpButton""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c619b0(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong **pplVar8;
  longlong unaff_RDI;
  longlong *plVar9;
  undefined4 uVar10;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong *local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong *local_68;
  longlong *local_60;
  longlong local_58;
  char local_50;
  longlong *local_48;
  longlong *local_40;
  char local_38;
  
  pplVar8 = &local_40;
  uVar10 = FUN_01ccad60();
  plVar1 = local_40;
  if ((DAT_027f94e0 == '\0') &&
     (iVar5 = ___cxa_guard_acquire(), uVar10 = extraout_XMM0_Da_01, iVar5 != 0)) {
    _DAT_026efe08 = FUN_000f5df0();
    _DAT_026efdf0 = "GNPopUpButton";
    _DAT_026efdf8 = 0x240;
    _DAT_026efe00 = FUN_001e3bf0;
    _DAT_026efe10 = 0;
    uRam00000000026efe18 = 0;
    _DAT_026efe20 = 0;
    uRam00000000026efe28 = 0;
    _DAT_026efe30 = 0;
    uRam00000000026efe38 = 0;
    _DAT_026efe40 = 0;
    uRam00000000026efe48 = 0;
    _DAT_026efe50 = 0;
    uRam00000000026efe58 = 0;
    _DAT_026efe60 = 0;
    uRam00000000026efe68 = 0;
    _DAT_026efe70 = 0;
    uRam00000000026efe78 = 0;
    _DAT_026efe80 = 0;
    uRam00000000026efe88 = 0;
    _DAT_026efe90 = 0;
    uRam00000000026efe98 = 0;
    _DAT_026efea0 = 0;
    uRam00000000026efea8 = 0;
    _DAT_026efeb0 = 0;
    uVar10 = ___cxa_guard_release();
  }
  if (plVar1 == (longlong *)0x0) {
LAB_00c61a0c:
    pplVar8 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    uVar10 = extraout_XMM0_Da;
    if (cVar4 == '\0') goto LAB_00c61a0c;
  }
  plVar1 = *pplVar8;
  if (*(char *)(pplVar8 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      uVar10 = FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar8 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    uVar10 = FUN_00d50b20();
  }
  lVar2 = DAT_027e7c20;
  if (DAT_027e7c20 != 0) {
    uVar10 = FUN_00d50b00();
  }
  local_a8 = lVar2;
  local_a0 = '\x01';
  uVar10 = FUN_01ccaae0(uVar10,&local_a8);
  plVar9 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (longlong *)0x0) && (uVar10 = FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (longlong *)0x0)) {
      uVar10 = FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    uVar10 = FUN_00d50b20();
  }
  lVar2 = DAT_027e7c20;
  local_68 = plVar9;
  if (DAT_027e7c20 != 0) {
    uVar10 = FUN_00d50b00();
  }
  local_98 = lVar2;
  local_90 = '\x01';
  FUN_01ccab60(uVar10,&local_98);
  local_48 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d836c0();
  local_58 = local_78;
  local_50 = 0;
  if (local_70 == '\0') {
    if (local_78 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_70 = '\0';
  }
  local_50 = '\x01';
  local_88 = local_48;
  local_80 = '\0';
  pplVar8 = &local_40;
  FUN_01d26fb0(&local_88,&local_58);
  plVar3 = local_40;
  FUN_00053ac0();
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 != '\0') goto LAB_00c61c08;
  }
  pplVar8 = (longlong **)&DAT_02802688;
LAB_00c61c08:
  local_60 = *pplVar8;
  if (*(char *)(pplVar8 + 1) == '\0') {
    if (local_60 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar8 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (local_60 != (longlong *)0x0) {
    iVar5 = FUN_00d45870();
    for (iVar7 = 0; iVar6 = FUN_01d6fde0(), iVar7 < iVar6; iVar7 = iVar7 + 1) {
      FUN_01d701d0(extraout_XMM0_Da_00,iVar7);
      iVar6 = FUN_01d654a0();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      plVar9 = local_68;
      if (iVar6 == iVar5) {
        (**(code **)(*plVar1 + 0x918))();
        if (*(longlong *)(unaff_RDI + 0x78) != 0) {
          FUN_01dfe5c0();
        }
        break;
      }
    }
    FUN_00d50b20();
  }
  (**(code **)(*plVar1 + 0x998))();
  if (local_48 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar9 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}




// ============================================================
// @00c60e60 — 1043 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00c610f2) */
/* WARNING: Removing unreachable block (ram,0x00c610fb) */
/* WARNING: Removing unreachable block (ram,0x00c61051) */
/* WARNING: Removing unreachable block (ram,0x00c61056) */
/* WARNING: Removing unreachable block (ram,0x00c60fd2) */
/* WARNING: Removing unreachable block (ram,0x00c60fde) */
/* WARNING: Removing unreachable block (ram,0x00c60f8c) */
/* WARNING: Removing unreachable block (ram,0x00c60f95) */
/* WARNING: Removing unreachable block (ram,0x00c61028) */
/* WARNING: Removing unreachable block (ram,0x00c61031) */
/* WARNING: Removing unreachable block (ram,0x00c6115a) */
/* WARNING: Removing unreachable block (ram,0x00c61163) */
/* WARNING: Removing unreachable block (ram,0x00c6122e) */
/* WARNING: Removing unreachable block (ram,0x00c61237) */
/* WARNING: Removing unreachable block (ram,0x00c60ea5) */
/* WARNING: Removing unreachable block (ram,0x00c60eae) */
/* WARNING: Removing unreachable block (ram,0x00c60f55) */
/* WARNING: Removing unreachable block (ram,0x00c60f5e) */

undefined8 FUN_00c60e60(undefined8 param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *unaff_RDI;
  longlong local_88;
  char local_80;
  longlong local_58;
  char local_50;
  longlong *local_40;
  char local_38;
  
  if (param_2 != 0) {
    FUN_01f4e930();
    if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    (**(code **)(*local_40 + 0x388))();
    FUN_00c5d9b0();
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    FUN_001220c0();
    if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    if (local_58 != 0) {
      FUN_00d50b20();
    }
    FUN_00c5dc60();
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    FUN_00d21140();
    if (local_58 != 0) {
      FUN_00d50b20();
    }
    (**(code **)(*local_40 + 0x368))();
    iVar2 = FUN_01f4eb70();
    if (iVar2 == 0) {
      (**(code **)(*local_40 + 0x380))();
      if (local_58 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*unaff_RDI + 0x608))();
      if (local_58 == 0) {
        (**(code **)(*unaff_RDI + 0x5d0))();
        FUN_00c5e840();
      }
      else {
        (**(code **)(*unaff_RDI + 0x5d0))();
        (**(code **)(*unaff_RDI + 0x608))();
        if (local_50 == '\0') {
          if (local_58 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_50 = '\0';
        }
        FUN_00c5e440();
        if (local_58 != 0) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
      }
      FUN_01d243a0();
      FUN_00d403d0();
      lVar1 = DAT_027719f0;
      if (DAT_027719f0 != 0) {
        FUN_00d50b00();
      }
      FUN_00d50b00();
      local_88 = 0;
      local_80 = '\0';
      FUN_00d40470(&local_88,&stack0xffffffffffffff88,1,3);
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if (unaff_RDI != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if (local_58 != 0) {
        FUN_00d50b20();
      }
    }
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return 1;
}




// ============================================================
// @01c6f360 — 974 bytes
// ============================================================

ulonglong FUN_01c6f360(pthread_key_t param_1,int param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  void *pvVar5;
  pthread_key_t pVar6;
  ulonglong uVar7;
  longlong *unaff_RDI;
  undefined8 uVar8;
  undefined1 local_98 [8];
  undefined1 local_90;
  undefined1 local_88 [8];
  undefined1 local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  longlong local_48;
  char local_40;
  char local_31;
  
  pVar6 = param_1;
  uVar4 = FUN_016bf360();
  uVar7 = (ulonglong)uVar4;
  if ((param_2 != 0) && (local_31 = (char)uVar4, local_31 != '\0')) {
    lVar1 = unaff_RDI[0x31];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_70 = '\x01';
    local_78 = lVar1;
    FUN_016cbba0();
    lVar1 = local_48;
    if (local_40 == '\0') {
      if (((local_48 != 0) && (FUN_00d50b00(), local_40 != '\0')) && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40 = '\0';
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = unaff_RDI[0x31];
    local_68 = lVar1;
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    local_50 = lVar2;
    pvVar5 = _pthread_getspecific(pVar6);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_58 = 0;
    lVar1 = unaff_RDI[0x42];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_58 = '\x01';
    pVar6 = param_3 & 0xff;
    local_60 = lVar1;
    FUN_016e5250(DAT_023908c8,param_1,1,(int)unaff_RDI[0x39]);
    lVar2 = local_50;
    lVar1 = local_68;
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((int)unaff_RDI[0x39] == 0) {
      lVar2 = unaff_RDI[0x31];
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      FUN_01c44d20();
      lVar3 = local_48;
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      local_90 = 1;
      uVar8 = FUN_00e7bdb0();
      FUN_01c45410(uVar8,local_98);
      pVar6 = (pthread_key_t)uVar8;
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      lVar2 = unaff_RDI[0x31];
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      uVar8 = FUN_01c44d20();
      lVar3 = local_48;
      if (local_40 == '\0') {
        if (local_48 != 0) {
          uVar8 = FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      local_80 = 1;
      FUN_01c44700(uVar8,local_88);
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_01c62c70();
    lVar2 = unaff_RDI[0x31];
    if (lVar2 != 0) {
      FUN_00d50b00();
      pvVar5 = _pthread_getspecific(pVar6);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_016c1150();
      FUN_00d50b20();
    }
    (**(code **)(*unaff_RDI + 0x620))();
    *(undefined1 *)(unaff_RDI + 0x3a) = 1;
    uVar7 = CONCAT71((int7)((ulonglong)lVar2 >> 8),local_31);
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  return uVar7 & 0xffffffff;
}




// ============================================================
// @01c6fa20 — 966 bytes
// ============================================================

ulonglong FUN_01c6fa20(pthread_key_t param_1,int param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  void *pvVar5;
  undefined8 uVar6;
  pthread_key_t pVar7;
  ulonglong uVar8;
  longlong *unaff_RDI;
  undefined1 local_98 [8];
  undefined1 local_90;
  undefined1 local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  longlong local_48;
  char local_40;
  char local_31;
  
  pVar7 = param_1;
  uVar4 = FUN_016bf360();
  uVar8 = (ulonglong)uVar4;
  if ((param_2 != 0) && (local_31 = (char)uVar4, local_31 != '\0')) {
    lVar1 = unaff_RDI[0x31];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_70 = '\x01';
    local_78 = lVar1;
    FUN_016cbba0();
    lVar1 = local_48;
    if (local_40 == '\0') {
      if (((local_48 != 0) && (FUN_00d50b00(), local_40 != '\0')) && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40 = '\0';
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = unaff_RDI[0x31];
    local_68 = lVar1;
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    local_50 = lVar2;
    pvVar5 = _pthread_getspecific(pVar7);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_58 = 0;
    lVar1 = unaff_RDI[0x42];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_58 = '\x01';
    pVar7 = param_3 & 0xff;
    local_60 = lVar1;
    FUN_016ea4d0(pVar7,param_1,1,(int)unaff_RDI[0x39]);
    lVar2 = local_50;
    lVar1 = local_68;
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((int)unaff_RDI[0x39] == 0) {
      lVar2 = unaff_RDI[0x31];
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      FUN_01c44d20();
      lVar3 = local_48;
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      local_90 = 1;
      uVar6 = FUN_00e7bdb0();
      FUN_01c45410(uVar6,local_98);
      pVar7 = (pthread_key_t)uVar6;
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      lVar2 = unaff_RDI[0x31];
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      FUN_01c44d20();
      lVar3 = local_48;
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      local_80 = 1;
      FUN_01c44700();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_01c62c70();
    lVar2 = unaff_RDI[0x31];
    if (lVar2 != 0) {
      FUN_00d50b00();
      pvVar5 = _pthread_getspecific(pVar7);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_016c1150();
      FUN_00d50b20();
    }
    (**(code **)(*unaff_RDI + 0x620))();
    *(undefined1 *)(unaff_RDI + 0x3a) = 1;
    uVar8 = CONCAT71((int7)((ulonglong)lVar2 >> 8),local_31);
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  return uVar8 & 0xffffffff;
}




// ============================================================
// @01c6d4b0 — 956 bytes
// ============================================================

void FUN_01c6d4b0(void)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar4;
  longlong local_128;
  undefined1 local_120;
  longlong local_118;
  undefined1 local_110;
  longlong local_108;
  undefined1 local_100;
  longlong local_f8;
  undefined1 local_f0;
  longlong local_e8;
  undefined1 local_e0;
  longlong local_d8;
  undefined1 local_d0;
  longlong local_c8;
  undefined1 local_c0;
  longlong local_b8;
  undefined1 local_b0;
  longlong local_a8;
  undefined1 local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  undefined8 local_38;
  
  FUN_01d3abf0();
  local_38 = FUN_01e466c0();
  local_40 = '\0';
  local_48 = 0;
  if (*(longlong *)(unaff_RDI + 0x188) != 0) {
    FUN_00d50b00();
    lVar1 = *(longlong *)(unaff_RDI + 0x2c8);
    if (lVar1 != 0) {
      FUN_00d50b00();
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (lVar1 == 0) {
      iVar3 = FUN_01d3a5a0();
      if ((iVar3 == 1) && (*(int *)(unaff_RDI + 0x268) != 0)) {
        *(undefined4 *)(unaff_RDI + 0x268) = 0;
        (**(code **)(**(longlong **)(unaff_RDI + 0x158) + 0x478))();
        if (*(longlong *)(unaff_RDI + 0x158) != 0) {
          *(undefined8 *)(unaff_RDI + 0x158) = 0;
          FUN_00d50b20();
        }
        if (*(longlong *)(unaff_RDI + 0x270) != 0) {
          *(undefined8 *)(unaff_RDI + 0x270) = 0;
          FUN_00d50b20();
        }
        FUN_01e436c0();
        FUN_01c4d670();
      }
      local_88 = *unaff_RSI;
      local_80 = '\0';
      cVar2 = FUN_01c6cca0((undefined4)local_38);
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if (cVar2 == '\0') {
        cVar2 = FUN_01c61680((undefined4)local_38,&local_48);
        if (cVar2 == '\0') {
          local_f8 = *unaff_RSI;
          local_f0 = 0;
          cVar2 = FUN_01c638f0((undefined4)local_38);
          if (cVar2 == '\0') {
            local_e8 = *unaff_RSI;
            local_e0 = 0;
            cVar2 = FUN_01c63d50();
            if (cVar2 == '\0') {
              local_d8 = *unaff_RSI;
              local_d0 = 0;
              FUN_01c60a90((undefined4)local_38);
              local_c8 = *unaff_RSI;
              local_c0 = 0;
              cVar2 = FUN_01c6a410((undefined4)local_38);
              if (cVar2 == '\0') {
                local_68 = *unaff_RSI;
                local_60 = '\0';
                cVar2 = FUN_01c63f60((undefined4)local_38);
                if ((local_60 != '\0') && (local_68 != 0)) {
                  FUN_00d50b20();
                }
                if (cVar2 == '\0') {
                  local_b8 = *unaff_RSI;
                  local_b0 = 0;
                  cVar2 = FUN_01c635e0((undefined4)local_38);
                  if (cVar2 == '\0') {
                    local_a8 = *unaff_RSI;
                    local_a0 = 0;
                    cVar2 = FUN_01c62da0((undefined4)local_38);
                    if (cVar2 == '\0') {
                      local_58 = *unaff_RSI;
                      local_50 = '\0';
                      FUN_01e459c0();
                      if ((local_50 != '\0') && (local_58 != 0)) {
                        FUN_00d50b20();
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else {
          local_78 = *unaff_RSI;
          local_70 = '\0';
          local_128 = local_48;
          local_120 = 0;
          cVar2 = FUN_01c61bb0((undefined4)local_38,&local_128);
          uVar4 = extraout_XMM0_Da;
          if ((local_70 != '\0') && (local_78 != 0)) {
            uVar4 = FUN_00d50b20();
          }
          if (cVar2 == '\0') {
            local_118 = *unaff_RSI;
            local_110 = 0;
            local_108 = local_48;
            local_100 = 0;
            FUN_01c631e0(uVar4,&local_108);
          }
        }
      }
      goto LAB_01c6d61b;
    }
  }
  local_98 = *unaff_RSI;
  local_90 = '\0';
  FUN_01e459c0();
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
LAB_01c6d61b:
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @00c5ffd0 — 864 bytes
// ============================================================

bool FUN_00c5ffd0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *unaff_RDI;
  longlong lVar3;
  longlong local_128;
  char local_120;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong *local_b8;
  longlong local_b0;
  longlong *local_a8;
  longlong local_a0;
  char local_98;
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
  longlong local_40;
  char local_38;
  
  local_a8 = param_1;
  (**(code **)(*unaff_RDI + 0x5d0))();
  lVar3 = *param_2;
  if ((local_120 != '\0') && (local_128 != 0)) {
    FUN_00d50b20();
  }
  if (lVar3 == local_128) {
    local_b8 = param_2;
    local_b0 = lVar3;
    (**(code **)(*unaff_RDI + 0x5d0))();
    local_a0 = *param_3;
    local_98 = '\0';
    local_90 = *local_a8;
    local_88 = '\0';
    (**(code **)(*unaff_RDI + 0x608))();
    local_50 = local_40;
    local_48 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_48 = '\x01';
    FUN_00b324d0(0,&local_90,&local_50);
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_120 != '\0') && (local_128 != 0)) {
      FUN_00d50b20();
    }
    lVar3 = DAT_027719d0;
    if (DAT_027719d0 != 0) {
      FUN_00d50b00();
    }
    lVar1 = DAT_0276ca98;
    if (DAT_0276ca98 != 0) {
      FUN_00d50b00();
    }
    local_d0 = lVar3;
    local_c8 = *local_a8;
    local_c0 = lVar1;
    FUN_002d73e0(&local_c8,&local_d0,&local_c0,4);
    FUN_000b4da0();
    lVar2 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_002d10d0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    FUN_00d403d0();
    local_80 = DAT_027719d8;
    if (DAT_027719d8 != 0) {
      FUN_00d50b00();
    }
    local_78 = '\x01';
    local_70 = *local_b8;
    local_68 = '\0';
    local_60 = lVar2;
    local_58 = '\0';
    FUN_00d40470(&local_60,&local_70,3,3);
    lVar3 = local_b0;
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_120 != '\0') && (local_128 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  return lVar3 == local_128;
}




// ============================================================
// @01c70210 — 830 bytes
// ============================================================

undefined4 FUN_01c70210(pthread_key_t param_1,char param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined4 uVar4;
  void *pvVar5;
  longlong unaff_RDI;
  undefined8 uVar6;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong *local_38;
  char local_30;
  
  uVar4 = FUN_016bf620();
  if (((char)uVar4 != '\0') && (param_2 != '\0')) {
    FUN_01ca6970();
    FUN_01ca5d90();
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01ca6970();
    lVar1 = *(longlong *)(unaff_RDI + 0x188);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    uVar6 = FUN_016cbba0();
    local_68 = local_48;
    local_60 = 0;
    local_88 = DAT_027ebec8;
    if (local_40 == '\0') {
      if (local_48 != 0) {
        uVar6 = FUN_00d50b00();
        local_88 = DAT_027ebec8;
      }
    }
    else {
      local_40 = '\0';
    }
    local_60 = '\x01';
    DAT_027ebec8 = local_88;
    if (local_88 != 0) {
      local_60 = '\x01';
      uVar6 = FUN_00d50b00();
    }
    local_80 = '\x01';
    FUN_01ca93d0(uVar6,&local_88);
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01ca6970();
    uVar6 = FUN_00d51d20();
    local_58 = local_48;
    local_50 = 0;
    local_78 = DAT_027ebed0;
    if (local_40 == '\0') {
      if (local_48 != 0) {
        uVar6 = FUN_00d50b00();
        local_78 = DAT_027ebed0;
      }
    }
    else {
      local_40 = '\0';
    }
    local_50 = '\x01';
    DAT_027ebed0 = local_78;
    if (local_78 != 0) {
      local_50 = '\x01';
      uVar6 = FUN_00d50b00();
    }
    local_70 = '\x01';
    FUN_01ca93d0(uVar6,&local_78);
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    cVar3 = FUN_016bf500();
    if (cVar3 == '\0') {
      lVar1 = *(longlong *)(unaff_RDI + 0x188);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_016bf0f0();
      uVar6 = FUN_016c46a0(0,0);
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      plVar2 = *(longlong **)(unaff_RDI + 0x168);
      if (plVar2 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                  *plVar2 + 0x20))();
      (**(code **)(*local_38 + 0x60))(uVar6);
      if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
        (**(code **)(*local_38 + 0x10))();
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
  }
  return uVar4;
}




// ============================================================
// @00c620d0 — 792 bytes
// str: ""GNPopUpButton""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_00c620d0(undefined8 param_1,char param_2)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  longlong **pplVar5;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  ulonglong uVar6;
  longlong *plVar7;
  undefined4 uVar8;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  longlong local_98;
  char local_90;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong *local_58;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  pplVar5 = &local_40;
  uVar8 = FUN_01ccad60();
  plVar7 = local_40;
  if ((DAT_027f94e0 == '\0') &&
     (iVar4 = ___cxa_guard_acquire(), uVar8 = extraout_XMM0_Da_02, iVar4 != 0)) {
    _DAT_026efe08 = FUN_000f5df0();
    _DAT_026efdf0 = "GNPopUpButton";
    _DAT_026efdf8 = 0x240;
    _DAT_026efe00 = FUN_001e3bf0;
    _DAT_026efe10 = 0;
    uRam00000000026efe18 = 0;
    _DAT_026efe20 = 0;
    uRam00000000026efe28 = 0;
    _DAT_026efe30 = 0;
    uRam00000000026efe38 = 0;
    _DAT_026efe40 = 0;
    uRam00000000026efe48 = 0;
    _DAT_026efe50 = 0;
    uRam00000000026efe58 = 0;
    _DAT_026efe60 = 0;
    uRam00000000026efe68 = 0;
    _DAT_026efe70 = 0;
    uRam00000000026efe78 = 0;
    _DAT_026efe80 = 0;
    uRam00000000026efe88 = 0;
    _DAT_026efe90 = 0;
    uRam00000000026efe98 = 0;
    _DAT_026efea0 = 0;
    uRam00000000026efea8 = 0;
    _DAT_026efeb0 = 0;
    uVar8 = ___cxa_guard_release();
  }
  if (plVar7 == (longlong *)0x0) {
LAB_00c6212f:
    pplVar5 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar7 + 0x360))();
    cVar2 = FUN_00e85ea0();
    uVar8 = extraout_XMM0_Da;
    if (cVar2 == '\0') goto LAB_00c6212f;
  }
  plVar7 = *pplVar5;
  if (*(char *)(pplVar5 + 1) == '\0') {
    if (plVar7 != (longlong *)0x0) {
      uVar8 = FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar5 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    uVar8 = FUN_00d50b20();
  }
  if (plVar7 == (longlong *)0x0) {
LAB_00c62243:
    local_68 = *unaff_RSI;
    local_60 = '\0';
    uVar3 = FUN_01ec81d0(uVar8,param_2);
    uVar6 = (ulonglong)uVar3;
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (plVar7 == (longlong *)0x0) goto LAB_00c62283;
  }
  else {
    local_58 = plVar7;
    FUN_01cae990();
    plVar7 = local_40;
    lVar1 = DAT_027fe668;
    if (DAT_027fe668 != 0) {
      FUN_00d50b00();
    }
    cVar2 = (**(code **)(*plVar7 + 0x50))();
    plVar7 = local_58;
    uVar8 = extraout_XMM0_Da_00;
    if (lVar1 != 0) {
      uVar8 = FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      uVar8 = FUN_00d50b20();
    }
    if (cVar2 == '\0') goto LAB_00c62243;
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    if (param_2 != '\0') {
      uVar8 = FUN_01d70da0();
      FUN_01d701d0(extraout_XMM0_Da_01,uVar8);
      FUN_01d654a0();
      uVar8 = FUN_00d46530();
      local_50 = local_40;
      local_48 = 0;
      local_78 = DAT_027e7c20;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          uVar8 = FUN_00d50b00();
          local_78 = DAT_027e7c20;
        }
      }
      else {
        local_38 = '\0';
      }
      local_48 = '\x01';
      DAT_027e7c20 = local_78;
      if (local_78 != 0) {
        local_48 = '\x01';
        uVar8 = FUN_00d50b00();
      }
      local_70 = '\x01';
      (**(code **)(*unaff_RDI + 0x4d0))(uVar8,&local_78);
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  FUN_00d50b20();
LAB_00c62283:
  return uVar6 & 0xffffffff;
}




// ============================================================
// @01d1d260 — 761 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01d1d510) */
/* WARNING: Removing unreachable block (ram,0x01d1d51c) */
/* WARNING: Removing unreachable block (ram,0x01d1d481) */
/* WARNING: Removing unreachable block (ram,0x01d1d48a) */
/* WARNING: Removing unreachable block (ram,0x01d1d2c1) */
/* WARNING: Removing unreachable block (ram,0x01d1d3ec) */
/* WARNING: Removing unreachable block (ram,0x01d1d3f5) */
/* WARNING: Removing unreachable block (ram,0x01d1d382) */
/* WARNING: Removing unreachable block (ram,0x01d1d38b) */
/* WARNING: Removing unreachable block (ram,0x01d1d462) */

ulonglong FUN_01d1d260(void)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 unaff_RBX;
  ulonglong uVar4;
  longlong *unaff_RDI;
  longlong lVar5;
  bool bVar6;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  if ((char)unaff_RDI[6] == '\0') {
    uVar4 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  }
  else {
    FUN_01ccad60();
    if (local_40 == 0) {
      lVar5 = 0;
      if (local_38 != '\0') {
        lVar5 = 0;
      }
    }
    else {
      lVar5 = local_40;
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
    }
    FUN_01e10550();
    lVar1 = DAT_027e7c20;
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
      lVar1 = DAT_027e7c20;
    }
    DAT_027e7c20 = lVar1;
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    cVar2 = (**(code **)(*unaff_RDI + 0x4d8))();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if (cVar2 == '\0') {
      uVar4 = 0;
    }
    else {
      FUN_01e10550();
      if (local_40 == 0) {
        bVar6 = false;
      }
      else {
        FUN_01e10550();
        iVar3 = FUN_00d8c7a0();
        bVar6 = iVar3 != 0;
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
      if (bVar6) {
        FUN_01e10550();
        if (local_48 == '\0') {
          if (local_50 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        FUN_00d8dab0();
        bVar6 = local_40 != 0;
        if (bVar6) {
          FUN_00d50b00();
        }
        if (local_50 != 0) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        bVar6 = false;
        local_40 = 0;
      }
      lVar1 = DAT_027e7c20;
      if (DAT_027e7c20 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*unaff_RDI + 0x4d0))();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      *(undefined1 *)(unaff_RDI + 6) = 0;
      uVar4 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
      if ((bVar6) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
  }
  return uVar4 & 0xffffffff;
}




// ============================================================
// @01d1c9a0 — 757 bytes
// ============================================================

void FUN_01d1c9a0(void)

{
  char cVar1;
  longlong *plVar2;
  longlong *unaff_RDI;
  longlong lVar3;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  longlong local_30;
  char local_28;
  
  local_70 = (longlong *)0x0;
  local_68 = '\x01';
  if (*(char *)((longlong)unaff_RDI + 0x51) == '\0') {
    *(undefined1 *)(unaff_RDI + 6) = 1;
    (**(code **)(*unaff_RDI + 0x520))();
    lVar3 = 0;
    goto LAB_01d1cc66;
  }
  plVar2 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar2 + 0x18))();
  if (local_70 == plVar2) {
    plVar2 = local_70;
    if (local_68 == '\0') goto LAB_01d1ca2a;
    FUN_00d50b20();
  }
  else {
    if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      local_70 = plVar2;
      FUN_00d50b20();
      plVar2 = local_70;
    }
LAB_01d1ca2a:
    local_70 = plVar2;
    local_68 = '\x01';
  }
  FUN_01ccad60();
  lVar3 = local_30;
  if (local_30 == 0) {
    lVar3 = 0;
joined_r0x01d1ca60:
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (local_28 == '\0') {
    FUN_00d50b00();
    goto joined_r0x01d1ca60;
  }
  FUN_01e10550();
  local_60 = local_30;
  local_58 = 0;
  local_a0 = DAT_027e7c20;
  if (local_28 == '\0') {
    if (local_30 != 0) {
      FUN_00d50b00();
      local_a0 = DAT_027e7c20;
    }
  }
  else {
    local_28 = '\0';
  }
  local_58 = '\x01';
  DAT_027e7c20 = local_a0;
  if (local_a0 != 0) {
    local_58 = '\x01';
    FUN_00d50b00();
  }
  local_98 = '\x01';
  cVar1 = (**(code **)(*unaff_RDI + 0x4d8))(&local_70,&local_a0);
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  if (cVar1 != '\0') {
    FUN_01e10550();
    local_40 = local_80;
    local_38 = 0;
    if (local_78 == '\0') {
      if (local_80 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_78 = '\0';
    }
    local_38 = '\x01';
    FUN_00d8dab0();
    local_50 = local_30;
    local_48 = 0;
    local_90 = DAT_027e7c20;
    if (local_28 == '\0') {
      if (local_30 != 0) {
        FUN_00d50b00();
        local_90 = DAT_027e7c20;
      }
    }
    else {
      local_28 = '\0';
    }
    local_48 = '\x01';
    DAT_027e7c20 = local_90;
    if (local_90 != 0) {
      local_48 = '\x01';
      FUN_00d50b00();
    }
    local_88 = '\x01';
    (**(code **)(*unaff_RDI + 0x4d0))();
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
  }
LAB_01d1cc66:
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @00c62b20 — 750 bytes
// ============================================================

float FUN_00c62b20(void)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong *unaff_RSI;
  float fVar5;
  undefined4 uVar6;
  longlong local_a0;
  char local_98;
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
  longlong local_40;
  char local_38;
  float local_2c;
  
  local_2c = 0.0;
  if ((*unaff_RSI != 0) && (iVar4 = FUN_00d8c7a0(), local_a0 = DAT_02704060, iVar4 != 0)) {
    if (DAT_02704060 != 0) {
      FUN_00d50b00();
    }
    local_98 = '\x01';
    FUN_00d91000(1,&local_a0);
    lVar2 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if (*(int *)(lVar2 + 0xc) < 1) {
      local_2c = 0.0;
    }
    else {
      lVar1 = **(longlong **)(lVar2 + 0x10);
      local_58 = 0;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_58 = '\x01';
      local_60 = lVar1;
      fVar5 = (float)FUN_00d4afa0();
      local_2c = 0.0;
      if ((0.0 <= fVar5) && (local_2c = fVar5, DAT_023908e0 < fVar5)) {
        local_2c = DAT_023908e0;
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      uVar6 = FUN_00d95590();
      local_50 = local_80;
      local_48 = 0;
      if (local_78 == '\0') {
        if (local_80 != 0) {
          uVar6 = FUN_00d50b00();
        }
      }
      else {
        local_78 = '\0';
      }
      local_48 = '\x01';
      FUN_00d97f20(uVar6,&local_50);
      local_90 = DAT_02704060;
      if (DAT_02704060 != 0) {
        FUN_00d50b00();
      }
      local_88 = '\x01';
      cVar3 = FUN_00d90870();
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if (cVar3 != '\0') {
        local_2c = DAT_02390d38 - local_2c;
      }
      if (1 < *(int *)(lVar2 + 0xc)) {
        lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + 8);
        local_68 = 0;
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        local_68 = '\x01';
        local_70 = lVar2;
        fVar5 = (float)FUN_00d4afa0();
        local_2c = 0.0;
        if ((0.0 <= fVar5) && (local_2c = fVar5, DAT_023908e0 < fVar5)) {
          local_2c = DAT_023908e0;
        }
        local_2c = DAT_02390d38 - local_2c;
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_00d50b20();
    local_2c = local_2c / DAT_02390d38;
  }
  return local_2c;
}




// ============================================================
// @01efdb00 — 602 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01efdd12) */
/* WARNING: Removing unreachable block (ram,0x01efdd1b) */
/* WARNING: Removing unreachable block (ram,0x01efdc16) */
/* WARNING: Removing unreachable block (ram,0x01efdc22) */
/* WARNING: Removing unreachable block (ram,0x01efdc85) */
/* WARNING: Removing unreachable block (ram,0x01efdc8e) */
/* WARNING: Removing unreachable block (ram,0x01efdc01) */
/* WARNING: Removing unreachable block (ram,0x01efdc0a) */
/* WARNING: Removing unreachable block (ram,0x01efdcb1) */
/* WARNING: Removing unreachable block (ram,0x01efdcba) */
/* WARNING: Removing unreachable block (ram,0x01efdcd9) */
/* WARNING: Removing unreachable block (ram,0x01efdce2) */

void FUN_01efdb00(void)

{
  bool bVar1;
  code *pcVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar6;
  longlong lVar7;
  longlong local_40;
  char local_38;
  
  pcVar2 = DAT_026b2b70;
  lVar3 = *unaff_RSI;
  if (0 < *(int *)(lVar3 + 0xc)) {
    lVar6 = 0;
    do {
      lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + lVar6 * 8);
      if (lVar3 == 0) {
        lVar7 = 0;
      }
      else {
        FUN_00d50b00();
        lVar7 = lVar3;
      }
      FUN_01f01c90();
      if (local_40 == 0) {
        lVar5 = 0;
        bVar1 = false;
      }
      else {
        lVar5 = local_40;
        if (local_38 == '\0') {
          FUN_00d50b00();
          bVar1 = true;
        }
        else {
          local_38 = '\0';
          bVar1 = true;
        }
      }
      if (lVar5 == 0) {
        plVar4 = (longlong *)FUN_00e8fc40();
        FUN_00d4ff40();
        *plVar4 = (longlong)&DAT_026b2b58;
        plVar4[2] = 0;
        plVar4[3] = 0;
        plVar4[4] = 0;
        (*pcVar2)();
        (**(code **)(*plVar4 + 0x368))();
        (**(code **)(*plVar4 + 0x378))();
        FUN_01f01a30();
        bVar1 = true;
      }
      (**(code **)(*unaff_RDI + 0x648))();
      if ((lVar3 != 0) && (lVar7 != 0)) {
        FUN_00d50b20();
      }
      if (bVar1) {
        FUN_00d50b20();
      }
      lVar6 = lVar6 + 1;
      lVar3 = *unaff_RSI;
    } while (lVar6 < *(int *)(lVar3 + 0xc));
  }
  (**(code **)(*unaff_RDI + 0x448))();
  (**(code **)(*unaff_RDI + 0x658))();
  (**(code **)(*unaff_RDI + 0x628))();
  return;
}




// ============================================================
// @00c615f0 — 588 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00c61657) */
/* WARNING: Removing unreachable block (ram,0x00c61663) */

void FUN_00c615f0(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  longlong unaff_RDI;
  longlong lVar5;
  longlong local_98;
  char local_90;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong *local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  FUN_00b37300();
  FUN_01d265f0();
  if (local_90 == '\0') {
    if (local_98 == 0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_98 == 0) {
    return;
  }
  if (0 < *(int *)(local_98 + 0xc)) {
    lVar5 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(local_98 + 0x10) + lVar5 * 8);
      cVar4 = (**(code **)(*plVar1 + 0x488))();
      lVar2 = DAT_027e7c20;
      if (cVar4 != '\0') {
        if (DAT_027e7c20 != 0) {
          FUN_00d50b00();
        }
        local_70 = lVar2;
        local_68 = '\x01';
        FUN_01ccab60(param_1,&local_70);
        plVar3 = local_50;
        if (local_48 == '\0') {
          if (((local_50 != (longlong *)0x0) && (FUN_00d50b00(), local_48 != '\0')) &&
             (local_50 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_48 = '\0';
        }
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
        lVar2 = DAT_02725a40;
        if (plVar3 != (longlong *)0x0) {
          if (DAT_02725a40 != 0) {
            FUN_00d50b00();
          }
          local_60 = lVar2;
          local_58 = '\x01';
          cVar4 = (**(code **)(*plVar3 + 0x50))();
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          if (cVar4 != '\0') {
            local_38 = 0;
            lVar2 = *(longlong *)(unaff_RDI + 0xa0);
            if (lVar2 != 0) {
              FUN_00d50b00();
            }
            local_38 = '\x01';
            local_40 = lVar2;
            (**(code **)(*plVar1 + 0x498))(param_1,1);
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
          }
          FUN_00d50b20();
        }
      }
      lVar5 = lVar5 + 1;
    } while ((int)lVar5 < *(int *)(local_98 + 0xc));
  }
  FUN_01d300d0();
  FUN_00d50b20();
  return;
}




// ============================================================
// @00c60a70 — 584 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00c60b14) */
/* WARNING: Removing unreachable block (ram,0x00c60b1d) */
/* WARNING: Removing unreachable block (ram,0x00c60ac0) */
/* WARNING: Removing unreachable block (ram,0x00c60ac9) */
/* WARNING: Removing unreachable block (ram,0x00c60bf1) */
/* WARNING: Removing unreachable block (ram,0x00c60bfa) */

void FUN_00c60a70(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  longlong **pplVar4;
  undefined8 *unaff_RDI;
  longlong *local_98;
  char local_90;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  plVar1 = DAT_027719e0;
  if (DAT_027719e0 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  cVar3 = (**(code **)(*plVar1 + 0x50))();
  FUN_00d50b20();
  plVar1 = DAT_027719e8;
  if (cVar3 != '\0') goto LAB_00c60c9a;
  if (DAT_027719e8 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  cVar3 = (**(code **)(*plVar1 + 0x50))();
  FUN_00d50b20();
  if (cVar3 != '\0') goto LAB_00c60c9a;
  pplVar4 = &local_98;
  FUN_00b37610();
  plVar1 = local_98;
  FUN_00aff000();
  if (plVar1 == (longlong *)0x0) {
LAB_00c60b76:
    pplVar4 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_00c60b76;
  }
  plVar1 = *pplVar4;
  if (*(char *)(pplVar4 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar4 + 1) = 0;
  }
  if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar2 = DAT_02725a40;
  if (plVar1 != (longlong *)0x0) {
    if (DAT_02725a40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    cVar3 = (**(code **)(*plVar2 + 0x50))();
    FUN_00d50b20();
    if (cVar3 != '\0') {
      local_50 = *param_3;
      local_48 = '\0';
      (**(code **)(*plVar1 + 0x88))(param_1,&local_50);
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      return;
    }
    cVar3 = FUN_00b378e0();
    if (cVar3 != '\0') {
      local_40 = *param_3;
      local_38 = '\0';
      (**(code **)(*plVar1 + 0x88))(param_1,&local_40);
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      return;
    }
    FUN_00d50b20();
  }
LAB_00c60c9a:
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
  return;
}




// ============================================================
// @001e3dc0 — 557 bytes
// str: ""GNPopUpButton""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001e3dc0(void)

{
  int iVar1;
  undefined8 *unaff_RDI;
  
  FUN_000fabd0();
  *unaff_RDI = &DAT_02686350;
  unaff_RDI[2] = &DAT_02686e38;
  unaff_RDI[0x39] = &DAT_02686e78;
  FUN_001e4060();
  *(undefined4 *)(unaff_RDI + 0x45) = 0;
  if (DAT_027f94e0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026efe08 = FUN_000f5df0();
      _DAT_026efdf0 = "GNPopUpButton";
      _DAT_026efdf8 = 0x240;
      _DAT_026efe00 = FUN_001e3bf0;
      _DAT_026efe10 = 0;
      uRam00000000026efe18 = 0;
      _DAT_026efe20 = 0;
      uRam00000000026efe28 = 0;
      _DAT_026efe30 = 0;
      uRam00000000026efe38 = 0;
      _DAT_026efe40 = 0;
      uRam00000000026efe48 = 0;
      _DAT_026efe50 = 0;
      uRam00000000026efe58 = 0;
      _DAT_026efe60 = 0;
      uRam00000000026efe68 = 0;
      _DAT_026efe70 = 0;
      uRam00000000026efe78 = 0;
      _DAT_026efe80 = 0;
      uRam00000000026efe88 = 0;
      _DAT_026efe90 = 0;
      uRam00000000026efe98 = 0;
      _DAT_026efea0 = 0;
      _uRam00000000026efea8 = 0;
      _DAT_026efeb0 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026efeab == '\0') {
    FUN_001e4350();
    FUN_00e87980();
  }
  FUN_001e44c0();
  *(undefined1 *)(unaff_RDI + 0x47) = 0;
  if (DAT_027f94e0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026efe08 = FUN_000f5df0();
      _DAT_026efdf0 = "GNPopUpButton";
      _DAT_026efdf8 = 0x240;
      _DAT_026efe00 = FUN_001e3bf0;
      _DAT_026efe10 = 0;
      uRam00000000026efe18 = 0;
      _DAT_026efe20 = 0;
      uRam00000000026efe28 = 0;
      _DAT_026efe30 = 0;
      uRam00000000026efe38 = 0;
      _DAT_026efe40 = 0;
      uRam00000000026efe48 = 0;
      _DAT_026efe50 = 0;
      uRam00000000026efe58 = 0;
      _DAT_026efe60 = 0;
      uRam00000000026efe68 = 0;
      _DAT_026efe70 = 0;
      uRam00000000026efe78 = 0;
      _DAT_026efe80 = 0;
      uRam00000000026efe88 = 0;
      _DAT_026efe90 = 0;
      uRam00000000026efe98 = 0;
      _DAT_026efea0 = 0;
      _uRam00000000026efea8 = 0;
      _DAT_026efeb0 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026efeab == '\0') {
    FUN_001e47b0();
    FUN_00e87980();
  }
  return;
}




// ============================================================
// @01efdfe0 — 520 bytes
// str: ""GNPopUpButton""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01efdfe0(void)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong unaff_RDI;
  longlong lVar5;
  longlong local_50;
  char local_48;
  
  plVar1 = *(longlong **)(unaff_RDI + 0x90);
  if ((DAT_027f94e0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    _DAT_026efe08 = FUN_000f5df0();
    _DAT_026efdf0 = "GNPopUpButton";
    _DAT_026efdf8 = 0x240;
    _DAT_026efe00 = FUN_001e3bf0;
    _DAT_026efe10 = 0;
    uRam00000000026efe18 = 0;
    _DAT_026efe20 = 0;
    uRam00000000026efe28 = 0;
    _DAT_026efe30 = 0;
    uRam00000000026efe38 = 0;
    _DAT_026efe40 = 0;
    uRam00000000026efe48 = 0;
    _DAT_026efe50 = 0;
    uRam00000000026efe58 = 0;
    _DAT_026efe60 = 0;
    uRam00000000026efe68 = 0;
    _DAT_026efe70 = 0;
    uRam00000000026efe78 = 0;
    _DAT_026efe80 = 0;
    uRam00000000026efe88 = 0;
    _DAT_026efe90 = 0;
    uRam00000000026efe98 = 0;
    _DAT_026efea0 = 0;
    uRam00000000026efea8 = 0;
    _DAT_026efeb0 = 0;
    ___cxa_guard_release();
  }
  lVar4 = DAT_02802688;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    lVar4 = DAT_02802688;
    if (cVar2 != '\0') {
      lVar4 = *(longlong *)(unaff_RDI + 0x90);
    }
  }
  if (lVar4 != 0) {
    FUN_00d50b00();
    FUN_01d6f8d0();
    lVar4 = *(longlong *)(unaff_RDI + 0x78);
    if (0 < *(int *)(lVar4 + 0xc)) {
      lVar5 = 0;
      do {
        plVar1 = *(longlong **)(*(longlong *)(lVar4 + 0x10) + lVar5 * 8);
        if (plVar1 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        (**(code **)(*plVar1 + 0x380))();
        if (local_48 == '\0') {
          if (local_50 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        FUN_01d6f990();
        if (local_50 != 0) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        lVar5 = lVar5 + 1;
        lVar4 = *(longlong *)(unaff_RDI + 0x78);
      } while (lVar5 < *(int *)(lVar4 + 0xc));
    }
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01effce0 — 518 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01effe27) */
/* WARNING: Removing unreachable block (ram,0x01effe30) */
/* WARNING: Removing unreachable block (ram,0x01effd2b) */
/* WARNING: Removing unreachable block (ram,0x01effd34) */
/* WARNING: Removing unreachable block (ram,0x01effec4) */
/* WARNING: Removing unreachable block (ram,0x01effecd) */

void FUN_01effce0(void)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 *unaff_RDI;
  longlong lVar5;
  bool bVar6;
  bool bVar7;
  
  if (DAT_028ba670 == (longlong *)*unaff_RDI) {
    return;
  }
  if (DAT_028ba670 != (longlong *)0x0) {
    if (((longlong *)*unaff_RDI != (longlong *)0x0) &&
       (cVar3 = (**(code **)(*DAT_028ba670 + 0x50))(), cVar3 != '\0')) {
      return;
    }
    if ((DAT_028ba670 != (longlong *)0x0) && (DAT_028ba679 != '\0')) goto LAB_01effe06;
  }
  FUN_00e8cb50();
  if (DAT_028ba670 == (longlong *)0x0) {
    plVar4 = (longlong *)FUN_00e8fc40();
    FUN_00d4ff40();
    *plVar4 = (longlong)&DAT_02572358;
    (*DAT_02572370)();
    if (DAT_028ba670 == plVar4) {
      bVar2 = false;
      bVar7 = false;
    }
    else {
      bVar2 = true;
      bVar7 = true;
      bVar6 = DAT_028ba670 != (longlong *)0x0;
      DAT_028ba670 = plVar4;
      if (bVar6) {
        FUN_00d50b20();
      }
    }
    if (DAT_028ba678 == '\0') {
      DAT_028ba678 = '\x01';
      FUN_00e8cb90();
      bVar7 = bVar2;
    }
    if (!bVar7) {
      FUN_00d50b20();
    }
    DAT_028ba679 = '\x01';
    FUN_00e8cb70();
  }
  else {
    DAT_028ba679 = '\x01';
    FUN_00e8cb70();
  }
LAB_01effe06:
  FUN_00d243f0();
  if ((DAT_028ba660 != 0) && (0 < *(int *)(DAT_028ba660 + 0xc))) {
    lVar5 = 0;
    plVar4 = (longlong *)0x0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(DAT_028ba660 + 0x10) + lVar5 * 8);
      if (plVar4 != plVar1) {
        if (plVar1 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        bVar7 = plVar4 != (longlong *)0x0;
        plVar4 = plVar1;
        if (bVar7) {
          FUN_00d50b20();
        }
      }
      (**(code **)(*plVar4 + 0x5e8))();
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(DAT_028ba660 + 0xc));
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01c6e400 — 506 bytes
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c6e400(pthread_key_t param_1)

{
  double dVar1;
  longlong lVar2;
  void *pvVar3;
  longlong *unaff_RDI;
  ulonglong uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar5 = DAT_02395720;
  if (unaff_RDI[0x31] != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    lVar2 = unaff_RDI[0x31];
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar5 = (double)FUN_016cd860();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  dVar1 = (double)unaff_RDI[0x38];
  dVar6 = SQRT((double)unaff_RDI[0x37] / dVar1);
  dVar7 = dVar5 / dVar6;
  dVar5 = dVar5 * dVar6;
  dVar6 = _DAT_0241eeb8;
  if (_DAT_0241eeb8 <= dVar7) {
    dVar6 = dVar7;
  }
  dVar7 = DAT_0241ea58;
  if (dVar5 <= DAT_0241ea58) {
    dVar7 = dVar5;
  }
  if ((dVar1 != dVar6) || (NAN(dVar1) || NAN(dVar6))) {
    unaff_RDI[0x38] = (longlong)dVar6;
    dVar5 = (double)_log((double)unaff_RDI[0x37] /
                         (double)(~-(ulonglong)(dVar6 == 0.0) & (ulonglong)dVar6 |
                                 DAT_0238fee8 & -(ulonglong)(dVar6 == 0.0)));
    *(float *)(unaff_RDI + 0x55) = (float)dVar5;
    (**(code **)(*unaff_RDI + 0x620))();
    *(undefined1 *)(unaff_RDI + 0x3a) = 1;
    if ((longlong *)unaff_RDI[0x46] != (longlong *)0x0) {
      (**(code **)(*(longlong *)unaff_RDI[0x46] + 0x40))();
    }
  }
  if (((double)unaff_RDI[0x37] != dVar7) || (NAN((double)unaff_RDI[0x37]) || NAN(dVar7))) {
    unaff_RDI[0x37] = (longlong)dVar7;
    uVar4 = -(ulonglong)((double)unaff_RDI[0x38] == 0.0);
    dVar5 = (double)_log(dVar7 / (double)(~uVar4 & unaff_RDI[0x38] | DAT_0238fee8 & uVar4));
    *(float *)(unaff_RDI + 0x55) = (float)dVar5;
    (**(code **)(*unaff_RDI + 0x620))();
    *(undefined1 *)(unaff_RDI + 0x3a) = 1;
    if ((longlong *)unaff_RDI[0x46] != (longlong *)0x0) {
      (**(code **)(*(longlong *)unaff_RDI[0x46] + 0x40))();
    }
  }
  if ((longlong *)unaff_RDI[0x36] == (longlong *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01c6e5e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)unaff_RDI[0x36] + 0x620))();
  return;
}



