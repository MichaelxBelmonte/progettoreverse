// Function: FUN_004595e0
// Address: 004595e0
// Size: 783 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint32_t FUN_004595e0(void)

{
  int64_t *plVar1;
  char cVar2;
  void*puVar3;
  uint64_t uVar4;
  int64_t this_ptr;
  int64_t lVar5;
  int64_t local_98;
  char local_90;
  int64_t local_70;
  char local_68;
  uint32_t local_44;
  int64_t local_40;
  char local_38;
  
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_02572358;
  (*g_02572370)();
  FUN_01f27fe0();
  FUN_00324f60();
  if (local_68 == '\0') {
    if (local_70 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_68 = '\0';
  }
  FUN_000c4290();
  if ((local_90 == '\0') && (local_98 != 0)) {
    FUN_00d50b00();
  }
  if (local_70 != 0) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (local_98 == 0) {
    local_44 = 0;
  }
  else {
    if (*(int *)(local_98 + 0xc) < 1) {
      local_44 = 0;
    }
    else {
      lVar5 = 0;
      local_44 = 0;
      do {
        plVar1 = *(int64_t **)(*(int64_t *)(local_98 + 0x10) + lVar5 * 8);
        cVar2 = (**(code **)(*plVar1 + 0x390))();
        if ((cVar2 != '\0') && (cVar2 = FUN_0053b6c0(), cVar2 == '\0')) {
          if (plVar1[0x61] == 0) {
            FUN_0053b600();
            uVar4 = FUN_00d21140();
          }
          else {
            if (*(int *)(this_ptr + 0x70) == 2) {
              if (*(int64_t *)(this_ptr + 0x60) == 0) {
                if (*(int64_t *)(this_ptr + 0x30) != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                FUN_00d50b00();
              }
              FUN_00d50b20();
            }
            cVar2 = FUN_0053afe0();
            if (cVar2 == '\0') goto LAB_00459730;
            FUN_0053b600();
            uVar4 = FUN_00d21140();
          }
          local_44 = (uint32_t)CONCAT71((int7)((uint64_t)uVar4 >> 8),1);
        }
LAB_00459730:
        lVar5 = lVar5 + 1;
      } while ((int)lVar5 < *(int *)(local_98 + 0xc));
    }
    FUN_0015ee90();
    FUN_00d50b20();
  }
  FUN_00454db0();
  if (puVar3 != (void*)0x0) {
    FUN_00d50b20();
  }
  return local_44;
}

