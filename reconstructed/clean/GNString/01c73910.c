// Function: FUN_01c73910
// Address: 01c73910
// Size: 1037 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_01c73910(void* param_1,char param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  uint uVar3;
  void *pvVar4;
  int64_t lVar5;
  uint64_t uVar6;
  void* pVar7;
  uint64_t uVar8;
  int64_t *this_ptr;
  uint8_t local_88 [8];
  uint8_t local_80;
  uint8_t local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  if (this_ptr[0x31] == 0) {
    uVar8 = 0;
  }
  else {
    FUN_00d50b00();
    FUN_00d50b20();
    lVar5 = this_ptr[0x31];
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar3 = FUN_016c2730();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    if (param_2 == '\x01' && (char)uVar3 == '\0') {
      lVar5 = this_ptr[0x31];
      if (lVar5 != 0) {
        FUN_00d50b00();
      }
      local_60 = '\x01';
      local_68 = lVar5;
      FUN_016cbba0();
      lVar5 = local_40;
      if (local_38 == '\0') {
        if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      lVar1 = this_ptr[0x31];
      local_58 = lVar5;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      pvVar4 = _pthread_getspecific(param_1);
      if ((pvVar4 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
        lVar5 = this_ptr[0x42];
      }
      else {
        lVar5 = this_ptr[0x42];
      }
      if (lVar5 != 0) {
        local_48 = 0;
        FUN_00d50b00();
      }
      local_48 = '\x01';
      pVar7 = 1;
      local_50 = lVar5;
      FUN_016ec420(1,0,(int)this_ptr[0x39]);
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      lVar5 = local_58;
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((int)this_ptr[0x39] == 0) {
        lVar1 = this_ptr[0x31];
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        FUN_01c44d20();
        lVar2 = local_40;
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_80 = 1;
        uVar6 = FUN_00e7bdb0();
        FUN_01c45410(uVar6,local_88);
        pVar7 = (void*)uVar6;
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
      }
      else {
        lVar1 = this_ptr[0x31];
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        FUN_01c44d20();
        lVar2 = local_40;
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_70 = 1;
        FUN_01c44700();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
      }
      FUN_01c62c70();
      lVar1 = this_ptr[0x31];
      if (lVar1 != 0) {
        FUN_00d50b00();
        pvVar4 = _pthread_getspecific(pVar7);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_016c1150();
        FUN_00d50b20();
      }
      (**(code **)(*this_ptr + 0x620))();
      *(void*)(this_ptr + 0x3a) = 1;
      uVar8 = CONCAT71((int7)((uint64_t)lVar1 >> 8),1);
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      uVar8 = (uint64_t)uVar3 ^ 1;
    }
  }
  return uVar8 & 0xffffffff;
}

