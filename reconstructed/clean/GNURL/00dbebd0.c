// Function: FUN_00dbebd0
// Address: 00dbebd0
// Size: 775 bytes
// Class: GNURL
// String references:
//   "=\""
//   "\""

void FUN_00dbebd0(int64_t *param_1,void*param_2,int64_t *param_3)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  char cVar5;
  int iVar6;
  void*puVar7;
  void*this_ptr;
  int64_t local_a8;
  char local_a0;
  
  if ((*param_3 == 0) || (iVar6 = FUN_00d8c7a0(), iVar6 < 1)) {
    *(void*)(this_ptr + 1) = 0;
    puVar7 = (void*)*param_2;
    if (*(char *)(param_2 + 1) != '\0') {
      *this_ptr = puVar7;
      *(void*)(this_ptr + 1) = 1;
      *(void*)(param_2 + 1) = 0;
      return;
    }
    if (puVar7 != (void*)0x0) {
      FUN_00d50b00();
    }
    goto LAB_00dbee9b;
  }
  puVar7 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &g_025795a8;
  (*g_025795c0)();
  lVar4 = g_0277c878;
  plVar1 = (int64_t *)*param_1;
  if (g_0277c878 != 0) {
    FUN_00d50b00();
  }
  cVar5 = (**(code **)(*plVar1 + 0x50))();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  lVar4 = g_02783b18;
  if (cVar5 != '\0') {
    if (g_02783b18 != 0) {
      FUN_00d50b00();
    }
    FUN_00dbdbc0();
    lVar2 = *param_1;
    if (lVar2 == local_a8) {
      if (((char)param_1[1] == '\0') && (local_a8 != 0)) {
        if (local_a0 == '\0') {
          FUN_00d50b00();
        }
        goto LAB_00dbedbf;
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      lVar3 = param_1[1];
      if (local_a0 == '\0') {
        if (local_a8 != 0) {
          FUN_00d50b00();
        }
        *param_1 = local_a8;
        if (((char)lVar3 != '\0') && (lVar2 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        *param_1 = local_a8;
        if (((char)lVar3 != '\0') && (lVar2 != 0)) {
          FUN_00d50b20();
        }
      }
LAB_00dbedbf:
      *(void*)(param_1 + 1) = 1;
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d8dbf0();
  FUN_00d8db40();
  FUN_00d8dbf0();
  FUN_00d8db40();
  FUN_00d8dbf0();
  FUN_00d8db40();
  FUN_00d8c7d0();
LAB_00dbee9b:
  *this_ptr = puVar7;
  *(void*)(this_ptr + 1) = 1;
  return;
}

