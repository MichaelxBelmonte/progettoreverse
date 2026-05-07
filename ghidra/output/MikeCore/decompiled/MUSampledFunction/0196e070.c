// Function: FUN_0196e070
// Address: 0196e070
// Size: 5450 bytes
// Class: MUSampledFunction


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0196e070(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong *plVar3;
  undefined8 uVar4;
  char cVar5;
  undefined1 uVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  void *pvVar12;
  longlong *plVar13;
  pthread_key_t in_ECX;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  bool bVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar18;
  double dVar19;
  undefined8 in_XMM0_Qb;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined8 extraout_XMM0_Qb_03;
  undefined8 extraout_XMM0_Qb_04;
  undefined8 extraout_XMM0_Qb_05;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined4 extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Dd;
  undefined8 extraout_XMM0_Qb_06;
  undefined4 extraout_XMM0_Dd_00;
  undefined1 auVar25 [16];
  float extraout_XMM0_Db_01;
  float extraout_XMM0_Dd_01;
  undefined8 extraout_XMM0_Qb_07;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined8 extraout_XMM0_Qb_08;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined8 extraout_XMM0_Qb_09;
  undefined1 auVar30 [16];
  undefined8 in_XMM1_Qb;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined8 local_208;
  undefined8 uStack_200;
  undefined1 local_1f8 [16];
  longlong local_1e8;
  undefined1 local_1e0;
  longlong local_1d8;
  undefined1 local_1d0;
  longlong local_1c8;
  undefined1 local_1c0;
  longlong local_1b8;
  undefined1 local_1b0;
  longlong local_1a8;
  undefined1 local_1a0;
  longlong local_198;
  undefined1 local_190;
  longlong local_188;
  undefined1 local_180;
  longlong local_178;
  undefined1 local_170;
  longlong local_168;
  undefined1 local_160;
  longlong *local_158;
  char local_150;
  longlong local_148;
  char local_140;
  longlong *local_138;
  char local_130;
  longlong local_128;
  char local_120;
  longlong local_118;
  char local_110;
  longlong local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong *local_d8;
  char local_d0;
  longlong *local_c8;
  char local_c0;
  longlong *local_b8;
  char local_b0;
  undefined1 local_a8 [8];
  undefined8 uStack_a0;
  float local_8c;
  undefined1 local_88 [16];
  undefined1 local_78 [4];
  undefined1 auStack_74 [12];
  longlong *local_68;
  char local_60;
  undefined1 local_58 [16];
  longlong *local_40;
  char local_38;
  
  auStack_74._4_8_ = in_XMM0_Qb;
  _local_78 = param_1;
  local_58._8_8_ = in_XMM1_Qb;
  local_58._0_8_ = param_2;
  local_208 = param_1;
  uStack_200 = param_2;
  if ((char)unaff_RDI[0x37] != '\0') {
    FUN_0198a800();
  }
  FUN_01d48370();
  local_1e8 = *unaff_RSI;
  local_1e0 = 0;
  FUN_0195b5f0();
  if ((*(int *)(unaff_RDI[0x34] + 0xc) == 0) && (*(char *)((longlong)unaff_RDI + 0x1c5) != '\0')) {
    FUN_0196c5e0();
  }
  FUN_01989f80();
  iVar8 = (**(code **)(*local_40 + 0xb70))();
  iVar9 = FUN_01989fa0();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (iVar8 == iVar9) {
    if (*(int *)(unaff_RDI[0x34] + 0xc) != 0) {
      pvVar12 = _pthread_getspecific(in_ECX);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar5 = FUN_0126cd60();
      if ((cVar5 == '\0') && (cVar5 = (**(code **)(*unaff_RDI + 0x9a0))(), cVar5 == '\0')) {
        local_1d8 = *unaff_RSI;
        local_1d0 = 0;
        FUN_0196b4b0();
      }
    }
    goto LAB_0196f59c;
  }
  if (((unaff_RDI[0x3b] != 0) || (FUN_0196d600(), unaff_RDI[0x3b] != 0)) || (unaff_RDI[0x3c] != 0))
  {
    local_1c8 = *unaff_RSI;
    local_1c0 = 0;
    FUN_01966600(_local_78);
  }
  FUN_01989f80();
  iVar8 = (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                      *local_40 + 0x10))();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (iVar8 != 0) {
    local_1b8 = *unaff_RSI;
    local_1b0 = 0;
    FUN_01989f80();
    uVar10 = (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                         *local_40 + 0x10))();
    FUN_0196a550(extraout_XMM0_Qa,uVar10);
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (*(int *)(unaff_RDI[0x34] + 0xc) != 0) {
    pvVar12 = _pthread_getspecific(in_ECX);
    if (pvVar12 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar5 = FUN_0126cd60();
    if ((cVar5 == '\0') && (cVar5 = (**(code **)(*unaff_RDI + 0x9a0))(), cVar5 == '\0')) {
      local_1a8 = *unaff_RSI;
      local_1a0 = 0;
      FUN_0196b9b0();
    }
  }
  FUN_01989f80();
  cVar5 = FUN_019f7840();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar5 != '\0') {
    local_198 = *unaff_RSI;
    local_190 = 0;
    FUN_01989f80();
    uVar6 = FUN_019f7870();
    FUN_01970060(extraout_XMM0_Qa_00,uVar6);
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_01989f80();
  cVar5 = (**(code **)((longlong)&dylib_command_000013a0.cmd + *local_40))();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar5 != '\0') {
    local_188 = *unaff_RSI;
    local_180 = 0;
    FUN_01971280();
  }
  FUN_01989f80();
  cVar5 = (**(code **)(*local_40 + 0xb68))();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar5 != '\0') {
    local_178 = *unaff_RSI;
    local_170 = 0;
    FUN_01971ef0();
  }
  FUN_01989f80();
  cVar5 = (**(code **)((longlong)&dylib_command_000013a0.dylib.name.offset + *local_40))();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar5 != '\0') {
    pvVar12 = _pthread_getspecific(in_ECX);
    if (pvVar12 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012640f0();
    plVar13 = local_40;
    if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) && (FUN_00d50b00(), local_38 != '\0')
        ) && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_88._0_8_ = plVar13;
    pvVar12 = _pthread_getspecific(in_ECX);
    if (pvVar12 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012641c0();
    local_58._0_8_ = local_40;
    if (((local_38 == '\0') && (local_40 != (longlong *)0x0)) &&
       ((FUN_00d50b00(), local_38 != '\0' && (local_40 != (longlong *)0x0)))) {
      FUN_00d50b20();
    }
    FUN_01989f80();
    (**(code **)(*local_68 + 0xe20))();
    _local_78 = (longlong)local_40;
    if (local_38 == '\0') {
      if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    pvVar12 = _pthread_getspecific(in_ECX);
    if (pvVar12 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01264240();
    pvVar12 = _pthread_getspecific(in_ECX);
    if (pvVar12 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar8 = FUN_01326de0();
    cVar5 = '\x01';
    if (iVar8 == 3) {
      plVar13 = (longlong *)unaff_RDI[0x2f];
      if (plVar13 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      local_38 = '\0';
      local_40 = plVar13;
      cVar7 = FUN_00d24090();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      cVar5 = '\x01';
      if (cVar7 == '\0') {
        local_40 = (longlong *)local_88._0_8_;
        local_38 = '\0';
        cVar7 = FUN_00d24090();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar7 == '\0') {
          local_40 = (longlong *)local_58._0_8_;
          local_38 = '\0';
          cVar5 = FUN_00d24090();
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      if (plVar13 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    uVar18 = local_88._0_8_;
    uVar4 = local_58._0_8_;
    if (cVar5 != '\0') {
      local_148 = *unaff_RSI;
      local_140 = '\0';
      FUN_01973150();
      if ((local_140 != '\0') && (local_148 != 0)) {
        FUN_00d50b20();
      }
    }
    if (_local_78 != 0) {
      FUN_00d50b20();
    }
    if (uVar4 != 0) {
      FUN_00d50b20();
    }
    if (uVar18 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_01989f80();
  cVar5 = FUN_019f77e0();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar5 != '\0') {
    pvVar12 = _pthread_getspecific(in_ECX);
    if (pvVar12 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar18 = FUN_012643f0();
    local_58._0_8_ = uVar18;
    pvVar12 = _pthread_getspecific(in_ECX);
    if (pvVar12 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar19 = (double)FUN_0125a280();
    local_58._0_8_ = dVar19 + (double)local_58._0_8_;
    FUN_01989f80();
    local_58._0_8_ = (**(code **)(*local_40 + 0x938))(local_58._0_8_);
    local_58._8_8_ = extraout_XMM0_Qb;
    _local_78 = (**(code **)(*unaff_RDI + 0x4d8))();
    auStack_74._4_8_ = extraout_XMM0_Qb_00;
    FUN_01989f80();
    plVar3 = local_68;
    FUN_01989f80();
    plVar13 = local_158;
    local_100 = 0;
    local_108 = unaff_RDI[0x2f];
    if (local_108 != 0) {
      FUN_00d50b00();
    }
    local_100 = '\x01';
    (**(code **)(*plVar13 + 0xc38))();
    local_88._0_8_ = (**(code **)(*plVar3 + 0xbf8))();
    local_88._8_8_ = extraout_XMM0_Qb_01;
    local_a8 = (undefined1  [8])(**(code **)(*unaff_RDI + 0x4d8))();
    uStack_a0 = extraout_XMM0_Qb_02;
    if ((local_100 != '\0') && (local_108 != 0)) {
      FUN_00d50b20();
    }
    if ((local_150 != '\0') && (local_158 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01969310();
    local_d8 = local_40;
    local_d0 = 0;
    if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    local_d0 = '\x01';
    FUN_01d488d0();
    if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    auVar20._4_12_ = local_58._4_12_;
    auVar20._0_4_ = local_58._0_4_ - (float)local_78;
    auVar21._4_4_ = local_88._4_4_;
    auVar21._0_4_ = (float)local_88._0_4_ - (float)local_a8._4_4_;
    auVar21._8_4_ = local_88._8_4_;
    auVar21._12_4_ = local_88._12_4_;
    auVar21 = insertps(auVar20,auVar21,0x10);
    (**(code **)(*(longlong *)*unaff_RSI + 0x3c0))(auVar21._0_8_);
  }
  auVar31 = ZEXT816(0);
  if ((*(float *)((longlong)unaff_RDI + 0x14c) != 0.0) ||
     (NAN(*(float *)((longlong)unaff_RDI + 0x14c)))) {
    FUN_01989f80();
    cVar5 = (**(code **)(&DAT_00001478 + *local_40))();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar5 != '\0') {
      FUN_01989f80();
      (**(code **)(*local_68 + 0xed0))();
      plVar13 = local_40;
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar13 == (longlong *)0x0) {
        uVar11 = 0;
      }
      else {
        FUN_01989f80();
        (**(code **)(*local_68 + 0xed0))();
        uVar11 = (**(code **)(*local_40 + 1000))();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      FUN_01989f80();
      (**(code **)(&UNK_00001500 + *local_68))();
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
      FUN_01d488d0();
      if ((local_c0 != '\0') && (local_c8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d48b40();
      FUN_01989f80();
      local_8c = (float)(**(code **)(&UNK_00001418 + *local_40))();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_8c != DAT_02390124) || (NAN(local_8c) || NAN(DAT_02390124))) {
        cVar5 = FUN_01968c50();
        if (cVar5 == '\0') {
          local_f0 = 0;
          lVar1 = unaff_RDI[0x2f];
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          local_f0 = '\x01';
          local_f8 = lVar1;
          (**(code **)(*unaff_RDI + 0x9d8))();
          FUN_01969020();
          plVar13 = local_40;
          if (local_40 == (longlong *)0x0) {
            bVar2 = false;
            plVar13 = (longlong *)0x0;
          }
          else if (local_38 == '\0') {
            FUN_00d50b00();
            bVar2 = true;
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_38 = '\0';
            bVar2 = true;
          }
          if ((local_f0 != '\0') && (local_f8 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          if ((DAT_028b0ec8 == (longlong *)0x0) || (DAT_028b0ed1 == '\0')) {
            FUN_00e8cb50();
            if (DAT_028b0ec8 == (longlong *)0x0) {
              plVar13 = (longlong *)FUN_00e8fc40();
              FUN_00d4ff40();
              *plVar13 = (longlong)&DAT_026792c0;
              plVar13[5] = 0;
              *(undefined8 *)((longlong)plVar13 + 0xc) = 0;
              *(undefined8 *)((longlong)plVar13 + 0x14) = 0;
              *(undefined8 *)((longlong)plVar13 + 0x19) = 0;
              (*DAT_026792d8)();
              if (DAT_028b0ec8 == plVar13) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
                bVar14 = DAT_028b0ec8 != (longlong *)0x0;
                DAT_028b0ec8 = plVar13;
                if (bVar14) {
                  FUN_00d50b20();
                }
              }
              if (DAT_028b0ed0 == '\0') {
                DAT_028b0ed0 = '\x01';
                FUN_00e8cb90();
              }
              if (!bVar2) {
                FUN_00d50b20();
              }
              FUN_01cfce50();
              DAT_028b0ed1 = '\x01';
              FUN_00e8cb70();
            }
            else {
              DAT_028b0ed1 = '\x01';
              FUN_00e8cb70();
            }
            if (DAT_028b0ec8 == (longlong *)0x0) {
              plVar13 = (longlong *)0x0;
              bVar2 = false;
              goto LAB_0196ee06;
            }
          }
          plVar13 = DAT_028b0ec8;
          FUN_00d50b00();
          bVar2 = true;
        }
LAB_0196ee06:
        fVar15 = *(float *)((longlong)unaff_RDI + 0x14c) * *(float *)((longlong)unaff_RDI + 0x14c) *
                 DAT_0239011c;
        fVar16 = *(float *)((longlong)plVar13 + 0x1c);
        auVar31 = ZEXT416((uint)fVar16);
        if ((fVar16 != fVar15) || (NAN(fVar16) || NAN(fVar15))) {
          if (fVar15 <= DAT_02390124) {
            *(float *)((longlong)plVar13 + 0x1c) = fVar15;
            fVar15 = fVar15 * DAT_02394220;
          }
          else {
            *(undefined4 *)((longlong)plVar13 + 0x1c) = 0x3f800000;
            fVar15 = DAT_02394220;
          }
          auVar21 = ZEXT416(_DAT_023945e0 & (uint)fVar15) | _DAT_023945f0;
          auVar31._4_12_ = auVar21._4_12_;
          auVar31._0_4_ = auVar21._0_4_ + fVar15;
          auVar21 = roundss(ZEXT816(0),auVar31,0xb);
          *(char *)((longlong)plVar13 + 0xf) = (char)(longlong)auVar21._0_4_;
        }
        local_130 = '\0';
        local_138 = plVar13;
        FUN_01d488d0();
        if ((local_130 != '\0') && (local_138 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((*(float *)((longlong)plVar13 + 0x1c) != DAT_02390124) ||
           (NAN(*(float *)((longlong)plVar13 + 0x1c)) || NAN(DAT_02390124))) {
          *(undefined4 *)((longlong)plVar13 + 0x1c) = 0x3f800000;
          *(undefined1 *)((longlong)plVar13 + 0xf) = 0xff;
        }
        if (bVar2) {
          FUN_00d50b20();
        }
      }
      _local_78 = FUN_01e3f820();
      auStack_74._4_8_ = extraout_XMM0_Qb_03;
      FUN_01e3f820();
      local_58._0_8_ = FUN_01e3f820();
      local_58._8_8_ = extraout_XMM0_Qb_04;
      uVar18 = FUN_01e3f820();
      if ((uVar11 & 2) == 0) {
        auVar22._4_4_ = auStack_74._0_4_;
        auVar22._0_4_ = auStack_74._0_4_;
        auVar22._8_4_ = auStack_74._8_4_;
        auVar22._12_4_ = auStack_74._8_4_;
        local_88._4_12_ = auVar22._4_12_;
        local_88._0_4_ = (float)auStack_74._0_4_ + DAT_02390124;
      }
      else {
        local_58._0_4_ = (float)local_58._0_4_ + DAT_02390124;
        auStack_74._0_4_ = (int)((ulonglong)uVar18 >> 0x20);
        local_78 = (undefined1  [4])((float)uVar18 + auVar31._0_4_ + DAT_02390d00 + DAT_02390d00);
        auStack_74._4_4_ = (int)extraout_XMM0_Qb_05;
        auStack_74._8_4_ = (int)((ulonglong)extraout_XMM0_Qb_05 >> 0x20);
        if ((local_8c != DAT_02390124) || (NAN(local_8c) || NAN(DAT_02390124))) {
          while( true ) {
            fVar16 = (float)(**(code **)(*unaff_RDI + 0x990))();
            fVar15 = 0.0;
            uVar10 = 0;
            local_88._0_4_ = DAT_02390124 - fVar16;
            FUN_01e3f820();
            auVar23._4_4_ = fVar15;
            auVar23._0_4_ = fVar15;
            auVar23._8_4_ = uVar10;
            auVar23._12_4_ = uVar10;
            local_88._4_12_ = auVar23._4_12_;
            local_88._0_4_ = fVar15 * (float)local_88._0_4_ * DAT_0239011c;
            fVar15 = (float)FUN_01975b40();
            fVar16 = (float)local_58._0_4_;
            if ((float)local_88._0_4_ <= fVar15) break;
            if ((float)local_78 <= (float)local_58._0_4_) break;
            local_58._0_4_ = (float)local_58._0_4_ + DAT_02390d34;
          }
          while( true ) {
            local_88._0_4_ = fVar16;
            fVar16 = (float)(**(code **)(*unaff_RDI + 0x990))();
            fVar15 = 0.0;
            uVar10 = 0;
            local_a8._0_4_ = DAT_02390124 - fVar16;
            FUN_01e3f820();
            auVar24._4_4_ = fVar15;
            auVar24._0_4_ = fVar15;
            auVar24._8_4_ = uVar10;
            auVar24._12_4_ = uVar10;
            register0x00001204 = auVar24._4_12_;
            local_a8._0_4_ = fVar15 * (float)local_a8._0_4_ * DAT_0239011c;
            fVar16 = (float)FUN_01975b40();
            if ((fVar16 <= (float)local_a8._0_4_) || ((float)local_78 <= (float)local_88._0_4_))
            break;
            fVar16 = (float)local_88._0_4_ + DAT_02390d34;
          }
          _local_78 = ZEXT416((uint)local_88._0_4_);
        }
        else {
        }
        FUN_01e3f820();
        local_88._4_4_ = extraout_XMM0_Db;
        local_88._0_4_ = extraout_XMM0_Db;
        local_88._8_4_ = extraout_XMM0_Dd;
        local_88._12_4_ = extraout_XMM0_Dd;
        uVar18 = FUN_01975b40();
        auVar32._8_4_ = (int)extraout_XMM0_Qb_06;
        auVar32._0_8_ = uVar18;
        auVar32._12_4_ = (int)((ulonglong)extraout_XMM0_Qb_06 >> 0x20);
        auVar31._4_12_ = auVar32._4_12_;
        auVar31._0_4_ = (float)uVar18 + (float)local_88._0_4_;
        local_88 = auVar31;
        (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
      }
      FUN_01e3f820();
      auVar25._4_4_ = extraout_XMM0_Db_00;
      auVar25._0_4_ = extraout_XMM0_Db_00;
      auVar25._8_4_ = extraout_XMM0_Dd_00;
      auVar25._12_4_ = extraout_XMM0_Dd_00;
      local_58._4_12_ = auVar25._4_12_;
      local_58._0_4_ = extraout_XMM0_Db_00 + DAT_02390124;
      FUN_01e3f820();
      auVar33._4_4_ = auVar31._4_4_ + extraout_XMM0_Db_01;
      auVar33._12_4_ = auVar31._12_4_ + extraout_XMM0_Dd_01;
      auVar33._0_4_ = auVar33._4_4_;
      auVar33._8_4_ = auVar33._12_4_;
      auVar34._4_12_ = auVar33._4_12_;
      auVar34._0_4_ = auVar33._4_4_ + DAT_02390d00 + DAT_02390d00;
      _local_78 = auVar34;
      local_a8 = (undefined1  [8])FUN_01e3f820();
      uStack_a0 = extraout_XMM0_Qb_07;
      FUN_01e3f820();
      if ((uVar11 & 4) != 0) {
        fVar16 = (float)FUN_01975c10();
        if ((local_8c != DAT_02390124) || (NAN(local_8c) || NAN(DAT_02390124))) {
          local_a8._0_4_ = fVar16 + (float)local_a8._0_4_;
          uVar10 = (**(code **)(*unaff_RDI + 0x990))();
          local_58._0_4_ = uVar10;
          FUN_01e3f820();
          fVar16 = auVar34._4_4_;
          auVar26._4_4_ = fVar16;
          auVar26._0_4_ = fVar16;
          auVar26._8_4_ = auVar34._12_4_;
          auVar26._12_4_ = auVar34._12_4_;
          auStack_74 = auVar26._4_12_;
          local_78 = (undefined1  [4])(fVar16 * (float)local_58._0_4_ * DAT_0239011c);
          FUN_01e3f820();
          fVar16 = auVar34._4_4_;
          auVar27._4_4_ = fVar16;
          auVar27._0_4_ = fVar16;
          auVar27._8_4_ = auVar34._12_4_;
          auVar27._12_4_ = auVar34._12_4_;
          local_58._4_12_ = auVar27._4_12_;
          local_58._0_4_ = fVar16 * DAT_0239011c - (float)local_78;
          FUN_01e3f820();
          auStack_74._0_4_ = auVar34._4_4_;
          local_78 = (undefined1  [4])
                     (auVar34._4_4_ * DAT_0239011c + (float)local_78 + DAT_023b1608);
          auStack_74._4_4_ = auVar34._12_4_;
          auStack_74._8_4_ = auVar34._12_4_;
        }
        auVar34 = local_88;
        if (local_88._0_4_ <= (float)local_58._0_4_) {
          auVar34._4_12_ = local_88._4_12_;
          auVar34._0_4_ = (float)local_58._0_4_;
        }
        local_58._0_4_ = auVar34._0_4_;
        (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
        local_58 = ZEXT416((uint)local_58._0_4_);
      }
      uVar18 = FUN_01e3f820();
      if ((uVar11 & 8) != 0) {
        uStack_a0 = extraout_XMM0_Qb_08;
        local_a8 = (undefined1  [8])uVar18;
        local_1f8 = auVar34;
        fVar16 = (float)FUN_01975c10();
        fVar15 = 0.0;
        uVar10 = 0;
        if ((local_8c != DAT_02390124) || (NAN(local_8c) || NAN(DAT_02390124))) {
          local_a8._0_4_ = ((float)local_a8._0_4_ + (float)local_1f8._0_4_ + DAT_02390d00) - fVar16;
          uVar17 = (**(code **)(*unaff_RDI + 0x990))();
          local_58._0_4_ = uVar17;
          FUN_01e3f820();
          auVar28._4_4_ = fVar15;
          auVar28._0_4_ = fVar15;
          auVar28._8_4_ = uVar10;
          auVar28._12_4_ = uVar10;
          auStack_74 = auVar28._4_12_;
          local_78 = (undefined1  [4])(fVar15 * (float)local_58._0_4_ * DAT_0239011c);
          FUN_01e3f820();
          auVar29._4_4_ = fVar15;
          auVar29._0_4_ = fVar15;
          auVar29._8_4_ = uVar10;
          auVar29._12_4_ = uVar10;
          local_58._4_12_ = auVar29._4_12_;
          local_58._0_4_ = fVar15 * DAT_0239011c - (float)local_78;
          FUN_01e3f820();
          auStack_74._0_4_ = fVar15;
          local_78 = (undefined1  [4])(fVar15 * DAT_0239011c + (float)local_78 + DAT_023b1608);
          auStack_74._4_4_ = uVar10;
          auStack_74._8_4_ = uVar10;
        }
        (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
      }
    }
  }
  FUN_01989f80();
  plVar13 = local_40;
  local_e0 = 0;
  local_e8 = unaff_RDI[0x2f];
  if (local_e8 != 0) {
    FUN_00d50b00();
  }
  local_e0 = '\x01';
  uVar10 = (**(code **)((longlong)&dylib_command_000011b8.cmd + *plVar13))();
  local_58._0_4_ = uVar10;
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((!NAN((float)local_58._0_4_)) && (unaff_RDI[0x3b] != 0)) {
    FUN_01989f80();
    _local_78 = (**(code **)(*local_40 + 3000))();
    auStack_74._4_8_ = extraout_XMM0_Qb_09;
    uVar10 = FUN_01964590();
    local_88._0_4_ = uVar10;
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_78 = (undefined1  [4])(local_78 * ((float)local_88._0_4_ - (float)local_58._0_4_));
    auVar21 = insertps(_local_78,_local_78,0x1d);
    (**(code **)(*(longlong *)*unaff_RSI + 0x368))(auVar21._0_8_);
    FUN_01cfbee0();
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
    FUN_01d488d0();
    if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_40 = (longlong *)FUN_01968ab0();
    local_128 = *unaff_RSI;
    local_120 = '\0';
    local_110 = 0;
    local_118 = unaff_RDI[0x2f];
    if (local_118 != 0) {
      FUN_00d50b00();
    }
    local_110 = '\x01';
    uVar6 = (**(code **)(*unaff_RDI + 0x9d8))();
    FUN_019689c0(&local_128,1,&local_208,uVar6);
    if ((local_110 != '\0') && (local_118 != 0)) {
      FUN_00d50b20();
    }
    if ((local_120 != '\0') && (local_128 != 0)) {
      FUN_00d50b20();
    }
    auVar30._0_4_ = (uint)local_78 ^ _DAT_023945e0;
    auVar30._4_4_ = auStack_74._0_4_ ^ _UNK_023945e4;
    auVar30._8_4_ = auStack_74._4_4_ ^ _UNK_023945e8;
    auVar30._12_4_ = auStack_74._8_4_ ^ _UNK_023945ec;
    auVar21 = insertps(auVar30,auVar30,0x1d);
    (**(code **)(*(longlong *)*unaff_RSI + 0x368))(auVar21._0_8_);
  }
  FUN_01989f80();
  cVar5 = (**(code **)("/System/Library/Frameworks/CoreText.framework/Versions/A/CoreText" +
                      *local_40 + 0x40))();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar5 != '\0') {
    local_168 = *unaff_RSI;
    local_160 = 0;
    FUN_01975d60();
  }
LAB_0196f59c:
  FUN_01d48390();
  return;
}


