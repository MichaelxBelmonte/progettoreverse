// Function: FUN_0128d760
// Address: 0128d760
// Size: 1173 bytes
// Class: MUAudioSourceAttackItem


/* WARNING: Removing unreachable block (ram,0x0128d79f) */
/* WARNING: Removing unreachable block (ram,0x0128d7a8) */
/* WARNING: Removing unreachable block (ram,0x0128d9b3) */
/* WARNING: Removing unreachable block (ram,0x0128d9b9) */
/* WARNING: Removing unreachable block (ram,0x0128da0e) */

undefined4 FUN_0128d760(pthread_key_t param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  void *pvVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  longlong *local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_38;
  
  FUN_0125e7c0();
  if (local_60 == 0) {
    return 0xffffffff;
  }
  if (local_58 == '\0') {
    FUN_00d50b00();
  }
  pvVar5 = _pthread_getspecific(param_1);
  if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
    param_1 = (pthread_key_t)local_60;
  }
  FUN_013dfdd0();
  plVar7 = local_70;
  if (local_60 == 0) {
    bVar3 = false;
    local_38 = 0;
    bVar9 = false;
    bVar1 = false;
    plVar7 = (longlong *)0x0;
  }
  else {
    if (local_58 == '\0') {
      FUN_00d50b00();
    }
    else {
      local_58 = '\0';
    }
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dd6a0();
    if (local_70 == (longlong *)0x0) {
      plVar7 = (longlong *)0x0;
      bVar1 = false;
LAB_0128d8a5:
      bVar9 = plVar7 != (longlong *)0x0;
      if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_68 == '\0') {
        FUN_00d50b00();
        bVar1 = true;
        goto LAB_0128d8a5;
      }
      bVar9 = true;
      bVar1 = true;
    }
    bVar3 = true;
    local_38 = local_60;
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  plVar8 = plVar7;
  bVar2 = bVar1;
  if (bVar9) {
    pvVar5 = _pthread_getspecific(param_1);
    if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      plVar7 = (longlong *)plVar7[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    }
    uVar4 = (**(code **)(*plVar7 + 0x448))();
    goto joined_r0x0128db8b;
  }
  pvVar5 = _pthread_getspecific(param_1);
  if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
    param_1 = (pthread_key_t)local_60;
  }
  FUN_013dfcb0();
  if (local_60 != local_38) {
    if (local_58 == '\0') {
      if (local_60 != 0) {
        FUN_00d50b00();
      }
      if (local_60 == 0 || local_38 == 0) {
        bVar3 = true;
        local_38 = local_60;
      }
      else {
        FUN_00d50b20();
        bVar3 = true;
        local_38 = local_60;
      }
    }
    else {
      if (local_60 != 0 && local_38 != 0) {
        FUN_00d50b20();
      }
      local_58 = '\0';
      bVar3 = true;
      local_38 = local_60;
    }
  }
  if (local_38 == 0) {
    bVar9 = false;
  }
  else {
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dd6a0();
    if (local_70 == plVar7) {
      if ((!bVar1) && (local_70 != (longlong *)0x0)) {
        bVar2 = true;
        if (local_68 != '\0') goto LAB_0128db16;
        bVar1 = true;
        FUN_00d50b00();
      }
LAB_0128db02:
      plVar8 = plVar7;
      bVar2 = bVar1;
      if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      plVar8 = local_70;
      if (local_68 == '\0') {
        if (local_70 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        bVar2 = true;
        if ((bVar1) && (plVar7 != (longlong *)0x0)) {
          FUN_00d50b20();
          plVar7 = local_70;
          bVar1 = bVar2;
          goto LAB_0128db02;
        }
      }
      else {
        bVar2 = true;
        if ((bVar1) && (plVar7 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
LAB_0128db16:
    bVar9 = plVar8 != (longlong *)0x0;
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  uVar4 = 0xffffffff;
  if (bVar9) {
    pvVar5 = _pthread_getspecific(param_1);
    plVar7 = plVar8;
    if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      plVar7 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    }
    uVar4 = (**(code **)(*plVar7 + 0x448))();
  }
joined_r0x0128db8b:
  if ((bVar2) && (plVar8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar3) && (local_38 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return uVar4;
}


