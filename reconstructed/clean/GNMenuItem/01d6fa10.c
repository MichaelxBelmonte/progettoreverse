// Function: FUN_01d6fa10
// Address: 01d6fa10
// Size: 649 bytes
// Class: GNMenuItem
// === GNMenuItem properties ===
//                   _isKeyboardNavigationEnabled
//                   _lastModalResult
//                   _additionalResourceDirectories
//                   _preferencesDisplayGroup


void FUN_01d6fa10(uint64_t param_1,int param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int iVar3;
  int iVar4;
  void*puVar5;
  int64_t *arg1;
  int64_t this_ptr;
  uint32_t uVar6;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  
  if (*arg1 != 0) goto LAB_01d6fae6;
  FUN_00d8ede0();
  lVar1 = *arg1;
  if (lVar1 == local_50) {
    if (((char)arg1[1] != '\0') || (local_50 == 0)) goto LAB_01d6fad2;
    if (local_48 == '\0') {
      FUN_00d50b00();
      goto LAB_01d6facb;
    }
  }
  else {
    lVar2 = arg1[1];
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
      *arg1 = local_50;
      if (((char)lVar2 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
LAB_01d6facb:
      local_40 = arg1 + 1;
      *(void*)local_40 = 1;
LAB_01d6fad2:
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_01d6fae6;
    }
    *arg1 = local_50;
    if (((char)lVar2 != '\0') && (lVar1 != 0)) {
      FUN_00d50b20();
    }
  }
  local_40 = arg1 + 1;
  *(void*)local_40 = 1;
LAB_01d6fae6:
  if (*(int64_t *)(this_ptr + 0x220) != 0) {
    iVar4 = 0;
    if (-1 < param_2) {
      iVar4 = param_2;
    }
    iVar3 = FUN_01d6fde0();
    if (iVar3 < iVar4) {
      iVar4 = FUN_01d6fde0();
    }
    puVar5 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar5 = &g_026846d0;
    puVar5[2] = &g_02684a60;
    *(void*)(puVar5 + 3) = 0;
    *(void*)((int64_t)puVar5 + 0x1c) = 0;
    *(void*)((int64_t)puVar5 + 0x24) = 0;
    *(void*)((int64_t)puVar5 + 0x2c) = 0;
    *(void*)((int64_t)puVar5 + 0x34) = 0;
    *(void*)((int64_t)puVar5 + 0x3a) = 0;
    *(void*)((int64_t)puVar5 + 0x42) = 0;
    puVar5[10] = 0;
    puVar5[0xb] = 0;
    puVar5[0xc] = 0;
    puVar5[0xd] = 0;
    *(void*)(puVar5 + 0xe) = 0;
    (*g_026846e8)();
    FUN_01d64eb0();
    lVar1 = g_027f0ad8;
    if (g_027f0ad8 != 0) {
      FUN_00d50b00();
    }
    FUN_01d65120();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    FUN_01d65190();
    uVar6 = FUN_01d651e0();
    FUN_01d5d7f0(uVar6,iVar4);
    FUN_01d6ef90();
    FUN_00d50b20();
  }
  return;
}

