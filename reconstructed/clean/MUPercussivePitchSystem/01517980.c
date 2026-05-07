// Function: FUN_01517980
// Address: 01517980
// Size: 1528 bytes
// Class: MUPercussivePitchSystem

void FUN_01517980(uint64_t param_1,uint64_t param_2,char param_3,uint32_t param_4)

{
  uint64_t uVar1;
  byte bVar2;
  byte bVar3;
  void *pvVar4;
  int64_t lVar5;
  uint64_t uVar6;
  void* in_ECX;
  void* pVar7;
  void*in_RDX;
  uint8_t local_res8;
  void*local_res10;
  void*local_res18;
  uint8_t local_118 [8];
  uint8_t local_110;
  uint64_t local_108;
  uint8_t local_100;
  uint8_t local_f0;
  uint8_t local_e0;
  uint8_t local_d8 [8];
  uint8_t local_d0;
  uint64_t local_c8;
  uint8_t local_c0;
  uint8_t local_b0;
  uint64_t local_a8;
  uint64_t local_a0;
  void*local_98;
  uint32_t local_8c;
  int64_t local_88;
  char local_80;
  uint64_t local_68;
  int64_t local_50;
  char local_48;
  
  pVar7 = in_ECX;
  local_a8 = param_1;
  local_a0 = param_2;
  local_98 = in_RDX;
  pvVar4 = _pthread_getspecific(in_ECX);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0165a070();
  if ((local_48 == '\0') && (local_50 != 0)) {
    FUN_00d50b00();
  }
  pvVar4 = _pthread_getspecific(pVar7);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e8920();
  local_8c = param_4;
  if ((local_48 == '\0') && (local_50 != 0)) {
    FUN_00d50b00();
  }
  pvVar4 = _pthread_getspecific(pVar7);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012caf10();
  if ((local_48 == '\0') && (local_50 != 0)) {
    FUN_00d50b00();
  }
  pvVar4 = _pthread_getspecific(pVar7);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cade0();
  pvVar4 = _pthread_getspecific(pVar7);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015058d0();
  if ((local_48 == '\0') && (local_50 != 0)) {
    FUN_00d50b00();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  local_68._0_1_ = (char)in_ECX;
  if ((char)local_68 == '\0') {
    local_68 = FUN_00e7bdb0();
    uVar6 = FUN_00e7bdb0();
  }
  else {
    pvVar4 = _pthread_getspecific(pVar7);
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      pVar7 = (void*)local_50;
    }
    pvVar4 = _pthread_getspecific(pVar7);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01656080(local_a8);
    pVar7 = 0;
    local_68 = FUN_016cb5f0(0,0);
    pvVar4 = _pthread_getspecific(pVar7);
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      pVar7 = (void*)local_50;
    }
    pvVar4 = _pthread_getspecific(pVar7);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01656080(local_a0);
    pVar7 = 0;
    uVar6 = FUN_016cb5f0(0,0);
  }
  if (param_3 != '\0') {
    pvVar4 = _pthread_getspecific(pVar7);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar1 = *local_98;
    bVar2 = FUN_01514480(0,local_res8);
    local_80 = '\0';
    local_110 = 0;
    local_100 = 0;
    local_f0 = 0;
    pVar7 = (void*)&local_108;
    local_108 = uVar1;
    bVar3 = FUN_01515040(0,local_118,local_68,uVar6);
    if (((bVar3 | bVar2) == 1) && (local_res10 != (void*)0x0)) {
      *local_res10 = 1;
    }
  }
  if ((char)local_8c != '\0') {
    pvVar4 = _pthread_getspecific(pVar7);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_e0 = 0;
    local_d0 = 0;
    local_c8 = *local_98;
    local_c0 = 0;
    local_b0 = 0;
    bVar2 = FUN_01516720(0,local_d8,local_68,uVar6);
    if ((bVar2 & local_res18 != (void*)0x0) == 1) {
      *local_res18 = 1;
    }
  }
  if (local_50 != 0) {
    FUN_00d50b20();
    FUN_00d50b20();
    FUN_00d50b20();
    FUN_00d50b20();
  }
  return;
}

