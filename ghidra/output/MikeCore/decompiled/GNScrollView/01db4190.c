// Function: FUN_01db4190
// Address: 01db4190
// Size: 2036 bytes
// Class: GNScrollView


/* WARNING: Removing unreachable block (ram,0x01db4956) */
/* WARNING: Removing unreachable block (ram,0x01db495f) */
/* WARNING: Removing unreachable block (ram,0x01db45ea) */
/* WARNING: Removing unreachable block (ram,0x01db45f3) */
/* WARNING: Removing unreachable block (ram,0x01db454b) */
/* WARNING: Removing unreachable block (ram,0x01db4553) */
/* WARNING: Removing unreachable block (ram,0x01db4558) */
/* WARNING: Removing unreachable block (ram,0x01db4582) */
/* WARNING: Removing unreachable block (ram,0x01db4360) */
/* WARNING: Removing unreachable block (ram,0x01db4369) */
/* WARNING: Removing unreachable block (ram,0x01db4494) */
/* WARNING: Removing unreachable block (ram,0x01db449d) */
/* WARNING: Removing unreachable block (ram,0x01db47e8) */
/* WARNING: Removing unreachable block (ram,0x01db47f1) */
/* WARNING: Removing unreachable block (ram,0x01db48fa) */
/* WARNING: Removing unreachable block (ram,0x01db4903) */
/* WARNING: Removing unreachable block (ram,0x01db4984) */
/* WARNING: Removing unreachable block (ram,0x01db498d) */
/* WARNING: Removing unreachable block (ram,0x01db4812) */
/* WARNING: Removing unreachable block (ram,0x01db481b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01db4190(void)

{
  dword dVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar9;
  bool bVar10;
  float fVar11;
  undefined8 uVar12;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  longlong local_128;
  char local_120;
  float local_f8;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong *local_88;
  char local_80;
  longlong *local_78;
  char local_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 *local_58;
  longlong local_50;
  longlong local_40;
  char local_38;
  
  iVar6 = FUN_01d3a5a0();
  if ((iVar6 == 1) && (iVar6 = FUN_01d3b630(), iVar6 == 1)) {
    FUN_01d3abf0();
    local_68 = FUN_01e466c0();
    fVar11 = (float)local_68;
    if ((char)unaff_RDI[0x27] == '\0') {
      fVar11 = (float)((ulonglong)local_68 >> 0x20);
    }
    uStack_60 = extraout_XMM0_Dc;
    uStack_5c = extraout_XMM0_Dd;
    FUN_01db2340();
    if (local_40 == 0) {
      local_50 = 0;
      dVar1 = MACH_HEADER.filetype;
    }
    else {
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
      dVar1 = *(dword *)(local_40 + 0xc);
      local_50 = local_40;
    }
    if ((int)dVar1 < 2) goto LAB_01db4229;
    lVar9 = 0;
    lVar8 = 0;
    do {
      lVar2 = *(longlong *)(*(longlong *)(local_50 + 0x10) + lVar9 * 8);
      if (lVar8 != lVar2) {
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        bVar10 = lVar8 != 0;
        lVar8 = lVar2;
        if (bVar10) {
          FUN_00d50b20();
        }
      }
      local_f8 = (float)*(undefined8 *)(lVar8 + 0x28);
      fVar14 = (float)((ulonglong)*(undefined8 *)(lVar8 + 0x28) >> 0x20);
      uVar16 = 0;
      uVar17 = 0;
      cVar5 = FUN_00d05410((float)local_68,local_f8,*(undefined8 *)(lVar8 + 0x30));
      if (cVar5 != '\0') {
        puVar7 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar7 = &DAT_02572358;
        (*DAT_02572370)();
        local_58 = puVar7;
        FUN_00d21140();
        plVar3 = *(longlong **)(lVar8 + 0x20);
        if (plVar3 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        (**(code **)(*plVar3 + 0x4d8))();
        bVar10 = (char)unaff_RDI[0x27] == '\0';
        local_68._0_4_ = local_f8;
        uStack_60 = uVar16;
        if (bVar10) {
          local_68._0_4_ = fVar14;
          uStack_60 = uVar17;
        }
        fVar13 = (float)*(undefined8 *)(lVar8 + 0x10);
        if (bVar10) {
          fVar13 = (float)((ulonglong)*(undefined8 *)(lVar8 + 0x10) >> 0x20);
        }
        local_68._4_4_ = fVar14;
        uStack_5c = uVar17;
        FUN_00d50b20();
        lVar2 = *(longlong *)(*(longlong *)(local_50 + 0x10) + 8 + lVar9 * 8);
        if (lVar8 == lVar2) {
          plVar3 = *(longlong **)(lVar8 + 0x20);
        }
        else {
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          FUN_00d50b20();
          plVar3 = *(longlong **)(lVar2 + 0x20);
          lVar8 = lVar2;
        }
        if (plVar3 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        (**(code **)(*plVar3 + 0x4d8))();
        bVar10 = (char)unaff_RDI[0x27] == '\0';
        if (bVar10) {
          local_f8 = fVar14;
        }
        fVar14 = (float)*(undefined8 *)(lVar8 + 0x10);
        if (bVar10) {
          fVar14 = (float)((ulonglong)*(undefined8 *)(lVar8 + 0x10) >> 0x20);
        }
        FUN_00d50b20();
        lVar9 = *(longlong *)(*(longlong *)(local_50 + 0x10) + 8 + lVar9 * 8);
        if (lVar9 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar9 != 0) {
          FUN_00d50b20();
        }
        fVar13 = (fVar11 - (float)local_68) + fVar13;
        fVar14 = (local_f8 + fVar11) - fVar14;
        bVar10 = true;
        goto LAB_01db451e;
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < (longlong)*(int *)(local_50 + 0xc) + -1);
  }
  else {
    local_50 = 0;
LAB_01db4229:
    lVar8 = 0;
  }
  local_98 = *unaff_RSI;
  local_90 = '\0';
  FUN_01e459c0();
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
LAB_01db4267:
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  return;
LAB_01db451e:
  local_68._0_4_ = fVar11;
  (**(code **)(*unaff_RDI + 0x658))();
  lVar2 = *unaff_RSI;
  if (lVar2 == lVar9) {
    if (((char)unaff_RSI[1] == '\0') && (lVar9 != 0)) {
      FUN_00d50b00();
      goto LAB_01db45cc;
    }
    lVar2 = *unaff_RSI;
  }
  else {
    lVar4 = unaff_RSI[1];
    if (lVar9 != 0) {
      FUN_00d50b00();
    }
    *unaff_RSI = lVar9;
    if (((char)lVar4 != '\0') && (lVar2 != 0)) {
      FUN_00d50b20();
    }
LAB_01db45cc:
    *(undefined1 *)(unaff_RSI + 1) = 1;
    lVar2 = *unaff_RSI;
  }
  if ((lVar2 == 0) || (iVar6 = FUN_01d3a5a0(), iVar6 == 6)) goto LAB_01db4820;
  FUN_01d3abf0();
  uVar12 = FUN_01e466c0();
  fVar11 = (float)uVar12;
  if ((char)unaff_RDI[0x27] == '\0') {
    fVar11 = (float)((ulonglong)uVar12 >> 0x20);
  }
  fVar15 = fVar14;
  if (fVar11 <= fVar14) {
    fVar15 = fVar11;
  }
  fVar11 = fVar13;
  if (fVar13 <= fVar15) {
    fVar11 = fVar15;
  }
  local_68._0_4_ = fVar11 - (float)local_68;
  if (((float)local_68 != DAT_0239424c) || (NAN((float)local_68) || NAN(DAT_0239424c))) {
    lVar2 = *(longlong *)local_58[2];
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    local_68 = FUN_01db3040((float)local_68);
    uStack_60 = extraout_XMM0_Dc_00;
    uStack_5c = extraout_XMM0_Dd_00;
    uVar12 = local_68;
    if (lVar2 != 0) {
      FUN_00d50b20();
      uVar12 = local_68;
    }
    local_68._4_4_ = (float)((ulonglong)uVar12 >> 0x20);
    local_68._0_4_ = (float)uVar12;
    if (((float)local_68 != DAT_0239424c) || (NAN((float)local_68) || NAN(DAT_0239424c))) {
      lVar2 = *(longlong *)(local_58[2] + 8);
      local_68 = uVar12;
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      FUN_01db3040((uint)(float)local_68 ^ _DAT_023945e0);
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      FUN_01db28c0();
      (**(code **)(*unaff_RDI + 0x620))();
      FUN_00d403d0();
      lVar2 = DAT_027f22b8;
      if (DAT_027f22b8 != 0) {
        FUN_00d50b00();
      }
      local_80 = 0;
      FUN_00d50b00();
      local_80 = '\x01';
      local_c8 = 0;
      local_c0 = '\0';
      local_88 = unaff_RDI;
      FUN_00d40470(&local_c8,&local_88,1,3);
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
      uVar12 = local_68;
      if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
        FUN_00d50b20();
        uVar12 = local_68;
      }
      local_68._4_4_ = (float)((ulonglong)uVar12 >> 0x20);
      if (lVar2 != 0) {
        local_68 = uVar12;
        FUN_00d50b20();
      }
      bVar10 = false;
    }
  }
  goto LAB_01db451e;
LAB_01db4820:
  if (!bVar10) {
    FUN_00d403d0();
    local_b8 = DAT_027f22c0;
    if (DAT_027f22c0 != 0) {
      FUN_00d50b00();
    }
    local_b0 = '\x01';
    local_70 = 0;
    FUN_00d50b00();
    local_70 = '\x01';
    local_a8 = 0;
    local_a0 = '\0';
    local_78 = unaff_RDI;
    FUN_00d40470(&local_a8,&local_78,1,3);
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    FUN_01e42030();
    if (lVar9 == 0) {
      bVar10 = false;
    }
    else {
      FUN_01e4c160();
      bVar10 = local_128 != 0;
      if ((local_120 != '\0') && (local_128 != 0)) {
        FUN_00d50b20();
      }
    }
    if (bVar10) {
      FUN_01e42030();
      FUN_01d86b20();
    }
  }
  if (local_58 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  goto LAB_01db4267;
}


