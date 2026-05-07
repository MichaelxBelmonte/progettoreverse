// Function: FUN_0021eea0
// Address: 0021eea0
// Size: 640 bytes
// Class: MDScaleModeSequenceView

void FUN_0021eea0(uint32_t param_1)

{
  int iVar1;
  int64_t *plVar2;
  char cVar3;
  char *pcVar4;
  int64_t *plVar5;
  int64_t this_ptr;
  uint32_t uVar6;
  char local_58;
  undefined7 uStack_57;
  char local_50;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  plVar2 = *(int64_t **)(this_ptr + 0x90);
  (**(code **)(&UNK_00001550 + *plVar2))();
  plVar5 = local_48;
  local_38[0] = local_40[0];
  pcVar4 = local_38;
  if (local_40[0] != '\0') {
    pcVar4 = local_40;
  }
  *pcVar4 = '\0';
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar5 == (int64_t *)0x0) {
    plVar5 = *(int64_t **)(this_ptr + 0x90);
LAB_0021ef12:
    FUN_00d50b00();
  }
  else if (local_38[0] == '\0') goto LAB_0021ef12;
  (**(code **)(*plVar5 + 0xe20))();
  iVar1 = *(int *)(CONCAT71(uStack_57,local_58) + 0xc);
  if (local_50 != '\0') {
    FUN_00d50b20();
  }
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (*(char *)(this_ptr + 0x150) != '\0') {
    return;
  }
  if (*(char *)(this_ptr + 0x151) == '\0') {
    return;
  }
  if (iVar1 != 0) {
    return;
  }
  if (*(int64_t **)(this_ptr + 0x90) != (int64_t *)0x0) {
    (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
    plVar2 = local_48;
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar2 != (int64_t *)0x0) {
      if (*(int64_t **)(this_ptr + 0x90) == (int64_t *)0x0) {
        return;
      }
      (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
      plVar2 = local_48;
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar2 == (int64_t *)0x0) {
        return;
      }
      plVar2 = *(int64_t **)(this_ptr + 0x90);
      if (plVar2 == (int64_t *)0x0) {
LAB_0021f054:
        plVar5 = (int64_t *)0x0;
      }
      else {
        (**(code **)(&UNK_00001550 + *plVar2))();
        plVar5 = local_48;
        local_58 = local_40[0];
        pcVar4 = local_40;
        if (local_40[0] == '\0') {
          pcVar4 = &local_58;
        }
        *pcVar4 = '\0';
        if ((local_40[0] != '\0') && (plVar5 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar5 == (int64_t *)0x0) {
          plVar5 = *(int64_t **)(this_ptr + 0x90);
          if (plVar5 == (int64_t *)0x0) goto LAB_0021f054;
        }
        else if (local_58 != '\0') goto LAB_0021f057;
        FUN_00d50b00();
      }
LAB_0021f057:
      cVar3 = FUN_01e42170();
      if ((plVar2 != (int64_t *)0x0) && (plVar5 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar3 == '\0') {
        return;
      }
    }
  }
  plVar2 = *(int64_t **)(this_ptr + 0x90);
  if (plVar2 == (int64_t *)0x0) {
LAB_0021f0e5:
    plVar5 = (int64_t *)0x0;
  }
  else {
    (**(code **)(&UNK_00001550 + *plVar2))();
    pcVar4 = local_40;
    if (local_40[0] == '\0') {
      pcVar4 = &local_58;
    }
    local_58 = local_40[0];
    *pcVar4 = '\0';
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_48 == (int64_t *)0x0) {
      plVar5 = *(int64_t **)(this_ptr + 0x90);
      if (*(int64_t **)(this_ptr + 0x90) == (int64_t *)0x0) goto LAB_0021f0e5;
    }
    else {
      plVar5 = local_48;
      if (local_58 != '\0') goto LAB_0021f0e8;
    }
    FUN_00d50b00();
  }
LAB_0021f0e8:
  uVar6 = (**(code **)(**(int64_t **)(this_ptr + 0xc0) + 0x3b0))();
  (**(code **)(*plVar5 + 0xa90))(uVar6,param_1);
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

