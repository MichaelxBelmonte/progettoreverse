// Function: FUN_01abf3d0
// Address: 01abf3d0
// Size: 2173 bytes
// Class: MUSpectrumShaper
// String references:
//   "%@+%I ct"
//   "%@%I ct"
//   "+%.2f dB"
//   "%.2f dB"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01abf3d0(pthread_key_t param_1,undefined8 param_2)

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  void *pvVar7;
  longlong *unaff_RDI;
  undefined8 *puVar8;
  undefined8 *puVar9;
  bool bVar10;
  undefined8 uVar11;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar12;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 extraout_XMM0_Qa_00;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined8 extraout_XMM0_Qa_01;
  undefined1 auVar17 [16];
  undefined8 in_XMM1_Qb;
  undefined1 auVar18 [16];
  undefined8 *local_a8;
  char local_a0;
  undefined8 *local_98;
  char local_90;
  longlong local_88;
  char local_80;
  undefined8 *local_78;
  float local_6c;
  undefined8 *local_68;
  uint local_60;
  undefined8 *local_58;
  char local_50;
  undefined4 local_48;
  undefined8 *local_40;
  uint local_38;
  undefined4 local_34;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  
  uVar11 = FUN_01e3f820();
  if (*(int *)((longlong)unaff_RDI + 0x1bc) == -1) goto LAB_01abfc19;
  fVar1 = *(float *)((longlong)unaff_RDI + 0x1b4);
  pvVar7 = _pthread_getspecific(param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015b9440();
  puVar4 = local_68;
  if (((char)local_60 == '\0') && (local_68 != (undefined8 *)0x0)) {
    FUN_00d50b00();
    if (((char)local_60 != '\0') && (local_68 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  local_78 = puVar4;
  pvVar7 = _pthread_getspecific(param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015b93e0();
  puVar4 = local_68;
  if (((char)local_60 == '\0') && (local_68 != (undefined8 *)0x0)) {
    FUN_00d50b00();
    if (((char)local_60 != '\0') && (local_68 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  pvVar7 = _pthread_getspecific(param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  iVar6 = FUN_015b7ba0();
  pvVar7 = _pthread_getspecific(param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015b7b80();
  pvVar7 = _pthread_getspecific(param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_017ed3a0();
  if (local_68 == (undefined8 *)0x0) {
    if (((char)local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
LAB_01abf72a:
    local_6c = DAT_02390124;
    iVar6 = (int)unaff_RDI[0x33];
    if (iVar6 == 0) goto LAB_01abf70c;
LAB_01abf742:
    puVar8 = DAT_027e3078;
    if (iVar6 == 3) {
      if (DAT_027e3078 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
      FUN_00015ff0();
      local_88 = FUN_00e86210();
      local_80 = 0;
      uVar12 = extraout_XMM0_Qa;
      if (local_88 != 0) {
        uVar12 = FUN_00d50b00();
      }
      local_80 = '\x01';
      uVar12 = FUN_01d824e0(uVar12,&local_88);
      puVar5 = local_68;
      puVar9 = local_78;
      if ((char)local_60 == '\0') {
        if (local_68 != (undefined8 *)0x0) {
          uVar12 = FUN_00d50b00();
          if (((char)local_60 != '\0') && (local_68 != (undefined8 *)0x0)) {
            uVar12 = FUN_00d50b20();
          }
        }
      }
      else {
        local_60 = local_60 & 0xffffff00;
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        uVar12 = FUN_00d50b20();
      }
      if (puVar5 != (undefined8 *)0x0) {
        local_a8 = puVar8;
        local_a0 = '\0';
        FUN_01e57260(uVar12,&local_a8);
        puVar9 = local_68;
        if (local_68 == puVar8) {
LAB_01abf987:
          puVar9 = local_78;
          if (((char)local_60 != '\0') && (local_68 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if ((char)local_60 == '\0') {
            if (local_68 != (undefined8 *)0x0) {
              FUN_00d50b00();
            }
            bVar10 = puVar8 != (undefined8 *)0x0;
            puVar8 = puVar9;
            if (bVar10) {
              FUN_00d50b20();
            }
            goto LAB_01abf987;
          }
          if (puVar8 != (undefined8 *)0x0) {
            FUN_00d50b20();
          }
          local_60 = local_60 & 0xffffff00;
          puVar8 = local_68;
          puVar9 = local_78;
        }
        if ((local_a0 != '\0') && (local_a8 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      local_58 = puVar8;
      if (DAT_02390124 <=
          local_6c * *(float *)(puVar9[2] + (longlong)*(int *)((longlong)unaff_RDI + 0x1bc) * 4)) {
        auVar15._0_8_ = _logf();
        auVar15._8_8_ = extraout_XMM0_Qb_02;
        auVar16._4_12_ = auVar15._4_12_;
        auVar16._0_4_ = (float)auVar15._0_8_ * _DAT_0240e498;
        local_48 = FUN_00e7d780(auVar16._0_8_);
        local_60 = 2;
        local_68 = &DAT_024c5048;
        local_50 = 0;
        uVar12 = extraout_XMM0_Qa_01;
        if (puVar8 != (undefined8 *)0x0) {
          uVar12 = FUN_00d50b00();
        }
        local_50 = '\x01';
        local_68 = (undefined8 *)&DAT_025df2a0;
        FUN_00d8cb40(uVar12,&local_68);
        puVar9 = local_40;
        if (local_40 == (undefined8 *)0x0) {
          puVar9 = (undefined8 *)0x0;
          bVar10 = false;
        }
        else if ((char)local_38 == '\0') {
          FUN_00d50b00();
          bVar10 = true;
          if (((char)local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38 = local_38 & 0xffffff00;
          bVar10 = true;
        }
        local_68 = &DAT_024c5048;
        if ((local_50 != '\0') && (local_58 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        auVar13._0_8_ = _logf();
        auVar13._8_8_ = extraout_XMM0_Qb_01;
        auVar14._4_12_ = auVar13._4_12_;
        auVar14._0_4_ = (float)auVar13._0_8_ * _DAT_0240e498;
        local_48 = FUN_00e7d780(auVar14._0_8_);
        local_60 = 2;
        local_68 = &DAT_024c5048;
        local_50 = 0;
        uVar12 = extraout_XMM0_Qa_00;
        if (puVar8 != (undefined8 *)0x0) {
          uVar12 = FUN_00d50b00();
        }
        local_50 = '\x01';
        local_68 = (undefined8 *)&DAT_025df2a0;
        FUN_00d8cb40(uVar12,&local_68);
        puVar9 = local_40;
        if (local_40 == (undefined8 *)0x0) {
          puVar9 = (undefined8 *)0x0;
          bVar10 = false;
        }
        else if ((char)local_38 == '\0') {
          FUN_00d50b00();
          bVar10 = true;
          if (((char)local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38 = local_38 & 0xffffff00;
          bVar10 = true;
        }
        local_68 = &DAT_024c5048;
        if ((local_50 != '\0') && (local_58 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
      if (puVar8 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      goto LAB_01abfb81;
    }
    if (*(float *)(puVar4[2] + (longlong)*(int *)((longlong)unaff_RDI + 0x1bc) * 4) <= DAT_02390124)
    {
      uVar12 = FUN_00aea610();
      local_38 = 1;
      local_40 = &DAT_024d0b28;
      local_34 = (undefined4)uVar12;
      FUN_00d8cb40(uVar12,&local_40);
      puVar9 = local_68;
      if (local_68 == (undefined8 *)0x0) goto LAB_01abf929;
      bVar10 = true;
      if ((char)local_60 == '\0') {
        FUN_00d50b00();
        if (((char)local_60 != '\0') && (local_68 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      uVar12 = FUN_00aea610();
      local_38 = 1;
      local_40 = &DAT_024d0b28;
      local_34 = (undefined4)uVar12;
      FUN_00d8cb40(uVar12,&local_40);
      puVar9 = local_68;
      if (local_68 == (undefined8 *)0x0) {
LAB_01abf929:
        puVar9 = (undefined8 *)0x0;
        bVar10 = false;
      }
      else {
        bVar10 = true;
        if ((char)local_60 == '\0') {
          FUN_00d50b00();
          if (((char)local_60 != '\0') && (local_68 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
    }
LAB_01abfb86:
    FUN_00d50b20();
  }
  else {
    if ((char)local_60 != '\0') {
      FUN_00d50b20();
    }
    if (((char)local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if ((iVar6 != 3) && (iVar6 != 0)) goto LAB_01abf72a;
    pvVar7 = _pthread_getspecific(param_1);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_015b7b80();
    pvVar7 = _pthread_getspecific(param_1);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_017ed3a0();
    pvVar7 = _pthread_getspecific(param_1);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    auVar17._0_8_ = FUN_012c6af0();
    auVar17._8_8_ = extraout_XMM0_Qb_00;
    auVar18._4_12_ = auVar17._4_12_;
    auVar18._0_4_ = (float)auVar17._0_8_ * DAT_023941f4;
    local_6c = (float)_exp2f(auVar18._0_8_);
    if (((char)local_60 != '\0') && (local_68 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    local_6c = DAT_02390124 / local_6c;
    iVar6 = (int)unaff_RDI[0x33];
    if (iVar6 != 0) goto LAB_01abf742;
LAB_01abf70c:
    bVar10 = false;
    puVar9 = (undefined8 *)0x0;
LAB_01abfb81:
    if (puVar4 != (undefined8 *)0x0) goto LAB_01abfb86;
  }
  if (local_78 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (puVar9 != (undefined8 *)0x0) {
    auVar3._8_8_ = in_XMM1_Qb;
    auVar3._0_8_ = param_2;
    auVar18 = blendps(auVar3,_DAT_0241c670,0xd);
    auVar2._8_8_ = extraout_XMM0_Qb;
    auVar2._0_8_ = uVar11;
    auVar17 = blendps(auVar2,ZEXT416((uint)(fVar1 + DAT_023b36a8)),1);
    local_90 = '\0';
    local_98 = puVar9;
    (**(code **)(*unaff_RDI + 0x6d8))(auVar17._0_8_,auVar18._0_8_);
    if ((local_90 != '\0') && (local_98 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if (!bVar10) {
      return;
    }
    FUN_00d50b20();
    return;
  }
LAB_01abfc19:
  (**(code **)(*unaff_RDI + 0x6e0))();
  return;
}


