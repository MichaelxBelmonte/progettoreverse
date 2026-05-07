// Function: FUN_00d46aa0
// Address: 00d46aa0
// Size: 608 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_00d46aa0(void)

{
  bool bVar1;
  void*puVar2;
  char *pcVar3;
  int64_t lVar4;
  int unaff_ESI;
  void*this_ptr;
  int iVar5;
  int64_t local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (unaff_ESI + 1U < 0x22) {
    if ((g_028a7780 == 0) || (g_028a7789 == '\0')) {
      FUN_00e8cb50();
      if (g_028a7780 == 0) {
        FUN_00d46850();
        lVar4 = g_028a7780;
        if (g_028a7780 != local_48) {
          if (local_40[0] == '\0') {
            if (local_48 == 0) {
              lVar4 = 0;
            }
            else {
              FUN_00d50b00();
              lVar4 = local_48;
            }
          }
          else {
            local_40[0] = '\0';
            lVar4 = local_48;
          }
          bVar1 = g_028a7780 != 0;
          g_028a7780 = lVar4;
          if (bVar1) {
            FUN_00d50b20();
            lVar4 = local_48;
          }
        }
        if ((lVar4 != 0) && (g_028a7788 == '\0')) {
          g_028a7788 = '\x01';
          FUN_00e8cb90();
          lVar4 = local_48;
        }
        if ((local_40[0] != '\0') && (lVar4 != 0)) {
          FUN_00d50b20();
        }
        iVar5 = -1;
        do {
          puVar2 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar2 = &g_02575d80;
          FUN_00d500e0();
          local_40[0] = '\0';
          FUN_00d21140();
          if ((local_40[0] != '\0') && (puVar2 != (void*)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
          FUN_00d23340();
          local_38[0] = local_40[0];
          pcVar3 = local_40;
          if (local_40[0] == '\0') {
            pcVar3 = local_38;
          }
          *pcVar3 = '\0';
          if ((local_40[0] != '\0') && (puVar2 != (void*)0x0)) {
            FUN_00d50b20();
          }
          *(void*)((int64_t)puVar2 + 0xc) = 0x69;
          *(int *)(puVar2 + 2) = iVar5;
          if (local_38[0] != '\0') {
            FUN_00d50b20();
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 != 0x21);
        g_028a7789 = '\x01';
        FUN_00e8cb70();
      }
      else {
        g_028a7789 = '\x01';
        FUN_00e8cb70();
      }
    }
    puVar2 = *(void**)
              (*(int64_t *)(g_028a7780 + 0x10) + (int64_t)(int)(unaff_ESI + 1U) * 8);
    *(void*)(this_ptr + 1) = 0;
    if (puVar2 != (void*)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    puVar2 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar2 = &g_02575d80;
    FUN_00d500e0();
    *(void*)((int64_t)puVar2 + 0xc) = 0x69;
    *(int *)(puVar2 + 2) = unaff_ESI;
  }
  *this_ptr = puVar2;
  *(void*)(this_ptr + 1) = 1;
  return;
}

