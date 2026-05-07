// Function: FUN_017d3860
// Address: 017d3860
// Size: 724 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_017d3860(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  int iVar2;
  void*puVar3;
  uint64_t this_ptr;
  int64_t lVar4;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_48;
  char local_40;
  
  lVar1 = local_80;
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_02578b00;
  (*g_02578b18)();
  lVar4 = g_0276cc80;
  if (*param_2 != 0) {
    if (g_0276cc80 != 0) {
      FUN_00d50b00();
    }
    FUN_00d91bc0();
    if (local_78 == '\0') {
      if (local_80 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_78 = '\0';
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    if (local_80 != 0) {
      local_78 = '\0';
      local_80 = 0;
      if (0 < *(int *)(lVar1 + 0xc)) {
        lVar4 = 0;
        do {
          local_80 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + lVar4 * 8);
          FUN_00d95590();
          if (local_88 == '\0') {
            if (local_90 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_88 = '\0';
          }
          FUN_00d97f20();
          if (local_40 == '\0') {
            if (local_48 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          if (local_90 != 0) {
            FUN_00d50b20();
          }
          if ((local_88 != '\0') && (local_90 != 0)) {
            FUN_00d50b20();
          }
          iVar2 = FUN_00d8c7a0();
          if (iVar2 != 0) {
            local_40 = '\0';
            FUN_00d7a410();
          }
          if (local_48 != 0) {
            FUN_00d50b20();
          }
          lVar4 = lVar4 + 1;
        } while ((int)lVar4 < *(int *)(lVar1 + 0xc));
      }
      FUN_00018280();
      FUN_00d50b20();
    }
    iVar2 = FUN_00c8d620();
    if (iVar2 != 0) {
      FUN_017d3d40();
      FUN_00e01ce0(0,FUN_00d92680);
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_017d3afd;
    }
  }
  FUN_017d3d40();
LAB_017d3afd:
  FUN_00d50b20();
  return this_ptr;
}

