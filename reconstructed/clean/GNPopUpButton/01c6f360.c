// Function: FUN_01c6f360
// Address: 01c6f360
// Size: 974 bytes
// Class: GNPopUpButton

uint64_t FUN_01c6f360(void* param_1,int param_2,uint param_3)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint uVar4;
  void *pvVar5;
  void* pVar6;
  uint64_t uVar7;
  int64_t *this_ptr;
  uint64_t uVar8;
  uint8_t local_98 [8];
  uint8_t local_90;
  uint8_t local_88 [8];
  uint8_t local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  int64_t local_48;
  char local_40;
  char local_31;
  
  pVar6 = param_1;
  uVar4 = FUN_016bf360();
  uVar7 = (uint64_t)uVar4;
  if ((param_2 != 0) && (local_31 = (char)uVar4, local_31 != '\0')) {
    lVar1 = this_ptr[0x31];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_70 = '\x01';
    local_78 = lVar1;
    FUN_016cbba0();
    lVar1 = local_48;
    if (local_40 == '\0') {
      if (((local_48 != 0) && (FUN_00d50b00(), local_40 != '\0')) && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40 = '\0';
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = this_ptr[0x31];
    local_68 = lVar1;
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    local_50 = lVar2;
    pvVar5 = _pthread_getspecific(pVar6);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_58 = 0;
    lVar1 = this_ptr[0x42];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_58 = '\x01';
    pVar6 = param_3 & 0xff;
    local_60 = lVar1;
    FUN_016e5250(g_023908c8,param_1,1,(int)this_ptr[0x39]);
    lVar2 = local_50;
    lVar1 = local_68;
    if ((local_58 != '\0') && (local_60 != 0)) {
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
      FUN_01c44d20();
      lVar3 = local_48;
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      local_90 = 1;
      uVar8 = FUN_00e7bdb0();
      FUN_01c45410(uVar8,local_98);
      pVar6 = (void*)uVar8;
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
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
      uVar8 = FUN_01c44d20();
      lVar3 = local_48;
      if (local_40 == '\0') {
        if (local_48 != 0) {
          uVar8 = FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      local_80 = 1;
      FUN_01c44700(uVar8,local_88);
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_01c62c70();
    lVar2 = this_ptr[0x31];
    if (lVar2 != 0) {
      FUN_00d50b00();
      pvVar5 = _pthread_getspecific(pVar6);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_016c1150();
      FUN_00d50b20();
    }
    (**(code **)(*this_ptr + 0x620))();
    *(void*)(this_ptr + 0x3a) = 1;
    uVar7 = CONCAT71((int7)((uint64_t)lVar2 >> 8),local_31);
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  return uVar7 & 0xffffffff;
}

