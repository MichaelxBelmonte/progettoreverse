// Reconstructed implementation of MDProjectInsp
// From MikeCore binary — reverse-engineered pseudocode

#include "MDProjectInsp.h"

// ============================================================
// @002c59e0 — 4475 bytes
// ============================================================

void FUN_002c59e0(void)

{
  longlong *plVar1;
  bool bVar2;
  bool bVar3;
  code *pcVar4;
  longlong lVar5;
  longlong *plVar6;
  char cVar7;
  uint *puVar8;
  void *pvVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  uint *puVar13;
  longlong *plVar14;
  int iVar15;
  longlong unaff_RDI;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined8 *local_1f0;
  undefined1 local_1e8;
  longlong local_1e0;
  char local_1d8;
  longlong local_1d0;
  char local_1c8;
  longlong local_1c0;
  char local_1b8;
  longlong local_1b0;
  char local_1a8;
  longlong local_1a0;
  char local_198;
  longlong local_190;
  char local_188;
  longlong local_180;
  char local_178;
  longlong local_170;
  char local_168;
  longlong *local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong *local_70;
  uint local_68 [2];
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  longlong *local_48;
  char local_40;
  char local_38 [8];
  
  plVar6 = local_70;
  FUN_002cd3f0();
  if (((char)local_68[0] == '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  plVar1 = *(longlong **)(unaff_RDI + 0x120);
  if (*(int *)((longlong)local_70 + 0xc) == 1) {
    FUN_00d23310();
    local_38[0] = (char)local_68[0];
    puVar13 = (uint *)local_38;
    puVar8 = local_68;
    if ((char)local_68[0] == '\0') {
      puVar8 = puVar13;
    }
    *(undefined1 *)puVar8 = 0;
    if (((char)local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_70[3] == 0) {
      plVar14 = (longlong *)local_70[2];
      pvVar9 = _pthread_getspecific((pthread_key_t)puVar13);
      if (pvVar9 != (void *)0x0) {
        plVar14 = (longlong *)local_70[2];
        lVar12 = FUN_00e8b990();
        if (lVar12 != 0) {
          plVar14 = (longlong *)plVar14[(ulonglong)(*(uint *)(lVar12 + 0x154) & 1) + 4];
        }
      }
      (**(code **)(*plVar14 + 0x478))();
    }
    else {
      FUN_00b88600();
    }
    (**(code **)(*local_90 + 0x3f0))();
    (**(code **)(*local_80 + 0x470))();
    plVar14 = local_48;
    if (local_40 == '\0') {
      if (local_48 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    (**(code **)(*plVar1 + 0x958))();
    if (plVar14 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_38[0] != '\0') {
      FUN_00d50b20();
    }
    plVar1 = *(longlong **)(unaff_RDI + 0x120);
    FUN_00d23310();
    puVar13 = (uint *)local_38;
    puVar8 = local_68;
    if ((char)local_68[0] == '\0') {
      puVar8 = puVar13;
    }
    local_38[0] = (char)local_68[0];
    *(undefined1 *)puVar8 = 0;
    if (((char)local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_70[3] == 0) {
      plVar14 = (longlong *)local_70[2];
      pvVar9 = _pthread_getspecific((pthread_key_t)puVar13);
      if (pvVar9 != (void *)0x0) {
        plVar14 = (longlong *)local_70[2];
        lVar12 = FUN_00e8b990();
        if (lVar12 != 0) {
          plVar14 = (longlong *)plVar14[(ulonglong)(*(uint *)(lVar12 + 0x154) & 1) + 4];
        }
      }
      (**(code **)(*plVar14 + 0x478))();
    }
    else {
      FUN_00b88600();
    }
    (**(code **)(*local_90 + 0x3f0))();
    (**(code **)(*local_80 + 0x470))();
    plVar14 = local_48;
    if (local_40 == '\0') {
      if (local_48 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    (**(code **)(*plVar1 + 0x6a8))();
    if (plVar14 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_38[0] != '\0') {
      FUN_00d50b20();
    }
  }
  else {
    local_1d8 = '\0';
    local_1e0 = 0;
    (**(code **)(*plVar1 + 0x958))();
    if ((local_1d8 != '\0') && (local_1e0 != 0)) {
      FUN_00d50b20();
    }
    local_1c8 = '\0';
    local_1d0 = 0;
    (**(code **)(**(longlong **)(unaff_RDI + 0x120) + 0x6a8))();
    if ((local_1c8 != '\0') && (local_1d0 != 0)) {
      FUN_00d50b20();
    }
  }
  if (*(longlong *)(unaff_RDI + 0x108) == 0) goto LAB_002c64d0;
  FUN_01f27fe0();
  cVar7 = (**(code **)(*local_70 + 0x450))();
  if (((char)local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar7 != '\0') goto LAB_002c64d0;
  uVar16 = FUN_002cc5d0();
  if ((char)local_68[0] == '\0') {
    if (local_70 == (longlong *)0x0) goto LAB_002c5e9a;
    FUN_00d50b00();
    if (((char)local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
LAB_002c5e5b:
    FUN_01f27fe0();
    (**(code **)(*local_48 + 0x760))();
    if ((char)local_68[0] == '\0') {
      if (local_70 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_68[0] = local_68[0] & 0xffffff00;
    }
    cVar7 = (**(code **)(*local_70 + 0x50))();
    uVar16 = extraout_XMM0_Da;
    if (local_70 != (longlong *)0x0) {
      uVar16 = FUN_00d50b20();
    }
    if (((char)local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
      uVar16 = FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      uVar16 = FUN_00d50b20();
    }
    if (cVar7 != '\0') {
      bVar3 = false;
      bVar2 = false;
      plVar1 = *(longlong **)(unaff_RDI + 0x108);
      lVar12 = DAT_026fcea0;
      goto joined_r0x002c5f41;
    }
    plVar1 = *(longlong **)(unaff_RDI + 0x108);
    (**(code **)(*local_70 + 0x470))();
    if ((char)local_68[0] == '\0') {
      if (local_70 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_68[0] = local_68[0] & 0xffffff00;
    }
    uVar16 = (**(code **)(*plVar1 + 0x978))();
    if (local_70 != (longlong *)0x0) {
      uVar16 = FUN_00d50b20();
    }
    if (((char)local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
      uVar16 = FUN_00d50b20();
    }
    lVar12 = DAT_026fceb0;
    plVar1 = *(longlong **)(unaff_RDI + 0x108);
    if (DAT_026fceb0 != 0) {
      uVar16 = FUN_00d50b00();
    }
    local_1a0 = lVar12;
    local_198 = '\x01';
    FUN_01e57260(uVar16,&local_1a0);
    if (local_78 == '\0') {
      if (local_80 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_78 = '\0';
    }
    (**(code **)(*local_70 + 0x470))();
    local_68[0] = 1;
    local_58 = local_58 & 0xffffffffffffff00;
    if (local_90 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    local_60 = local_90;
    local_58 = CONCAT71(local_58._1_7_,1);
    FUN_00d93690();
    plVar14 = local_48;
    if (local_40 == '\0') {
      if (local_48 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    (**(code **)(*plVar1 + 0x6a8))();
    if (plVar14 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_80 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_198 != '\0') && (local_1a0 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_70 != (longlong *)0x0) goto LAB_002c5e5b;
LAB_002c5e9a:
    bVar3 = true;
    bVar2 = true;
    plVar1 = *(longlong **)(unaff_RDI + 0x108);
    lVar12 = DAT_026fcea0;
joined_r0x002c5f41:
    DAT_026fcea0 = lVar12;
    if (lVar12 != 0) {
      uVar16 = FUN_00d50b00();
      bVar2 = bVar3;
    }
    local_1b8 = '\x01';
    local_1c0 = lVar12;
    FUN_01e57260(uVar16,&local_1c0);
    if ((char)local_68[0] == '\0') {
      if (local_70 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_68[0] = local_68[0] & 0xffffff00;
    }
    uVar16 = (**(code **)(*plVar1 + 0x978))();
    if (local_70 != (longlong *)0x0) {
      uVar16 = FUN_00d50b20();
    }
    if (((char)local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
      uVar16 = FUN_00d50b20();
    }
    if ((local_1b8 != '\0') && (local_1c0 != 0)) {
      uVar16 = FUN_00d50b20();
    }
    if (bVar2) {
      FUN_01f27fe0();
      uVar16 = (**(code **)(*local_48 + 0x760))();
      if (local_70 != (longlong *)0x0) {
        if ((char)local_68[0] == '\0') {
          uVar16 = FUN_00d50b00();
          if (((char)local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
            uVar16 = FUN_00d50b20();
          }
        }
        else {
          local_68[0] = local_68[0] & 0xffffff00;
        }
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        uVar16 = FUN_00d50b20();
      }
    }
    lVar12 = DAT_026fcea8;
    plVar1 = *(longlong **)(unaff_RDI + 0x108);
    if (DAT_026fcea8 != 0) {
      uVar16 = FUN_00d50b00();
    }
    local_1b0 = lVar12;
    local_1a8 = '\x01';
    FUN_01e57260(uVar16,&local_1b0);
    if (local_78 == '\0') {
      if (local_80 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_78 = '\0';
    }
    (**(code **)(*local_70 + 0x470))();
    local_68[0] = 1;
    local_58 = local_58 & 0xffffffffffffff00;
    if (local_90 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    local_60 = local_90;
    local_58 = CONCAT71(local_58._1_7_,1);
    FUN_00d93690();
    plVar14 = local_48;
    if (local_40 == '\0') {
      if (local_48 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    (**(code **)(*plVar1 + 0x6a8))();
    if (plVar14 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_80 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_1a8 != '\0') && (local_1b0 != 0)) {
      FUN_00d50b20();
    }
  }
  local_70 = &DAT_024c5048;
  FUN_00d50b20();
LAB_002c64d0:
  lVar12 = *(longlong *)(unaff_RDI + 0xe0);
  if (lVar12 != 0) {
    FUN_00d50b00();
  }
  iVar15 = *(int *)(lVar12 + 0xc);
  FUN_00d50b20();
  if (iVar15 == 0) {
    if (*(longlong *)(unaff_RDI + 0x148) == 0) {
      FUN_01e40eb0();
      FUN_01e40eb0();
      if ((char)local_68[0] == '\0') {
        if (local_70 != (longlong *)0x0) {
          FUN_00d50b00();
          if (((char)local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        local_68[0] = local_68[0] & 0xffffff00;
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      puVar11 = (undefined8 *)FUN_00e8fc40();
      FUN_0006daf0();
      *(undefined4 *)(puVar11 + 0x27) = 0;
      puVar11[0x2e] = 0;
      *(undefined4 *)(puVar11 + 0x2f) = 0;
      puVar11[0x30] = 0;
      *(undefined1 *)(puVar11 + 0x31) = 0;
      puVar11[0x28] = 0;
      puVar11[0x29] = 0;
      *(undefined4 *)(puVar11 + 0x2a) = 0;
      puVar11[0x2b] = 0;
      puVar11[0x2c] = 0;
      *(undefined8 *)((longlong)puVar11 + 0x165) = 0;
      *(undefined8 *)((longlong)puVar11 + 0x18c) = 0;
      *(undefined8 *)((longlong)puVar11 + 0x194) = 0;
      *(undefined8 *)((longlong)puVar11 + 0x199) = 0;
      puVar11[0x35] = 0;
      puVar11[0x36] = 0;
      puVar11[0x37] = 0;
      puVar11[0x38] = 0;
      *puVar11 = &DAT_02683800;
      puVar11[2] = &DAT_026842c8;
      puVar11[0x39] = 0;
      puVar11[0x3a] = 0;
      (*DAT_02683818)();
      puVar10 = *(undefined8 **)(unaff_RDI + 0x148);
      if (puVar10 == puVar11) {
        FUN_00d50b20();
      }
      else {
        *(undefined8 **)(unaff_RDI + 0x148) = puVar11;
        if (puVar10 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
      }
      lVar12 = DAT_026f6f70;
      plVar1 = *(longlong **)(unaff_RDI + 0x148);
      if (DAT_026f6f70 != 0) {
        FUN_00d50b00();
      }
      lVar5 = DAT_026fce80;
      local_190 = lVar12;
      local_188 = '\x01';
      if (DAT_026fce80 != 0) {
        FUN_00d50b00();
      }
      local_180 = lVar5;
      local_178 = '\x01';
      local_170 = 0;
      local_168 = '\0';
      FUN_00d31230(&local_170);
      if ((char)local_68[0] == '\0') {
        if (local_70 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_68[0] = local_68[0] & 0xffffff00;
      }
      (**(code **)(*plVar1 + 0x968))();
      if (local_70 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (((char)local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_168 != '\0') && (local_170 != 0)) {
        FUN_00d50b20();
      }
      if ((local_178 != '\0') && (local_180 != 0)) {
        FUN_00d50b20();
      }
      if ((local_188 != '\0') && (local_190 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(**(longlong **)(unaff_RDI + 0x148) + 0x9c8))();
      (**(code **)(**(longlong **)(unaff_RDI + 0x148) + 0x558))();
      plVar1 = *(longlong **)(unaff_RDI + 0x148);
      FUN_01e3f820();
      (**(code **)(*plVar1 + 0x4d0))();
      lVar12 = *(longlong *)(unaff_RDI + 0x148);
      if (lVar12 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*local_70 + 0x450))();
      if (lVar12 != 0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
  }
  else if (*(longlong *)(unaff_RDI + 0x148) != 0) {
    FUN_01e40eb0();
    if (((char)local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_70 != (longlong *)0x0) {
      (**(code **)(**(longlong **)(unaff_RDI + 0x148) + 0x478))();
    }
    if (*(longlong *)(unaff_RDI + 0x148) != 0) {
      *(undefined8 *)(unaff_RDI + 0x148) = 0;
      FUN_00d50b20();
    }
  }
  puVar10 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar10 = &DAT_02572358;
  pcVar4 = DAT_02572370;
  (*DAT_02572370)();
  puVar11 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar11 = &DAT_02572358;
  uVar16 = (*pcVar4)();
  if (plVar6 != (longlong *)0x0) {
    local_68[0] = local_68[0] & 0xffffff00;
    local_70 = (longlong *)0x0;
    local_60 = plVar6;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_58._4_4_ = 0;
    while( true ) {
      if (local_58._4_4_ != 0) {
        if (local_58._4_4_ < 1) {
          iVar15 = -local_58._4_4_;
        }
        else {
          iVar15 = (int)local_58 - local_58._4_4_;
          local_58 = CONCAT44(local_58._4_4_,iVar15);
          FUN_00d23690();
          local_50 = local_50 + local_58._4_4_;
          iVar15 = 0;
        }
        local_58 = CONCAT44(iVar15,(int)local_58);
      }
      lVar12 = (longlong)(int)local_58;
      iVar15 = (int)local_58 + 1;
      local_58 = CONCAT44(local_58._4_4_,iVar15);
      if (*(int *)((longlong)local_60 + 0xc) <= iVar15) break;
      local_70 = *(longlong **)(local_60[2] + 8 + lVar12 * 8);
      if (local_70[3] == 0) {
        if (local_70[2] != 0) {
          FUN_00d50b00();
          FUN_00d50b20();
          plVar1 = (longlong *)local_70[2];
          if (plVar1 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          local_40 = '\0';
          local_48 = plVar1;
          FUN_00d21140();
          if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar1 != (longlong *)0x0) {
            FUN_00d50b20();
          }
        }
      }
      else {
        FUN_00d50b00();
        FUN_00d50b20();
        plVar1 = (longlong *)local_70[3];
        if (plVar1 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        local_40 = '\0';
        local_48 = plVar1;
        FUN_00d21140();
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar1 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
    }
    uVar16 = FUN_002d7300();
  }
  plVar1 = *(longlong **)(unaff_RDI + 0x128);
  local_1e8 = 0;
  local_1f0 = puVar11;
  FUN_002ccab0(uVar16,&local_1f0);
  if ((char)local_68[0] == '\0') {
    if (local_70 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_68[0] = local_68[0] & 0xffffff00;
  }
  (**(code **)(*plVar1 + 0x978))();
  if (local_70 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (puVar11 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (puVar10 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (plVar6 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @002c3530 — 4070 bytes
// str: ""onLocaleChanged""
// str: ""handleRevealInFinder""
// str: ""handleCopyFilePath""
// str: ""handleCopy""
// str: ""handleCollect""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002c3530(void)

{
  int iVar1;
  
  if (DAT_02806438 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_0271db30 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026fcf28 = FUN_00018750();
          _DAT_026fcf10 = "MDProjectInsp";
          _DAT_026fcf18 = 0x160;
          _DAT_026fcf20 = FUN_002d5a20;
          _DAT_026fcf30 = 0;
          uRam00000000026fcf38 = 0;
          _DAT_026fcf40 = 0;
          _DAT_026fcfb8 = 0;
          uRam00000000026fcfc0 = 0;
          _DAT_026fcfc8 = 0;
          DAT_026fcfca = 1;
          _DAT_026fcf48 = 0;
          uRam00000000026fcf50 = 0;
          _DAT_026fcf58 = 0;
          uRam00000000026fcf60 = 0;
          _DAT_026fcf68 = 0;
          uRam00000000026fcf70 = 0;
          _DAT_026fcf78 = 0;
          uRam00000000026fcf80 = 0;
          _DAT_026fcf88 = 0;
          uRam00000000026fcf90 = 0;
          _DAT_026fcf98 = 0;
          uRam00000000026fcfa0 = 0;
          _DAT_026fcfa8 = 0;
          uRam00000000026fcfb0 = 0;
          DAT_026fcfd3 = 0;
          _DAT_026fcfcb = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028063f8 = "handleRevealInFinder";
      _DAT_02806400 = &DAT_026fcf10;
      _DAT_02806408 = 0;
      _DAT_02806410 = &DAT_026fd1a8;
      _DAT_02806418 = FUN_002d6050;
      _DAT_02806420 = FUN_002cd6f0;
      _DAT_02806428 = 0;
      uRam0000000002806430 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02806480 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_0271db30 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026fcf28 = FUN_00018750();
          _DAT_026fcf10 = "MDProjectInsp";
          _DAT_026fcf18 = 0x160;
          _DAT_026fcf20 = FUN_002d5a20;
          _DAT_026fcf30 = 0;
          uRam00000000026fcf38 = 0;
          _DAT_026fcf40 = 0;
          _DAT_026fcfb8 = 0;
          uRam00000000026fcfc0 = 0;
          _DAT_026fcfc8 = 0;
          DAT_026fcfca = 1;
          _DAT_026fcf48 = 0;
          uRam00000000026fcf50 = 0;
          _DAT_026fcf58 = 0;
          uRam00000000026fcf60 = 0;
          _DAT_026fcf68 = 0;
          uRam00000000026fcf70 = 0;
          _DAT_026fcf78 = 0;
          uRam00000000026fcf80 = 0;
          _DAT_026fcf88 = 0;
          uRam00000000026fcf90 = 0;
          _DAT_026fcf98 = 0;
          uRam00000000026fcfa0 = 0;
          _DAT_026fcfa8 = 0;
          uRam00000000026fcfb0 = 0;
          DAT_026fcfd3 = 0;
          _DAT_026fcfcb = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02806440 = "handleCopyFilePath";
      _DAT_02806448 = &DAT_026fcf10;
      _DAT_02806450 = 0;
      _DAT_02806458 = &DAT_026fd1a8;
      _DAT_02806460 = FUN_002d6050;
      _DAT_02806468 = FUN_002cdbd0;
      _DAT_02806470 = 0;
      uRam0000000002806478 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028064c8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_0271db30 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026fcf28 = FUN_00018750();
          _DAT_026fcf10 = "MDProjectInsp";
          _DAT_026fcf18 = 0x160;
          _DAT_026fcf20 = FUN_002d5a20;
          _DAT_026fcf30 = 0;
          uRam00000000026fcf38 = 0;
          _DAT_026fcf40 = 0;
          _DAT_026fcfb8 = 0;
          uRam00000000026fcfc0 = 0;
          _DAT_026fcfc8 = 0;
          DAT_026fcfca = 1;
          _DAT_026fcf48 = 0;
          uRam00000000026fcf50 = 0;
          _DAT_026fcf58 = 0;
          uRam00000000026fcf60 = 0;
          _DAT_026fcf68 = 0;
          uRam00000000026fcf70 = 0;
          _DAT_026fcf78 = 0;
          uRam00000000026fcf80 = 0;
          _DAT_026fcf88 = 0;
          uRam00000000026fcf90 = 0;
          _DAT_026fcf98 = 0;
          uRam00000000026fcfa0 = 0;
          _DAT_026fcfa8 = 0;
          uRam00000000026fcfb0 = 0;
          DAT_026fcfd3 = 0;
          _DAT_026fcfcb = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02806488 = "handleCopy";
      _DAT_02806490 = &DAT_026fcf10;
      _DAT_02806498 = 0;
      _DAT_028064a0 = &DAT_026fd1a8;
      _DAT_028064a8 = FUN_002d6050;
      _DAT_028064b0 = FUN_002ce2a0;
      _DAT_028064b8 = 0;
      uRam00000000028064c0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02806510 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_0271db30 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026fcf28 = FUN_00018750();
          _DAT_026fcf10 = "MDProjectInsp";
          _DAT_026fcf18 = 0x160;
          _DAT_026fcf20 = FUN_002d5a20;
          _DAT_026fcf30 = 0;
          uRam00000000026fcf38 = 0;
          _DAT_026fcf40 = 0;
          _DAT_026fcfb8 = 0;
          uRam00000000026fcfc0 = 0;
          _DAT_026fcfc8 = 0;
          DAT_026fcfca = 1;
          _DAT_026fcf48 = 0;
          uRam00000000026fcf50 = 0;
          _DAT_026fcf58 = 0;
          uRam00000000026fcf60 = 0;
          _DAT_026fcf68 = 0;
          uRam00000000026fcf70 = 0;
          _DAT_026fcf78 = 0;
          uRam00000000026fcf80 = 0;
          _DAT_026fcf88 = 0;
          uRam00000000026fcf90 = 0;
          _DAT_026fcf98 = 0;
          uRam00000000026fcfa0 = 0;
          _DAT_026fcfa8 = 0;
          uRam00000000026fcfb0 = 0;
          DAT_026fcfd3 = 0;
          _DAT_026fcfcb = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028064d0 = "handleCollect";
      _DAT_028064d8 = &DAT_026fcf10;
      _DAT_028064e0 = 0;
      _DAT_028064e8 = &DAT_026fd1a8;
      _DAT_028064f0 = FUN_002d6050;
      _DAT_028064f8 = FUN_002ce760;
      _DAT_02806500 = 0;
      uRam0000000002806508 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02806558 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_0271db30 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026fcf28 = FUN_00018750();
          _DAT_026fcf10 = "MDProjectInsp";
          _DAT_026fcf18 = 0x160;
          _DAT_026fcf20 = FUN_002d5a20;
          _DAT_026fcf30 = 0;
          uRam00000000026fcf38 = 0;
          _DAT_026fcf40 = 0;
          _DAT_026fcfb8 = 0;
          uRam00000000026fcfc0 = 0;
          _DAT_026fcfc8 = 0;
          DAT_026fcfca = 1;
          _DAT_026fcf48 = 0;
          uRam00000000026fcf50 = 0;
          _DAT_026fcf58 = 0;
          uRam00000000026fcf60 = 0;
          _DAT_026fcf68 = 0;
          uRam00000000026fcf70 = 0;
          _DAT_026fcf78 = 0;
          uRam00000000026fcf80 = 0;
          _DAT_026fcf88 = 0;
          uRam00000000026fcf90 = 0;
          _DAT_026fcf98 = 0;
          uRam00000000026fcfa0 = 0;
          _DAT_026fcfa8 = 0;
          uRam00000000026fcfb0 = 0;
          DAT_026fcfd3 = 0;
          _DAT_026fcfcb = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02806518 = "handleFind";
      _DAT_02806520 = &DAT_026fcf10;
      _DAT_02806528 = 0;
      _DAT_02806530 = &DAT_026fd1a8;
      _DAT_02806538 = FUN_002d6050;
      _DAT_02806540 = FUN_002cf230;
      _DAT_02806548 = 0;
      uRam0000000002806550 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028065a0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_0271db30 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026fcf28 = FUN_00018750();
          _DAT_026fcf10 = "MDProjectInsp";
          _DAT_026fcf18 = 0x160;
          _DAT_026fcf20 = FUN_002d5a20;
          _DAT_026fcf30 = 0;
          uRam00000000026fcf38 = 0;
          _DAT_026fcf40 = 0;
          _DAT_026fcfb8 = 0;
          uRam00000000026fcfc0 = 0;
          _DAT_026fcfc8 = 0;
          DAT_026fcfca = 1;
          _DAT_026fcf48 = 0;
          uRam00000000026fcf50 = 0;
          _DAT_026fcf58 = 0;
          uRam00000000026fcf60 = 0;
          _DAT_026fcf68 = 0;
          uRam00000000026fcf70 = 0;
          _DAT_026fcf78 = 0;
          uRam00000000026fcf80 = 0;
          _DAT_026fcf88 = 0;
          uRam00000000026fcf90 = 0;
          _DAT_026fcf98 = 0;
          uRam00000000026fcfa0 = 0;
          _DAT_026fcfa8 = 0;
          uRam00000000026fcfb0 = 0;
          DAT_026fcfd3 = 0;
          _DAT_026fcfcb = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02806560 = "handleDeleteUnused";
      _DAT_02806568 = &DAT_026fcf10;
      _DAT_02806570 = 0;
      _DAT_02806578 = &DAT_026fd1a8;
      _DAT_02806580 = FUN_002d6050;
      _DAT_02806588 = FUN_002d22e0;
      _DAT_02806590 = 0;
      uRam0000000002806598 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028065e8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_0271db30 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026fcf28 = FUN_00018750();
          _DAT_026fcf10 = "MDProjectInsp";
          _DAT_026fcf18 = 0x160;
          _DAT_026fcf20 = FUN_002d5a20;
          _DAT_026fcf30 = 0;
          uRam00000000026fcf38 = 0;
          _DAT_026fcf40 = 0;
          _DAT_026fcfb8 = 0;
          uRam00000000026fcfc0 = 0;
          _DAT_026fcfc8 = 0;
          DAT_026fcfca = 1;
          _DAT_026fcf48 = 0;
          uRam00000000026fcf50 = 0;
          _DAT_026fcf58 = 0;
          uRam00000000026fcf60 = 0;
          _DAT_026fcf68 = 0;
          uRam00000000026fcf70 = 0;
          _DAT_026fcf78 = 0;
          uRam00000000026fcf80 = 0;
          _DAT_026fcf88 = 0;
          uRam00000000026fcf90 = 0;
          _DAT_026fcf98 = 0;
          uRam00000000026fcfa0 = 0;
          _DAT_026fcfa8 = 0;
          uRam00000000026fcfb0 = 0;
          DAT_026fcfd3 = 0;
          _DAT_026fcfcb = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028065a8 = "handleSortByName";
      _DAT_028065b0 = &DAT_026fcf10;
      _DAT_028065b8 = 0;
      _DAT_028065c0 = &DAT_026fd1a8;
      _DAT_028065c8 = FUN_002d6050;
      _DAT_028065d0 = FUN_002d21a0;
      _DAT_028065d8 = 0;
      uRam00000000028065e0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02806630 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_0271db30 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026fcf28 = FUN_00018750();
          _DAT_026fcf10 = "MDProjectInsp";
          _DAT_026fcf18 = 0x160;
          _DAT_026fcf20 = FUN_002d5a20;
          _DAT_026fcf30 = 0;
          uRam00000000026fcf38 = 0;
          _DAT_026fcf40 = 0;
          _DAT_026fcfb8 = 0;
          uRam00000000026fcfc0 = 0;
          _DAT_026fcfc8 = 0;
          DAT_026fcfca = 1;
          _DAT_026fcf48 = 0;
          uRam00000000026fcf50 = 0;
          _DAT_026fcf58 = 0;
          uRam00000000026fcf60 = 0;
          _DAT_026fcf68 = 0;
          uRam00000000026fcf70 = 0;
          _DAT_026fcf78 = 0;
          uRam00000000026fcf80 = 0;
          _DAT_026fcf88 = 0;
          uRam00000000026fcf90 = 0;
          _DAT_026fcf98 = 0;
          uRam00000000026fcfa0 = 0;
          _DAT_026fcfa8 = 0;
          uRam00000000026fcfb0 = 0;
          DAT_026fcfd3 = 0;
          _DAT_026fcfcb = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028065f0 = "handleSortByStatus";
      _DAT_028065f8 = &DAT_026fcf10;
      _DAT_02806600 = 0;
      _DAT_02806608 = &DAT_026fd1a8;
      _DAT_02806610 = FUN_002d6050;
      _DAT_02806618 = FUN_002d2240;
      _DAT_02806620 = 0;
      uRam0000000002806628 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02806678 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_0271db30 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026fcf28 = FUN_00018750();
          _DAT_026fcf10 = "MDProjectInsp";
          _DAT_026fcf18 = 0x160;
          _DAT_026fcf20 = FUN_002d5a20;
          _DAT_026fcf30 = 0;
          uRam00000000026fcf38 = 0;
          _DAT_026fcf40 = 0;
          _DAT_026fcfb8 = 0;
          uRam00000000026fcfc0 = 0;
          _DAT_026fcfc8 = 0;
          DAT_026fcfca = 1;
          _DAT_026fcf48 = 0;
          uRam00000000026fcf50 = 0;
          _DAT_026fcf58 = 0;
          uRam00000000026fcf60 = 0;
          _DAT_026fcf68 = 0;
          uRam00000000026fcf70 = 0;
          _DAT_026fcf78 = 0;
          uRam00000000026fcf80 = 0;
          _DAT_026fcf88 = 0;
          uRam00000000026fcf90 = 0;
          _DAT_026fcf98 = 0;
          uRam00000000026fcfa0 = 0;
          _DAT_026fcfa8 = 0;
          uRam00000000026fcfb0 = 0;
          DAT_026fcfd3 = 0;
          _DAT_026fcfcb = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02806638 = "handleSetProjectDir2";
      _DAT_02806640 = &DAT_026fcf10;
      _DAT_02806648 = 0;
      _DAT_02806650 = &DAT_026fd1a8;
      _DAT_02806658 = FUN_002d6050;
      _DAT_02806660 = FUN_002d1180;
      _DAT_02806668 = 0;
      uRam0000000002806670 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028066c0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_0271db30 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026fcf28 = FUN_00018750();
          _DAT_026fcf10 = "MDProjectInsp";
          _DAT_026fcf18 = 0x160;
          _DAT_026fcf20 = FUN_002d5a20;
          _DAT_026fcf30 = 0;
          uRam00000000026fcf38 = 0;
          _DAT_026fcf40 = 0;
          _DAT_026fcfb8 = 0;
          uRam00000000026fcfc0 = 0;
          _DAT_026fcfc8 = 0;
          DAT_026fcfca = 1;
          _DAT_026fcf48 = 0;
          uRam00000000026fcf50 = 0;
          _DAT_026fcf58 = 0;
          uRam00000000026fcf60 = 0;
          _DAT_026fcf68 = 0;
          uRam00000000026fcf70 = 0;
          _DAT_026fcf78 = 0;
          uRam00000000026fcf80 = 0;
          _DAT_026fcf88 = 0;
          uRam00000000026fcf90 = 0;
          _DAT_026fcf98 = 0;
          uRam00000000026fcfa0 = 0;
          _DAT_026fcfa8 = 0;
          uRam00000000026fcfb0 = 0;
          DAT_026fcfd3 = 0;
          _DAT_026fcfcb = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02806680 = "handleAudioSourcesChanged";
      _DAT_02806688 = &DAT_026fcf10;
      _DAT_02806690 = 0;
      _DAT_02806698 = &DAT_026fd1ac;
      _DAT_028066a0 = FUN_002d60e0;
      _DAT_028066a8 = FUN_002d54a0;
      _DAT_028066b0 = 0;
      uRam00000000028066b8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02806708 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_0271db30 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026fcf28 = FUN_00018750();
          _DAT_026fcf10 = "MDProjectInsp";
          _DAT_026fcf18 = 0x160;
          _DAT_026fcf20 = FUN_002d5a20;
          _DAT_026fcf30 = 0;
          uRam00000000026fcf38 = 0;
          _DAT_026fcf40 = 0;
          _DAT_026fcfb8 = 0;
          uRam00000000026fcfc0 = 0;
          _DAT_026fcfc8 = 0;
          DAT_026fcfca = 1;
          _DAT_026fcf48 = 0;
          uRam00000000026fcf50 = 0;
          _DAT_026fcf58 = 0;
          uRam00000000026fcf60 = 0;
          _DAT_026fcf68 = 0;
          uRam00000000026fcf70 = 0;
          _DAT_026fcf78 = 0;
          uRam00000000026fcf80 = 0;
          _DAT_026fcf88 = 0;
          uRam00000000026fcf90 = 0;
          _DAT_026fcf98 = 0;
          uRam00000000026fcfa0 = 0;
          _DAT_026fcfa8 = 0;
          uRam00000000026fcfb0 = 0;
          DAT_026fcfd3 = 0;
          _DAT_026fcfcb = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028066c8 = "onLocaleChanged";
      _DAT_028066d0 = &DAT_026fcf10;
      _DAT_028066d8 = 0;
      _DAT_028066e0 = &DAT_026fd1ac;
      _DAT_028066e8 = FUN_002d60e0;
      _DAT_028066f0 = FUN_002c8420;
      _DAT_028066f8 = 0;
      uRam0000000002806700 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}




// ============================================================
// @002c48f0 — 1574 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x002c4d5e) */
/* WARNING: Removing unreachable block (ram,0x002c4d6b) */
/* WARNING: Removing unreachable block (ram,0x002c4d90) */
/* WARNING: Removing unreachable block (ram,0x002c4d9d) */

void FUN_002c48f0(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined4 uVar5;
  longlong unaff_RDI;
  longlong local_e0;
  char local_d8;
  longlong *local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong *local_b0;
  char local_a8;
  longlong *local_a0;
  char local_98;
  longlong local_70;
  char local_68;
  longlong *local_40;
  char local_38;
  
  FUN_01e534b0();
  (**(code **)(*(longlong *)(unaff_RDI + 0xd8) + 0x10))();
  FUN_00d50b00();
  FUN_01d25fa0();
  if ((longlong *)(unaff_RDI + 0xd8) != (longlong *)0x0) {
    (**(code **)(*(longlong *)(unaff_RDI + 0xd8) + 0x10))();
    FUN_00d50b20();
  }
  lVar2 = DAT_026fce28;
  if (DAT_026fce28 != 0) {
    FUN_00d50b00();
  }
  lVar3 = DAT_026fce30;
  if (DAT_026fce30 != 0) {
    FUN_00d50b00();
  }
  local_e0 = lVar3;
  local_d8 = '\x01';
  FUN_01d61e70(param_1,&local_e0);
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0x100) + 0x4d8))();
  local_d0 = local_40;
  local_c8 = '\0';
  (**(code **)(**(longlong **)(unaff_RDI + 0x100) + 0x6e8))();
  if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0x100) + 0x7b8))();
  FUN_01d9aec0();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0x100) + 0x7b8))();
  cVar4 = FUN_01d95200();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar4 != '\0') {
    (**(code **)(**(longlong **)(unaff_RDI + 0x100) + 0x7b8))();
    FUN_01d97e80();
    FUN_01d92440();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0x100) + 0x7b8))();
  cVar4 = FUN_01d951e0();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar4 != '\0') {
    (**(code **)(**(longlong **)(unaff_RDI + 0x100) + 0x7b8))();
    FUN_01d97ec0();
    FUN_01d92440();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0x100) + 0x7b0))();
  FUN_01cf4060();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0x100) + 0x7b0))();
  FUN_01cf4120();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01f27fe0();
  (**(code **)(*local_40 + 0x450))();
  FUN_002c54d0();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01f27fe0();
  cVar4 = (**(code **)(*local_40 + 0x450))();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_026fce38;
  if (cVar4 != '\0') {
    if (DAT_026fce38 != 0) {
      FUN_00d50b00();
    }
    local_c0 = lVar2;
    local_b8 = '\x01';
    FUN_01d5e6e0(param_1,&local_c0);
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 != (longlong *)0x0) {
      local_b0 = local_40;
      local_a8 = '\0';
      uVar5 = FUN_01d5e2e0();
      if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d5b240(param_1,uVar5);
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01d5dde0();
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d5b240(param_1,uVar5);
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01d5dde0();
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
  }
  local_a0 = local_40;
  local_98 = '\0';
  FUN_01d778e0();
  if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar1 = *(longlong **)(unaff_RDI + 0x150);
  FUN_00d50b00();
  (**(code **)(*plVar1 + 0xa20))();
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  FUN_002c59e0();
  if (local_40 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @00643690 — 1060 bytes
// str: ""MDProjectInsp""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00643690(void)

{
  bool bVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong unaff_RDI;
  longlong **pplVar6;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar7;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  longlong *local_30;
  char local_28;
  
  FUN_01f27fe0();
  cVar3 = (**(code **)(*local_30 + 0x450))();
  if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar3 == '\0') {
    if (*(longlong *)(unaff_RDI + 0xc0) == 0) {
      return;
    }
    iVar4 = FUN_00643ea0();
    uVar7 = extraout_XMM0_Da_00;
    lVar2 = DAT_026fce40;
    if (iVar4 == -1) {
      FUN_006447a0();
      uVar7 = FUN_00643150();
      lVar2 = DAT_026fce40;
    }
    DAT_026fce40 = lVar2;
    if (lVar2 != 0) {
      uVar7 = FUN_00d50b00();
    }
    local_38 = '\x01';
    pplVar6 = &local_30;
    local_40 = lVar2;
    FUN_0009d910(uVar7,&local_40);
    plVar5 = local_30;
    if ((DAT_0271db30 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
      _DAT_026fcf28 = FUN_00018750();
      _DAT_026fcf10 = "MDProjectInsp";
      _DAT_026fcf18 = 0x160;
      _DAT_026fcf20 = FUN_002d5a20;
      _DAT_026fcf30 = 0;
      uRam00000000026fcf38 = 0;
      _DAT_026fcf40 = 0;
      _DAT_026fcfb8 = 0;
      uRam00000000026fcfc0 = 0;
      _DAT_026fcfc8 = 0;
      DAT_026fcfca = 1;
      _DAT_026fcf48 = 0;
      uRam00000000026fcf50 = 0;
      _DAT_026fcf58 = 0;
      uRam00000000026fcf60 = 0;
      _DAT_026fcf68 = 0;
      uRam00000000026fcf70 = 0;
      _DAT_026fcf78 = 0;
      uRam00000000026fcf80 = 0;
      _DAT_026fcf88 = 0;
      uRam00000000026fcf90 = 0;
      _DAT_026fcf98 = 0;
      uRam00000000026fcfa0 = 0;
      _DAT_026fcfa8 = 0;
      uRam00000000026fcfb0 = 0;
      DAT_026fcfd3 = 0;
      _DAT_026fcfcb = 0;
      ___cxa_guard_release();
    }
    if (plVar5 == (longlong *)0x0) {
LAB_0064385f:
      pplVar6 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar5 + 0x360))();
      cVar3 = FUN_00e85ea0();
      if (cVar3 == '\0') goto LAB_0064385f;
    }
    plVar5 = *pplVar6;
    if (plVar5 == (longlong *)0x0) {
      bVar1 = false;
      plVar5 = (longlong *)0x0;
    }
    else {
      if (*(char *)(pplVar6 + 1) == '\0') {
        FUN_00d50b00();
      }
      else {
        *(undefined1 *)(pplVar6 + 1) = 0;
      }
      bVar1 = true;
    }
    if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    goto LAB_006438fe;
  }
  if (*(longlong *)(unaff_RDI + 200) == 0) {
    return;
  }
  iVar4 = FUN_00644650();
  uVar7 = extraout_XMM0_Da;
  lVar2 = DAT_026fce40;
  if (iVar4 == -1) {
    FUN_006449a0();
    uVar7 = FUN_00643150();
    lVar2 = DAT_026fce40;
  }
  DAT_026fce40 = lVar2;
  if (lVar2 != 0) {
    uVar7 = FUN_00d50b00();
  }
  local_48 = '\x01';
  pplVar6 = &local_30;
  local_50 = lVar2;
  FUN_0009d910(uVar7,&local_50);
  plVar5 = local_30;
  if ((DAT_0271db30 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    _DAT_026fcf28 = FUN_00018750();
    _DAT_026fcf10 = "MDProjectInsp";
    _DAT_026fcf18 = 0x160;
    _DAT_026fcf20 = FUN_002d5a20;
    _DAT_026fcf30 = 0;
    uRam00000000026fcf38 = 0;
    _DAT_026fcf40 = 0;
    _DAT_026fcfb8 = 0;
    uRam00000000026fcfc0 = 0;
    _DAT_026fcfc8 = 0;
    DAT_026fcfca = 1;
    _DAT_026fcf48 = 0;
    uRam00000000026fcf50 = 0;
    _DAT_026fcf58 = 0;
    uRam00000000026fcf60 = 0;
    _DAT_026fcf68 = 0;
    uRam00000000026fcf70 = 0;
    _DAT_026fcf78 = 0;
    uRam00000000026fcf80 = 0;
    _DAT_026fcf88 = 0;
    uRam00000000026fcf90 = 0;
    _DAT_026fcf98 = 0;
    uRam00000000026fcfa0 = 0;
    _DAT_026fcfa8 = 0;
    uRam00000000026fcfb0 = 0;
    DAT_026fcfd3 = 0;
    _DAT_026fcfcb = 0;
    ___cxa_guard_release();
  }
  if (plVar5 == (longlong *)0x0) {
LAB_006437b9:
    pplVar6 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar5 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_006437b9;
  }
  plVar5 = *pplVar6;
  if (plVar5 == (longlong *)0x0) {
    bVar1 = false;
    plVar5 = (longlong *)0x0;
  }
  else {
    if (*(char *)(pplVar6 + 1) == '\0') {
      FUN_00d50b00();
    }
    else {
      *(undefined1 *)(pplVar6 + 1) = 0;
    }
    bVar1 = true;
  }
  if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
LAB_006438fe:
  if ((plVar5 != (longlong *)0x0) && (FUN_002d2180(), bVar1)) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @00644ba0 — 916 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00644be0) */
/* WARNING: Removing unreachable block (ram,0x00644be9) */

void FUN_00644ba0(void)

{
  longlong *plVar1;
  char cVar2;
  int unaff_ESI;
  longlong unaff_RDI;
  longlong *local_40;
  char local_38;
  
  FUN_00637870();
  if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  FUN_01e54250();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_40 != (longlong *)0x0) {
    FUN_01e53c20();
    (**(code **)(*local_40 + 0x478))();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  cVar2 = FUN_0009acd0();
  if (cVar2 == '\0') {
    FUN_006e24f0();
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_0009b0b0();
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_006e2de0();
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_0009f2a0();
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (unaff_ESI == 2) {
    plVar1 = *(longlong **)(unaff_RDI + 0xe0);
    FUN_01e53c20();
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    (**(code **)(*plVar1 + 0x450))();
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (unaff_ESI == 1) {
    plVar1 = *(longlong **)(unaff_RDI + 0xd0);
    FUN_01e53c20();
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    (**(code **)(*plVar1 + 0x450))();
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (unaff_ESI == 0) {
    plVar1 = *(longlong **)(unaff_RDI + 0xb8);
    FUN_01e53c20();
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    (**(code **)(*plVar1 + 0x450))();
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (local_40 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @002c54d0 — 808 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x002c5713) */
/* WARNING: Removing unreachable block (ram,0x002c571c) */
/* WARNING: Removing unreachable block (ram,0x002c5639) */
/* WARNING: Removing unreachable block (ram,0x002c5647) */
/* WARNING: Removing unreachable block (ram,0x002c5650) */
/* WARNING: Removing unreachable block (ram,0x002c557b) */
/* WARNING: Removing unreachable block (ram,0x002c55a8) */
/* WARNING: Removing unreachable block (ram,0x002c55b6) */
/* WARNING: Removing unreachable block (ram,0x002c55bf) */
/* WARNING: Removing unreachable block (ram,0x002c5690) */
/* WARNING: Removing unreachable block (ram,0x002c57a0) */
/* WARNING: Removing unreachable block (ram,0x002c57a9) */

void FUN_002c54d0(void)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  int unaff_ESI;
  longlong unaff_RDI;
  float fVar11;
  undefined1 auVar6 [16];
  undefined4 uVar12;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar13 [16];
  longlong *local_30;
  char local_28;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  
  if (unaff_ESI == 0) {
    FUN_01e40eb0();
    if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_30 != (longlong *)0x0) {
      (**(code **)(**(longlong **)(unaff_RDI + 0x118) + 0x478))();
      if (*(longlong **)(unaff_RDI + 0x100) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(unaff_RDI + 0x100) + 0x7b8))();
        if ((local_28 == '\0') && (local_30 != (longlong *)0x0)) {
          FUN_00d50b00();
        }
        auVar9._0_8_ = (**(code **)(*local_30 + 0x4d8))();
        auVar9._8_8_ = extraout_XMM0_Qb_01;
        fVar11 = (float)((ulonglong)auVar9._0_8_ >> 0x20);
        uVar12 = (undefined4)((ulonglong)extraout_XMM0_Qb_01 >> 0x20);
        auVar7._4_4_ = fVar11;
        auVar7._0_4_ = fVar11 + DAT_023941fc;
        auVar7._8_4_ = uVar12;
        auVar7._12_4_ = uVar12;
        auVar7 = insertps(auVar9,auVar7,0x10);
        auVar13._4_4_ = in_XMM1._4_4_;
        auVar13._0_4_ = in_XMM1._4_4_ + DAT_023942a8;
        auVar13._8_4_ = in_XMM1._12_4_;
        auVar13._12_4_ = in_XMM1._12_4_;
        auVar13 = insertps(in_XMM1,auVar13,0x10);
        (**(code **)(*local_30 + 0x4d0))(auVar7._0_8_,auVar13._0_8_);
        FUN_00d50b20();
      }
      if (*(longlong *)(unaff_RDI + 0x150) != 0) {
        (**(code **)(**(longlong **)(unaff_RDI + 0x100) + 0x7b8))();
        if ((local_28 == '\0') && (local_30 != (longlong *)0x0)) {
          FUN_00d50b00();
        }
        auVar10._0_8_ = (**(code **)(**(longlong **)(unaff_RDI + 0x150) + 0x4d8))();
        auVar10._8_8_ = extraout_XMM0_Qb_02;
        fVar11 = (float)((ulonglong)auVar10._0_8_ >> 0x20);
        uVar12 = (undefined4)((ulonglong)extraout_XMM0_Qb_02 >> 0x20);
        auVar4._4_4_ = fVar11;
        auVar4._0_4_ = fVar11 + DAT_023941fc;
        auVar4._8_4_ = uVar12;
        auVar4._12_4_ = uVar12;
        auVar7 = insertps(auVar10,auVar4,0x10);
        (**(code **)(**(longlong **)(unaff_RDI + 0x150) + 0x4d0))(auVar7._0_8_);
        if (local_30 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
    }
  }
  else {
    FUN_01e40eb0();
    if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_30 == (longlong *)0x0) {
      FUN_01e53c20();
      lVar1 = *(longlong *)(unaff_RDI + 0x118);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(MACH_HEADER._0_8_ + 0x450))();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if (*(longlong **)(unaff_RDI + 0x100) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(unaff_RDI + 0x100) + 0x7b8))();
        auVar6._0_8_ = (**(code **)(MACH_HEADER._0_8_ + 0x4d8))();
        auVar6._8_8_ = extraout_XMM0_Qb;
        fVar11 = (float)((ulonglong)auVar6._0_8_ >> 0x20);
        uVar12 = (undefined4)((ulonglong)extraout_XMM0_Qb >> 0x20);
        auVar2._4_4_ = fVar11;
        auVar2._0_4_ = fVar11 + DAT_023942a8;
        auVar2._8_4_ = uVar12;
        auVar2._12_4_ = uVar12;
        auVar7 = insertps(auVar6,auVar2,0x10);
        auVar5._4_4_ = in_XMM1._4_4_;
        auVar5._0_4_ = in_XMM1._4_4_ + DAT_023941fc;
        auVar5._8_4_ = in_XMM1._12_4_;
        auVar5._12_4_ = in_XMM1._12_4_;
        auVar13 = insertps(in_XMM1,auVar5,0x10);
        (**(code **)(MACH_HEADER._0_8_ + 0x4d0))(auVar7._0_8_,auVar13._0_8_);
        FUN_00d50b20();
      }
      if (*(longlong *)(unaff_RDI + 0x150) != 0) {
        (**(code **)(**(longlong **)(unaff_RDI + 0x100) + 0x7b8))();
        auVar8._0_8_ = (**(code **)(**(longlong **)(unaff_RDI + 0x150) + 0x4d8))();
        auVar8._8_8_ = extraout_XMM0_Qb_00;
        fVar11 = (float)((ulonglong)auVar8._0_8_ >> 0x20);
        uVar12 = (undefined4)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
        auVar3._4_4_ = fVar11;
        auVar3._0_4_ = fVar11 + DAT_023942a8;
        auVar3._8_4_ = uVar12;
        auVar3._12_4_ = uVar12;
        auVar7 = insertps(auVar8,auVar3,0x10);
        (**(code **)(**(longlong **)(unaff_RDI + 0x150) + 0x4d0))(auVar7._0_8_);
      }
    }
  }
  return;
}




// ============================================================
// @00643ea0 — 759 bytes
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00643ea0(pthread_key_t param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  void *pvVar6;
  longlong *unaff_RDI;
  undefined8 uVar7;
  longlong *local_78;
  char local_70;
  longlong local_58;
  char local_50;
  longlong local_48;
  longlong local_40;
  char local_38;
  
  FUN_00637870();
  lVar2 = local_40;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_00643ef2;
    }
  }
  else if (local_40 != 0) {
LAB_00643ef2:
    iVar5 = FUN_006e18e0();
    if (iVar5 == -1) {
      iVar5 = -1;
    }
    else {
      FUN_01f27fe0();
      cVar3 = (**(code **)(*local_78 + 0x450))();
      lVar1 = DAT_02708e90;
      if (cVar3 == '\0') {
        local_48 = lVar2;
        if (DAT_02708e90 != 0) {
          FUN_00d50b00();
        }
        FUN_00e7d6f0();
        param_1 = 0xaaaaaaab;
        uVar7 = FUN_0071a120();
        lVar2 = local_40;
        if ((((local_38 == '\0') && (local_40 != 0)) && (uVar7 = FUN_00d50b00(), local_38 != '\0'))
           && (local_40 != 0)) {
          uVar7 = FUN_00d50b20();
        }
        bVar4 = (byte)lVar2;
        local_58 = lVar1;
        local_50 = '\0';
        FUN_000175c0(uVar7,&local_58);
        lVar2 = local_40;
        if (local_38 == '\0') {
          if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38 = '\0';
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        if (lVar2 != 0) {
          local_38 = '\0';
          local_40 = lVar2;
          bVar4 = FUN_00c70bc0();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
        FUN_00d50b20();
        bVar4 = lVar2 != 0 & bVar4;
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
      }
      else {
        bVar4 = 0;
      }
      if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (bVar4 != 0) {
        (**(code **)(*unaff_RDI + 0x5e8))();
        if (local_40 == 0) {
          cVar3 = '\0';
        }
        else {
          (**(code **)(*unaff_RDI + 0x5e8))();
          pvVar6 = _pthread_getspecific(param_1);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar3 = FUN_004a1190();
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (cVar3 != '\0') {
          iVar5 = -1;
        }
      }
    }
    FUN_00d50b20();
    return iVar5;
  }
  return -1;
}




// ============================================================
// @006451f0 — 745 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00645230) */
/* WARNING: Removing unreachable block (ram,0x00645239) */

void FUN_006451f0(undefined8 param_1)

{
  longlong *plVar1;
  char cVar2;
  int unaff_ESI;
  longlong unaff_RDI;
  longlong *local_40;
  char local_38;
  
  FUN_00637870();
  if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  if (*(longlong *)(unaff_RDI + 0xc0) != 0) {
    FUN_01e54250();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_40 != (longlong *)0x0) {
      FUN_01e53c20();
      (**(code **)(*local_40 + 0x478))();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    cVar2 = FUN_0009acd0();
    if (cVar2 == '\0') {
      FUN_006e22c0();
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_0009b0b0();
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_006e2ae0();
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_0009f2a0();
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    if (unaff_ESI == 2) {
      plVar1 = *(longlong **)(unaff_RDI + 0xe0);
      FUN_01e53c20();
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      (**(code **)(*plVar1 + 0x9e0))(param_1,0);
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else if (unaff_ESI == 0) {
      plVar1 = *(longlong **)(unaff_RDI + 0xb8);
      FUN_01e53c20();
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      (**(code **)(*plVar1 + 0x9e0))(param_1,0);
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  if (local_40 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}



