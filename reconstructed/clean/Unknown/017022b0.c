// Function: FUN_017022b0
// Address: 017022b0
// Size: 1758 bytes
// Class: Unknown

bool FUN_017022b0(void* param_1)

{
  uint64_t uVar1;
  uint64_t uVar2;
  char cVar3;
  void *pvVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  void* pVar7;
  void*puVar8;
  void* unaff_ESI;
  int64_t local_d8;
  char local_d0;
  uint64_t local_c8;
  uint64_t local_c0;
  int64_t local_b8;
  char local_b0;
  uint64_t local_a8;
  char local_a0;
  uint64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  uint64_t local_78;
  char local_70;
  int local_64;
  uint64_t local_60;
  uint64_t local_58;
  uint64_t local_50;
  uint32_t local_48;
  uint32_t local_44;
  uint64_t local_40;
  char local_38;
  
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_64 = FUN_0165c2e0();
  if (local_64 < 2) {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    pVar7 = 0;
    FUN_0165c0f0();
    uVar1 = local_40;
    if ((((local_38 == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != 0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(pVar7);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_b0 = '\0';
    local_b8 = 0;
    FUN_00e7bdb0();
    FUN_0165b1b0();
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(unaff_ESI);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_a8 = uVar1;
    local_a0 = '\0';
    uVar5 = FUN_00e7bdb0();
    FUN_0165b1b0(uVar5);
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    FUN_016f28b0();
    if (uVar1 != 0) {
      FUN_00d50b20();
    }
    goto LAB_01702975;
  }
  local_44 = 0xffffffff;
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar3 = FUN_0165e830();
  if (cVar3 == '\0') {
    pVar7 = (void*)&local_60;
    FUN_01702c00();
    uVar1 = local_40;
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    pvVar4 = _pthread_getspecific(pVar7);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_40 = FUN_0165be20();
    if (((local_60._4_4_ == 0) || (local_40 >> 0x20 == 0)) ||
       (cVar3 = FUN_00e7c000(), cVar3 == '\0')) {
      local_58 = local_60;
      local_c8 = local_50;
      FUN_01703070(&local_c8,&local_58,&local_44);
      uVar2 = local_40;
      if ((local_38 == '\0') && (local_40 != 0)) {
        FUN_00d50b00();
      }
      local_78 = uVar2;
      local_70 = '\0';
      FUN_01701ac0(local_50,local_58,&local_78,0);
      if ((local_d0 != '\0') && (local_d8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      FUN_017033e0();
      if (uVar2 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      pvVar4 = _pthread_getspecific(pVar7);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_80 = '\0';
      local_88 = 0;
      uVar5 = FUN_00e7bdb0();
      FUN_0165b1b0(local_50,uVar5,0);
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      FUN_016f1a80();
    }
    if (uVar1 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    puVar8 = &local_44;
    FUN_0165db00(puVar8,0);
    local_58 = CONCAT44(local_58._4_4_,local_44);
    pVar7 = (void*)puVar8;
    pvVar4 = _pthread_getspecific(pVar7);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_50 = FUN_0165dca0();
    pvVar4 = _pthread_getspecific(pVar7);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar5 = FUN_0165dca0();
    pvVar4 = _pthread_getspecific(pVar7);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    pVar7 = 0;
    uVar6 = FUN_0165c0f0(0,local_50,0,&local_58);
    local_c0 = local_40;
    if (local_38 == '\0') {
      if (local_40 == 0) goto LAB_01702879;
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
LAB_01702865:
      FUN_0123ff00();
      local_48 = 0;
    }
    else {
      if (local_40 != 0) goto LAB_01702865;
LAB_01702879:
      local_48 = (uint32_t)CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
    }
    local_60 = uVar5;
    FUN_00e7b970();
    FUN_0123fc50();
    uVar1 = local_40;
    if ((((local_38 == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != 0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(pVar7);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_98 = uVar1;
    local_90 = '\0';
    FUN_0165b1b0(uVar5,local_50,0);
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    FUN_016f1a80();
    if (uVar1 != 0) {
      FUN_00d50b20();
    }
    if ((char)local_48 == '\0') {
      FUN_00d50b20();
    }
  }
  FUN_016f28b0();
LAB_01702975:
  return 1 < local_64;
}

