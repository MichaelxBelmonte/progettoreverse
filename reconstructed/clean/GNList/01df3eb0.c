// Function: FUN_01df3eb0
// Address: 01df3eb0
// Size: 509 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


uint64_t FUN_01df3eb0(uint64_t param_1,char param_2)

{
  int64_t lVar1;
  char cVar2;
  uint uVar3;
  int64_t *plVar4;
  int64_t *this_ptr;
  uint64_t uVar5;
  int64_t *plVar6;
  int64_t *local_70;
  char local_68;
  int64_t *local_40;
  char local_38;
  
  FUN_01cae990();
  lVar1 = g_027f2e68;
  if (g_027f2e68 != 0) {
    FUN_00d50b00();
  }
  cVar2 = (**(code **)(*local_40 + 0x50))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar2 == '\0') {
    uVar3 = FUN_01df05b0(param_1,param_2);
    uVar5 = (uint64_t)uVar3;
  }
  else {
    uVar5 = CONCAT71((int7)((uint64_t)local_40 >> 8),1);
    if (param_2 != '\0') {
      FUN_01ccad60();
      if (local_40 == (int64_t *)0x0) {
        plVar4 = (int64_t *)0x0;
        if (local_38 != '\0') {
          plVar4 = (int64_t *)0x0;
        }
      }
      else {
        plVar4 = local_40;
        if (local_38 == '\0') {
          FUN_00d50b00();
        }
      }
      FUN_01db9a60();
      if (local_40 == (int64_t *)0x0) {
        plVar6 = (int64_t *)0x0;
      }
      else {
        plVar6 = local_40;
        if (local_38 == '\0') {
          FUN_00d50b00();
        }
      }
      FUN_01caeb00();
      (**(code **)(*local_70 + 0x980))();
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      (**(code **)(*this_ptr + 0x518))(param_1,(int)plVar6[0x27]);
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar4 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
  }
  return uVar5 & 0xffffffff;
}

