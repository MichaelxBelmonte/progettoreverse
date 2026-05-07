// Function: FUN_01912630
// Address: 01912630
// Size: 825 bytes
// Class: GNList
// String references:
//   "%@.%d.%d"
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_01912630(uint32_t param_1)

{
  int64_t lVar1;
  void*puVar2;
  void* pVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  uint64_t uVar8;
  void* in_ECX;
  int64_t arg1;
  int64_t *this_ptr;
  void*local_a8;
  uint64_t local_a0;
  int64_t local_98;
  char local_90;
  int64_t *local_88;
  char local_80;
  void*local_78;
  double local_70;
  uint local_64;
  void*local_60;
  uint32_t local_58;
  int64_t local_50;
  char local_48;
  int local_40;
  int local_3c;
  uint32_t local_34;
  
  lVar1 = g_027e02b0;
  if (*(int64_t *)(arg1 + 0x50) == 0) {
    *(void*)(this_ptr + 1) = 0;
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    *this_ptr = lVar1;
    *(void*)(this_ptr + 1) = 1;
    return;
  }
  local_70 = (double)CONCAT44(local_70._4_4_,param_1);
  pvVar7 = _pthread_getspecific(in_ECX);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_70 = (double)local_70._0_4_;
  uVar8 = FUN_016ca720(0,0,0);
  local_78 = local_60;
  if ((char)local_58 == '\0') {
    if (local_60 != (void*)0x0) {
      FUN_00d50b00();
      if (((char)local_58 != '\0') && (local_60 != (void*)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01912709;
    }
LAB_01912727:
    pVar3 = 4;
    local_34 = (uint32_t)CONCAT71((int7)((uint64_t)uVar8 >> 8),1);
  }
  else {
    if (local_60 == (void*)0x0) goto LAB_01912727;
LAB_01912709:
    pVar3 = FUN_0123ff00();
    if ((int)pVar3 < 1) {
      local_64 = 0x10;
      local_34 = 0;
      goto LAB_01912749;
    }
    local_64 = 2;
    local_34 = 0;
    if (0xf < (int)pVar3) goto LAB_01912749;
  }
  local_64 = (uint)(byte)(0x10 / (byte)pVar3);
LAB_01912749:
  pvVar7 = _pthread_getspecific(pVar3);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00e7bcc0();
  pVar3 = 0;
  FUN_016cb910(local_70,4,0);
  pvVar7 = _pthread_getspecific(pVar3);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  iVar4 = FUN_016cae50(0,&local_a8);
  puVar2 = local_a8;
  FUN_00e7bcc0();
  local_60 = puVar2;
  FUN_00e7c860();
  local_a0 = FUN_00e7cd00();
  local_60 = local_a8;
  FUN_00e7b970();
  puVar2 = local_60;
  iVar5 = FUN_00e7cea0();
  local_60 = puVar2;
  FUN_00e7c2a0();
  iVar6 = FUN_00e7cea0();
  FUN_018c3210();
  uVar8 = (**(code **)(*local_88 + 0x378))((float)iVar4);
  local_50 = local_98;
  local_58 = 3;
  local_60 = &g_024c5048;
  local_48 = 0;
  if (local_98 != 0) {
    uVar8 = FUN_00d50b00();
  }
  local_40 = iVar5 + 1;
  local_3c = iVar6 + 1;
  local_48 = '\x01';
  local_60 = (void*)&g_02509758;
  FUN_00d8cb40(uVar8,&local_60);
  local_60 = &g_024c5048;
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((char)local_34 == '\0') {
    FUN_00d50b20();
  }
  return;
}

