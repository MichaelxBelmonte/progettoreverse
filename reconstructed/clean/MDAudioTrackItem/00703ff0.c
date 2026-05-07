// Function: FUN_00703ff0
// Address: 00703ff0
// Size: 1978 bytes
// Class: MDAudioTrackItem
// === MDAudioTrackItem properties ===
//   MDAudioTrackItemType _trackItemType


uint32_t FUN_00703ff0(void* param_1,char param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  bool bVar3;
  char cVar4;
  uint32_t uVar5;
  void *pvVar6;
  int64_t *plVar7;
  int64_t **pplVar8;
  int64_t *this_ptr;
  bool bVar9;
  int64_t *local_138;
  char local_130;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  uint64_t local_a0;
  int64_t local_60;
  char local_58;
  int64_t *local_40;
  char local_38;
  
  (**(code **)(*this_ptr + 0x5d8))();
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_00704053;
    }
LAB_007040c7:
    bVar3 = true;
    lVar1 = this_ptr[2];
  }
  else {
    if (local_40 == (int64_t *)0x0) goto LAB_007040c7;
LAB_00704053:
    FUN_0063f230();
    plVar2 = local_40;
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar2 == (int64_t *)0x0) {
      bVar3 = false;
      lVar1 = this_ptr[2];
    }
    else {
      FUN_0063f230();
      cVar4 = FUN_00212c70();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      bVar3 = false;
      uVar5 = 0;
      if (cVar4 != '\0') goto LAB_00704788;
      lVar1 = this_ptr[2];
    }
  }
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_01beead0();
  if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  FUN_007035b0();
  plVar2 = local_40;
  if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  if (local_60 != 0) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (*(int *)((int64_t)plVar2 + 0xc) == 0) {
LAB_0070421b:
    uVar5 = 0;
  }
  else {
    FUN_01266770();
    plVar2 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if (plVar2 == (int64_t *)0x0) goto LAB_0070421b;
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0125e930();
    plVar2 = local_40;
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar2 == (int64_t *)0x0) {
      uVar5 = 0;
    }
    else {
      FUN_01f27fe0();
      cVar4 = (**(code **)(*local_40 + 0x450))();
      if (cVar4 == '\0') {
        FUN_006f3f00();
        bVar9 = local_60 != 0;
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        bVar9 = false;
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (bVar9) {
        FUN_006f3f00();
        plVar2 = local_40;
        FUN_00751ba0();
        FUN_01c93080();
        if ((local_38 != '\0') && (plVar2 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      local_a0 = FUN_00e7bdb0();
      lVar1 = this_ptr[2];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      pplVar8 = &local_40;
      FUN_01be8160();
      plVar2 = local_40;
      FUN_00083c20();
      if (plVar2 == (int64_t *)0x0) {
        pplVar8 = (int64_t **)&g_02802688;
      }
      else {
        (**(code **)(*plVar2 + 0x360))();
        cVar4 = FUN_00e85ea0();
        if (cVar4 == '\0') {
          pplVar8 = (int64_t **)&g_02802688;
        }
      }
      plVar2 = *pplVar8;
      if (*(char *)(pplVar8 + 1) == '\0') {
        if (plVar2 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(void*)(pplVar8 + 1) = 0;
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = this_ptr[0x11];
      plVar7 = (int64_t *)(lVar1 + 0x10);
      if (lVar1 == 0) {
        plVar7 = (int64_t *)0x0;
      }
      else {
        FUN_00d50b00();
      }
      if (plVar2 == (int64_t *)0x0) {
        if (param_2 != '\0') {
          FUN_01266200();
          (**(code **)(*plVar7 + 0x60))();
        }
      }
      else if (param_2 != '\0') {
        local_a0 = FUN_01ca2090();
        FUN_006f3f00();
        (**(code **)(*local_138 + 0x628))();
        pvVar6 = _pthread_getspecific(param_1);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_004a1110();
        pvVar6 = _pthread_getspecific(param_1);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01313b00();
        pvVar6 = _pthread_getspecific(param_1);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01505900();
        pvVar6 = _pthread_getspecific(param_1);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_016c98e0();
        (**(code **)(*plVar7 + 0x60))();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        if ((local_d8 != '\0') && (local_e0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_c8 != '\0') && (local_d0 != 0)) {
          FUN_00d50b20();
        }
        if (local_130 != '\0') {
          FUN_00d50b20();
        }
      }
      FUN_006f3f00();
      if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      FUN_0064dbb0();
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      uVar5 = FUN_01c936e0(param_2,local_a0);
      if (lVar1 != 0) {
        (**(code **)(*plVar7 + 0x10))();
        FUN_00d50b20();
      }
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_00704788:
  if (!bVar3) {
    FUN_00d50b20();
  }
  return uVar5;
}

