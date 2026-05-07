// Function: FUN_00aec0b0
// Address: 00aec0b0
// Size: 1265 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00aec0b0(void)

{
  int64_t lVar1;
  char cVar2;
  int iVar3;
  int64_t *this_ptr;
  int64_t lVar4;
  uint8_t local_5a [2];
  int local_58;
  int local_54;
  int64_t local_50;
  char local_48;
  short local_3a;
  int64_t local_38;
  
  FUN_00b75710();
  FUN_00ccce80();
  FUN_00aebe90(local_5a,&local_3a);
  lVar4 = g_02764880;
  if ((local_58 != 0x63616666) || (local_3a != 1)) {
    if (g_02764880 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  cVar2 = FUN_00aebde0();
  lVar4 = g_02764880;
  while (g_02764880 = lVar4, cVar2 != '\0') {
    if (local_54 < 0x6b756b69) {
      if (local_54 == 0x64617461) {
        FUN_00aebab0();
      }
      else if (local_54 == 0x64657363) {
        FUN_00aeb510();
      }
      else {
LAB_00aec2d1:
        if (local_38 < 0) break;
        (**(code **)(*(int64_t *)this_ptr[4] + 0x390))();
        lVar4 = local_50;
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        lVar1 = g_02765700;
        if (lVar4 != 0) {
          if (g_02765700 != 0) {
            FUN_00d50b00();
          }
          FUN_00cc78b0();
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
        }
        (**(code **)(*(int64_t *)this_ptr[4] + 0x3a0))();
        lVar4 = local_50;
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        lVar1 = g_02765700;
        if (lVar4 != 0) {
          if (g_02765700 != 0) {
            FUN_00d50b00();
          }
          FUN_00cc78b0();
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
        }
      }
    }
    else if (local_54 == 0x6b756b69) {
      FUN_00aeb2e0();
      lVar1 = local_50;
      lVar4 = this_ptr[0x16];
      if (lVar4 == local_50) {
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        if ((local_48 == '\0') && (local_50 != 0)) {
          FUN_00d50b00();
          lVar4 = this_ptr[0x16];
        }
        this_ptr[0x16] = lVar1;
joined_r0x00aec26d:
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
      }
    }
    else if (local_54 == 0x70616b74) {
      FUN_00aeb2e0();
      lVar1 = local_50;
      lVar4 = this_ptr[0x17];
      if (lVar4 != local_50) {
        if ((local_48 == '\0') && (local_50 != 0)) {
          FUN_00d50b00();
          lVar4 = this_ptr[0x17];
        }
        this_ptr[0x17] = lVar1;
        goto joined_r0x00aec26d;
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_54 != 0x75756964) goto LAB_00aec2d1;
      FUN_00aec770();
    }
    cVar2 = FUN_00aebde0();
    lVar4 = g_02764880;
  }
  if ((int)this_ptr[0x15] != 0x616c6163) {
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  iVar3 = (**(code **)(*this_ptr + 0x390))();
  lVar4 = g_02764880;
  if (iVar3 == 0) {
    if (g_02764880 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  iVar3 = (**(code **)(*this_ptr + 0x388))();
  lVar4 = g_02764880;
  if (iVar3 == -1) {
    if (g_02764880 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  lVar4 = g_02764880;
  if ((this_ptr[0xe] == 0) || (this_ptr[0x14] == 0)) {
    if (g_02764880 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00aeabf0();
  return;
}

