// Function: FUN_002c59e0
// Address: 002c59e0
// Size: 4475 bytes
// Class: MDProjectInsp


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


