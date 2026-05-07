// Reconstructed implementation of MDFileBrowserItemControl
// From MikeCore binary — reverse-engineered pseudocode

#include "MDFileBrowserItemControl.h"

// ============================================================
// @00378ba0 — 2665 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00379005) */
/* WARNING: Removing unreachable block (ram,0x00378f13) */
/* WARNING: Removing unreachable block (ram,0x00378f1f) */
/* WARNING: Removing unreachable block (ram,0x003791be) */
/* WARNING: Removing unreachable block (ram,0x003791cb) */
/* WARNING: Removing unreachable block (ram,0x00378cc1) */
/* WARNING: Removing unreachable block (ram,0x00378cca) */
/* WARNING: Removing unreachable block (ram,0x003790ac) */
/* WARNING: Removing unreachable block (ram,0x003790b8) */
/* WARNING: Removing unreachable block (ram,0x003790e8) */
/* WARNING: Removing unreachable block (ram,0x003790f4) */
/* WARNING: Removing unreachable block (ram,0x00378da7) */
/* WARNING: Removing unreachable block (ram,0x00378dd0) */
/* WARNING: Removing unreachable block (ram,0x00378da9) */
/* WARNING: Removing unreachable block (ram,0x00378dd2) */
/* WARNING: Removing unreachable block (ram,0x00379010) */
/* WARNING: Removing unreachable block (ram,0x00379030) */
/* WARNING: Removing unreachable block (ram,0x00379012) */
/* WARNING: Removing unreachable block (ram,0x00379032) */

