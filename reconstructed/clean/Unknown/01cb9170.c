// Function: FUN_01cb9170
// Address: 01cb9170
// Size: 602 bytes
// Class: Unknown

void FUN_01cb9170(uint64_t param_1,int64_t *param_2)

{
  int64_t *plVar1;
  bool bVar2;
  int64_t lVar3;
  char cVar4;
  int64_t lVar5;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t local_40;
  char local_38;
  
  lVar3 = g_027fecc0;
  plVar1 = (int64_t *)*param_2;
  lVar5 = local_40;
  if (plVar1 == (int64_t *)0x0) {
LAB_01cb934f:
    bVar2 = false;
  }
  else {
    if (g_027fecc0 != 0) {
      FUN_00d50b00();
    }
    cVar4 = (**(code **)(*plVar1 + 0x50))();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    lVar3 = g_027fecd0;
    if (cVar4 == '\0') {
      plVar1 = (int64_t *)*param_2;
      if (g_027fecd0 != 0) {
        FUN_00d50b00();
      }
      cVar4 = (**(code **)(*plVar1 + 0x50))();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_027ede68;
      if (cVar4 == '\0') {
        param_2 = (int64_t *)*param_2;
        if (g_027ede68 != 0) {
          FUN_00d50b00();
        }
        cVar4 = (**(code **)(*param_2 + 0x50))();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        if (cVar4 == '\0') goto LAB_01cb934f;
        (**(code **)(*arg1 + 0x380))();
        if (local_40 == 0) goto LAB_01cb9354;
        bVar2 = true;
        if (local_38 == '\0') {
          FUN_00d50b00();
        }
      }
      else {
        (**(code **)(*arg1 + 0x378))();
        if (local_40 == 0) goto LAB_01cb9354;
        bVar2 = true;
        if (local_38 == '\0') {
          FUN_00d50b00();
        }
      }
    }
    else {
      (**(code **)(*arg1 + 0x370))();
      if (local_40 == 0) {
LAB_01cb9354:
        bVar2 = false;
        lVar5 = 0;
      }
      else {
        bVar2 = true;
        if (local_38 == '\0') {
          FUN_00d50b00();
        }
      }
    }
    if (lVar5 != 0) goto LAB_01cb9399;
  }
  FUN_01d46330();
  if (local_40 == 0) {
    lVar5 = 0;
  }
  else {
    bVar2 = true;
    lVar5 = local_40;
    if (local_38 == '\0') {
      FUN_00d50b00();
    }
  }
LAB_01cb9399:
  *(void*)(this_ptr + 1) = 0;
  if ((!bVar2) && (lVar5 != 0)) {
    FUN_00d50b00();
  }
  *this_ptr = lVar5;
  *(void*)(this_ptr + 1) = 1;
  return;
}

