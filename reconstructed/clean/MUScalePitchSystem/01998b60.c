// Function: FUN_01998b60
// Address: 01998b60
// Size: 814 bytes
// Class: MUScalePitchSystem
// === MUScalePitchSystem properties ===
//   bool            _tuningIsSuggestedRelevant
//   bool            _modeIsSuggestedRelevant
//   bool            _tuningPitchAnchorIsSuggestedRelevant
//   bool            _modeFundamentalOffsetIsSuggestedRelevant
//   bool            _stretchingIsSuggestedRelevant
//   double          _startPulse
//   double          _startTime
//   double          _width
//   double          _scope


float FUN_01998b60(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int iVar3;
  int64_t lVar4;
  void*arg1;
  int64_t *this_ptr;
  int64_t lVar5;
  float fVar6;
  uint32_t uVar7;
  int64_t local_d0;
  uint8_t local_c8;
  uint64_t local_c0;
  uint8_t local_b8;
  int64_t local_b0;
  uint8_t local_a8;
  int64_t local_a0;
  uint8_t local_98;
  uint64_t local_90;
  uint8_t local_88;
  int64_t local_80;
  uint8_t local_78;
  uint8_t local_68;
  uint8_t local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  fVar6 = 0.0;
  if ((*(float *)((int64_t)this_ptr + 0x4d4) != 0.0) ||
     (NAN(*(float *)((int64_t)this_ptr + 0x4d4)))) {
    lVar4 = this_ptr[0x9e];
    if (lVar4 == 0) {
      uVar7 = (**(code **)(*this_ptr + 0x988))();
      lVar4 = local_40;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          uVar7 = FUN_00d50b00();
        }
        lVar1 = this_ptr[0x3e];
      }
      else {
        local_38 = '\0';
        lVar1 = this_ptr[0x3e];
      }
      local_68 = 1;
      if (lVar1 != 0) {
        local_68 = 1;
        uVar7 = FUN_00d50b00();
      }
      local_c8 = 1;
      local_d0 = lVar1;
      FUN_019f2c90(uVar7,&local_d0);
      lVar2 = local_50;
      lVar5 = this_ptr[0x9e];
      if (lVar5 == local_50) {
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_48 == '\0') {
          if (local_50 != 0) {
            FUN_00d50b00();
            lVar5 = this_ptr[0x9e];
          }
        }
        else {
          local_48 = '\0';
        }
        this_ptr[0x9e] = lVar2;
        if (lVar5 != 0) {
          FUN_00d50b20();
        }
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      lVar4 = this_ptr[0x9e];
    }
    local_c0 = *arg1;
    local_b8 = 0;
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    local_a8 = 1;
    local_b0 = lVar4;
    iVar3 = FUN_019f3840();
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    if (iVar3 < 0) {
      uVar7 = (**(code **)(*this_ptr + 0x988))();
      lVar4 = local_40;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          uVar7 = FUN_00d50b00();
        }
        lVar1 = this_ptr[0x3e];
      }
      else {
        local_38 = '\0';
        lVar1 = this_ptr[0x3e];
      }
      local_58 = 1;
      if (lVar1 != 0) {
        local_58 = 1;
        uVar7 = FUN_00d50b00();
      }
      local_98 = 1;
      local_a0 = lVar1;
      FUN_019f2c90(uVar7,&local_a0);
      lVar5 = this_ptr[0x9e];
      if (lVar5 == local_50) {
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_48 == '\0') {
          if (local_50 != 0) {
            FUN_00d50b00();
            lVar5 = this_ptr[0x9e];
          }
        }
        else {
          local_48 = '\0';
        }
        this_ptr[0x9e] = local_50;
        if (lVar5 != 0) {
          FUN_00d50b20();
        }
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      local_90 = *arg1;
      local_88 = 0;
      lVar4 = this_ptr[0x9e];
      if (lVar4 != 0) {
        FUN_00d50b00();
      }
      local_78 = 1;
      local_80 = lVar4;
      iVar3 = FUN_019f3840();
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
    }
    fVar6 = (float)(**(code **)(*this_ptr + 3000))();
    fVar6 = (float)iVar3 * fVar6 * g_02390d38 * *(float *)((int64_t)this_ptr + 0x4d4);
  }
  return fVar6;
}

