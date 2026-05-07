// Function: FUN_01f54d20
// Address: 01f54d20
// Size: 1971 bytes
// Class: Unknown

int64_t * FUN_01f54d20(uint64_t param_1,int param_2)

{
  uint8_t auVar1 [16];
  bool bVar2;
  int64_t lVar3;
  ushort uVar4;
  int64_t *plVar5;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t lVar6;
  int64_t lVar7;
  char cVar8;
  uint64_t uVar9;
  uint8_t auVar13 [12];
  uint8_t auVar10 [16];
  uint8_t auVar11 [16];
  uint8_t auVar12 [16];
  uint8_t in_register_00001244 [12];
  int64_t local_228;
  char local_220;
  int64_t local_218;
  char local_210;
  int64_t local_208;
  char local_200;
  int64_t local_1f8;
  char local_1f0;
  int64_t local_1e8;
  char local_1e0;
  int64_t local_1d8;
  char local_1d0;
  int64_t local_1c8;
  char local_1c0;
  int64_t local_1b8;
  char local_1b0;
  int64_t local_1a8;
  char local_1a0;
  int64_t local_198;
  char local_190;
  int64_t local_188;
  char local_180;
  int64_t local_178;
  char local_170;
  int64_t local_168;
  char local_160;
  int64_t local_158;
  char local_150;
  int64_t local_148;
  char local_140;
  int64_t local_138;
  char local_130;
  int64_t local_128;
  char local_120;
  int64_t local_118;
  char local_110;
  int64_t *local_108;
  uint8_t local_100;
  int64_t *local_f8;
  uint8_t local_f0;
  int64_t *local_e8;
  uint8_t local_e0;
  int64_t local_d8;
  uint8_t local_d0;
  int64_t *local_c8;
  uint8_t local_c0;
  int64_t local_b8;
  uint8_t local_b0;
  int64_t local_a8;
  char local_a0;
  uint8_t local_94 [4];
  int64_t local_90;
  char local_88;
  int local_7c;
  short local_6a;
  int64_t local_68;
  char local_60;
  int local_54;
  uint64_t local_50;
  char local_48;
  char local_47;
  short local_46;
  uint8_t local_44 [4];
  int64_t *local_40;
  byte local_32;
  byte local_31;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  
  plVar5 = (int64_t *)FUN_00e8fc40();
  FUN_00d4ff40();
  *plVar5 = (int64_t)&g_0256d868;
  plVar5[2] = 0;
  *(void*)((int64_t)plVar5 + 0x1c) = 0;
  *(void*)((int64_t)plVar5 + 0x24) = 0;
  *(void*)((int64_t)plVar5 + 0x2c) = 0;
  local_40 = plVar5;
  (*g_0256d880)();
  local_88 = 0;
  local_90 = *(int64_t *)(arg1 + 0x10);
  if (local_90 != 0) {
    FUN_00d50b00();
  }
  local_88 = '\x01';
  FUN_00cccfe0();
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  uVar9 = FUN_00ccce80();
  (**(code **)(*local_40 + 0x3a0))(uVar9,(int64_t)(int)(param_2 << 4 | 6));
  if ((local_220 != '\0') && (local_228 != 0)) {
    FUN_00d50b20();
  }
  FUN_00ccd300(local_44,&local_32);
  if ((local_210 != '\0') && (local_218 != 0)) {
    FUN_00d50b20();
  }
  FUN_00ccd300(local_44,&local_31);
  if ((local_200 != '\0') && (local_208 != 0)) {
    FUN_00d50b20();
  }
  FUN_00ccd300(local_44,&local_48);
  if ((local_1f0 != '\0') && (local_1f8 != 0)) {
    FUN_00d50b20();
  }
  FUN_00ccd300(local_44,&local_47);
  if ((local_1e0 != '\0') && (local_1e8 != 0)) {
    FUN_00d50b20();
  }
  FUN_00ccd330(local_44,&local_6a);
  if ((local_1d0 != '\0') && (local_1d8 != 0)) {
    FUN_00d50b20();
  }
  FUN_00ccd330(local_44,&local_46);
  if ((local_1c0 != '\0') && (local_1c8 != 0)) {
    FUN_00d50b20();
  }
  FUN_00ccd540(local_44,local_94);
  if ((local_1b0 != '\0') && (local_1b8 != 0)) {
    FUN_00d50b20();
  }
  uVar9 = FUN_00ccd540(local_44,&local_54);
  if ((local_1a0 != '\0') && (local_1a8 != 0)) {
    uVar9 = FUN_00d50b20();
  }
  if (local_47 == '\0') {
    if (local_6a < 2) {
      (**(code **)(*local_40 + 0x3a0))(uVar9,(int64_t)local_54);
      if ((local_170 != '\0') && (local_178 != 0)) {
        FUN_00d50b20();
      }
      uVar9 = FUN_00ccd540(local_44,&local_7c);
      if ((local_160 != '\0') && (local_168 != 0)) {
        uVar9 = FUN_00d50b20();
      }
      (**(code **)(*local_40 + 0x3a0))(uVar9,(int64_t)local_54 + 0xe);
      if ((local_150 != '\0') && (local_158 != 0)) {
        FUN_00d50b20();
      }
      uVar9 = FUN_00ccd330(local_44,&local_46);
      if ((local_140 != '\0') && (local_148 != 0)) {
        uVar9 = FUN_00d50b20();
      }
      (**(code **)(*local_40 + 0x3a0))(uVar9,(int64_t)local_7c + (int64_t)local_54);
      if ((local_130 != '\0') && (local_138 != 0)) {
        FUN_00d50b20();
      }
      uVar4 = local_46 << 0xe | (ushort)(local_46 - 4U) >> 2;
      if ((uVar4 < 8) && ((0xa3U >> (uVar4 & 0x1f) & 1) != 0)) {
        (**(code **)(*local_40 + 0x3a0))(0xa3,(int64_t)local_7c + (int64_t)local_54);
        if ((local_110 != '\0') && (local_118 != 0)) {
          FUN_00d50b20();
        }
        if (local_48 == '\0') {
          if (local_46 == 8) {
            local_f8 = local_40;
            local_f0 = 0;
            FUN_01f556d0(0x100,&local_f8);
            lVar6 = local_68;
            if (local_68 == 0) goto LAB_01f5532b;
            uVar9 = 1;
            if (local_60 == '\0') {
              FUN_00d50b00();
            }
          }
          else {
            uVar9 = 0;
            lVar6 = 0;
          }
        }
        else {
          local_108 = local_40;
          local_100 = 0;
          FUN_01f556d0(local_48,&local_108);
          lVar6 = local_68;
          if (local_68 == 0) {
LAB_01f5532b:
            uVar9 = 0;
            lVar6 = local_68;
          }
          else {
            uVar9 = 1;
            if (local_60 == '\0') {
              FUN_00d50b00();
            }
          }
        }
        local_e8 = local_40;
        local_e0 = 0;
        local_d0 = 0;
        local_d8 = lVar6;
        local_50 = uVar9;
        FUN_01f558f0(local_32,&local_e8,local_31,(int)local_46);
        lVar3 = local_68;
        if (local_68 == 0) {
          bVar2 = false;
          lVar7 = 0;
        }
        else {
          if (local_60 == '\0') {
            FUN_00d50b00();
          }
          local_c8 = local_40;
          local_c0 = 0;
          local_b8 = lVar3;
          local_b0 = 0;
          FUN_01f561f0(local_32,&local_b8,local_31);
          bVar2 = true;
          lVar7 = lVar3;
        }
        auVar12._0_8_ = (**(code **)(*local_40 + 0x368))();
        auVar12._8_8_ = extraout_XMM0_Qb;
        auVar13 = auVar12._4_12_;
        if ((local_a0 != '\0') && (local_a8 != 0)) {
          auVar10._0_8_ = FUN_00d50b20();
          auVar10._8_8_ = extraout_XMM0_Qb_00;
          auVar13 = auVar10._4_12_;
        }
        if (lVar3 == 0) {
LAB_01f554bb:
          *this_ptr = 0;
        }
        else {
          auVar11._0_4_ = (float)local_32;
          auVar11._4_12_ = auVar13;
          auVar1._4_12_ = in_register_00001244;
          auVar1._0_4_ = (float)local_31;
          auVar12 = insertps(auVar11,auVar1,0x10);
          FUN_01d4f050(auVar12._0_8_,*(void*)(lVar7 + 0x10));
          lVar3 = local_68;
          if (local_68 == 0) goto LAB_01f554bb;
          if (local_60 == '\0') {
            FUN_00d50b00();
            if ((local_60 != '\0') && (local_68 != 0)) {
              FUN_00d50b20();
            }
          }
          *this_ptr = lVar3;
        }
        *(void*)(this_ptr + 1) = 1;
        cVar8 = (char)local_50;
        goto LAB_01f550ad;
      }
      (**(code **)(*local_40 + 0x368))();
      if ((local_120 != '\0') && (local_128 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      (**(code **)(*local_40 + 0x368))();
      if ((local_180 != '\0') && (local_188 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    (**(code **)(*local_40 + 0x368))();
    if ((local_190 != '\0') && (local_198 != 0)) {
      FUN_00d50b20();
    }
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
  cVar8 = '\0';
  lVar6 = 0;
  bVar2 = false;
  lVar7 = 0;
LAB_01f550ad:
  FUN_00d50b20();
  if ((cVar8 != '\0') && (lVar6 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar2) && (lVar7 != 0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}

