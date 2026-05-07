// Function: FUN_00c60a70
// Address: 00c60a70
// Size: 584 bytes
// Class: GNPopUpButton

void FUN_00c60a70(uint64_t param_1,uint64_t param_2,int64_t *param_3)

{
  int64_t *plVar1;
  int64_t *plVar2;
  char cVar3;
  int64_t **pplVar4;
  void*this_ptr;
  int64_t *local_98;
  char local_90;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  plVar1 = g_027719e0;
  if (g_027719e0 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  cVar3 = (**(code **)(*plVar1 + 0x50))();
  FUN_00d50b20();
  plVar1 = g_027719e8;
  if (cVar3 != '\0') goto LAB_00c60c9a;
  if (g_027719e8 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  cVar3 = (**(code **)(*plVar1 + 0x50))();
  FUN_00d50b20();
  if (cVar3 != '\0') goto LAB_00c60c9a;
  pplVar4 = &local_98;
  FUN_00b37610();
  plVar1 = local_98;
  FUN_00aff000();
  if (plVar1 == (int64_t *)0x0) {
LAB_00c60b76:
    pplVar4 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_00c60b76;
  }
  plVar1 = *pplVar4;
  if (*(char *)(pplVar4 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar4 + 1) = 0;
  }
  if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar2 = g_02725a40;
  if (plVar1 != (int64_t *)0x0) {
    if (g_02725a40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    cVar3 = (**(code **)(*plVar2 + 0x50))();
    FUN_00d50b20();
    if (cVar3 != '\0') {
      local_50 = *param_3;
      local_48 = '\0';
      (**(code **)(*plVar1 + 0x88))(param_1,&local_50);
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      return;
    }
    cVar3 = FUN_00b378e0();
    if (cVar3 != '\0') {
      local_40 = *param_3;
      local_38 = '\0';
      (**(code **)(*plVar1 + 0x88))(param_1,&local_40);
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      return;
    }
    FUN_00d50b20();
  }
LAB_00c60c9a:
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
  return;
}

