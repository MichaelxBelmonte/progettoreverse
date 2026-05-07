// Function: FUN_01e9d4d0
// Address: 01e9d4d0
// Size: 504 bytes
// Class: GNMultipleValue

void FUN_01e9d4d0(uint64_t param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t lVar5;
  int64_t lVar6;
  int64_t **pplVar7;
  int64_t *local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  lVar6 = g_027fdcf0;
  plVar1 = (int64_t *)*arg1;
  if (g_027fdcf0 != 0) {
    FUN_00d50b00();
  }
  local_50 = lVar6;
  local_48 = '\x01';
  pplVar7 = &local_60;
  (**(code **)(*plVar1 + 0x578))(param_1,&local_50);
  plVar1 = local_60;
  FUN_00053ac0();
  if (plVar1 == (int64_t *)0x0) {
LAB_01e9d54a:
    pplVar7 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01e9d54a;
  }
  plVar1 = *pplVar7;
  if (*(char *)(pplVar7 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar7 + 1) = 0;
  }
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (int64_t *)0x0) goto LAB_01e9d68e;
  iVar4 = FUN_00d45870();
  lVar2 = g_027fecd0;
  lVar5 = g_027fecc0;
  lVar6 = g_027ede68;
  if (iVar4 == 1) {
    if (g_027fecc0 == 0) {
      lVar6 = *(int64_t *)(this_ptr + 0x20);
      if (lVar6 != 0) goto LAB_01e9d659;
    }
    else {
      FUN_00d50b00();
      lVar6 = *(int64_t *)(this_ptr + 0x20);
      if (lVar6 == lVar5) {
        FUN_00d50b20();
      }
      else {
LAB_01e9d659:
        *(int64_t *)(this_ptr + 0x20) = lVar5;
        if (lVar6 != 0) {
          FUN_00d50b20();
        }
      }
    }
  }
  else if (iVar4 == 2) {
    if (g_027fecd0 == 0) {
      lVar6 = *(int64_t *)(this_ptr + 0x20);
      if (lVar6 != 0) goto LAB_01e9d675;
    }
    else {
      FUN_00d50b00();
      lVar6 = *(int64_t *)(this_ptr + 0x20);
      if (lVar6 == lVar2) {
        FUN_00d50b20();
      }
      else {
LAB_01e9d675:
        *(int64_t *)(this_ptr + 0x20) = lVar2;
        if (lVar6 != 0) {
          FUN_00d50b20();
        }
      }
    }
  }
  else if (iVar4 == 3) {
    if (g_027ede68 == 0) {
      lVar5 = *(int64_t *)(this_ptr + 0x20);
      if (lVar5 != 0) goto LAB_01e9d63d;
    }
    else {
      FUN_00d50b00();
      lVar5 = *(int64_t *)(this_ptr + 0x20);
      if (lVar5 == lVar6) {
        FUN_00d50b20();
      }
      else {
LAB_01e9d63d:
        *(int64_t *)(this_ptr + 0x20) = lVar6;
        if (lVar5 != 0) {
          FUN_00d50b20();
        }
      }
    }
  }
  FUN_00d50b20();
LAB_01e9d68e:
  local_40 = *arg1;
  local_38 = '\0';
  FUN_00d61ea0();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  return;
}

