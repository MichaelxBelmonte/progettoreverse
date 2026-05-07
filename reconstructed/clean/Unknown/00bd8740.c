// Function: FUN_00bd8740
// Address: 00bd8740
// Size: 606 bytes
// Class: Unknown

void FUN_00bd8740(void)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  int64_t *plVar5;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  g_02802508 = 1;
  if (g_0280250c != '\0') {
    g_02802508 = 1;
    return;
  }
  if (*arg1 != 0) {
    iVar4 = FUN_00d8c7a0();
    if (iVar4 == 0) {
      plVar5 = (int64_t *)0x0;
      if (*arg1 != 0) {
        *arg1 = 0;
        if ((char)arg1[1] != '\0') {
          FUN_00d50b20();
        }
        *(void*)(arg1 + 1) = 0;
        goto LAB_00bd87a6;
      }
    }
    else {
LAB_00bd87a6:
      plVar5 = (int64_t *)*arg1;
    }
    if (plVar5 != (int64_t *)0x0) {
      FUN_00b691d0();
      local_48 = local_38;
      local_40 = 0;
      if (local_30 == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30 = '\0';
      }
      local_40 = '\x01';
      cVar3 = (**(code **)(*plVar5 + 0x50))();
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if (cVar3 != '\0') {
        return;
      }
      goto LAB_00bd8859;
    }
  }
  FUN_00b691d0();
  lVar1 = local_38;
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 == 0) {
    return;
  }
LAB_00bd8859:
  (**(code **)(*g_028a5770 + 0x368))();
  lVar1 = *(int64_t *)(this_ptr + 0x58);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  cVar3 = FUN_00bd5c60();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  (**(code **)(*g_028a5770 + 0x378))();
  if (cVar3 != '\0') {
    FUN_00d403d0();
    lVar1 = g_0270b7b0;
    if (g_0270b7b0 != 0) {
      FUN_00d50b00();
    }
    local_50 = 0;
    lVar2 = *(int64_t *)(this_ptr + 0x28);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    local_50 = '\x01';
    local_68 = 0;
    local_60 = '\0';
    local_58 = lVar2;
    FUN_00d40470(&local_68,&local_58,1,3);
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}

