// Function: FUN_00ce1700
// Address: 00ce1700
// Size: 623 bytes
// Class: GNFilePath

uint64_t FUN_00ce1700(int64_t *param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  int64_t *arg1;
  uint64_t this_ptr;
  int64_t *local_70;
  int64_t local_58;
  char local_50;
  int64_t local_40;
  char local_38;
  
  FUN_00d8ed10();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      goto LAB_00ce173c;
    }
    if (*param_1 == 0) goto LAB_00ce1914;
  }
  else {
LAB_00ce173c:
    if (*param_1 == 0) goto LAB_00ce1914;
    if ((local_40 != 0) && (iVar4 = FUN_00d8c7a0(), iVar4 != 0)) {
      FUN_00df0550();
      local_38 = '\0';
      cVar3 = FUN_00d23d70();
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (cVar3 != '\0') goto LAB_00ce1914;
    }
  }
  FUN_00df1af0();
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  FUN_00d90060();
  lVar1 = *param_2;
  if (lVar1 == local_40) {
    if (((char)param_2[1] == '\0') && (local_40 != 0)) {
      if (local_38 != '\0') goto LAB_00ce1897;
      FUN_00d50b00();
      goto LAB_00ce18d1;
    }
LAB_00ce18d8:
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar2 = param_2[1];
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      *param_2 = local_40;
      if (((char)lVar2 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
LAB_00ce18d1:
      local_70 = param_2 + 1;
      *(void*)local_70 = 1;
      goto LAB_00ce18d8;
    }
    *param_2 = local_40;
    if (((char)lVar2 != '\0') && (lVar1 != 0)) {
      FUN_00d50b20();
    }
LAB_00ce1897:
    local_70 = param_2 + 1;
    *(void*)local_70 = 1;
  }
  if (local_58 != 0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
LAB_00ce1914:
  (**(code **)(*arg1 + 0x400))();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

