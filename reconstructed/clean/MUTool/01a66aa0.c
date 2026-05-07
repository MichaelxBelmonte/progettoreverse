// Function: FUN_01a66aa0
// Address: 01a66aa0
// Size: 592 bytes
// Class: MUTool

void FUN_01a66aa0(void* param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  void *pvVar3;
  int64_t *arg1;
  int64_t this_ptr;
  uint64_t uVar4;
  int64_t local_a0;
  char local_98;
  int64_t local_70;
  char local_68;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  if ((*(int64_t *)(this_ptr + 0x1f8) == 0) || (*arg1 != *(int64_t *)(this_ptr + 0x1f8))) {
    FUN_01788770();
    FUN_017879e0();
    lVar1 = *arg1;
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = g_027e2670;
    if (lVar1 == local_50) {
      if (g_027e2670 != 0) {
        FUN_00d50b00();
      }
      FUN_00d50b00();
      uVar4 = FUN_01e1ea80(g_02391030,&stack0xffffffffffffffa0);
      if ((local_98 != '\0') && (local_a0 != 0)) {
        uVar4 = FUN_00d50b20();
      }
      if (this_ptr != 0) {
        uVar4 = FUN_00d50b20();
      }
      if (lVar2 != 0) {
        uVar4 = FUN_00d50b20();
      }
    }
    else {
      uVar4 = FUN_01a66e80();
      if ((local_48 != '\0') && (local_50 != 0)) {
        uVar4 = FUN_00d50b20();
      }
    }
  }
  else {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01510280();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    uVar4 = FUN_01b6d800();
    if (local_40 != 0) {
      uVar4 = FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      uVar4 = FUN_00d50b20();
    }
  }
  local_70 = *param_2;
  local_68 = '\0';
  FUN_01b68d40(uVar4,&local_70);
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  return;
}

