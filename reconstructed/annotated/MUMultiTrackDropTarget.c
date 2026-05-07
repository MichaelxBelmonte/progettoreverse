// ===== MUMultiTrackDropTarget — Annotated small functions =====
// 7 readable functions

// ==================================================
// @01c025c0 (1772 bytes) — math_loop

{
  longlong lVar1;
  longlong *plVar2;
  float fVar3;
  undefined4 uVar4;
  char cVar5;
  undefined8 in_RAX;
  char in_CL;
  char *pcVar6;
  undefined7 uVar8;
  longlong *plVar7;
  undefined8 *arg1;
  longlong this;
  longlong lVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined4 extraout_XMM0_Dd_03;
  float fVar15;
  undefined1 auVar14 [16];
  float fVar16;
  undefined1 auVar17 [16];
  float fVar18;
  longlong *local_100;
  char local_f8;
  longlong *local_b0;
  char local_a8 [16];
  int local_98;
  undefined8 local_94;
  undefined8 local_88;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  char local_60;
  longlong *local_58;
  char local_50;
  undefined7 uStack_4f;
  char local_48;
  undefined4 local_3c;
  longlong *local_38;
  
  plVar7 = (longlong *)*param_2;
  local_3c = (undefined4)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)param_2[1]);
  if (((char)param_2[1] != '\0') && (plVar7 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  local_78 = FUN_01c02540();
  uStack_70 = extraout_XMM0_Dc;
  uStack_6c = extraout_XMM0_Dd;
  FUN_01bcb030();
  uVar11 = FUN_01cf5cf0();
  if ((local_a8[0] != '\0') && (local_b0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00ca1380();
  pcVar6 = &local_50;
  if (local_a8[0] != '\0') {
    pcVar6 = local_a8;
  }
  local_50 = local_a8[0];
  *pcVar6 = '\0';
  local_58 = local_b0;
  if ((local_a8[0] != '\0') && (local_b0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_50 == '\0') {
    if (local_58 == (longlong *)0x0) goto LAB_01c02c4d;
    FUN_00d50b00();
  }
  else if (local_58 == (longlong *)0x0) goto LAB_01c02c4d;
  local_a8[0] = '\0';
  local_b0 = (longlong *)0x0;
  local_94 = 0;
  lVar9 = 0;
  auVar14 = ZEXT816(0);
  local_38 = plVar7;
  fVar3 = DAT_0241e400;
  fVar15 = DAT_0241e400;
  uVar12 = local_78;
  do {
    plVar7 = local_38;
    local_78._4_4_ = (float)((ulonglong)uVar12 >> 0x20);
    local_78._0_4_ = (float)uVar12;
    local_98 = (int)lVar9;
    if (*(int *)((longlong)local_58 + 0xc) <= local_98) break;
    local_b0 = *(longlong **)(local_58[2] + lVar9 * 8);
    local_78 = uVar12;
    if (*(char *)(this + 0x21) == '\0') {
      if (local_38 != (longlong *)0x0) {
        FUN_01bcb030();
        local_88 = (double)FUN_01e437f0(0);
        uStack_7c = extraout_XMM0_Dd_00;
        if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
          FUN_00d50b20();
        }
        (**(code **)(*plVar7 + 0x4d8))();
        local_78._0_4_ = local_88._4_4_;
        local_78._4_4_ = local_88._4_4_;
        uStack_70 = uStack_7c;
        uStack_6c = uStack_7c;
        fVar15 = auVar14._4_4_;
      }
    }
    else if (local_98 == 0) {
      if (local_38 != (longlong *)0x0) {
        FUN_01bcb030();
        local_88 = (double)FUN_01e437f0(0);
        if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
          FUN_00d50b20();
        }
        (**(code **)(*plVar7 + 0x4d8))();
        local_78._4_4_ = auVar14._4_4_;
        uStack_70 = auVar14._12_4_;
        local_78._0_4_ = local_78._4_4_ * DAT_0239011c + local_88._4_4_;
        uStack_6c = uStack_70;
        fVar3 = local_78._4_4_;
        fVar15 = local_78._4_4_;
      }
    }
    else {
      local_78._0_4_ = (float)local_78 + fVar3;
    }
    local_88 = param_1 - (double)local_b0[5];
    (**(code **)(*(longlong *)*arg1 + 0x3a0))();
    cVar5 = (**(code **)(*(longlong *)CONCAT71(uStack_4f,local_50) + 0x3c8))();
    if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
      FUN_00d50b20();
    }
    if (cVar5 != '\0') {
      local_88 = (double)(**(code **)(*(longlong *)*arg1 + 0x370))(SUB84(local_88,0));
    }
    (**(code **)(*(longlong *)*arg1 + 0x3a0))();
    uVar12 = (**(code **)(*(longlong *)CONCAT71(uStack_4f,local_50) + 0x390))(SUB84(local_88,0));
    if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*(longlong *)*arg1 + 0x3a0))();
    uVar13 = (**(code **)(*(longlong *)CONCAT71(uStack_4f,local_50) + 0x390))
                       (SUB84((double)local_b0[6] + local_88,0));
    if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
      FUN_00d50b20();
    }
    fVar18 = (float)uVar13 - (float)uVar12;
    fVar16 = (float)uVar12 - (float)uVar11;
    auVar14._4_4_ = (int)((ulonglong)uVar12 >> 0x20);
    auVar14._0_4_ = fVar16;
    auVar14._8_4_ = extraout_XMM0_Dc_00;
    auVar14._12_4_ = extraout_XMM0_Dd_01;
    auVar17._4_4_ = (int)((ulonglong)uVar13 >> 0x20);
    auVar17._0_4_ = fVar18;
    auVar17._8_4_ = extraout_XMM0_Dc_01;
    auVar17._12_4_ = extraout_XMM0_Dd_02;
    if (((((*(float *)(local_b0 + 7) != fVar16) || (NAN(*(float *)(local_b0 + 7)) || NAN(fVar16)))
         || (*(float *)((longlong)local_b0 + 0x3c) != (float)local_78)) ||
        ((NAN(*(float *)((longlong)local_b0 + 0x3c)) || NAN((float)local_78) ||
         (*(float *)(local_b0 + 8) != fVar18)))) || (NAN(*(float *)(local_b0 + 8)) || NAN(fVar18)))
    {
LAB_01c02a20:
      auVar14 = insertps(auVar14,(float)local_78,0x10);
      auVar17 = insertps(auVar17,fVar15,0x10);
      auVar14._8_8_ = auVar17._0_8_;
      *(undefined1 (*) [16])(local_b0 + 7) = auVar14;
      *(undefined1 *)(this + 0x20) = 1;
    }
    else if ((*(float *)((longlong)local_b0 + 0x44) != fVar15) ||
            (NAN(*(float *)((longlong)local_b0 + 0x44)) || NAN(fVar15))) goto LAB_01c02a20;
    FUN_01bcc520();
    uVar10 = (**(code **)(*local_100 + 0x998))(SUB84(local_88,0));
    local_60 = 0;
    lVar1 = CONCAT71(uStack_4f,local_50);
    if (local_48 == '\0') {
      if (lVar1 != 0) {
        uVar10 = FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    plVar7 = local_38;
    local_60 = '\x01';
    local_68 = lVar1;
    FUN_01c03020(uVar10,(undefined1 *)(this + 0x20));
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
      FUN_00d50b20();
    }
    if ((local_f8 != '\0') && (local_100 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (*(char *)(this + 0x21) == '\0') {
      if (plVar7 == (longlong *)0x0) {
        local_78._0_4_ = (float)local_78 + fVar15;
        local_38 = (longlong *)0x0;
      }
      else {
        FUN_01be64b0();
        plVar2 = (longlong *)CONCAT71(uStack_4f,local_50);
        uVar8 = (undefined7)((ulonglong)plVar7 >> 8);
        if (plVar2 == plVar7) {
          uVar10 = local_3c;
          plVar2 = local_38;
          if ((char)local_3c == '\0') {
            if (local_48 != '\0') {
              local_3c = (undefined4)CONCAT71(uVar8,1);
              goto LAB_01c02745;
            }
            FUN_00d50b00();
            uVar10 = (int)CONCAT71(uVar8,1);
            plVar2 = local_38;
          }
LAB_01c02ba9:
          local_38 = plVar2;
          uVar4 = local_3c;
          plVar2 = local_38;
          if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
            FUN_00d50b20();
            uVar4 = local_3c;
            plVar2 = local_38;
          }
        }
        else {
          if (local_48 == '\0') {
            if (plVar2 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            uVar10 = (undefined4)CONCAT71(uVar8,1);
            if ((char)local_3c != '\0') {
              FUN_00d50b20();
            }
            goto LAB_01c02ba9;
          }
          uVar10 = (undefined4)CONCAT71(uVar8,1);
          uVar4 = local_3c;
          if ((char)local_3c != '\0') {
            FUN_00d50b20();
            uVar4 = local_3c;
          }
        }
        local_38 = plVar2;
        local_3c = uVar10;
        if (local_38 == (longlong *)0x0) {
          local_3c = uVar4;
          uVar12 = FUN_01c02540();
          local_78._4_4_ = (float)((ulonglong)uVar12 >> 0x20);
          local_78._0_4_ = (float)uVar12 - (float)((ulonglong)uVar11 >> 0x20);
          local_38 = (longlong *)0x0;
          local_3c = uVar10;
          uStack_70 = extraout_XMM0_Dc_02;
          uStack_6c = extraout_XMM0_Dd_03;
          fVar15 = DAT_0241e400;
        }
      }
    }
LAB_01c02745:
    uVar12 = CONCAT44(local_78._4_4_,(float)local_78);
    lVar9 = lVar9 + 1;
  } while (in_CL != '\0');
  uVar10 = local_3c;
  local_78 = uVar12;
  FUN_01c051e0();
  FUN_00d50b20();
  plVar7 = local_38;
  local_3c = uVar10;
LAB_01c02c4d:
  if (*(char *)(this + 0x20) != '\0') {
    FUN_01bcaf90();
    (**(code **)(*local_b0 + 0x620))();
    if ((local_a8[0] != '\0') && (local_b0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    *(undefined1 *)(this + 0x20) = 0;
  }
  if (((char)local_3c != '\0') && (plVar7 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @01c04130 (840 bytes) — calculation

{
  int iVar1;
  undefined8 *this;
  
  FUN_00d4ff80();
  *this = &DAT_02662ff0;
  FUN_01c044f0();
  FUN_01c047b0();
  FUN_01c04a70();
  this[5] = 0;
  if (DAT_027e8990 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027e88e0 = FUN_00d4fe50();
      _DAT_027e88c8 = "MUMultiTrackDropTarget";
      _DAT_027e88d0 = 0x48;
      _DAT_027e88d8 = FUN_01c03d60;
      _DAT_027e88e8 = 0;
      uRam00000000027e88f0 = 0;
      _DAT_027e88f8 = 0;
      _DAT_027e8970 = 0;
      uRam00000000027e8978 = 0;
      _DAT_027e8980 = 0;
      DAT_027e8982 = 1;
      _DAT_027e8900 = 0;
      uRam00000000027e8908 = 0;
      _DAT_027e8910 = 0;
      uRam00000000027e8918 = 0;
      _DAT_027e8920 = 0;
      uRam00000000027e8928 = 0;
      _DAT_027e8930 = 0;
      uRam00000000027e8938 = 0;
      _DAT_027e8940 = 0;
      uRam00000000027e8948 = 0;
      _DAT_027e8950 = 0;
      uRam00000000027e8958 = 0;
      _DAT_027e8960 = 0;
      uRam00000000027e8968 = 0;
      DAT_027e898b = 0;
      _DAT_027e8983 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027e8983 == '\0') {
    FUN_01c04d30();
    FUN_00e87980();
  }
  this[6] = 0;
  if (DAT_027e8990 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027e88e0 = FUN_00d4fe50();
      _DAT_027e88c8 = "MUMultiTrackDropTarget";
      _DAT_027e88d0 = 0x48;
      _DAT_027e88d8 = FUN_01c03d60;
      _DAT_027e88e8 = 0;
      uRam00000000027e88f0 = 0;
      _DAT_027e88f8 = 0;
      _DAT_027e8970 = 0;
      uRam00000000027e8978 = 0;
      _DAT_027e8980 = 0;
      DAT_027e8982 = 1;
      _DAT_027e8900 = 0;
      uRam00000000027e8908 = 0;
      _DAT_027e8910 = 0;
      uRam00000000027e8918 = 0;
      _DAT_027e8920 = 0;
      uRam00000000027e8928 = 0;
      _DAT_027e8930 = 0;
      uRam00000000027e8938 = 0;
      _DAT_027e8940 = 0;
      uRam00000000027e8948 = 0;
      _DAT_027e8950 = 0;
      uRam00000000027e8958 = 0;
      _DAT_027e8960 = 0;
      uRam00000000027e8968 = 0;
      DAT_027e898b = 0;
      _DAT_027e8983 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027e8983 == '\0') {
    FUN_01c04ec0();
    FUN_00e87980();
  }
  this[7] = 0;
  this[8] = 0;
  if (DAT_027e8990 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027e88e0 = FUN_00d4fe50();
      _DAT_027e88c8 = "MUMultiTrackDropTarget";
      _DAT_027e88d0 = 0x48;
      _DAT_027e88d8 = FUN_01c03d60;
      _DAT_027e88e8 = 0;
      uRam00000000027e88f0 = 0;
      _DAT_027e88f8 = 0;
      _DAT_027e8970 = 0;
      uRam00000000027e8978 = 0;
      _DAT_027e8980 = 0;
      DAT_027e8982 = 1;
      _DAT_027e8900 = 0;
      uRam00000000027e8908 = 0;
      _DAT_027e8910 = 0;
      uRam00000000027e8918 = 0;
      _DAT_027e8920 = 0;
      uRam00000000027e8928 = 0;
      _DAT_027e8930 = 0;
      uRam00000000027e8938 = 0;
      _DAT_027e8940 = 0;
      uRam00000000027e8948 = 0;
      _DAT_027e8950 = 0;
      uRam00000000027e8958 = 0;
      _DAT_027e8960 = 0;
      uRam00000000027e8968 = 0;
      DAT_027e898b = 0;
      _DAT_027e8983 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027e8983 == '\0') {
    FUN_01c05050();
    FUN_00e87980();
  }
  return;
}




// ==================================================
// @01c030e0 (596 bytes) — math_loop

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  char *pcVar8;
  longlong lVar9;
  longlong *this;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 local_a8;
  undefined4 uStack_a4;
  longlong local_70;
  char local_68 [8];
  longlong local_60;
  int local_58;
  int iStack_54;
  int local_50;
  char local_48;
  undefined7 uStack_47;
  char local_40 [8];
  char local_38 [8];
  
  FUN_00ca1380();
  pcVar8 = &local_48;
  if (local_68[0] != '\0') {
    pcVar8 = local_68;
  }
  local_48 = local_68[0];
  *pcVar8 = '\0';
  if ((local_68[0] != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (local_48 == '\0') {
    if (local_70 != 0) {
      FUN_00d50b00();
      goto LAB_01c03154;
    }
LAB_01c03320:
    *(undefined1 *)(this + 1) = 0;
  }
  else {
    if (local_70 == 0) goto LAB_01c03320;
LAB_01c03154:
    local_68[0] = '\0';
    local_60 = local_70;
    local_58 = -1;
    iStack_54 = 0;
    local_50 = 0;
    bVar6 = false;
    bVar5 = false;
    lVar10 = 0;
    while( true ) {
      lVar9 = (longlong)local_58;
      local_58 = local_58 + 1;
      if (*(int *)(local_60 + 0xc) <= local_58) break;
      lVar9 = *(longlong *)(*(longlong *)(local_60 + 0x10) + 8 + lVar9 * 8);
      if (lVar10 == 0) {
        FUN_00ca1380();
        local_38[0] = local_40[0];
        pcVar8 = local_40;
        if (local_40[0] == '\0') {
          pcVar8 = local_38;
        }
        *pcVar8 = '\0';
        if ((local_40[0] != '\0') && (CONCAT71(uStack_47,local_48) != 0)) {
          FUN_00d50b20();
        }
        FUN_00c8e710();
        lVar10 = CONCAT71(uStack_47,local_48);
        if ((((local_40[0] == '\0') && (lVar10 != 0)) && (FUN_00d50b00(), local_40[0] != '\0')) &&
           (CONCAT71(uStack_47,local_48) != 0)) {
          FUN_00d50b20();
        }
        FUN_00c92170();
        FUN_00c92160();
        bVar5 = bVar6;
        if (lVar10 != 0) {
          bVar5 = true;
        }
        bVar6 = bVar5;
        if (local_38[0] != '\0') {
          FUN_00d50b20();
        }
      }
      uVar2 = *(undefined8 *)(lVar9 + 0x38);
      uVar3 = *(undefined8 *)(lVar9 + 0x40);
      uVar11 = (undefined4)uVar3;
      iVar4 = *(int *)(lVar10 + 0x18);
      FUN_00c8e340(uVar11,1);
      iVar7 = iStack_54;
      local_a8 = (undefined4)uVar2;
      uStack_a4 = (undefined4)((ulonglong)uVar2 >> 0x20);
      puVar1 = (undefined4 *)(*(longlong *)(lVar10 + 0x10) + (longlong)iVar4);
      *puVar1 = local_a8;
      puVar1[1] = uStack_a4;
      puVar1[2] = uVar11;
      puVar1[3] = (int)((ulonglong)uVar3 >> 0x20);
      if (iStack_54 != 0) {
        if (iStack_54 < 0) {
          iStack_54 = -iStack_54;
        }
        else {
          local_58 = local_58 - iStack_54;
          FUN_00d23690(local_a8,iStack_54);
          local_50 = local_50 + iVar7;
          iStack_54 = 0;
        }
      }
    }
    FUN_01c051e0();
    if (local_70 != 0) {
      FUN_00d50b20();
    }
    *(undefined1 *)(this + 1) = 0;
    if (bVar5) goto LAB_01c03328;
    if (lVar10 != 0) {
      FUN_00d50b00();
      goto LAB_01c03328;
    }
  }
  lVar10 = 0;
LAB_01c03328:
  *this = lVar10;
  *(undefined1 *)(this + 1) = 1;
  return this;
}




// ==================================================
// @01c01f90 (587 bytes) — calculation

{
  undefined8 *puVar1;
  undefined4 in_ECX;
  longlong *in_RDX;
  char *pcVar2;
  longlong *arg1;
  longlong this;
  undefined8 uVar3;
  double dVar4;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  undefined8 *local_48;
  char local_40 [8];
  char local_38 [8];
  
  local_88 = *arg1;
  local_80 = '\0';
  uVar3 = FUN_00c9fe40(in_ECX,&local_88);
  puVar1 = local_48;
  pcVar2 = local_38;
  if (local_40[0] != '\0') {
    pcVar2 = local_40;
  }
  local_38[0] = local_40[0];
  *pcVar2 = '\0';
  if ((local_40[0] != '\0') && (local_48 != (undefined8 *)0x0)) {
    uVar3 = FUN_00d50b20();
  }
  if ((local_38[0] == '\0') && (puVar1 != (undefined8 *)0x0)) {
    uVar3 = FUN_00d50b00();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    uVar3 = FUN_00d50b20();
  }
  *(char *)(this + 0x21) = (char)in_ECX;
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar1 = &DAT_02662ff0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    uVar3 = FUN_00d500e0();
    local_78 = *in_RDX;
    local_70 = '\0';
    FUN_01c022f0(uVar3,0);
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if (((double)puVar1[5] != param_1) || (NAN((double)puVar1[5]) || NAN(param_1))) {
      puVar1[5] = param_1;
    }
    dVar4 = (double)puVar1[6];
    if ((dVar4 != param_2) || (NAN(dVar4) || NAN(param_2))) {
      puVar1[6] = param_2;
      dVar4 = param_2;
    }
    local_68 = *arg1;
    local_60 = '\0';
    local_40[0] = '\0';
    local_48 = puVar1;
    param_2 = (double)FUN_00ca0840(dVar4,&local_68);
    if ((local_40[0] != '\0') && (local_48 != (undefined8 *)0x0)) {
      param_2 = (double)FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      param_2 = (double)FUN_00d50b20();
    }
  }
  else {
    local_58 = *in_RDX;
    local_50 = '\0';
    FUN_01c022f0(uVar3,(undefined1 *)(this + 0x20));
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (((double)puVar1[5] != param_1) || (NAN((double)puVar1[5]) || NAN(param_1))) {
      puVar1[5] = param_1;
      *(undefined1 *)(this + 0x20) = 1;
    }
    dVar4 = (double)puVar1[6];
    if ((dVar4 == param_2) && (!NAN(dVar4) && !NAN(param_2))) goto LAB_01c021c4;
    puVar1[6] = param_2;
  }
  *(undefined1 *)(this + 0x20) = 1;
  dVar4 = param_2;
LAB_01c021c4:
  FUN_00d50b20(dVar4);
  return;
}




// ==================================================
// @01c03420 (558 bytes) — math_loop

{
  longlong lVar1;
  char *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *this;
  longlong lVar5;
  longlong lVar6;
  longlong local_88;
  longlong local_80 [2];
  undefined8 local_70;
  undefined4 local_68;
  longlong local_60;
  char local_58;
  undefined8 local_50;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  FUN_00ca1380();
  plVar4 = &local_48;
  if ((char)local_80[0] != '\0') {
    plVar4 = local_80;
  }
  local_48 = CONCAT71(local_48._1_7_,(char)local_80[0]);
  *(undefined1 *)plVar4 = 0;
  if (((char)local_80[0] != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((char)local_48 == '\0') {
    if (local_88 == 0) goto LAB_01c035fd;
    FUN_00d50b00();
LAB_01c03497:
    local_80[0]._0_1_ = 0;
    local_68 = 0;
    local_70 = 0;
    if (*(int *)(local_88 + 0xc) < 1) {
      local_50 = 0;
      lVar6 = 0;
    }
    else {
      lVar5 = 0;
      lVar6 = 0;
      local_50 = 0;
      do {
        lVar1 = *(longlong *)(*(longlong *)(local_88 + 0x10) + lVar5 * 8);
        if (lVar6 == 0) {
          FUN_00ca1380();
          local_38[0] = local_40[0];
          pcVar2 = local_40;
          if (local_40[0] == '\0') {
            pcVar2 = local_38;
          }
          *pcVar2 = '\0';
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          uVar3 = FUN_00d894f0();
          lVar6 = local_60;
          if (local_60 == 0) {
            lVar6 = 0;
          }
          else if (local_58 == '\0') {
            uVar3 = FUN_00d50b00();
            local_50 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
            if ((local_58 != '\0') && (local_60 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_58 = '\0';
            local_50 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
          }
          if (local_38[0] != '\0') {
            FUN_00d50b20();
          }
        }
        lVar1 = *(longlong *)(lVar1 + 0x20);
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        local_40[0] = '\0';
        local_48 = lVar1;
        FUN_00d21140();
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        lVar5 = lVar5 + 1;
        local_70 = CONCAT44(local_70._4_4_,(int)lVar5);
      } while ((int)lVar5 < *(int *)(local_88 + 0xc));
    }
    FUN_01c051e0();
    FUN_00d50b20();
    *(undefined1 *)(this + 1) = 0;
    if ((char)local_50 != '\0') goto LAB_01c0363e;
    if (lVar6 != 0) {
      FUN_00d50b00();
      goto LAB_01c0363e;
    }
  }
  else {
    if (local_88 != 0) goto LAB_01c03497;
LAB_01c035fd:
    *(undefined1 *)(this + 1) = 0;
  }
  lVar6 = 0;
LAB_01c0363e:
  *this = lVar6;
  *(undefined1 *)(this + 1) = 1;
  return this;
}




// ==================================================
// @01c03760 (558 bytes) — math_loop

{
  longlong lVar1;
  char *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *this;
  longlong lVar5;
  longlong lVar6;
  longlong local_88;
  longlong local_80 [2];
  undefined8 local_70;
  undefined4 local_68;
  longlong local_60;
  char local_58;
  undefined8 local_50;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  FUN_00ca1380();
  plVar4 = &local_48;
  if ((char)local_80[0] != '\0') {
    plVar4 = local_80;
  }
  local_48 = CONCAT71(local_48._1_7_,(char)local_80[0]);
  *(undefined1 *)plVar4 = 0;
  if (((char)local_80[0] != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((char)local_48 == '\0') {
    if (local_88 == 0) goto LAB_01c0393d;
    FUN_00d50b00();
LAB_01c037d7:
    local_80[0]._0_1_ = 0;
    local_68 = 0;
    local_70 = 0;
    if (*(int *)(local_88 + 0xc) < 1) {
      local_50 = 0;
      lVar6 = 0;
    }
    else {
      lVar5 = 0;
      lVar6 = 0;
      local_50 = 0;
      do {
        lVar1 = *(longlong *)(*(longlong *)(local_88 + 0x10) + lVar5 * 8);
        if (lVar6 == 0) {
          FUN_00ca1380();
          local_38[0] = local_40[0];
          pcVar2 = local_40;
          if (local_40[0] == '\0') {
            pcVar2 = local_38;
          }
          *pcVar2 = '\0';
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          uVar3 = FUN_00d894f0();
          lVar6 = local_60;
          if (local_60 == 0) {
            lVar6 = 0;
          }
          else if (local_58 == '\0') {
            uVar3 = FUN_00d50b00();
            local_50 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
            if ((local_58 != '\0') && (local_60 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_58 = '\0';
            local_50 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
          }
          if (local_38[0] != '\0') {
            FUN_00d50b20();
          }
        }
        lVar1 = *(longlong *)(lVar1 + 0x18);
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        local_40[0] = '\0';
        local_48 = lVar1;
        FUN_00d21140();
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        lVar5 = lVar5 + 1;
        local_70 = CONCAT44(local_70._4_4_,(int)lVar5);
      } while ((int)lVar5 < *(int *)(local_88 + 0xc));
    }
    FUN_01c051e0();
    FUN_00d50b20();
    *(undefined1 *)(this + 1) = 0;
    if ((char)local_50 != '\0') goto LAB_01c0397e;
    if (lVar6 != 0) {
      FUN_00d50b00();
      goto LAB_01c0397e;
    }
  }
  else {
    if (local_88 != 0) goto LAB_01c037d7;
LAB_01c0393d:
    *(undefined1 *)(this + 1) = 0;
  }
  lVar6 = 0;
LAB_01c0397e:
  *this = lVar6;
  *(undefined1 *)(this + 1) = 1;
  return this;
}




// ==================================================
// @01c01bb0 (500 bytes) — logic_branch

{
  int iVar1;
  undefined4 uVar2;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  
  if ((DAT_027e8990 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    _DAT_027e88e0 = FUN_00d4fe50();
    _DAT_027e88c8 = "MUMultiTrackDropTarget";
    _DAT_027e88d0 = 0x48;
    _DAT_027e88d8 = FUN_01c03d60;
    _DAT_027e88e8 = 0;
    uRam00000000027e88f0 = 0;
    _DAT_027e88f8 = 0;
    _DAT_027e8970 = 0;
    uRam00000000027e8978 = 0;
    _DAT_027e8980 = 0;
    DAT_027e8982 = 1;
    _DAT_027e8900 = 0;
    uRam00000000027e8908 = 0;
    _DAT_027e8910 = 0;
    uRam00000000027e8918 = 0;
    _DAT_027e8920 = 0;
    uRam00000000027e8928 = 0;
    _DAT_027e8930 = 0;
    uRam00000000027e8938 = 0;
    _DAT_027e8940 = 0;
    uRam00000000027e8948 = 0;
    _DAT_027e8950 = 0;
    uRam00000000027e8958 = 0;
    _DAT_027e8960 = 0;
    uRam00000000027e8968 = 0;
    DAT_027e898b = 0;
    _DAT_027e8983 = 0;
    ___cxa_guard_release();
  }
  if (DAT_027e8983 == '\0') {
    FUN_000064f0();
    FUN_00e87760();
    FUN_00d4ff40();
    FUN_00d50c00();
    FUN_01c04130();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    if (local_88 != 0) {
      FUN_00d50b20();
    }
    if (local_90 != 0) {
      FUN_00d50b20();
    }
    if (local_98 != 0) {
      FUN_00d50b20();
    }
    FUN_00d4ffa0();
    FUN_00d4ffa0();
  }
  return;
}



