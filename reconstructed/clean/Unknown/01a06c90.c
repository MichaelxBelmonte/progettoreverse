// Function: FUN_01a06c90
// Address: 01a06c90
// Size: 2087 bytes
// Class: Unknown

void FUN_01a06c90(float param_1,float param_2,uint32_t param_3,uint32_t param_4)

{
  char cVar1;
  int64_t lVar2;
  void*in_RCX;
  void*in_RDX;
  float *arg1;
  int64_t this_ptr;
  uint32_t in_R8D;
  uint32_t in_R9D;
  uint64_t uVar3;
  uint32_t extraout_XMM0_Dd;
  float fVar5;
  uint8_t auVar6 [16];
  char local_res10;
  int local_res18;
  int64_t *local_res20;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  uint32_t local_cc;
  uint64_t local_c8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  float local_90;
  uint32_t local_8c;
  uint32_t local_88;
  float local_84;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  float local_60;
  uint32_t local_5c;
  int64_t local_58;
  int64_t local_50;
  int64_t local_48;
  char local_40;
  char local_31;
  float fVar4;
  
  if (local_res18 == 1) {
    fVar5 = g_02390d28 * (g_02390124 - param_1) * (g_02390124 - param_1) + g_02394298;
    local_60 = fVar5;
  }
  else {
    local_60 = g_02390d34;
    fVar5 = param_2;
  }
  local_cc = in_R9D;
  local_90 = param_1;
  local_8c = param_4;
  local_88 = param_3;
  local_84 = param_2;
  local_5c = in_R8D;
  FUN_01a06bc0();
  local_50 = local_48;
  if (local_48 == 0) {
    return;
  }
  if (local_40 == '\0') {
    FUN_00d50b00();
  }
  if (*local_res20 == 0) {
    if ((char)local_5c == '\0') {
      FUN_01a063e0();
      lVar2 = local_48;
      local_58 = *local_res20;
      if (local_58 == local_48) {
        if (((char)local_res20[1] != '\0') || (local_48 == 0)) {
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          goto LAB_01a06ee1;
        }
        local_c8 = local_res20 + 1;
        if (local_40 == '\0') {
          FUN_00d50b00();
        }
      }
      else {
        local_c8 = local_res20 + 1;
        cVar1 = (char)local_res20[1];
        if (local_40 == '\0') {
          local_31 = cVar1;
          if (local_48 != 0) {
            FUN_00d50b00();
          }
          *local_res20 = lVar2;
          if ((local_31 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          *local_res20 = local_48;
          if ((cVar1 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
        }
      }
    }
    else {
      FUN_01a06000();
      lVar2 = local_48;
      local_58 = *local_res20;
      if (local_58 == local_48) {
        if (((char)local_res20[1] != '\0') || (local_48 == 0)) {
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          goto LAB_01a06ee1;
        }
        local_c8 = local_res20 + 1;
        if (local_40 == '\0') {
          FUN_00d50b00();
        }
      }
      else {
        local_c8 = local_res20 + 1;
        cVar1 = (char)local_res20[1];
        if (local_40 == '\0') {
          local_31 = cVar1;
          if (local_48 != 0) {
            FUN_00d50b00();
          }
          *local_res20 = lVar2;
          if ((local_31 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          *local_res20 = local_48;
          if ((cVar1 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
        }
      }
    }
    *(void*)local_c8 = 1;
  }
LAB_01a06ee1:
  FUN_01d39d70();
  uVar3 = FUN_00d05530();
  fVar4 = (float)((uint64_t)uVar3 >> 0x20);
  auVar6._4_4_ = fVar4;
  auVar6._0_4_ = fVar4 + arg1[1];
  auVar6._8_4_ = extraout_XMM0_Dd;
  auVar6._12_4_ = extraout_XMM0_Dd;
  auVar6 = insertps(ZEXT416((uint)(*arg1 + (float)uVar3)),auVar6,0x10);
  local_c8 = (int64_t *)FUN_00d05360((int)*in_RCX,(int)in_RCX[1],auVar6._0_8_,fVar5);
  FUN_01d48370();
  (**(code **)(*(int64_t *)*in_RDX + 0x368))((int)*(void*)arg1);
  if ((char)local_cc == '\0') {
    fVar5 = local_c8._4_4_;
    FUN_01d39d70();
    if ((fVar5 < g_02394264) && (0.0 < fVar5)) {
      if ((char)local_5c == '\0') {
        local_f0 = local_50;
        local_e8 = '\0';
        local_e0 = *local_res20;
        local_d8 = '\0';
        FUN_01d4a550(*(void*)(this_ptr + 0x34),*(void*)(this_ptr + 0x30),&local_e0,
                     local_88);
        if ((local_d8 != '\0') && (local_e0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_e8 != '\0') && (local_f0 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_100 = *local_res20;
        local_f8 = '\0';
        FUN_01d4a550(*(void*)(this_ptr + 0x34),*(void*)(this_ptr + 0x30),&local_100,
                     local_88);
        if ((local_f8 != '\0') && (local_100 != 0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  else {
    if (local_res10 == '\0') {
      FUN_01d48b40(g_02390124);
      if ((char)local_5c == '\0') {
        FUN_01a067c0(0);
      }
      else {
        FUN_01a068c0(0);
      }
      lVar2 = local_48;
      local_98 = 0;
      if ((local_40 == '\0') && (local_48 != 0)) {
        FUN_00d50b00();
      }
      local_a0 = lVar2;
      local_98 = '\x01';
      FUN_01d488d0();
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
    }
    else if (local_res18 == 1) {
      FUN_01d48b40(local_60);
      FUN_01a067c0(0);
      lVar2 = local_48;
      if ((local_40 == '\0') && (local_48 != 0)) {
        FUN_00d50b00();
      }
      FUN_01cfcdc0(*(void*)(lVar2 + 0x10),*(void*)(lVar2 + 0x14));
      local_80 = local_48;
      local_78 = 0;
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      local_78 = '\x01';
      FUN_01d488d0();
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    else {
      FUN_01d48b40(g_02394298);
      FUN_01a068c0(g_0239428c);
      local_b0 = local_48;
      local_a8 = 0;
      if ((local_40 == '\0') && (local_48 != 0)) {
        FUN_00d50b00();
      }
      local_a8 = '\x01';
      FUN_01d488d0();
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*(int64_t *)*in_RDX + 0x3a8))();
    FUN_01d48b40(g_02390124);
    FUN_01d48370();
    (**(code **)(*(int64_t *)*in_RDX + 0x380))(g_02390124,local_90);
    FUN_01cfbee0(g_0239011c,g_0239011c);
    local_70 = local_48;
    local_68 = 0;
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    local_68 = '\x01';
    FUN_01d488d0();
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*(int64_t *)*in_RDX + 0x3a8))();
    FUN_01d48390();
  }
  FUN_01d48390();
  FUN_00d50b20();
  return;
}

