// Function: FUN_0131ae60
// Address: 0131ae60
// Size: 1992 bytes
// Class: MULSSGenerator

byte FUN_0131ae60(void* param_1,uint param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  uint32_t uVar10;
  void *pvVar11;
  byte bVar12;
  void* pVar13;
  byte unaff_SIL;
  int64_t this_ptr;
  byte bVar14;
  uint64_t unaff_R13;
  undefined7 uVar15;
  bool bVar16;
  int64_t local_140;
  char local_138;
  uint8_t local_b0 [8];
  uint8_t local_a8;
  uint8_t local_98;
  uint8_t local_88;
  int64_t local_80;
  char local_78;
  uint local_70;
  uint local_6c;
  int64_t local_68;
  char local_60;
  int64_t local_50;
  char local_48;
  
  lVar1 = *(int64_t *)(this_ptr + 0x40);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  pvVar11 = _pthread_getspecific(param_1);
  if (pvVar11 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015058d0();
  pvVar11 = _pthread_getspecific(param_1);
  if (pvVar11 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0150d280();
  if (*(int *)(local_50 + 0xc) == 0) {
    bVar16 = false;
    uVar15 = 0;
  }
  else {
    lVar2 = *(int64_t *)(this_ptr + 0x38);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    pvVar11 = _pthread_getspecific(param_1);
    if (pvVar11 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    pvVar11 = _pthread_getspecific(param_1);
    if (pvVar11 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e5ae0();
    bVar16 = *(int *)(local_140 + 0xc) == 0;
    uVar15 = (undefined7)((uint64_t)unaff_R13 >> 8);
    if (local_138 != '\0') {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = *(int64_t *)(this_ptr + 0x40);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  pvVar11 = _pthread_getspecific(param_1);
  if (pvVar11 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar10 = FUN_01505ea0();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  bVar14 = bVar16 ^ 1U | unaff_SIL;
  bVar12 = (byte)uVar10 & unaff_SIL;
  pVar13 = CONCAT31((int3)((uint)uVar10 >> 8),bVar12);
  local_6c = 0;
  if ((byte)uVar10 == 0) {
    local_6c = (uint)bVar14;
  }
  param_2 = param_2 & 0xff;
  if (bVar12 == 1) {
    lVar1 = *(int64_t *)(this_ptr + 0x40);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    pvVar11 = _pthread_getspecific(pVar13);
    if (pvVar11 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01506110();
    local_6c = (uint)CONCAT71(uVar15,bVar14);
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b00();
  lVar1 = *(int64_t *)(this_ptr + 0x40);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  pvVar11 = _pthread_getspecific(pVar13);
  if (pvVar11 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015058d0();
  local_70 = param_2;
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
    lVar2 = *(int64_t *)(this_ptr + 0x38);
  }
  else {
    lVar2 = *(int64_t *)(this_ptr + 0x38);
  }
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  pvVar11 = _pthread_getspecific(pVar13);
  if (pvVar11 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  lVar3 = local_68;
  if (local_60 == '\0') {
    if (local_68 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  local_a8 = 1;
  pVar13 = (void*)unaff_SIL;
  bVar12 = FUN_013157a0(unaff_SIL,local_b0,0);
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  lVar1 = *(int64_t *)(this_ptr + 0x38);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  bVar14 = FUN_01316740();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = *(int64_t *)(this_ptr + 0x40);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  bVar4 = FUN_013168e0();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  bVar5 = FUN_01317b70();
  FUN_00d50b20();
  lVar1 = *(int64_t *)(this_ptr + 0x38);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_01317d70();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = *(int64_t *)(this_ptr + 0x38);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  pvVar11 = _pthread_getspecific(pVar13);
  if (pvVar11 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  if (local_50 != 0) {
    FUN_00d50b00();
  }
  local_98 = 1;
  bVar6 = FUN_01318610();
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = *(int64_t *)(this_ptr + 0x38);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  pvVar11 = _pthread_getspecific(pVar13);
  if (pvVar11 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  if (local_50 != 0) {
    FUN_00d50b00();
  }
  local_88 = 1;
  bVar7 = FUN_01319320(local_70,1);
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = *(int64_t *)(this_ptr + 0x38);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  bVar8 = FUN_0131a4f0();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = *(int64_t *)(this_ptr + 0x38);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  bVar9 = FUN_0131ac40();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return (char)local_6c != '\0' & bVar9 & bVar8 & bVar7 & bVar6 & bVar5 & bVar4 & bVar14 & bVar12;
}

