// Function: FUN_016d1840
// Address: 016d1840
// Size: 1469 bytes
// Class: Unknown

void FUN_016d1840(void*param_1,double *param_2,uint64_t param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  void *pvVar4;
  void*puVar5;
  uint64_t uVar6;
  double *arg1;
  uint64_t uVar7;
  uint64_t local_88;
  char local_80;
  uint64_t local_78;
  char local_70;
  uint64_t local_68;
  char local_60;
  uint64_t local_58;
  double local_50;
  uint32_t local_44;
  uint64_t local_40;
  char local_38;
  
  local_44 = 0xffffffff;
  puVar5 = param_1;
  local_58 = param_3;
  if ((uint64_t)param_1 >> 0x20 == 0) {
LAB_016d18f8:
    pvVar4 = _pthread_getspecific((void*)puVar5);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_019012b0();
    uVar7 = local_40;
    if (local_40 == 0) {
      uVar7 = 0;
      bVar1 = false;
    }
    else {
      bVar1 = true;
      if (((local_38 == '\0') && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    pvVar4 = _pthread_getspecific((void*)param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    puVar5 = &local_44;
    FUN_018fea90(puVar5,param_1);
    uVar7 = local_40;
    if (local_40 == 0) goto LAB_016d18f8;
    if (((local_38 == '\0') && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
    bVar1 = true;
  }
  pvVar4 = _pthread_getspecific((void*)puVar5);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_50 = (double)FUN_018fde50();
  if (arg1 != (double *)0x0) {
    *arg1 = local_50;
  }
  if (param_2 != (double *)0x0) {
    *param_2 = local_50;
  }
  pvVar4 = _pthread_getspecific((void*)puVar5);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar3 = FUN_018fe550();
  if (cVar3 == '\0') {
    if (local_58._4_4_ != 0) {
      pvVar4 = _pthread_getspecific((void*)puVar5);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_40 = FUN_019079b0();
      if (((local_40 >> 0x20 != 0) && (local_58._4_4_ != 0)) &&
         (cVar3 = FUN_00e7c020(), cVar3 == '\0')) goto LAB_016d1a8e;
    }
LAB_016d1b20:
    pvVar4 = _pthread_getspecific((void*)puVar5);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_80 = '\0';
    puVar5 = &local_44;
    local_88 = uVar7;
    FUN_01900ec0(puVar5,&local_88);
    uVar6 = local_40;
    if (local_40 == uVar7) {
      uVar6 = uVar7;
      bVar2 = bVar1;
      if ((!bVar1) && (uVar7 != 0)) {
        if (local_38 != '\0') goto LAB_016d1bb3;
        FUN_00d50b00();
LAB_016d1c20:
        uVar6 = uVar7;
        bVar2 = true;
      }
joined_r0x016d1e0f:
      uVar7 = uVar6;
      bVar1 = bVar2;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
        bVar2 = true;
        if ((bVar1) && (uVar7 != 0)) {
          FUN_00d50b20();
          uVar7 = uVar6;
          goto LAB_016d1c20;
        }
        goto joined_r0x016d1e0f;
      }
      if ((bVar1) && (uVar7 != 0)) {
        FUN_00d50b20();
      }
LAB_016d1bb3:
      local_38 = '\0';
      uVar7 = uVar6;
      bVar1 = true;
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific((void*)puVar5);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_70 = '\0';
    local_78 = uVar7;
    cVar3 = FUN_018fe550();
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if (cVar3 == '\0') {
      if (local_58._4_4_ != 0) {
        pvVar4 = _pthread_getspecific((void*)puVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_40 = FUN_019079b0();
        if (((local_40 >> 0x20 != 0) && (local_58._4_4_ != 0)) &&
           (cVar3 = FUN_00e7c020(), cVar3 == '\0')) goto LAB_016d1a8e;
      }
      pvVar4 = _pthread_getspecific((void*)puVar5);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_60 = '\0';
      local_68 = uVar7;
      local_50 = (double)FUN_018fde50();
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if ((arg1 != (double *)0x0) && (local_50 < *arg1)) {
        *arg1 = local_50;
      }
      if ((param_2 != (double *)0x0) && (*param_2 <= local_50 && local_50 != *param_2)) {
        *param_2 = local_50;
      }
      goto LAB_016d1b20;
    }
  }
LAB_016d1a8e:
  if ((bVar1) && (uVar7 != 0)) {
    FUN_00d50b20();
  }
  return;
}

