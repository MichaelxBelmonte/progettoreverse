// Function: FUN_00b36c50
// Address: 00b36c50
// Size: 915 bytes
// Class: GNAudioProcessorController
// === GNAudioProcessorController properties ===
//                   _parameterChangeCounters
//                   _parameterValues
//                   _arrangedPrcoessorSource


void FUN_00b36c50(uint32_t param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  uint32_t in_ECX;
  uint32_t unaff_ESI;
  int64_t *this_ptr;
  uint32_t uVar4;
  int64_t *local_88;
  char local_80;
  uint32_t local_74;
  int64_t *local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  local_74 = param_1;
  (**(code **)(*this_ptr + 0x5d0))();
  lVar1 = local_40;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    (**(code **)(*this_ptr + 0x5d0))();
    FUN_00b32070(local_74,in_ECX);
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    plVar3 = (int64_t *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar3 + 0x18))();
    uVar4 = (**(code **)(*this_ptr + 0x5d0))();
    lVar1 = g_0276caa0;
    if ((local_48 == '\0') && (local_50 != (int64_t *)0x0)) {
      uVar4 = FUN_00d50b00();
      lVar1 = g_0276caa0;
    }
    g_0276caa0 = lVar1;
    if (lVar1 != 0) {
      uVar4 = FUN_00d50b00();
    }
    local_38 = '\0';
    local_40 = lVar1;
    FUN_00ca0840(uVar4,&local_40);
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (local_50 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    uVar4 = (**(code **)(*this_ptr + 0x5d0))();
    uVar4 = (**(code **)(*local_50 + 0x480))(uVar4,unaff_ESI);
    lVar1 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != 0) && (uVar4 = FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
        uVar4 = FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    lVar2 = g_0276ca98;
    if (lVar1 != 0) {
      if (g_0276ca98 != 0) {
        uVar4 = FUN_00d50b00();
      }
      local_40 = lVar2;
      local_38 = '\0';
      FUN_00ca0840(uVar4,&local_40);
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d403d0();
    lVar1 = g_0276caa8;
    if (g_0276caa8 != 0) {
      FUN_00d50b00();
    }
    FUN_00d50b00();
    local_80 = '\0';
    local_88 = plVar3;
    FUN_00d40470(&local_88,&stack0xffffffffffffff90,3,3);
    if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*this_ptr + 0x5e8))();
    FUN_00d50b20();
  }
  return;
}

