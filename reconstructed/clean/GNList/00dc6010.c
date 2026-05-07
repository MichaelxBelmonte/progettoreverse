// Function: FUN_00dc6010
// Address: 00dc6010
// Size: 6675 bytes
// Class: GNList
// String references:
//   "GNList"
//   "@%@"
//   "GNString"
//   "GNDictionary"
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_00dc6010(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  byte bVar1;
  int64_t lVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  int64_t *plVar9;
  int64_t *plVar10;
  uint uVar11;
  int64_t **pplVar12;
  int64_t *plVar13;
  void*arg1;
  uint64_t *this_ptr;
  int64_t *plVar14;
  byte bVar15;
  byte bVar16;
  undefined7 uVar17;
  int64_t *plVar18;
  bool bVar19;
  uint32_t uVar20;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  uint32_t extraout_XMM0_Da_02;
  uint32_t extraout_XMM0_Da_03;
  uint32_t uVar21;
  uint32_t extraout_XMM0_Da_04;
  uint32_t extraout_XMM0_Da_05;
  uint32_t extraout_XMM0_Da_06;
  uint32_t extraout_XMM0_Da_07;
  uint32_t extraout_XMM0_Da_08;
  uint32_t extraout_XMM0_Da_09;
  uint32_t extraout_XMM0_Da_10;
  uint32_t extraout_XMM0_Da_11;
  uint32_t extraout_XMM0_Da_12;
  uint32_t extraout_XMM0_Da_13;
  uint32_t extraout_XMM0_Da_14;
  uint32_t extraout_XMM0_Da_15;
  uint32_t extraout_XMM0_Da_16;
  uint32_t extraout_XMM0_Da_17;
  uint64_t local_200;
  uint8_t local_1f8;
  int64_t *local_1f0;
  uint8_t local_1e8;
  int64_t *local_1e0;
  uint8_t local_1d8;
  int64_t *local_1d0;
  uint8_t local_1c8;
  int64_t local_1c0;
  uint8_t local_1b8;
  int64_t local_1b0;
  char local_1a8;
  int64_t local_1a0;
  char local_198;
  int64_t local_190;
  char local_188;
  int64_t local_180;
  char local_178;
  int64_t *local_170;
  char local_168;
  int64_t local_160;
  char local_158;
  int64_t *local_150;
  char local_148;
  int64_t *local_140;
  char local_138;
  int64_t *local_130;
  char local_128;
  int64_t *local_120;
  char local_118;
  uint64_t local_110;
  uint64_t local_108;
  int64_t *local_100;
  char local_f8;
  int64_t *local_f0;
  char local_e8;
  int64_t *local_e0;
  char local_d8;
  int64_t *local_d0;
  char local_c8;
  int64_t *local_b8;
  char local_b0;
  int64_t *local_a8;
  char local_a0;
  int64_t *local_98;
  char local_90;
  int64_t *local_88;
  char local_80;
  int64_t *local_78;
  uint32_t local_6c;
  int64_t *local_68;
  int64_t *local_60;
  uint local_58;
  int64_t *local_50;
  char local_48;
  uint64_t local_40;
  
  local_110 = param_2;
  uVar20 = FUN_00dc5330();
  local_78 = local_60;
  if (((char)local_58 == '\0') && (local_60 != (int64_t *)0x0)) {
    uVar20 = FUN_00d50b00();
  }
  plVar14 = g_02783b10;
  local_a8 = (int64_t *)*this_ptr;
  uVar7 = *arg1;
  local_a0 = 0;
  local_68 = local_a8;
  if (g_02783b10 != (int64_t *)0x0) {
    uVar20 = FUN_00d50b00();
  }
  local_1e0 = plVar14;
  local_1d8 = 1;
  local_108 = uVar7;
  uVar7 = FUN_00dbdbc0(uVar20,&local_1e0);
  plVar13 = local_60;
  if (local_60 == (int64_t *)0x0) {
    uVar17 = (undefined7)((uint64_t)arg1 >> 8);
    bVar1 = 1;
    bVar15 = 0;
    bVar16 = 0;
    local_40 = (int64_t *)((uint64_t)local_40._4_4_ << 0x20);
  }
  else {
    if ((char)local_58 == '\0') {
      uVar7 = FUN_00d50b00();
    }
    bVar15 = 1;
    bVar16 = 1;
    uVar17 = 0;
    bVar1 = 0;
    local_40 = (int64_t *)CONCAT44(local_40._4_4_,(int)CONCAT71((int7)((uint64_t)uVar7 >> 8),1));
  }
  if (plVar14 != (int64_t *)0x0) {
    FUN_00d50b20();
    bVar16 = bVar15;
  }
  local_58 = local_58 & 0xffffff00;
  cVar3 = FUN_00ca18c0();
  uVar20 = extraout_XMM0_Da;
  if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    uVar20 = FUN_00d50b20();
  }
  plVar10 = g_02783b08;
  plVar14 = plVar13;
  if (cVar3 == '\0') {
    local_100 = local_68;
    local_f8 = '\0';
    if (g_02783b08 != (int64_t *)0x0) {
      uVar20 = FUN_00d50b00();
    }
    local_e0 = plVar10;
    local_d8 = 1;
    uVar7 = FUN_00dbdbc0(uVar20,&local_e0);
    if (plVar13 == local_60) {
      if ((bool)(bVar1 & plVar13 != (int64_t *)0x0)) {
        uVar21 = (uint32_t)CONCAT71(uVar17,1);
        if ((char)local_58 == '\0') {
          local_40 = (int64_t *)((uint64_t)local_40 & 0xffffffff00000000);
          FUN_00d50b00();
        }
      }
      else if (((char)local_58 == '\0') || (plVar13 == (int64_t *)0x0)) {
        uVar21 = (uint32_t)local_40;
      }
      else {
        FUN_00d50b20();
        uVar21 = (uint32_t)local_40;
      }
    }
    else {
      plVar14 = local_60;
      if ((char)local_58 == '\0') {
        if (local_60 != (int64_t *)0x0) {
          uVar7 = FUN_00d50b00();
        }
        uVar21 = (int)CONCAT71(uVar17,1);
        if ((bool)(bVar16 & plVar13 != (int64_t *)0x0)) {
          local_40 = (int64_t *)
                     CONCAT44(local_40._4_4_,(int)CONCAT71((int7)((uint64_t)uVar7 >> 8),1));
          FUN_00d50b20();
          uVar21 = (int)CONCAT71(uVar17,1);
        }
      }
      else {
        uVar21 = (uint32_t)CONCAT71(uVar17,1);
        if ((bool)(bVar16 & plVar13 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    if (plVar10 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    local_58 = local_58 & 0xffffff00;
    local_60 = plVar14;
    uVar7 = FUN_00ca18c0();
    cVar3 = (char)uVar7;
    uVar20 = extraout_XMM0_Da_00;
    if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      uVar7 = FUN_00d50b20();
      uVar20 = extraout_XMM0_Da_01;
    }
    plVar13 = g_02783b00;
    local_6c = (uint32_t)CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
    if (cVar3 == '\0') {
      local_f0 = local_68;
      local_e8 = '\0';
      if (g_02783b00 != (int64_t *)0x0) {
        uVar20 = FUN_00d50b00();
      }
      local_d0 = plVar13;
      local_c8 = '\x01';
      uVar7 = FUN_00dbdbc0(uVar20,&local_d0);
      cVar3 = (char)uVar21;
      if (plVar14 == local_60) {
        plVar10 = plVar14;
        if ((cVar3 == '\0') && (plVar14 != (int64_t *)0x0)) {
          param_1 = CONCAT71((int7)(param_1 >> 8),1);
          local_40 = (int64_t *)CONCAT44(local_40._4_4_,(int)param_1);
          if ((char)local_58 == '\0') {
            FUN_00d50b00();
          }
        }
        else if (((char)local_58 == '\0') || (plVar14 == (int64_t *)0x0)) {
          local_40 = (int64_t *)CONCAT44(local_40._4_4_,uVar21);
        }
        else {
          FUN_00d50b20();
          local_40 = (int64_t *)CONCAT44(local_40._4_4_,uVar21);
        }
      }
      else {
        plVar10 = local_60;
        if ((char)local_58 == '\0') {
          if (local_60 != (int64_t *)0x0) {
            uVar7 = FUN_00d50b00();
          }
          local_40 = (int64_t *)
                     CONCAT44(local_40._4_4_,(int)CONCAT71((int7)((uint64_t)uVar7 >> 8),1));
          if ((cVar3 != '\0') && (plVar14 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_40 = (int64_t *)
                     CONCAT44(local_40._4_4_,(int)CONCAT71((int7)((uint64_t)uVar7 >> 8),1));
          if ((cVar3 != '\0') && (plVar14 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      if (plVar13 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      local_58 = local_58 & 0xffffff00;
      local_60 = plVar10;
      cVar3 = FUN_00ca18c0();
      uVar20 = extraout_XMM0_Da_04;
      if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        uVar20 = FUN_00d50b20();
      }
      plVar14 = plVar10;
      if (cVar3 == '\0') {
        uVar20 = FUN_00d6c870();
        plVar13 = local_60;
        lVar2 = g_02783b28;
        local_1d0 = local_68;
        local_1c8 = 0;
        if (g_02783b28 != 0) {
          uVar20 = FUN_00d50b00();
        }
        local_1c0 = lVar2;
        local_1b8 = 1;
        FUN_00dbdbc0(uVar20,&local_1c0);
        local_98 = local_b8;
        local_90 = 0;
        if ((local_b0 == '\0') && (local_b8 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        local_90 = '\x01';
        uVar7 = (**(code **)(*plVar13 + 0x50))();
        cVar3 = (char)uVar7;
        uVar20 = extraout_XMM0_Da_05;
        if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
          uVar7 = FUN_00d50b20();
          uVar20 = extraout_XMM0_Da_06;
        }
        if (lVar2 != 0) {
          uVar7 = FUN_00d50b20();
          uVar20 = extraout_XMM0_Da_07;
        }
        if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
          uVar7 = FUN_00d50b20();
          uVar20 = extraout_XMM0_Da_08;
        }
        plVar13 = g_02783b08;
        if (cVar3 != '\0') {
          if (g_02783b08 != (int64_t *)0x0) {
            uVar7 = FUN_00d50b00();
          }
          if (plVar10 == plVar13) {
            param_1 = 1;
            if (plVar13 == (int64_t *)0x0) {
              param_1 = (uint64_t)local_40 & 0xff;
            }
            bVar19 = (char)local_40 != '\0';
            if (bVar19) {
              param_1 = (uint64_t)local_40 & 0xff;
            }
            local_40 = (int64_t *)CONCAT44(local_40._4_4_,(int)param_1);
            if ((bVar19) && (plVar13 != (int64_t *)0x0)) {
              local_40 = (int64_t *)CONCAT44(local_40._4_4_,1);
              FUN_00d50b20();
            }
          }
          else {
            bVar19 = (char)local_40 != '\0';
            local_40 = (int64_t *)
                       CONCAT44(local_40._4_4_,(int)CONCAT71((int7)((uint64_t)uVar7 >> 8),1));
            plVar14 = plVar13;
            if ((bVar19) && (plVar10 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          local_58 = local_58 & 0xffffff00;
          local_60 = plVar14;
          cVar3 = FUN_00ca18c0();
          uVar20 = extraout_XMM0_Da_10;
          if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
            uVar20 = FUN_00d50b20();
          }
          if (cVar3 != '\0') goto LAB_00dc62a3;
        }
      }
      goto LAB_00dc6146;
    }
    local_40 = (int64_t *)CONCAT44(local_40._4_4_,uVar21);
  }
  else {
LAB_00dc6146:
    local_6c = 0;
  }
LAB_00dc62a3:
  if (((char)local_40 != '\0') && (plVar14 != (int64_t *)0x0)) {
    uVar20 = FUN_00d50b20();
  }
  plVar13 = g_02783b10;
  plVar14 = (int64_t *)*this_ptr;
  uVar7 = *arg1;
  local_a0 = 0;
  local_a8 = plVar14;
  if (g_02783b10 != (int64_t *)0x0) {
    uVar20 = FUN_00d50b00();
  }
  local_1e0 = plVar13;
  local_1d8 = 1;
  uVar8 = FUN_00dbdbc0(uVar20,&local_1e0);
  local_40 = local_60;
  local_108 = uVar7;
  if (local_60 == (int64_t *)0x0) {
    bVar15 = 1;
    bVar16 = 1;
    uVar17 = 0;
    bVar1 = 0;
    local_68 = (int64_t *)((uint64_t)local_68 & 0xffffffff00000000);
  }
  else {
    if ((char)local_58 == '\0') {
      uVar8 = FUN_00d50b00();
    }
    uVar17 = (undefined7)((uint64_t)uVar7 >> 8);
    bVar1 = 1;
    bVar15 = 0;
    bVar16 = 0;
    local_68 = (int64_t *)CONCAT44(local_68._4_4_,(int)CONCAT71((int7)((uint64_t)uVar8 >> 8),1));
  }
  if (plVar13 != (int64_t *)0x0) {
    FUN_00d50b20();
    bVar16 = bVar15;
  }
  local_60 = local_40;
  local_58 = local_58 & 0xffffff00;
  cVar3 = FUN_00ca18c0();
  uVar20 = extraout_XMM0_Da_02;
  if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    uVar20 = FUN_00d50b20();
  }
  plVar10 = local_40;
  plVar13 = g_02783b08;
  if (cVar3 == '\0') {
    local_f8 = '\0';
    local_100 = plVar14;
    if (g_02783b08 != (int64_t *)0x0) {
      uVar20 = FUN_00d50b00();
    }
    local_e0 = plVar13;
    local_d8 = '\x01';
    FUN_00dbdbc0(uVar20,&local_e0);
    plVar18 = local_40;
    plVar10 = local_60;
    if (local_40 == local_60) {
      if ((bool)(bVar16 & local_40 != (int64_t *)0x0)) {
        uVar20 = (uint32_t)CONCAT71(uVar17,1);
        if ((char)local_58 == '\0') {
          local_68 = (int64_t *)((uint64_t)local_68 & 0xffffffff00000000);
          FUN_00d50b00();
        }
      }
      else {
        uVar20 = local_68._0_4_;
        if (((char)local_58 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
          uVar20 = local_68._0_4_;
        }
      }
    }
    else {
      if ((char)local_58 == '\0') {
        plVar9 = local_40;
        if (local_60 != (int64_t *)0x0) {
          plVar9 = (int64_t *)FUN_00d50b00();
        }
        if ((bool)(bVar1 & plVar18 != (int64_t *)0x0)) {
          local_68 = (int64_t *)
                     CONCAT44(local_68._4_4_,(int)CONCAT71((int7)((uint64_t)plVar9 >> 8),1));
          FUN_00d50b20();
          plVar18 = plVar10;
          uVar20 = (int)CONCAT71(uVar17,1);
          goto LAB_00dc65c3;
        }
      }
      else if ((bool)(bVar1 & local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      plVar18 = plVar10;
      uVar20 = (int)CONCAT71(uVar17,1);
    }
LAB_00dc65c3:
    if (plVar13 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    local_58 = local_58 & 0xffffff00;
    local_60 = plVar18;
    cVar3 = FUN_00ca18c0();
    uVar21 = extraout_XMM0_Da_03;
    if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      uVar21 = FUN_00d50b20();
    }
    plVar13 = g_02783b00;
    if (cVar3 == '\0') {
      local_e8 = '\0';
      local_f0 = plVar14;
      if (g_02783b00 != (int64_t *)0x0) {
        uVar21 = FUN_00d50b00();
      }
      local_d0 = plVar13;
      local_c8 = '\x01';
      uVar7 = FUN_00dbdbc0(uVar21,&local_d0);
      plVar10 = local_60;
      cVar3 = (char)uVar20;
      if (plVar18 == local_60) {
        if ((cVar3 == '\0') && (plVar18 != (int64_t *)0x0)) {
          local_68 = (int64_t *)CONCAT44(local_68._4_4_,(int)CONCAT71((int7)(param_1 >> 8),1));
          plVar10 = plVar18;
          if ((char)local_58 == '\0') {
            FUN_00d50b00();
          }
        }
        else if (((char)local_58 == '\0') || (plVar18 == (int64_t *)0x0)) {
          local_68 = (int64_t *)CONCAT44(local_68._4_4_,uVar20);
          plVar10 = plVar18;
        }
        else {
          FUN_00d50b20();
          local_68 = (int64_t *)CONCAT44(local_68._4_4_,uVar20);
          plVar10 = plVar18;
        }
      }
      else if ((char)local_58 == '\0') {
        if (local_60 != (int64_t *)0x0) {
          uVar7 = FUN_00d50b00();
        }
        local_68 = (int64_t *)
                   CONCAT44(local_68._4_4_,(int)CONCAT71((int7)((uint64_t)uVar7 >> 8),1));
        if ((cVar3 != '\0') && (plVar18 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_68 = (int64_t *)
                   CONCAT44(local_68._4_4_,(int)CONCAT71((int7)((uint64_t)uVar7 >> 8),1));
        if ((cVar3 != '\0') && (plVar18 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      if (plVar13 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      local_58 = local_58 & 0xffffff00;
      local_60 = plVar10;
      cVar3 = FUN_00ca18c0();
      uVar20 = extraout_XMM0_Da_09;
      if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        uVar20 = FUN_00d50b20();
      }
      if (cVar3 == '\0') {
        uVar20 = FUN_00d6c870();
        plVar13 = local_60;
        lVar2 = g_02783b28;
        local_1c8 = 0;
        local_1d0 = plVar14;
        if (g_02783b28 != 0) {
          uVar20 = FUN_00d50b00();
        }
        local_1c0 = lVar2;
        local_1b8 = 1;
        FUN_00dbdbc0(uVar20,&local_1c0);
        plVar14 = local_b8;
        local_90 = 0;
        if ((local_b0 == '\0') && (local_b8 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        local_98 = plVar14;
        local_90 = '\x01';
        uVar7 = (**(code **)(*plVar13 + 0x50))();
        cVar3 = (char)uVar7;
        if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
          uVar7 = FUN_00d50b20();
        }
        if (lVar2 != 0) {
          uVar7 = FUN_00d50b20();
        }
        if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
          uVar7 = FUN_00d50b20();
        }
        plVar14 = g_02783b10;
        if (cVar3 == '\0') {
LAB_00dc6ecb:
          local_80 = '\0';
          local_88 = (int64_t *)0x0;
        }
        else {
          if (g_02783b10 != (int64_t *)0x0) {
            uVar7 = FUN_00d50b00();
          }
          if (plVar10 == plVar14) {
            uVar5 = (uint)local_68 & 0xff;
            uVar11 = 1;
            if (plVar14 == (int64_t *)0x0) {
              uVar11 = uVar5;
            }
            bVar19 = (char)local_68 != '\0';
            if (bVar19) {
              uVar11 = uVar5;
            }
            local_68 = (int64_t *)CONCAT44(local_68._4_4_,uVar11);
            plVar13 = plVar10;
            if ((bVar19) && (plVar14 != (int64_t *)0x0)) {
              local_68 = (int64_t *)CONCAT44(local_68._4_4_,1);
              FUN_00d50b20();
            }
          }
          else {
            bVar19 = (char)local_68 != '\0';
            local_68 = (int64_t *)
                       CONCAT44(local_68._4_4_,(int)CONCAT71((int7)((uint64_t)uVar7 >> 8),1));
            plVar13 = plVar14;
            if ((bVar19) && (plVar10 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          local_58 = local_58 & 0xffffff00;
          local_60 = plVar13;
          uVar7 = FUN_00ca18c0();
          cVar3 = (char)uVar7;
          uVar20 = extraout_XMM0_Da_11;
          if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
            uVar7 = FUN_00d50b20();
            uVar20 = extraout_XMM0_Da_12;
          }
          plVar14 = g_02783b08;
          plVar10 = plVar13;
          if (cVar3 == '\0') {
            if (g_02783b08 != (int64_t *)0x0) {
              uVar7 = FUN_00d50b00();
            }
            if (plVar13 == plVar14) {
              uVar5 = (uint)local_68 & 0xff;
              uVar11 = 1;
              if (plVar14 == (int64_t *)0x0) {
                uVar11 = uVar5;
              }
              bVar19 = (char)local_68 != '\0';
              if (bVar19) {
                uVar11 = uVar5;
              }
              local_68 = (int64_t *)CONCAT44(local_68._4_4_,uVar11);
              if ((bVar19) && (plVar14 != (int64_t *)0x0)) {
                local_68 = (int64_t *)CONCAT44(local_68._4_4_,1);
                FUN_00d50b20();
              }
            }
            else {
              bVar19 = (char)local_68 != '\0';
              local_68 = (int64_t *)
                         CONCAT44(local_68._4_4_,(int)CONCAT71((int7)((uint64_t)uVar7 >> 8),1));
              plVar10 = plVar14;
              if ((bVar19) && (plVar13 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            local_58 = local_58 & 0xffffff00;
            local_60 = plVar10;
            cVar3 = FUN_00ca18c0();
            uVar20 = extraout_XMM0_Da_13;
            if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
              uVar20 = FUN_00d50b20();
            }
            if (cVar3 == '\0') goto LAB_00dc6ecb;
            local_b0 = '\0';
            local_b8 = plVar10;
            FUN_01de4130(uVar20,&local_b8);
            local_88 = local_60;
            local_80 = 0;
            if ((char)local_58 == '\0') {
              if (local_60 == (int64_t *)0x0) {
                local_88 = (int64_t *)0x0;
                local_80 = '\x01';
              }
              else {
                FUN_00d50b00();
                local_80 = '\x01';
                if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
            }
            else {
              local_80 = '\x01';
              local_58 = local_58 & 0xffffff00;
            }
            if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_b0 = '\0';
            local_b8 = plVar13;
            FUN_01de4130(uVar20,&local_b8);
            local_88 = local_60;
            local_80 = 0;
            if ((char)local_58 == '\0') {
              if (local_60 == (int64_t *)0x0) {
                local_88 = (int64_t *)0x0;
                local_80 = '\x01';
              }
              else {
                FUN_00d50b00();
                local_80 = '\x01';
                if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
            }
            else {
              local_80 = '\x01';
              local_58 = local_58 & 0xffffff00;
            }
            if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
      }
      else {
        local_90 = '\0';
        local_98 = plVar10;
        FUN_01de4130(uVar20,&local_98);
        local_88 = local_60;
        local_80 = 0;
        if ((char)local_58 == '\0') {
          if (local_60 == (int64_t *)0x0) {
            local_88 = (int64_t *)0x0;
            local_80 = '\x01';
          }
          else {
            FUN_00d50b00();
            local_80 = '\x01';
            if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        else {
          local_80 = '\x01';
          local_58 = local_58 & 0xffffff00;
        }
        if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_c8 = '\0';
      local_d0 = plVar18;
      uVar21 = FUN_01de4130(uVar21,&local_d0);
      local_50 = local_f0;
      local_58 = 1;
      local_60 = &g_024c5048;
      local_48 = 0;
      if (local_f0 != (int64_t *)0x0) {
        uVar21 = FUN_00d50b00();
      }
      local_48 = '\x01';
      FUN_00d8cb40(uVar21,&local_60);
      local_60 = &g_024c5048;
      if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_e8 != '\0') && (local_f0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_c8 != '\0') && (local_d0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      local_68 = (int64_t *)CONCAT44(local_68._4_4_,uVar20);
      plVar10 = plVar18;
    }
  }
  else {
    local_e0 = local_40;
    local_d8 = '\0';
    uVar20 = FUN_01de4130(uVar20,&local_e0);
    local_50 = local_100;
    local_58 = 1;
    local_60 = &g_024c5048;
    local_48 = 0;
    if (local_100 != (int64_t *)0x0) {
      uVar20 = FUN_00d50b00();
    }
    local_48 = '\x01';
    FUN_00d8cb40(uVar20,&local_60);
    local_60 = &g_024c5048;
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_f8 != '\0') && (local_100 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (((char)local_68 != '\0') && (plVar10 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar14 = local_88;
  if (local_80 == '\0') {
    if (((local_88 != (int64_t *)0x0) && (FUN_00d50b00(), local_80 != '\0')) &&
       (local_88 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_80 = '\0';
  }
  local_200 = *arg1;
  local_1f8 = 0;
  local_1f0 = local_78;
  local_1e8 = 0;
  uVar20 = FUN_00dc8890(&local_1f0,&local_200,param_3,param_4,0);
  plVar13 = local_60;
  if ((char)local_58 == '\0') {
    if (local_60 != (int64_t *)0x0) {
      uVar20 = FUN_00d50b00();
      goto LAB_00dc6f74;
    }
    local_a8 = (int64_t *)0x0;
    local_a0 = 1;
    plVar13 = local_a8;
  }
  else {
LAB_00dc6f74:
    local_a8 = plVar13;
    local_a0 = 1;
    plVar13 = local_a8;
  }
  local_a0 = '\x01';
  local_a8 = plVar13;
  if (plVar14 == (int64_t *)0x0) {
    local_a0 = '\x01';
    if ((g_026fdd40 == '\0') &&
       (iVar6 = ___cxa_guard_acquire(), uVar20 = extraout_XMM0_Da_17, iVar6 != 0)) {
      g_026cd0e8 = FUN_00d4fe50();
      g_026cd0d0 = "GNDictionary";
      g_026cd0d8 = 0x28;
      g_026cd0e0 = FUN_00022d20;
      g_026cd0f0 = 0;
      ram_00000000026cd0f8 = 0;
      g_026cd100 = 0;
      g_026cd178 = 0;
      ram_00000000026cd180 = 0;
      g_026cd188 = 0;
      g_026cd18a = 6;
      g_026cd108 = 0;
      ram_00000000026cd110 = 0;
      g_026cd118 = 0;
      ram_00000000026cd120 = 0;
      g_026cd128 = 0;
      ram_00000000026cd130 = 0;
      g_026cd138 = 0;
      ram_00000000026cd140 = 0;
      g_026cd148 = 0;
      ram_00000000026cd150 = 0;
      g_026cd158 = 0;
      ram_00000000026cd160 = 0;
      g_026cd168 = 0;
      ram_00000000026cd170 = 0;
      g_026cd193 = 0;
      g_026cd18b = 0;
      uVar20 = ___cxa_guard_release();
    }
    pplVar12 = (int64_t **)&g_02802688;
    if (plVar13 != (int64_t *)0x0) {
      (**(code **)(*plVar13 + 0x360))();
      cVar3 = FUN_00e85ea0();
      uVar20 = extraout_XMM0_Da_15;
      if (cVar3 != '\0') {
        if ((g_026fd0c0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
          g_026d5e58 = FUN_00d4fe50();
          g_026d5e40 = "GNString";
          g_026d5e48 = 0x40;
          g_026d5e50 = FUN_0005d920;
          g_026d5e60 = 0;
          ram_00000000026d5e68 = 0;
          g_026d5e70 = 0;
          ram_00000000026d5e78 = 0;
          g_026d5e80 = 0;
          ram_00000000026d5e88 = 0;
          g_026d5e90 = 0;
          ram_00000000026d5e98 = 0;
          g_026d5ea0 = 0;
          ram_00000000026d5ea8 = 0;
          g_026d5eb0 = 0;
          ram_00000000026d5eb8 = 0;
          g_026d5ec0 = 0;
          ram_00000000026d5ec8 = 0;
          g_026d5ed0 = 0;
          ram_00000000026d5ed8 = 0;
          g_026d5ee0 = 0;
          ram_00000000026d5ee8 = 0;
          g_026d5ef0 = 0;
          ram_00000000026d5ef8 = 0;
          g_026d5f00 = 0;
          ___cxa_guard_release();
        }
        cVar3 = FUN_00e8db60();
        pplVar12 = &local_a8;
        uVar20 = extraout_XMM0_Da_16;
        if (cVar3 == '\0') {
          pplVar12 = (int64_t **)&g_02802688;
        }
      }
    }
    cVar3 = *(char *)(pplVar12 + 1);
    if ((cVar3 == '\0') || (*pplVar12 == (int64_t *)0x0)) {
      if (*pplVar12 == (int64_t *)0x0) goto LAB_00dc76e5;
    }
    else {
      uVar20 = FUN_00d50b00();
    }
    lVar2 = g_027f37d8;
    if (g_027f37d8 != 0) {
      uVar20 = FUN_00d50b00();
    }
    local_1b0 = lVar2;
    local_1a8 = '\x01';
    pplVar12 = &local_60;
    FUN_000175c0(uVar20,&local_1b0);
    plVar13 = local_60;
    if ((g_026fd0c0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
      g_026d5e58 = FUN_00d4fe50();
      g_026d5e40 = "GNString";
      g_026d5e48 = 0x40;
      g_026d5e50 = FUN_0005d920;
      g_026d5e60 = 0;
      ram_00000000026d5e68 = 0;
      g_026d5e70 = 0;
      ram_00000000026d5e78 = 0;
      g_026d5e80 = 0;
      ram_00000000026d5e88 = 0;
      g_026d5e90 = 0;
      ram_00000000026d5e98 = 0;
      g_026d5ea0 = 0;
      ram_00000000026d5ea8 = 0;
      g_026d5eb0 = 0;
      ram_00000000026d5eb8 = 0;
      g_026d5ec0 = 0;
      ram_00000000026d5ec8 = 0;
      g_026d5ed0 = 0;
      ram_00000000026d5ed8 = 0;
      g_026d5ee0 = 0;
      ram_00000000026d5ee8 = 0;
      g_026d5ef0 = 0;
      ram_00000000026d5ef8 = 0;
      g_026d5f00 = 0;
      ___cxa_guard_release();
    }
    if (plVar13 == (int64_t *)0x0) {
LAB_00dc7259:
      pplVar12 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar13 + 0x360))();
      cVar4 = FUN_00e85ea0();
      if (cVar4 == '\0') goto LAB_00dc7259;
    }
    plVar13 = *pplVar12;
    if (*(char *)(pplVar12 + 1) == '\0') {
      if (plVar13 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(void*)(pplVar12 + 1) = 0;
    }
    if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_1a8 != '\0') && (local_1b0 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = g_02783b70;
    if (plVar13 == (int64_t *)0x0) {
      bVar19 = true;
    }
    else {
      if (g_02783b70 != 0) {
        FUN_00d50b00();
      }
      local_1a0 = lVar2;
      local_198 = '\x01';
      cVar4 = (**(code **)(*plVar13 + 0x50))();
      if ((local_198 != '\0') && (local_1a0 != 0)) {
        FUN_00d50b20();
      }
      lVar2 = g_02783b80;
      plVar10 = g_02783b78;
      if (cVar4 == '\0') {
        if (g_02783b80 != 0) {
          FUN_00d50b00();
        }
        local_190 = lVar2;
        local_188 = '\x01';
        cVar4 = (**(code **)(*plVar13 + 0x50))();
        if ((local_188 != '\0') && (local_190 != 0)) {
          FUN_00d50b20();
        }
        lVar2 = g_02783b90;
        plVar10 = g_02783b88;
        if (cVar4 != '\0') {
          if (g_02783b88 == (int64_t *)0x0) goto LAB_00dc743b;
          FUN_00d50b00();
          goto LAB_00dc7393;
        }
        if (g_02783b90 != 0) {
          FUN_00d50b00();
        }
        local_180 = lVar2;
        local_178 = '\x01';
        uVar7 = (**(code **)(*plVar13 + 0x50))();
        cVar4 = (char)uVar7;
        if ((local_178 != '\0') && (local_180 != 0)) {
          uVar7 = FUN_00d50b20();
        }
        plVar10 = g_02783b98;
        if (cVar4 == '\0') {
          local_168 = '\0';
          local_170 = plVar13;
          FUN_00c80cd0();
          plVar13 = local_60;
          if ((char)local_58 == '\0') {
            if (local_60 != (int64_t *)0x0) {
              FUN_00d50b00();
              if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
          }
          else {
            local_58 = local_58 & 0xffffff00;
          }
          if ((local_168 != '\0') && (local_170 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          lVar2 = g_02783b90;
          if (plVar13 == (int64_t *)0x0) {
            bVar19 = true;
          }
          else {
            local_40 = plVar13;
            if (g_02783b90 != 0) {
              FUN_00d50b00();
            }
            local_160 = lVar2;
            local_158 = '\x01';
            uVar7 = FUN_00c80fd0();
            cVar4 = (char)uVar7;
            if ((local_158 != '\0') && (local_160 != 0)) {
              uVar7 = FUN_00d50b20();
            }
            plVar13 = g_02783b98;
            if ((cVar4 != '\0') &&
               (local_6c = (uint32_t)CONCAT71((int7)((uint64_t)uVar7 >> 8),1),
               g_02783b98 != (int64_t *)0x0)) {
              FUN_00d50b00();
              plVar14 = plVar13;
            }
            bVar19 = false;
            FUN_00d50b20();
          }
        }
        else {
          bVar19 = false;
          local_6c = (uint32_t)CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
          if (g_02783b98 != (int64_t *)0x0) {
            FUN_00d50b00();
            plVar14 = plVar10;
            bVar19 = false;
          }
        }
      }
      else if (g_02783b78 == (int64_t *)0x0) {
LAB_00dc743b:
        local_6c = 0;
        bVar19 = false;
      }
      else {
        FUN_00d50b00();
LAB_00dc7393:
        local_6c = 0;
        plVar14 = plVar10;
        bVar19 = false;
      }
      FUN_00d50b20();
    }
    if (cVar3 != '\0') {
      FUN_00d50b20();
    }
    if (bVar19) goto LAB_00dc76e5;
  }
  plVar13 = local_a8;
  if (plVar14 == (int64_t *)0x0) {
    plVar14 = (int64_t *)0x0;
    goto LAB_00dc76e5;
  }
  if (local_a8 == (int64_t *)0x0) goto LAB_00dc76e5;
  local_58 = local_58 & 0xffffff00;
  local_60 = plVar14;
  cVar3 = FUN_00ca18c0();
  uVar20 = extraout_XMM0_Da_14;
  if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    uVar20 = FUN_00d50b20();
  }
  if (cVar3 == '\0') {
    if ((char)local_6c != '\0') {
      plVar10 = (int64_t *)FUN_00e8fc40();
      FUN_00d4ff40();
      *plVar10 = (int64_t)&g_02572358;
      (*g_02572370)();
      local_150 = plVar13;
      local_148 = '\0';
      FUN_00d21140();
      if ((local_148 != '\0') && (local_150 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      cVar3 = local_a0;
      if (plVar10 == plVar13) {
        if (local_a0 == '\0') {
          FUN_00d50b00();
          goto LAB_00dc74d9;
        }
      }
      else {
        FUN_00d50b00();
        plVar13 = plVar10;
        local_a8 = plVar10;
        if (cVar3 != '\0') {
          FUN_00d50b20();
        }
LAB_00dc74d9:
        local_a0 = '\x01';
      }
      uVar20 = FUN_00d50b20();
    }
    local_138 = '\0';
    local_58 = local_58 & 0xffffff00;
    local_140 = plVar13;
    local_60 = plVar14;
    FUN_00ca0840(uVar20,&local_60);
    if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_138 != '\0') && (local_140 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    goto LAB_00dc76e5;
  }
  local_128 = '\0';
  pplVar12 = &local_60;
  local_130 = plVar14;
  FUN_000175c0(uVar20,&local_130);
  plVar13 = local_60;
  if ((g_027048b0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
    g_026cd478 = FUN_00d4fe50();
    g_026cd460 = "GNList";
    g_026cd468 = 0x20;
    g_026cd470 = FUN_00018210;
    g_026cd480 = 0;
    ram_00000000026cd488 = 0;
    g_026cd490 = 0;
    g_026cd508 = 0;
    ram_00000000026cd510 = 0;
    g_026cd518 = 0;
    g_026cd51a = 6;
    g_026cd498 = 0;
    ram_00000000026cd4a0 = 0;
    g_026cd4a8 = 0;
    ram_00000000026cd4b0 = 0;
    g_026cd4b8 = 0;
    ram_00000000026cd4c0 = 0;
    g_026cd4c8 = 0;
    ram_00000000026cd4d0 = 0;
    g_026cd4d8 = 0;
    ram_00000000026cd4e0 = 0;
    g_026cd4e8 = 0;
    ram_00000000026cd4f0 = 0;
    g_026cd4f8 = 0;
    ram_00000000026cd500 = 0;
    g_026cd523 = 0;
    g_026cd51b = 0;
    ___cxa_guard_release();
  }
  if (plVar13 == (int64_t *)0x0) {
LAB_00dc703e:
    pplVar12 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar13 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_00dc703e;
  }
  plVar13 = *pplVar12;
  if (*(char *)(pplVar12 + 1) == '\0') {
    if (plVar13 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar12 + 1) = 0;
  }
  if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_128 != '\0') && (local_130 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_6c != '\0') && (plVar13 != (int64_t *)0x0)) {
    local_120 = local_a8;
    local_118 = '\0';
    FUN_00d21140();
    if ((local_118 != '\0') && (local_120 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (plVar13 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_00dc76e5:
  if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar14 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_78 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

