// Function: FUN_00c271c0
// Address: 00c271c0
// Size: 1723 bytes
// Class: GNOverloudConvolver
// String references:
//   "ir%I_%@"

uint64_t FUN_00c271c0(int64_t *param_1,int64_t *param_2,int64_t *param_3)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t *plVar4;
  char cVar5;
  int iVar6;
  uint32_t uVar7;
  uint uVar8;
  int64_t this_ptr;
  uint64_t unaff_R12;
  uint64_t uVar9;
  uint64_t extraout_XMM0_Qa;
  uint64_t uVar10;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t extraout_XMM0_Qa_01;
  uint64_t extraout_XMM0_Qa_02;
  uint64_t extraout_XMM0_Qa_03;
  int64_t local_1b8;
  uint8_t local_1b0;
  void*local_1a8;
  uint8_t local_1a0;
  void*local_198;
  uint8_t local_190;
  int64_t local_188;
  uint8_t local_180;
  int64_t local_178;
  uint8_t local_170;
  void*local_168;
  uint8_t local_160;
  void*local_158;
  uint8_t local_150;
  int64_t local_148;
  uint8_t local_140;
  int64_t local_138;
  char local_130;
  int64_t local_128;
  char local_120;
  int64_t local_118;
  char local_110;
  int64_t local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  void*local_68;
  uint32_t local_60;
  uint32_t local_5c;
  int64_t local_58;
  char local_50;
  int64_t *local_48;
  int64_t *local_40;
  
  lVar1 = g_0276ca68;
  local_48 = param_3;
  if (g_0276ca68 != 0) {
    FUN_00d50b00();
  }
  local_128 = lVar1;
  local_120 = '\x01';
  cVar5 = FUN_00d90870();
  if ((local_120 != '\0') && (local_128 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = g_0276ca70;
  uVar9 = CONCAT71((int7)((uint64_t)unaff_R12 >> 8),1);
  if (cVar5 != '\0') goto LAB_00c27866;
  if (g_0276ca70 != 0) {
    FUN_00d50b00();
  }
  local_118 = lVar1;
  local_110 = '\x01';
  cVar5 = FUN_00d90870();
  uVar10 = extraout_XMM0_Qa;
  if ((local_110 != '\0') && (local_118 != 0)) {
    uVar10 = FUN_00d50b20();
  }
  lVar1 = g_0276ca78;
  if (cVar5 != '\0') {
    local_1b8 = *param_1;
    local_1b0 = 0;
    FUN_00c26750(uVar10,&local_1b8);
    if (((char)local_60 == '\0') && (local_68 != (void*)0x0)) {
      FUN_00d50b00();
    }
    local_108 = *local_48;
    local_100 = '\0';
    iVar6 = FUN_00c716c0();
    uVar10 = extraout_XMM0_Qa_00;
    if ((local_100 != '\0') && (local_108 != 0)) {
      uVar10 = FUN_00d50b20();
    }
    if (iVar6 == 0) {
      local_198 = local_68;
      local_190 = 0;
      FUN_00c27bd0(uVar10,0);
    }
    else {
      local_1a8 = local_68;
      local_1a0 = 0;
      FUN_00c27bd0(uVar10,2);
    }
    FUN_01d243a0();
    if (local_68 != (void*)0x0) {
      FUN_00d50b20();
    }
    goto LAB_00c27866;
  }
  if (g_0276ca78 != 0) {
    FUN_00d50b00();
  }
  local_f8 = lVar1;
  local_f0 = '\x01';
  cVar5 = FUN_00d90870();
  uVar10 = extraout_XMM0_Qa_01;
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    uVar10 = FUN_00d50b20();
  }
  lVar1 = g_0276ca60;
  if (cVar5 != '\0') {
    local_188 = *param_2;
    local_180 = 0;
    local_178 = *param_1;
    local_170 = 0;
    FUN_00c26750(uVar10,&local_178);
    if (((char)local_60 == '\0') && (local_68 != (void*)0x0)) {
      FUN_00d50b00();
    }
    local_e8 = *local_48;
    local_e0 = '\0';
    iVar6 = FUN_00c716c0();
    uVar10 = extraout_XMM0_Qa_02;
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      uVar10 = FUN_00d50b20();
    }
    if (iVar6 == 0) {
      local_158 = local_68;
      local_150 = 0;
      FUN_00c29420(uVar10,0);
    }
    else {
      local_168 = local_68;
      local_160 = 0;
      FUN_00c29420(uVar10,2);
    }
    FUN_01d243a0();
    if (local_68 != (void*)0x0) {
      FUN_00d50b20();
    }
    goto LAB_00c27866;
  }
  if (g_0276ca60 != 0) {
    FUN_00d50b00();
  }
  local_d8 = lVar1;
  local_d0 = '\x01';
  cVar5 = FUN_00d90870();
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  plVar4 = local_48;
  lVar1 = g_0276ca90;
  if (cVar5 != '\0') {
    lVar1 = *param_2;
    local_c8 = *local_48;
    local_c0 = '\0';
    iVar6 = FUN_00c716c0();
    local_40 = *(int64_t **)
                (*(int64_t *)
                  (*(int64_t *)(*(int64_t *)(lVar1 + 200) + 0x10) + (int64_t)iVar6 * 8) + 0x20);
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if (((double)local_40 != 0.0) || (NAN((double)local_40))) {
      local_b8 = *plVar4;
      local_b0 = '\0';
      uVar7 = FUN_00c716c0();
      *(void*)(this_ptr + 0xb0) = uVar7;
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      FUN_01d243a0();
    }
    goto LAB_00c27866;
  }
  if (g_0276ca90 != 0) {
    FUN_00d50b00();
  }
  local_88 = lVar1;
  local_80 = '\x01';
  cVar5 = FUN_00d90870();
  if (cVar5 == '\0') {
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    iVar6 = *(int *)(this_ptr + 0xb0);
    uVar10 = extraout_XMM0_Qa_03;
    if ((local_80 != '\0') && (local_88 != 0)) {
      uVar10 = FUN_00d50b20();
    }
    if (iVar6 != 0) {
      uVar10 = FUN_00d8f140(uVar10,4);
      local_58 = local_138;
      local_60 = 2;
      local_5c = *(void*)(this_ptr + 0xb0);
      local_68 = &g_0263cdb0;
      local_50 = 0;
      if (local_138 != 0) {
        uVar10 = FUN_00d50b00();
      }
      local_50 = '\x01';
      FUN_00d8cb40(uVar10,&local_68);
      lVar3 = local_78;
      lVar1 = *param_1;
      if (lVar1 == local_78) {
        if (((char)param_1[1] != '\0') || (local_78 == 0)) goto LAB_00c2778c;
        local_40 = param_1 + 1;
        if (local_70 == '\0') {
          FUN_00d50b00();
          goto LAB_00c27785;
        }
LAB_00c2774c:
        *(void*)local_40 = 1;
        local_70 = '\0';
      }
      else {
        local_40 = param_1 + 1;
        lVar2 = param_1[1];
        if (local_70 != '\0') {
          *param_1 = local_78;
          if (((char)lVar2 != '\0') && (lVar1 != 0)) {
            FUN_00d50b20();
          }
          goto LAB_00c2774c;
        }
        if (local_78 != 0) {
          FUN_00d50b00();
        }
        *param_1 = lVar3;
        if (((char)lVar2 != '\0') && (lVar1 != 0)) {
          FUN_00d50b20();
        }
LAB_00c27785:
        *(void*)local_40 = 1;
LAB_00c2778c:
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
      }
      local_68 = &g_0263cdb0;
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_130 != '\0') && (local_138 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  local_148 = *param_2;
  local_140 = 0;
  local_a8 = *param_1;
  local_a0 = '\0';
  local_98 = *local_48;
  local_90 = '\0';
  uVar8 = FUN_00c17aa0(&local_a8,&local_148,&local_98);
  uVar9 = (uint64_t)uVar8;
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
LAB_00c27866:
  return uVar9 & 0xffffffff;
}

