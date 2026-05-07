// Function: FUN_0036d5a0
// Address: 0036d5a0
// Size: 1780 bytes
// Class: MDMetaWindowController
// String references:
//   "recording.%@"

void* FUN_0036d5a0(uint64_t param_1,int64_t *param_2)

{
  bool bVar1;
  bool bVar2;
  int64_t lVar3;
  int64_t *plVar4;
  char cVar5;
  void *pvVar6;
  int64_t lVar7;
  void* pVar8;
  int64_t *arg1;
  void*this_ptr;
  int64_t *plVar9;
  int64_t local_100;
  char local_f8;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t *local_70;
  char local_68;
  int local_58;
  int64_t *local_48;
  char local_40;
  
  plVar4 = local_70;
  plVar9 = (int64_t *)*param_2;
  FUN_000fe4b0();
  if (plVar9 == (int64_t *)0x0) {
LAB_0036d5ef:
    param_2 = &g_02802688;
  }
  else {
    (**(code **)(*plVar9 + 0x360))();
    cVar5 = FUN_00e85ea0();
    if (cVar5 == '\0') goto LAB_0036d5ef;
  }
  lVar3 = param_2[1];
  if (((char)lVar3 == '\0') || (*param_2 == 0)) {
    if (*param_2 != 0) goto LAB_0036d622;
    bVar1 = true;
    bVar2 = false;
  }
  else {
    FUN_00d50b00();
LAB_0036d622:
    pVar8 = (void*)param_2;
    FUN_013fe9a0();
    pvVar6 = _pthread_getspecific(pVar8);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e8920();
    if ((local_68 == '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*arg1 + 0x720))();
    (**(code **)(*local_48 + 0x618))();
    if (local_70 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    plVar9 = (int64_t *)0x0;
    if (local_70 == (int64_t *)0x0) {
      bVar2 = false;
    }
    else {
      local_70 = (int64_t *)0x0;
      local_58 = -1;
      do {
        do {
          lVar7 = (int64_t)local_58;
          local_58 = local_58 + 1;
          if (*(int *)((int64_t)plVar4 + 0xc) <= local_58) {
            bVar2 = false;
            plVar9 = (int64_t *)0x0;
            goto LAB_0036d7cd;
          }
          local_70 = *(int64_t **)(plVar4[2] + 8 + lVar7 * 8);
        } while (local_70 == (int64_t *)0x0);
        FUN_00757c60();
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      } while (local_48 != plVar4);
      FUN_0075c8d0();
      if (local_48 == (int64_t *)0x0) {
        plVar9 = (int64_t *)0x0;
        bVar2 = false;
      }
      else {
        bVar2 = true;
        plVar9 = local_48;
        if (local_40 == '\0') {
          FUN_00d50b00();
        }
      }
LAB_0036d7cd:
      FUN_002b3090();
      FUN_00d50b20();
      if (plVar4 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    local_68 = '\0';
    bVar1 = false;
    if (plVar9 != (int64_t *)0x0) goto LAB_0036d92e;
  }
  (**(code **)(*arg1 + 0x768))();
  if (local_70 == (int64_t *)0x0) {
    plVar9 = (int64_t *)0x0;
  }
  else {
    bVar2 = true;
    plVar9 = local_70;
    if (local_68 == '\0') {
      FUN_00d50b00();
    }
  }
LAB_0036d92e:
  cVar5 = (**(code **)(*plVar9 + 0x3a0))();
  if (cVar5 == '\0') {
    (**(code **)(*plVar9 + 0x428))();
  }
  (**(code **)(*arg1 + 0x7c8))();
  FUN_00b88410();
  if ((local_68 == '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  FUN_00df1af0();
  if (local_100 != 0) {
    FUN_00d50b00();
  }
  FUN_00d8cb40();
  lVar7 = local_a8;
  if (local_a0 == '\0') {
    if (local_a8 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_a0 = '\0';
  }
  (**(code **)(*plVar9 + 0x400))();
  if ((local_40 == '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if (local_100 != 0) {
    FUN_00d50b20();
  }
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  cVar5 = (**(code **)(*local_48 + 0x398))();
  if (cVar5 != '\0') {
    local_c8 = 0;
    local_c0 = '\0';
    local_b8 = 0;
    local_b0 = '\0';
    FUN_00b8a050(&local_b8,&local_c8,0,1);
    if (local_48 == &g_024c5048) {
      FUN_00d50b20();
    }
    else {
      FUN_00d50b20();
      local_48 = &g_024c5048;
    }
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
  }
  *this_ptr = local_48;
  *(void*)(this_ptr + 1) = 1;
  if (local_70 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((char)lVar3 != '\0' && !bVar1) {
    FUN_00d50b20();
  }
  if (bVar2) {
    FUN_00d50b20();
  }
  return this_ptr;
}

