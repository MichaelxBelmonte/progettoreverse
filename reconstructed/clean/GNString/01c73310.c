// Function: FUN_01c73310
// Address: 01c73310
// Size: 948 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


bool FUN_01c73310(void* param_1,char param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  void *pvVar4;
  uint64_t uVar5;
  void* pVar6;
  int64_t *this_ptr;
  uint8_t uVar7;
  uint8_t local_88 [8];
  uint8_t local_80;
  uint8_t local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  int64_t local_40;
  char local_38;
  
  lVar1 = this_ptr[0x31];
  if (lVar1 != 0) {
    pVar6 = param_1;
    FUN_00d50b00();
    FUN_00d50b20();
    if (param_2 != '\0') {
      lVar2 = this_ptr[0x31];
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      local_60 = '\x01';
      local_68 = lVar2;
      FUN_016cbba0();
      local_48 = local_40;
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
      lVar2 = this_ptr[0x31];
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      pvVar4 = _pthread_getspecific(pVar6);
      if (pvVar4 == (void *)0x0) {
        local_58 = this_ptr[0x42];
      }
      else {
        FUN_00e8b990();
        local_58 = this_ptr[0x42];
      }
      if (local_58 != 0) {
        local_50 = 0;
        FUN_00d50b00();
      }
      local_50 = '\x01';
      pVar6 = 1;
      FUN_016e9c70(1,param_1);
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if ((int)this_ptr[0x39] == 0) {
        lVar2 = this_ptr[0x31];
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        uVar7 = 1;
        FUN_01c44d20();
        lVar3 = local_40;
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_80 = 1;
        uVar5 = FUN_00e7bdb0();
        FUN_01c45410(uVar5,local_88,param_3,param_4,uVar7);
        pVar6 = (void*)uVar5;
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
      }
      else {
        lVar2 = this_ptr[0x31];
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        FUN_01c44d20();
        lVar3 = local_40;
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
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
      }
      FUN_01c62c70();
      if (this_ptr[0x31] != 0) {
        FUN_00d50b00();
        pvVar4 = _pthread_getspecific(pVar6);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_016c1150();
        FUN_00d50b20();
      }
      (**(code **)(*this_ptr + 0x620))();
      *(void*)(this_ptr + 0x3a) = 1;
      if (local_48 != 0) {
        FUN_00d50b20();
      }
    }
  }
  return lVar1 != 0;
}

