// Function: FUN_019c29e0
// Address: 019c29e0
// Size: 1405 bytes
// Class: MUEditorElementView

void FUN_019c29e0(uint64_t param_1,int64_t *param_2)

{
  int64_t *plVar1;
  int iVar2;
  int iVar3;
  uint32_t uVar4;
  int64_t *plVar5;
  int64_t lVar6;
  int64_t *arg1;
  int64_t *this_ptr;
  bool bVar7;
  double dVar8;
  double dVar9;
  int64_t *local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  int64_t *local_60;
  char local_58;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  (**(code **)(*arg1 + 0xa18))();
  if (local_40 == (int64_t *)0x0) {
    bVar7 = true;
  }
  else {
    FUN_01a8c310();
    (**(code **)(*arg1 + 0xa18))();
    bVar7 = local_50 == local_80;
    if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar7) {
    *(void*)(this_ptr + 1) = 0;
    lVar6 = *param_2;
    if ((char)param_2[1] != '\0') {
      *this_ptr = lVar6;
      *(void*)(this_ptr + 1) = 1;
      *(void*)(param_2 + 1) = 0;
      return;
    }
    goto LAB_019c2f2f;
  }
  if ((int64_t *)arg1[0x9d] == (int64_t *)0x0) {
LAB_019c2cf5:
    lVar6 = arg1[0x9d];
    if (lVar6 == 0) goto LAB_019c2d16;
  }
  else {
    (**(code **)(*(int64_t *)arg1[0x9d] + 0x3a0))();
    (**(code **)(*arg1 + 0x958))();
    plVar5 = local_40;
    plVar1 = local_50;
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar5 == plVar1) {
      FUN_01a8c310();
      (**(code **)(*arg1 + 0xa18))();
      plVar5 = local_40;
      plVar1 = local_50;
      if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar5 == plVar1) {
        iVar2 = FUN_01a904a0();
        iVar3 = FUN_01a904a0();
        if (iVar2 == iVar3) {
          iVar2 = FUN_01a90480();
          iVar3 = FUN_01a90480();
          if (iVar2 == iVar3) {
            (**(code **)(*(int64_t *)arg1[0x9d] + 0x388))();
            (**(code **)(*(int64_t *)*param_2 + 0x388))();
            plVar5 = local_40;
            plVar1 = local_50;
            if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar5 == plVar1) {
              dVar8 = (double)FUN_01a905a0();
              dVar9 = (double)FUN_01a905a0();
              if ((dVar8 == dVar9) && (!NAN(dVar8) && !NAN(dVar9))) goto LAB_019c2cf5;
            }
          }
        }
      }
    }
    (**(code **)(*(int64_t *)arg1[0x9d] + 0x3a0))();
    plVar1 = local_40;
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)arg1[0x9d] + 0x3a0))();
      plVar1 = local_40;
      lVar6 = arg1[0x9d];
      if (lVar6 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar1 + 0x3e0))();
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if (arg1[0x9d] != 0) {
      arg1[0x9d] = 0;
      FUN_00d50b20();
      goto LAB_019c2cf5;
    }
LAB_019c2d16:
    FUN_01a904a0();
    uVar4 = FUN_01a90480();
    (**(code **)(*(int64_t *)*param_2 + 0x388))();
    local_70 = local_50;
    local_68 = 0;
    if (local_48 == '\0') {
      if (local_50 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_68 = '\x01';
    (**(code **)(*arg1 + 0xa18))();
    local_58 = 0;
    if (local_78 == '\0') {
      if (local_80 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_78 = '\0';
    }
    local_58 = '\x01';
    local_60 = local_80;
    FUN_01a905a0();
    FUN_01a8bce0(1,uVar4,&local_70,&local_60);
    plVar1 = (int64_t *)arg1[0x9d];
    plVar5 = plVar1;
    if (plVar1 != local_40) {
      if (local_38 == '\0') {
        if (local_40 == (int64_t *)0x0) {
          plVar5 = (int64_t *)0x0;
          goto LAB_019c2df4;
        }
        FUN_00d50b00();
        plVar1 = (int64_t *)arg1[0x9d];
        arg1[0x9d] = (int64_t)local_40;
        plVar5 = local_40;
      }
      else {
        local_38 = '\0';
        plVar5 = local_40;
LAB_019c2df4:
        arg1[0x9d] = (int64_t)plVar5;
      }
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b20();
        plVar5 = local_40;
      }
    }
    if ((local_38 != '\0') && (plVar5 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*arg1 + 0x958))();
    plVar1 = local_40;
    lVar6 = arg1[0x9d];
    if (lVar6 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar1 + 0x3d8))();
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    lVar6 = arg1[0x9d];
  }
  *(void*)(this_ptr + 1) = 0;
LAB_019c2f2f:
  if (lVar6 != 0) {
    FUN_00d50b00();
  }
  *this_ptr = lVar6;
  *(void*)(this_ptr + 1) = 1;
  return;
}

