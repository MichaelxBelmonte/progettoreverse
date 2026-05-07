// Function: FUN_0025e630
// Address: 0025e630
// Size: 632 bytes
// Class: MDEditorScrollView
// === MDEditorScrollView properties ===
//   MUScaleRulerViewDisplayMode _scaleRulerViewDisplayMode


uint64_t FUN_0025e630(uint64_t param_1,int param_2)

{
  int64_t *plVar1;
  char *pcVar2;
  int64_t lVar3;
  int64_t this_ptr;
  char local_58;
  undefined7 uStack_57;
  char local_50;
  int64_t local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (param_2 != 0) {
    plVar1 = *(int64_t **)(this_ptr + 0x90);
    if (plVar1 == (int64_t *)0x0) {
LAB_0025e6c1:
      lVar3 = 0;
    }
    else {
      (**(code **)(&UNK_00001550 + *plVar1))();
      lVar3 = local_48;
      pcVar2 = &local_58;
      if (local_40[0] != '\0') {
        pcVar2 = local_40;
      }
      local_58 = local_40[0];
      *pcVar2 = '\0';
      if ((local_40[0] != '\0') && (lVar3 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 == 0) {
        lVar3 = *(int64_t *)(this_ptr + 0x90);
        if (lVar3 == 0) goto LAB_0025e6c1;
      }
      else if (local_58 != '\0') goto LAB_0025e6c3;
      FUN_00d50b00();
    }
LAB_0025e6c3:
    FUN_0199b390();
    if ((plVar1 != (int64_t *)0x0) && (lVar3 != 0)) {
      FUN_00d50b20();
    }
    plVar1 = *(int64_t **)(this_ptr + 0x90);
    if (plVar1 == (int64_t *)0x0) {
LAB_0025e74e:
      lVar3 = 0;
    }
    else {
      (**(code **)(&UNK_00001550 + *plVar1))();
      lVar3 = local_48;
      pcVar2 = &local_58;
      if (local_40[0] != '\0') {
        pcVar2 = local_40;
      }
      local_58 = local_40[0];
      *pcVar2 = '\0';
      if ((local_40[0] != '\0') && (lVar3 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 == 0) {
        lVar3 = *(int64_t *)(this_ptr + 0x90);
        if (lVar3 == 0) goto LAB_0025e74e;
      }
      else if (local_58 != '\0') goto LAB_0025e751;
      FUN_00d50b00();
    }
LAB_0025e751:
    FUN_019ef470();
    if ((plVar1 != (int64_t *)0x0) && (lVar3 != 0)) {
      FUN_00d50b20();
    }
    lVar3 = g_026f6e50;
    if (g_026f6e50 != 0) {
      FUN_00d50b00();
    }
    FUN_0023de90();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_01caeae0();
  lVar3 = local_48;
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (lVar3 == 0) {
    return 1;
  }
  FUN_01caeae0();
  plVar1 = *(int64_t **)(this_ptr + 0x90);
  if (plVar1 == (int64_t *)0x0) {
LAB_0025e85c:
    lVar3 = 0;
  }
  else {
    (**(code **)(&UNK_00001550 + *plVar1))();
    pcVar2 = local_38;
    if (local_40[0] != '\0') {
      pcVar2 = local_40;
    }
    local_38[0] = local_40[0];
    *pcVar2 = '\0';
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (local_48 == 0) {
      lVar3 = *(int64_t *)(this_ptr + 0x90);
      if (*(int64_t *)(this_ptr + 0x90) == 0) goto LAB_0025e85c;
    }
    else {
      lVar3 = local_48;
      if (local_38[0] != '\0') goto LAB_0025e85e;
    }
    FUN_00d50b00();
  }
LAB_0025e85e:
  FUN_0199b390();
  FUN_01d66ab0();
  if ((plVar1 != (int64_t *)0x0) && (lVar3 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
    FUN_00d50b20();
  }
  return 1;
}

