// Function: FUN_0060c9f0
// Address: 0060c9f0
// Size: 1105 bytes
// Class: Unknown
// String references:
//   "* %@"

void FUN_0060c9f0(uint64_t param_1,uint64_t param_2)

{
  int64_t *plVar1;
  char cVar2;
  uint64_t uVar3;
  uint64_t in_RDX;
  void*arg1;
  int64_t *this_ptr;
  int64_t *plVar4;
  uint32_t uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t *local_b8;
  char local_b0;
  uint64_t local_a8;
  int64_t *local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  float local_5c;
  int64_t *local_58;
  uint local_50;
  int64_t local_48;
  char local_40;
  uint32_t local_34;
  
  fVar8 = (float)((uint64_t)param_2 >> 0x20);
  fVar7 = (float)param_2;
  local_a8 = in_RDX;
  uVar5 = (**(code **)(*this_ptr + 0x640))();
  plVar4 = local_70;
  local_c8 = g_02724b68;
  if (g_02724b68 != 0) {
    uVar5 = FUN_00d50b00();
  }
  local_c0 = '\x01';
  (**(code **)(*plVar4 + 0x3b0))(uVar5,&local_c8);
  local_80 = local_58;
  local_78 = 0;
  if ((char)local_50 == '\0') {
    if (local_58 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = local_50 & 0xffffff00;
  }
  local_78 = '\x01';
  FUN_01d488d0();
  if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  cVar2 = FUN_003a4f00();
  if (cVar2 == '\0') {
    uVar3 = FUN_003a4d00();
    plVar4 = local_58;
    if (local_58 == (int64_t *)0x0) {
      local_34 = 0;
    }
    else {
      local_34 = (uint32_t)CONCAT71((int7)((uint64_t)uVar3 >> 8),1);
      if ((char)local_50 == '\0') {
        FUN_00d50b00();
        if (((char)local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  else {
    uVar5 = FUN_003a4d00();
    local_50 = 1;
    local_58 = &g_024c5048;
    local_40 = 0;
    if (local_d8 != 0) {
      uVar5 = FUN_00d50b00();
    }
    local_48 = local_d8;
    local_40 = '\x01';
    uVar3 = FUN_00d8cb40(uVar5,&local_58);
    plVar4 = local_70;
    if (local_70 == (int64_t *)0x0) {
      local_34 = 0;
    }
    else if (local_68 == '\0') {
      uVar3 = FUN_00d50b00();
      local_34 = (uint32_t)CONCAT71((int7)((uint64_t)uVar3 >> 8),1);
      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_68 = '\0';
      local_34 = (uint32_t)CONCAT71((int7)((uint64_t)uVar3 >> 8),1);
    }
    local_58 = &g_024c5048;
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_003a4de0();
  fVar6 = (float)(**(code **)(*this_ptr + 0xae0))();
  local_a8._0_4_ = fVar7;
  local_a8._4_4_ = fVar8;
  FUN_01d48370();
  fVar7 = local_a8._4_4_;
  if ((int)this_ptr[0x3e] == 0) {
    fVar6 = (fVar6 + g_023945d0 * (float)local_a8) - _UNK_023945d4 * local_a8._4_4_;
    local_5c = g_02394290;
  }
  else if ((int)this_ptr[0x3e] == 2) {
    fVar6 = (fVar6 + g_023945d0 * (float)local_a8) - _UNK_023945d4 * local_a8._4_4_;
    local_5c = g_02394294;
  }
  else {
    local_5c = 0.0;
    fVar7 = (float)local_a8;
    local_a8._0_4_ = local_a8._4_4_;
  }
  local_a8 = CONCAT44((float)local_a8,fVar7);
  (**(code **)(*(int64_t *)*arg1 + 0x370))(fVar7 * g_0239011c + fVar6);
  if ((local_5c != 0.0) || (NAN(local_5c))) {
    (**(code **)(*(int64_t *)*arg1 + 0x378))();
  }
  local_b0 = '\0';
  local_b8 = plVar4;
  (**(code **)(*(int64_t *)*arg1 + 0x3f8))(g_023b5dd0 * (float)local_a8,0);
  if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d48390();
  FUN_003a4cd0();
  plVar1 = local_58;
  if (((char)local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_003a4cd0();
    local_90 = local_58;
    local_88 = 0;
    if ((char)local_50 == '\0') {
      if (local_58 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = local_50 & 0xffffff00;
    }
    local_88 = '\x01';
    FUN_003a4be0();
    FUN_01d49070();
    if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (((char)local_34 != '\0') && (plVar4 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}

