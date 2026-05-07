// Function: FUN_0024dae0
// Address: 0024dae0
// Size: 663 bytes
// Class: GNFilePath


void FUN_0024dae0(pthread_key_t param_1,int param_2)

{
  longlong *plVar1;
  void *pvVar2;
  char *pcVar3;
  longlong unaff_RDI;
  longlong *plVar4;
  longlong *local_40;
  char local_38 [8];
  char local_30 [8];
  
  plVar1 = *(longlong **)(unaff_RDI + 0x90);
  if (param_2 == 0) {
    if (plVar1 == (longlong *)0x0) {
LAB_0024dca9:
      plVar4 = (longlong *)0x0;
    }
    else {
      (**(code **)(&UNK_00001550 + *plVar1))();
      param_1 = CONCAT31((int3)(param_1 >> 8),local_38[0]);
      pcVar3 = local_30;
      if (local_38[0] != '\0') {
        pcVar3 = local_38;
      }
      local_30[0] = local_38[0];
      *pcVar3 = '\0';
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (local_40 == (longlong *)0x0) {
        plVar4 = *(longlong **)(unaff_RDI + 0x90);
        if (*(longlong **)(unaff_RDI + 0x90) == (longlong *)0x0) goto LAB_0024dca9;
      }
      else {
        plVar4 = local_40;
        if (local_30[0] != '\0') goto LAB_0024dcac;
      }
      FUN_00d50b00();
    }
LAB_0024dcac:
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e5ae0();
    if (local_38[0] == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38[0] = '\0';
    }
    (**(code **)(*plVar4 + 0xdb8))();
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar1 == (longlong *)0x0) {
      return;
    }
    FUN_00d50b20();
    return;
  }
  if (plVar1 == (longlong *)0x0) {
LAB_0024dbc9:
    plVar4 = (longlong *)0x0;
  }
  else {
    (**(code **)(&UNK_00001550 + *plVar1))();
    param_1 = CONCAT31((int3)(param_1 >> 8),local_38[0]);
    pcVar3 = local_30;
    if (local_38[0] != '\0') {
      pcVar3 = local_38;
    }
    local_30[0] = local_38[0];
    *pcVar3 = '\0';
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_40 == (longlong *)0x0) {
      plVar4 = *(longlong **)(unaff_RDI + 0x90);
      if (*(longlong **)(unaff_RDI + 0x90) == (longlong *)0x0) goto LAB_0024dbc9;
    }
    else {
      plVar4 = local_40;
      if (local_30[0] != '\0') goto LAB_0024dbcc;
    }
    FUN_00d50b00();
  }
LAB_0024dbcc:
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e5ae0();
  if (local_38[0] == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38[0] = '\0';
  }
  (**(code **)(*plVar4 + 0xdc8))();
  if (local_40 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


