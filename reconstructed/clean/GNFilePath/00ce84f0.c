// Function: FUN_00ce84f0
// Address: 00ce84f0
// Size: 876 bytes
// Class: GNFilePath

void FUN_00ce84f0(uint64_t param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t *arg1;
  void*this_ptr;
  int64_t local_120;
  char local_118;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  (**(code **)(*arg1 + 0x368))();
  if (local_120 == 0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return;
  }
  if (local_118 == '\0') {
    FUN_00d50b00();
  }
  plVar4 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar4 + 0x18))();
  FUN_00cde260();
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
      goto LAB_00ce85b8;
    }
  }
  else if (local_50 != 0) {
LAB_00ce85b8:
    iVar3 = _stat_INODE64();
    if (iVar3 == 0) {
      FUN_00d46530();
      lVar2 = local_40;
      lVar1 = g_02775698;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
          lVar1 = g_02775698;
        }
      }
      else {
        local_38 = '\0';
      }
      g_02775698 = lVar1;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_48 = '\0';
      local_50 = lVar1;
      FUN_00ca0840(param_1,&local_50);
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d46530();
      lVar2 = local_40;
      lVar1 = g_027756a0;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
          lVar1 = g_027756a0;
        }
      }
      else {
        local_38 = '\0';
      }
      g_027756a0 = lVar1;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_48 = '\0';
      local_50 = lVar1;
      FUN_00ca0840(param_1,&local_50);
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d46530();
      lVar2 = local_40;
      lVar1 = g_027756a8;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
          lVar1 = g_027756a8;
        }
      }
      else {
        local_38 = '\0';
      }
      g_027756a8 = lVar1;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_48 = '\0';
      local_50 = lVar1;
      FUN_00ca0840(param_1,&local_50);
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    *this_ptr = plVar4;
    *(void*)(this_ptr + 1) = 1;
    FUN_00d50b20();
    goto LAB_00ce883f;
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
  FUN_00d50b20();
LAB_00ce883f:
  FUN_00d50b20();
  return;
}

