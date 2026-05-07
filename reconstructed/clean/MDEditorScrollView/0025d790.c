// Function: FUN_0025d790
// Address: 0025d790
// Size: 899 bytes
// Class: MDEditorScrollView
// === MDEditorScrollView properties ===
//   MUScaleRulerViewDisplayMode _scaleRulerViewDisplayMode


void* FUN_0025d790(void)

{
  int64_t lVar1;
  code *pcVar2;
  void*puVar3;
  int64_t *plVar4;
  void *pvVar5;
  code *pcVar6;
  void*puVar7;
  void* pVar8;
  code *pcVar9;
  int64_t *arg1;
  void*this_ptr;
  int iVar10;
  void*local_58;
  char local_50;
  void*local_48;
  uint8_t local_40 [8];
  uint8_t local_38 [8];
  
  plVar4 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar4 + 0x18))();
  pcVar2 = g_02572370;
  lVar1 = *arg1;
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      iVar10 = 0;
      pcVar9 = g_02572370;
      do {
        puVar3 = local_48;
        pVar8 = (void*)pcVar9;
        pvVar5 = _pthread_getspecific(pVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e7c0();
        pvVar5 = _pthread_getspecific(pVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013df480();
        local_38[0] = local_40[0];
        pcVar9 = local_38;
        pcVar6 = local_40;
        if (local_40[0] == (code)0x0) {
          pcVar6 = pcVar9;
        }
        *pcVar6 = (code)0x0;
        if ((local_40[0] != (code)0x0) && (local_48 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != (void*)0x0)) {
          FUN_00d50b20();
        }
        FUN_0025dd10();
        if (local_40[0] == (code)0x0) {
          if (((local_48 != (void*)0x0) && (FUN_00d50b00(), local_40[0] != (code)0x0)) &&
             (local_48 != (void*)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_40[0] = (code)0x0;
        }
        puVar7 = local_48;
        if (local_48 == (void*)0x0) {
          puVar7 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar7 = &g_02572358;
          (*pcVar2)();
          FUN_0025ddc0();
        }
        pvVar5 = _pthread_getspecific((void*)pcVar9);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e7c0();
        if (local_50 == '\0') {
          if (local_58 != (void*)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_50 = '\0';
        }
        local_48 = local_58;
        local_40[0] = (code)0x0;
        FUN_00d21140();
        if ((local_40[0] != (code)0x0) && (local_58 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if (local_58 != (void*)0x0) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if (puVar7 != (void*)0x0) {
          FUN_00d50b20();
        }
        if ((local_38[0] != (code)0x0) && (puVar3 != (void*)0x0)) {
          FUN_00d50b20();
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < *(int *)(lVar1 + 0xc));
    }
    FUN_001159b0();
  }
  *this_ptr = plVar4;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

