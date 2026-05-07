// Function: FUN_00e2d190
// Address: 00e2d190
// Size: 583 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_00e2d190(void)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  uint64_t uVar4;
  int64_t this_ptr;
  uint64_t local_b0;
  uint8_t local_a8;
  uint64_t local_a0;
  uint8_t local_98;
  uint64_t local_90;
  uint8_t local_88;
  uint64_t local_80;
  uint8_t local_78;
  uint64_t local_70;
  uint8_t local_68;
  uint64_t local_60;
  uint8_t local_58;
  uint64_t local_50;
  uint8_t local_48;
  
  if (*(int64_t *)(this_ptr + 0x30) == 0) {
    uVar4 = 0;
  }
  else {
    FUN_00d50b00();
    lVar1 = *(int64_t *)(this_ptr + 0x30);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    cVar3 = FUN_00c7b220();
    if ((cVar3 == 'b') && (*(int *)(*(int64_t *)(this_ptr + 0x28) + 0xc) == 2)) {
      FUN_00e2df40();
      if (local_b0 == 0) {
        uVar4 = 0;
      }
      else {
        FUN_00e2df40();
        FUN_00c798d0();
        if (local_a0 == 0) {
          uVar4 = 0;
        }
        else {
          FUN_00e2df40();
          FUN_00c798d0();
          lVar2 = g_02772658;
          if (g_02772658 != 0) {
            FUN_00d50b00();
          }
          cVar3 = (**(code **)(*local_80 + 0x50))();
          if (cVar3 == '\0') {
            uVar4 = 0;
          }
          else {
            FUN_00e2df40();
            if (local_60 == 0) {
              uVar4 = 0;
            }
            else {
              FUN_00e2df40();
              cVar3 = FUN_00c7b220();
              uVar4 = CONCAT71((int7)((uint64_t)this_ptr >> 8),cVar3 == 'b');
              if ((local_48 != '\0') && (local_50 != 0)) {
                FUN_00d50b20();
              }
            }
            if ((local_58 != '\0') && (local_60 != 0)) {
              FUN_00d50b20();
            }
          }
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
          if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_98 != '\0') && (local_a0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_88 != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      uVar4 = 0;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return uVar4 & 0xffffffff;
}

