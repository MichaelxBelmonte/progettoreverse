// Function: FUN_00dd7810
// Address: 00dd7810
// Size: 1719 bytes
// Class: GNValue
// String references:
//   "Cannot create value with typed string %@"

uint64_t FUN_00dd7810(uint64_t param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  char cVar6;
  int iVar7;
  int64_t *arg1;
  uint64_t this_ptr;
  int64_t *local_60;
  uint32_t local_58;
  int64_t local_50;
  char local_48;
  
  iVar7 = FUN_00d8c7a0();
  if ((iVar7 == 0) || (cVar6 = FUN_00d8ca70(), lVar3 = g_02772088, cVar6 != '('))
  goto LAB_00dd7e91;
  if (g_02772088 != 0) {
    FUN_00d50b00();
  }
  iVar7 = FUN_00d90650();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (iVar7 != -1) {
    FUN_00d97ce0(param_1,iVar7 + 1);
    plVar4 = local_60;
    if (((((char)local_58 == '\0') && (local_60 != (int64_t *)0x0)) &&
        (FUN_00d50b00(), (char)local_58 != '\0')) && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d8f140(param_1,iVar7 + 1);
    plVar5 = local_60;
    plVar1 = (int64_t *)*arg1;
    if (plVar1 == local_60) {
      if (((char)arg1[1] != '\0') || (local_60 == (int64_t *)0x0)) goto LAB_00dd798c;
      if ((char)local_58 == '\0') {
        FUN_00d50b00();
        goto LAB_00dd7984;
      }
LAB_00dd794d:
      *(void*)(arg1 + 1) = 1;
    }
    else {
      lVar3 = arg1[1];
      if ((char)local_58 != '\0') {
        *arg1 = (int64_t)local_60;
        if (((char)lVar3 != '\0') && (plVar1 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_00dd794d;
      }
      if (local_60 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      *arg1 = (int64_t)plVar5;
      if (((char)lVar3 != '\0') && (plVar1 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
LAB_00dd7984:
      *(void*)(arg1 + 1) = 1;
LAB_00dd798c:
      if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    lVar3 = g_02784098;
    if (g_02784098 != 0) {
      FUN_00d50b00();
    }
    cVar6 = (**(code **)(*plVar4 + 0x50))();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    lVar3 = g_027840a0;
    if (cVar6 != '\0') {
      FUN_00d96ea0();
      FUN_00dd65e0();
      FUN_00d50b20();
      return this_ptr;
    }
    if (g_027840a0 != 0) {
      FUN_00d50b00();
    }
    cVar6 = (**(code **)(*plVar4 + 0x50))();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    lVar3 = g_027840a8;
    if (cVar6 != '\0') {
      FUN_00d96b50();
      FUN_00dd6740();
      FUN_00d50b20();
      return this_ptr;
    }
    if (g_027840a8 != 0) {
      FUN_00d50b00();
    }
    cVar6 = (**(code **)(*plVar4 + 0x50))();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    lVar3 = g_027840b0;
    if (cVar6 != '\0') {
      FUN_00d971f0();
      FUN_00dd67f0();
      FUN_00d50b20();
      return this_ptr;
    }
    if (g_027840b0 != 0) {
      FUN_00d50b00();
    }
    cVar6 = (**(code **)(*plVar4 + 0x50))();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    lVar3 = g_027840b8;
    if (cVar6 != '\0') {
      FUN_00d96410();
      FUN_00dd6480();
      FUN_00d50b20();
      return this_ptr;
    }
    if (g_027840b8 != 0) {
      FUN_00d50b00();
    }
    cVar6 = (**(code **)(*plVar4 + 0x50))();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    lVar3 = g_027840c0;
    if (cVar6 != '\0') {
      FUN_00d967b0();
      FUN_00dd6530();
      FUN_00d50b20();
      return this_ptr;
    }
    if (g_027840c0 != 0) {
      FUN_00d50b00();
    }
    cVar6 = (**(code **)(*plVar4 + 0x50))();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    lVar3 = g_027840c8;
    if (cVar6 != '\0') {
      FUN_00d97540();
      FUN_00dd6690();
      FUN_00d50b20();
      return this_ptr;
    }
    if (g_027840c8 != 0) {
      FUN_00d50b00();
    }
    cVar6 = (**(code **)(*plVar4 + 0x50))();
    if (cVar6 == '\0') {
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      iVar7 = FUN_00d8c7a0();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if (iVar7 == 1) {
        FUN_00d8ca70();
        FUN_00dd68a0();
        FUN_00d50b20();
        return this_ptr;
      }
    }
    FUN_00d50b20();
  }
  lVar3 = g_027732f0;
  if (g_027732f0 != 0) {
    FUN_00d50b00();
  }
  lVar2 = *arg1;
  local_58 = 1;
  local_60 = &g_024c5048;
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  local_48 = '\x01';
  local_50 = lVar2;
  FUN_00cc7b40(param_1,&local_60);
  local_60 = &g_024c5048;
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
LAB_00dd7e91:
  FUN_00dd6e60();
  return this_ptr;
}

