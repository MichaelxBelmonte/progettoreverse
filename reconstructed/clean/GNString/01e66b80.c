// Function: FUN_01e66b80
// Address: 01e66b80
// Size: 2320 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01e66b80(uint64_t param_1,uint64_t param_2,int64_t *param_3,int param_4)

{
  int64_t lVar1;
  bool bVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t *plVar5;
  char cVar6;
  int64_t *in_RCX;
  uint in_EDX;
  void*arg1;
  int64_t *plVar7;
  int64_t *this_ptr;
  bool bVar8;
  float fVar9;
  uint64_t uVar10;
  uint8_t auVar11 [16];
  uint64_t in_XMM1_Qb;
  uint64_t uVar14;
  uint8_t auVar12 [16];
  uint8_t auVar13 [16];
  uint8_t local_res8;
  uint32_t local_res10;
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
  int64_t local_108;
  char local_100;
  uint64_t local_f8;
  uint64_t uStack_f0;
  uint64_t local_e8;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t *local_98;
  uint64_t local_78;
  uint uStack_70;
  uint uStack_6c;
  int local_5c;
  int64_t local_40;
  char local_38;
  
  local_f8 = param_2;
  uStack_f0 = in_XMM1_Qb;
  local_e8 = param_1;
  local_5c = param_4;
  if (param_4 == 0xff) {
    local_5c = (**(code **)(*this_ptr + 0x5c0))();
  }
  if ((in_EDX == 0x29) && (g_02802fb0 == 1)) {
    uVar10 = local_f8;
    uVar14 = uStack_f0;
    (**(code **)(*this_ptr + 0x548))();
    local_158 = *param_3;
    if (local_158 == 0) {
      (**(code **)(*this_ptr + 0x370))();
      lVar1 = *param_3;
      if (lVar1 == local_40) {
        if (((char)param_3[1] == '\0') && (local_40 != 0)) {
          if (local_38 != '\0') goto LAB_01e66cba;
          FUN_00d50b00();
          goto LAB_01e66cf7;
        }
LAB_01e66cfc:
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_38 == '\0') {
          local_98 = (int64_t *)CONCAT71(local_98._1_7_,(char)param_3[1]);
          if (local_40 != 0) {
            FUN_00d50b00();
          }
          *param_3 = local_40;
          if (((char)local_98 != '\0') && (lVar1 != 0)) {
            FUN_00d50b20();
          }
LAB_01e66cf7:
          *(void*)(param_3 + 1) = 1;
          goto LAB_01e66cfc;
        }
        *param_3 = local_40;
        if (((char)param_3[1] != '\0') && (lVar1 != 0)) {
          FUN_00d50b20();
        }
LAB_01e66cba:
        *(void*)(param_3 + 1) = 1;
      }
      local_158 = *param_3;
    }
    local_150 = '\0';
    FUN_01cc2100(local_5c,&local_158);
    if ((local_150 != '\0') && (local_158 != 0)) {
      FUN_00d50b20();
    }
    local_148 = *in_RCX;
    local_140 = '\0';
    local_98 = (int64_t *)FUN_01d43d10();
    if ((local_140 != '\0') && (local_148 != 0)) {
      FUN_00d50b20();
    }
    FUN_01e63b70(g_02802fb0,0x29,local_res8,local_res10);
    local_c0 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_c0 = '\x01';
    local_c8 = local_40;
    FUN_01d488d0();
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    local_78._0_4_ = (float)uVar10;
    local_78._4_4_ = (uint)((uint64_t)uVar10 >> 0x20);
    uStack_70 = (uint)uVar14;
    uStack_6c = (uint)((uint64_t)uVar14 >> 0x20);
    fVar9 = ((float)local_78 - local_98._0_4_) * g_0239011c;
    auVar12._0_4_ = g_023945e0 & (uint)fVar9;
    auVar12._4_4_ = _UNK_023945e4 & local_78._4_4_;
    auVar12._8_4_ = _UNK_023945e8 & uStack_70;
    auVar12._12_4_ = _UNK_023945ec & uStack_6c;
    auVar13._4_12_ = SUB1612(auVar12 | g_023945f0,4);
    auVar13._0_4_ = SUB164(auVar12 | g_023945f0,0) + fVar9;
    auVar11._0_12_ = ZEXT812(0);
    auVar11._12_4_ = 0;
    auVar11 = roundss(auVar11,auVar13,0xb);
    blendps(g_023b45e0,auVar11,1);
    FUN_01d48b40();
    (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
    g_02802fb0 = 0;
LAB_01e66ef8:
    FUN_01e63b70(g_02802fb0,in_EDX,local_res8,local_res10);
    local_78 = local_40;
    if (local_40 == 0) {
      local_78 = 0;
      bVar2 = false;
    }
    else {
      bVar2 = true;
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
    }
  }
  else {
    if (0x2c < in_EDX) {
      return;
    }
    if ((0x100009c23cb0U >> ((uint64_t)in_EDX & 0x3f) & 1) == 0) {
      if ((0x2000000000eU >> ((uint64_t)in_EDX & 0x3f) & 1) == 0) {
        return;
      }
      goto LAB_01e66ef8;
    }
    bVar2 = false;
    local_78 = 0;
  }
  uVar10 = (**(code **)(*this_ptr + 0x548))();
  local_138 = *param_3;
  local_e8 = local_f8;
  if (local_138 == 0) {
    local_f8 = uVar10;
    (**(code **)(*this_ptr + 0x370))();
    lVar1 = *param_3;
    if (lVar1 == local_40) {
      if (((char)param_3[1] == '\0') && (local_40 != 0)) {
        local_98 = param_3 + 1;
        if (local_38 != '\0') goto LAB_01e66ff0;
        FUN_00d50b00();
        goto LAB_01e67028;
      }
LAB_01e67032:
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_98 = param_3 + 1;
      lVar3 = param_3[1];
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
        *param_3 = local_40;
        if (((char)lVar3 != '\0') && (lVar1 != 0)) {
          FUN_00d50b20();
        }
LAB_01e67028:
        *(void*)local_98 = 1;
        goto LAB_01e67032;
      }
      *param_3 = local_40;
      if (((char)lVar3 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
LAB_01e66ff0:
      *(void*)local_98 = 1;
    }
    local_138 = *param_3;
    uVar10 = local_f8;
  }
  local_f8 = uVar10;
  local_130 = '\0';
  local_f8 = FUN_01cc2100(local_5c,&local_138);
  if ((local_130 != '\0') && (local_138 != 0)) {
    FUN_00d50b20();
  }
  plVar5 = g_027fecc0;
  lVar1 = local_78;
  bVar8 = bVar2;
  if (in_EDX != 7) goto LAB_01e67285;
  plVar7 = (int64_t *)*param_3;
  if (plVar7 == (int64_t *)0x0) {
LAB_01e6716d:
    (**(code **)(*this_ptr + 0x378))();
    lVar3 = *param_3;
    if (lVar3 == local_40) {
      if (((char)param_3[1] != '\0') || (local_40 == 0)) goto LAB_01e67214;
      local_98 = param_3 + 1;
      if (local_38 == '\0') {
        FUN_00d50b00();
        goto LAB_01e6720a;
      }
    }
    else {
      local_98 = param_3 + 1;
      lVar4 = param_3[1];
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
        *param_3 = local_40;
        if (((char)lVar4 != '\0') && (lVar3 != 0)) {
          FUN_00d50b20();
        }
LAB_01e6720a:
        *(void*)local_98 = 1;
LAB_01e67214:
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_01e67228;
      }
      *param_3 = local_40;
      if (((char)lVar4 != '\0') && (lVar3 != 0)) {
        FUN_00d50b20();
      }
    }
    *(void*)local_98 = 1;
  }
  else {
    if (g_027fecc0 != (int64_t *)0x0) {
      FUN_00d50b00();
      plVar7 = (int64_t *)*param_3;
    }
    (**(code **)(*plVar7 + 0x148))();
    local_b0 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_b0 = '\x01';
    local_b8 = local_40;
    cVar6 = (**(code **)(*plVar5 + 0x50))();
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (cVar6 != '\0') goto LAB_01e6716d;
  }
LAB_01e67228:
  lVar3 = this_ptr[0x13];
  if (lVar3 == local_78) {
    if ((!bVar2) && (lVar3 != 0)) {
      FUN_00d50b00();
      bVar8 = true;
    }
  }
  else {
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    bVar8 = true;
    lVar1 = lVar3;
    if ((bVar2) && (local_78 != 0)) {
      FUN_00d50b20();
    }
  }
LAB_01e67285:
  local_78 = lVar1;
  local_128 = *param_3;
  local_120 = '\0';
  FUN_01d48a10();
  if ((local_120 != '\0') && (local_128 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = this_ptr[4];
  if (lVar1 == 0) {
    if (local_78 == 0) {
      (**(code **)(*this_ptr + 0x490))(local_res8,in_EDX,local_res10);
      local_a0 = 0;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_a0 = '\x01';
      local_a8 = local_40;
      FUN_01d488d0();
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_118 = local_78;
      local_110 = '\0';
      FUN_01d488d0();
      if ((local_110 != '\0') && (local_118 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_d0 = 0;
    FUN_00d50b00();
    local_d0 = '\x01';
    local_d8 = lVar1;
    FUN_01d488d0();
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
  }
  local_108 = *in_RCX;
  local_100 = '\0';
  (**(code **)(*(int64_t *)*arg1 + 0x3f8))();
  if ((local_100 != '\0') && (local_108 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar8) && (local_78 != 0)) {
    FUN_00d50b20();
  }
  return;
}

