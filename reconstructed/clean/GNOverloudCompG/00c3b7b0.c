// Function: FUN_00c3b7b0
// Address: 00c3b7b0
// Size: 616 bytes
// Class: GNOverloudCompG
// === GNOverloudCompG properties ===
//   float           _minValue
//   float           _maxValue
//   float           _offValue


void FUN_00c3b7b0(uint64_t param_1,uint64_t param_2)

{
  int64_t *plVar1;
  int iVar2;
  int64_t *this_ptr;
  uint64_t uVar3;
  uint8_t auVar4 [16];
  uint8_t auVar5 [16];
  uint32_t uVar6;
  uint uVar7;
  uint32_t in_XMM1_Dc;
  uint in_XMM1_Dd;
  int64_t local_60;
  char local_58;
  int64_t *local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  int64_t *local_30;
  char local_28;
  
  uVar7 = (uint)((uint64_t)param_2 >> 0x20);
  uVar6 = (uint32_t)param_2;
  uVar3 = FUN_01d17670();
  local_60 = g_027e7c20;
  if (g_027e7c20 != 0) {
    uVar3 = FUN_00d50b00();
  }
  local_58 = '\x01';
  (**(code **)(*this_ptr + 0x4c8))(uVar3,&local_60);
  plVar1 = local_30;
  if (local_28 == '\0') {
    if (((local_30 != (int64_t *)0x0) && (FUN_00d50b00(), local_28 != '\0')) &&
       (local_30 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_28 = '\0';
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    local_50 = plVar1;
    local_48 = '\0';
    iVar2 = FUN_00c716c0();
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (iVar2 != 0) {
      FUN_01e40eb0();
      plVar1 = local_30;
      if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar1 != (int64_t *)0x0) {
        return;
      }
      FUN_01e40eb0();
      plVar1 = local_30;
      local_38 = 0;
      local_40 = this_ptr[0xc];
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      local_38 = '\x01';
      (**(code **)(*plVar1 + 0x450))();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      plVar1 = (int64_t *)this_ptr[0xd];
      FUN_01e3f820();
      auVar4._4_4_ = uVar7;
      auVar4._0_4_ = uVar6;
      auVar4._8_4_ = in_XMM1_Dc;
      auVar4._12_4_ = in_XMM1_Dd;
      auVar4 = blendps(ZEXT816(0),auVar4,2);
      (**(code **)(*plVar1 + 0x4f0))(auVar4._0_8_);
      FUN_01e40eb0();
      (**(code **)(*local_30 + 0x620))();
      if (local_28 == '\0') {
        return;
      }
      if (local_30 == (int64_t *)0x0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
  }
  FUN_01e40eb0();
  plVar1 = local_30;
  if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)this_ptr[0xc] + 0x478))();
    plVar1 = (int64_t *)this_ptr[0xd];
    FUN_01e3f820();
    auVar5._0_4_ = uVar7 ^ g_023945e0;
    auVar5._4_4_ = uVar7 ^ _UNK_023945e4;
    auVar5._8_4_ = in_XMM1_Dd ^ _UNK_023945e8;
    auVar5._12_4_ = in_XMM1_Dd ^ _UNK_023945ec;
    auVar4 = insertps(auVar5,auVar5,0x1d);
    (**(code **)(*plVar1 + 0x4f0))(auVar4._0_8_);
    FUN_01e40eb0();
    (**(code **)(*local_30 + 0x620))();
    if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  return;
}