void FUN_00378ba0(void)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong **pplVar8;
  longlong *unaff_RDI;
  longlong *plVar9;
  longlong *plVar10;
  longlong local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong *local_d0;
  longlong *local_c8;
  char local_c0;
  longlong *local_b8;
  char local_b0;
  longlong *local_a8;
  char local_a0;
  longlong *local_98;
  char local_90;
  longlong *local_88;
  longlong *local_80;
  char local_78;
  longlong *local_68;
  char local_60;
  int local_50;
  longlong *local_40;
  char local_38;
  
  plVar9 = local_68;
  FUN_01f27fe0();
  cVar4 = (**(code **)(*local_68 + 0x450))();
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar4 != '\0') {
    FUN_0037c170();
    local_c8 = local_40;
    local_c0 = 0;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_c0 = '\x01';
    FUN_0037c870();
    if (local_60 == '\0') {
      if (local_68 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    if ((local_c0 != '\0') && (local_c8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_88 = local_68;
    FUN_01c19c80();
    FUN_01c19d80();
    local_b8 = local_40;
    local_b0 = 0;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_b0 = '\x01';
    FUN_0037c960();
    if (local_60 == '\0') {
      if (local_68 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_d0 = local_68;
    if (local_68 != (longlong *)0x0) {
      local_60 = '\0';
      local_68 = (longlong *)0x0;
      local_50 = -1;
      while( true ) {
        lVar5 = (longlong)local_50;
        local_50 = local_50 + 1;
        if (*(int *)((longlong)plVar9 + 0xc) <= local_50) break;
        local_68 = *(longlong **)(plVar9[2] + 8 + lVar5 * 8);
        local_40 = local_68;
        FUN_0038ad10();
        pplVar8 = (longlong **)&DAT_02802688;
        if (local_68 != (longlong *)0x0) {
          (**(code **)(*local_68 + 0x360))();
          cVar4 = FUN_00e85ea0();
          pplVar8 = &local_40;
          if (cVar4 == '\0') {
            pplVar8 = (longlong **)&DAT_02802688;
          }
        }
        if (*pplVar8 != (longlong *)0x0) {
          FUN_01c0b7c0();
          plVar10 = local_80;
          if (local_78 == '\0') {
            if (local_80 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_78 = '\0';
          }
          local_40 = plVar10;
          local_38 = '\0';
          cVar4 = FUN_00d23d70();
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar10 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (cVar4 == '\0') {
            FUN_01c19c80();
            FUN_01c19e20();
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            FUN_01c0b7c0();
            plVar10 = local_80;
            if (local_78 == '\0') {
              if (local_80 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_78 = '\0';
            }
            local_40 = plVar10;
            local_38 = '\0';
            FUN_00d23f50();
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar10 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
      }
      FUN_0038d270();
      plVar9 = local_88;
    }
    pcVar2 = DAT_02664d88;
    plVar10 = (longlong *)0x0;
    if (plVar9 != (longlong *)0x0) {
      local_60 = '\0';
      local_68 = (longlong *)0x0;
      local_50 = -1;
      while( true ) {
        lVar5 = (longlong)local_50;
        local_50 = local_50 + 1;
        if (*(int *)((longlong)plVar9 + 0xc) <= local_50) break;
        local_68 = *(longlong **)(plVar9[2] + 8 + lVar5 * 8);
        puVar6 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar6 = &DAT_02664d70;
        puVar6[2] = 0;
        puVar6[3] = 0;
        *(undefined8 *)((longlong)puVar6 + 0x1d) = 0;
        *(undefined8 *)((longlong)puVar6 + 0x25) = 0;
        (*pcVar2)();
        FUN_01c0b7f0();
        FUN_01c19c80();
        FUN_01c19db0();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      FUN_00115910();
      plVar10 = local_88;
    }
    FUN_0037ca50();
    if ((local_60 == '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    FUN_01c19c80();
    FUN_01c19d80();
    local_a0 = 0;
    if (local_60 == '\0') {
      if (local_68 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    local_a0 = '\x01';
    local_a8 = local_68;
    FUN_01c23a60();
    if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_0037cca0();
    FUN_01c19c80();
    FUN_01c19d80();
    iVar1 = *(int *)((longlong)local_68 + 0xc);
    if (local_60 != '\0') {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    plVar9 = (longlong *)unaff_RDI[0x2b];
    if (iVar1 == 0) {
      if (plVar9 == (longlong *)0x0) {
        puVar7 = (undefined8 *)FUN_00e8fc40();
        FUN_0006daf0();
        *(undefined4 *)(puVar7 + 0x27) = 0;
        puVar7[0x2e] = 0;
        *(undefined4 *)(puVar7 + 0x2f) = 0;
        puVar7[0x30] = 0;
        *(undefined1 *)(puVar7 + 0x31) = 0;
        puVar7[0x28] = 0;
        puVar7[0x29] = 0;
        *(undefined4 *)(puVar7 + 0x2a) = 0;
        puVar7[0x2b] = 0;
        puVar7[0x2c] = 0;
        *(undefined8 *)((longlong)puVar7 + 0x165) = 0;
        *(undefined8 *)((longlong)puVar7 + 0x18c) = 0;
        *(undefined8 *)((longlong)puVar7 + 0x194) = 0;
        *(undefined8 *)((longlong)puVar7 + 0x199) = 0;
        puVar7[0x35] = 0;
        puVar7[0x36] = 0;
        puVar7[0x37] = 0;
        puVar7[0x38] = 0;
        *puVar7 = &DAT_02683800;
        puVar7[2] = &DAT_026842c8;
        puVar7[0x39] = 0;
        puVar7[0x3a] = 0;
        (*DAT_02683818)();
        puVar6 = (undefined8 *)unaff_RDI[0x2b];
        if (puVar6 == puVar7) {
          FUN_00d50b20();
        }
        else {
          unaff_RDI[0x2b] = (longlong)puVar7;
          if (puVar6 != (undefined8 *)0x0) {
            FUN_00d50b20();
          }
        }
        lVar5 = DAT_026f6f70;
        plVar9 = (longlong *)unaff_RDI[0x2b];
        if (DAT_026f6f70 != 0) {
          FUN_00d50b00();
        }
        lVar3 = DAT_02704018;
        if (DAT_02704018 != 0) {
          FUN_00d50b00();
        }
        local_100 = lVar3;
        local_f8 = '\x01';
        local_f0 = 0;
        local_e8 = '\0';
        FUN_00d31230(&local_f0,&local_100);
        local_90 = 0;
        if (local_60 == '\0') {
          if (local_68 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_60 = '\0';
        }
        local_90 = '\x01';
        local_98 = local_68;
        (**(code **)(*plVar9 + 0x968))();
        if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_e8 != '\0') && (local_f0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_f8 != '\0') && (local_100 != 0)) {
          FUN_00d50b20();
        }
        if (lVar5 != 0) {
          FUN_00d50b20();
        }
        (**(code **)(*(longlong *)unaff_RDI[0x2b] + 0x9c8))();
        plVar9 = (longlong *)unaff_RDI[0x2b];
        FUN_01e3f820();
        (**(code **)(*plVar9 + 0x4d0))();
        (**(code **)(*(longlong *)unaff_RDI[0x2b] + 0x558))();
        plVar9 = (longlong *)unaff_RDI[0x1d];
        local_d8 = 0;
        local_e0 = unaff_RDI[0x2b];
        if (local_e0 != 0) {
          FUN_00d50b00();
        }
        local_d8 = '\x01';
        (**(code **)(*plVar9 + 0x450))();
        if ((local_d8 != '\0') && (local_e0 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    else if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x478))();
      FUN_00d50130();
      if (unaff_RDI[0x2b] != 0) {
        unaff_RDI[0x2b] = 0;
        FUN_00d50b20();
      }
    }
    plVar9 = (longlong *)unaff_RDI[2];
    (**(code **)(*unaff_RDI + 0x698))();
    (**(code **)(*plVar9 + 0x9b8))();
    if (local_68 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (local_d0 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (plVar10 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}




// ============================================================
// @00378020 — 1687 bytes
// ============================================================

void FUN_00378020(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong unaff_RDI;
  longlong **pplVar7;
  longlong *local_48;
  char local_40;
  longlong *local_38;
  char local_30;
  
  FUN_01e534b0();
  FUN_01c21680();
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_0006daf0();
  *(undefined4 *)(puVar5 + 0x27) = 0;
  puVar5[0x2e] = 0;
  *(undefined4 *)(puVar5 + 0x2f) = 0;
  puVar5[0x30] = 0;
  *(undefined1 *)(puVar5 + 0x31) = 0;
  puVar5[0x28] = 0;
  puVar5[0x29] = 0;
  *(undefined4 *)(puVar5 + 0x2a) = 0;
  puVar5[0x2b] = 0;
  puVar5[0x2c] = 0;
  *(undefined8 *)((longlong)puVar5 + 0x165) = 0;
  *(undefined8 *)((longlong)puVar5 + 0x18c) = 0;
  *(undefined8 *)((longlong)puVar5 + 0x194) = 0;
  *(undefined8 *)((longlong)puVar5 + 0x199) = 0;
  puVar5[0x35] = 0;
  puVar5[0x36] = 0;
  puVar5[0x37] = 0;
  puVar5[0x38] = 0;
  *(undefined8 *)((longlong)puVar5 + 0x1c1) = 0;
  *(undefined8 *)((longlong)puVar5 + 0x1c9) = 0;
  puVar5[0x3c] = 0;
  *(undefined1 *)(puVar5 + 0x3d) = 0;
  puVar5[0x3e] = 0;
  *(undefined1 *)(puVar5 + 0x3f) = 0;
  *puVar5 = &DAT_024ebea8;
  puVar5[2] = &DAT_024eca78;
  puVar5[0x3b] = &DAT_024ecab8;
  puVar5[0x40] = 0;
  FUN_00d500e0();
  FUN_01c23100();
  if (puVar5 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  FUN_01c21100();
  FUN_01c21610();
  FUN_01c215e0();
  (**(code **)(*(longlong *)(unaff_RDI + 0xd0) + 0x10))();
  FUN_00d50b00();
  FUN_01c216a0();
  if ((longlong *)(unaff_RDI + 0xd0) != (longlong *)0x0) {
    (**(code **)(*(longlong *)(unaff_RDI + 0xd0) + 0x10))();
    FUN_00d50b20();
  }
  lVar2 = DAT_02703fc8;
  if (DAT_02703fc8 != 0) {
    FUN_00d50b00();
  }
  FUN_01c25a20();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  FUN_01c25a80();
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  lVar2 = DAT_02703fd0;
  if (DAT_02703fd0 != 0) {
    FUN_00d50b00();
  }
  FUN_01c23160();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  FUN_01c25980();
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  FUN_00378ba0();
  if (*(longlong *)(unaff_RDI + 0x100) != 0) {
    FUN_01d6f8d0();
    plVar1 = *(longlong **)(unaff_RDI + 0x100);
    FUN_00379d20();
    plVar6 = local_38;
    if (local_30 == '\0') {
      if (local_38 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    (**(code **)(*plVar1 + 0x958))();
    if (plVar6 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  pplVar7 = &local_38;
  FUN_01f27fe0();
  plVar1 = local_38;
  FUN_003708c0();
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 != '\0') goto LAB_00378411;
  }
  pplVar7 = (longlong **)&DAT_02802688;
LAB_00378411:
  plVar1 = *pplVar7;
  if (*(char *)(pplVar7 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar7 + 1) = 0;
  }
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    plVar6 = (longlong *)FUN_00e8fc40();
    FUN_0038cc50();
    (**(code **)(*plVar6 + 0x18))();
    lVar2 = *(longlong *)(unaff_RDI + 0xd8);
    *(longlong **)(unaff_RDI + 0xd8) = plVar6;
    if (lVar2 != 0) {
      FUN_00d50b20();
      plVar6 = *(longlong **)(unaff_RDI + 0xd8);
    }
    (**(code **)(*plVar1 + 0x7b0))();
    plVar3 = local_38;
    if (local_30 == '\0') {
      if (local_38 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    (**(code **)(*plVar6 + 0x3b8))();
    if (plVar3 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar1 + 0x7b0))();
    cVar4 = (**(code **)(*local_38 + 0x390))();
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      (**(code **)(**(longlong **)(unaff_RDI + 0xd8) + 0x368))();
    }
    (**(code **)(*plVar1 + 0x7b0))();
    lVar2 = *(longlong *)(unaff_RDI + 0xd8);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    FUN_01257a80();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_01c26ac0();
  plVar6 = local_38;
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar6 != (longlong *)0x0) {
    FUN_01c26ac0();
    (**(code **)(*local_48 + 0x7b0))();
    FUN_01cf4060();
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01c26ac0();
    (**(code **)(*local_48 + 0x7b0))();
    FUN_01cf4120();
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00379f30();
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @00377800 — 1029 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00377b55) */
/* WARNING: Removing unreachable block (ram,0x00377b5e) */
/* WARNING: Removing unreachable block (ram,0x00377b0c) */
/* WARNING: Removing unreachable block (ram,0x00377ad3) */
/* WARNING: Removing unreachable block (ram,0x00377adf) */
/* WARNING: Removing unreachable block (ram,0x00377956) */
/* WARNING: Removing unreachable block (ram,0x00377962) */
/* WARNING: Removing unreachable block (ram,0x003778f0) */
/* WARNING: Removing unreachable block (ram,0x003778f9) */
/* WARNING: Removing unreachable block (ram,0x00377881) */
/* WARNING: Removing unreachable block (ram,0x0037788a) */
/* WARNING: Removing unreachable block (ram,0x003779d5) */
/* WARNING: Removing unreachable block (ram,0x003779e1) */
/* WARNING: Removing unreachable block (ram,0x00377a0e) */
/* WARNING: Removing unreachable block (ram,0x00377a57) */
/* WARNING: Removing unreachable block (ram,0x00377a60) */
/* WARNING: Removing unreachable block (ram,0x00377bc5) */
/* WARNING: Removing unreachable block (ram,0x00377bce) */

void FUN_00377800(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong local_58;
  char local_50;
  
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &DAT_02572358;
  (*DAT_02572370)();
  FUN_00b7ace0();
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  FUN_00d214d0();
  if (local_58 != 0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  FUN_00b6ff00();
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  FUN_00d23480();
  if (local_58 != 0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  plVar3 = (longlong *)FUN_0038ca80();
  (**(code **)(*plVar3 + 0x18))();
  FUN_01c10e50();
  lVar1 = DAT_02703fb8;
  if (DAT_02703fb8 != 0) {
    FUN_00d50b00();
  }
  FUN_01c1add0();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  FUN_01c1ae70();
  plVar3 = (longlong *)FUN_0038ca80();
  (**(code **)(*plVar3 + 0x18))();
  FUN_017a52b0();
  if (local_58 != 0) {
    FUN_00d50b00();
  }
  FUN_01c10de0();
  if (local_58 != 0) {
    FUN_00d50b20();
  }
  lVar1 = DAT_02703fc0;
  if (DAT_02703fc0 != 0) {
    FUN_00d50b00();
  }
  FUN_01c1add0();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  FUN_01c1ae70();
  plVar3 = (longlong *)FUN_0038ca80();
  (**(code **)(*plVar3 + 0x18))();
  FUN_01552cd0();
  if (local_58 != 0) {
    FUN_00d50b00();
  }
  FUN_01c10de0();
  if (local_58 != 0) {
    FUN_00d50b20();
  }
  lVar1 = DAT_02703fc0;
  if (DAT_02703fc0 != 0) {
    FUN_00d50b00();
  }
  FUN_01c1add0();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  FUN_01c1ae70();
  FUN_00d50b20();
  FUN_00d50b20();
  FUN_00d50b20();
  FUN_00d50b20();
  return;
}




// ============================================================
// @00377230 — 863 bytes
// str: ""MDFileBrowserItemControl""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x003774a6) */
/* WARNING: Removing unreachable block (ram,0x00377486) */
/* WARNING: Removing unreachable block (ram,0x003774c2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00377230(void)

{
  int iVar1;
  undefined4 uVar2;
  longlong local_278;
  longlong local_260;
  longlong local_240;
  
  if ((DAT_02704240 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    _DAT_02704190 = FUN_0038a820();
    _DAT_02704178 = "MDFileBrowserItemControl";
    _DAT_02704180 = 0x208;
    _DAT_02704188 = FUN_0038a720;
    _DAT_02704198 = 0;
    uRam00000000027041a0 = 0;
    _DAT_027041a8 = 0;
    uRam00000000027041b0 = 0;
    _DAT_027041b8 = 0;
    uRam00000000027041c0 = 0;
    _DAT_027041c8 = 0;
    uRam00000000027041d0 = 0;
    _DAT_027041d8 = 0;
    uRam00000000027041e0 = 0;
    _DAT_027041e8 = 0;
    uRam00000000027041f0 = 0;
    _DAT_027041f8 = 0;
    uRam0000000002704200 = 0;
    _DAT_02704208 = 0;
    uRam0000000002704210 = 0;
    _DAT_02704218 = 0;
    uRam0000000002704220 = 0;
    _DAT_02704228 = 0;
    _uRam0000000002704230 = 0;
    _DAT_02704238 = 0;
    ___cxa_guard_release();
  }
  if (DAT_02704233 == '\0') {
    FUN_0038c010();
    FUN_00e87760();
    FUN_0006daf0();
    FUN_00d50c00();
    FUN_0038c320();
    FUN_0038c790();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    if (local_240 != 0) {
      FUN_00d50b20();
    }
    if (local_260 != 0) {
      FUN_00d50b20();
    }
    if (local_278 != 0) {
      FUN_00d50b20();
    }
    FUN_000993f0();
    FUN_000993f0();
  }
  return;
}



