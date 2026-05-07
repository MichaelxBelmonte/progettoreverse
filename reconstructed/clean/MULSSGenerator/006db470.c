// Function: FUN_006db470
// Address: 006db470
// Size: 896 bytes
// Class: MULSSGenerator

void FUN_006db470(void)

{
  char cVar1;
  char *pcVar2;
  uint64_t uVar3;
  void *pvVar4;
  int64_t *plVar5;
  int64_t *arg1;
  int64_t *this_ptr;
  int iVar6;
  int64_t *plVar7;
  int64_t *local_68;
  char local_60 [16];
  uint64_t local_50;
  uint32_t local_48;
  uint32_t local_3c;
  char local_38 [8];
  
  FUN_01f27fe0();
  cVar1 = (**(code **)(*local_68 + 0x450))();
  if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar1 == '\0') {
    return;
  }
  if (this_ptr[0x20] == 0) goto LAB_006db7c2;
  FUN_00d50b00();
  local_38[0] = '\0';
  plVar7 = this_ptr;
  do {
    (**(code **)(*plVar7 + 0x370))();
    if (local_68 == plVar7) {
      if (((local_38[0] == '\0') && (local_68 != (int64_t *)0x0)) && (local_60[0] != '\0'))
      goto LAB_006db557;
    }
    else {
      plVar7 = local_68;
      if (local_60[0] == '\0') {
        if (local_38[0] == '\0') {
          pcVar2 = local_38;
        }
        else {
          FUN_00d50b20();
          pcVar2 = local_38;
        }
      }
      else {
        if (local_38[0] != '\0') {
          FUN_00d50b20();
        }
LAB_006db557:
        local_38[0] = '\x01';
        pcVar2 = local_60;
      }
      *pcVar2 = '\0';
    }
    if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00082eb0();
    plVar5 = &g_02802688;
    if (plVar7 != (int64_t *)0x0) {
      (**(code **)(*plVar7 + 0x360))();
      cVar1 = FUN_00e85ea0();
      plVar5 = (int64_t *)&stack0xffffffffffffff68;
      if (cVar1 == '\0') {
        plVar5 = &g_02802688;
      }
    }
    if (*plVar5 != 0) {
      if ((local_38[0] == '\0') && (plVar7 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      break;
    }
  } while (plVar7 != (int64_t *)0x0);
  FUN_00d50b20();
  if (plVar7 == (int64_t *)0x0) {
    local_3c = 0;
  }
  else {
    uVar3 = FUN_006cb500();
    local_3c = (uint32_t)
               CONCAT71((int7)((uint64_t)uVar3 >> 8),0 < *(int *)((int64_t)local_68 + 0xc));
    if (local_60[0] != '\0') {
      FUN_00d50b20();
    }
    FUN_006cb500();
    if (local_60[0] == '\0') {
      if (local_68 != (int64_t *)0x0) {
        FUN_00d50b00();
        goto LAB_006db67f;
      }
    }
    else if (local_68 != (int64_t *)0x0) {
LAB_006db67f:
      local_60[0] = '\0';
      local_48 = 0;
      local_50 = 0;
      if (0 < *(int *)((int64_t)local_68 + 0xc)) {
        iVar6 = 0;
        do {
          cVar1 = FUN_0078d680();
          if (cVar1 == '\0') {
            local_3c = 0;
            break;
          }
          pvVar4 = _pthread_getspecific((void*)plVar5);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012f4aa0();
          iVar6 = iVar6 + 1;
          local_50 = CONCAT44(local_50._4_4_,iVar6);
        } while (iVar6 < *(int *)((int64_t)local_68 + 0xc));
      }
      FUN_000be170();
      FUN_00d50b20();
    }
  }
  (**(code **)(*(int64_t *)this_ptr[0x20] + 0x918))();
  (**(code **)(*(int64_t *)this_ptr[0x20] + 0x998))();
  if (plVar7 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_006db7c2:
  if ((*arg1 != 0) &&
     (((this_ptr[0x2b] == 0 || (FUN_0044dc30(), *arg1 != 0)) && (this_ptr[0x2c] != 0)))) {
    FUN_0044dc30();
  }
  return;
}

