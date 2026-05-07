// Function: FUN_0023e900
// Address: 0023e900
// Size: 632 bytes
// Class: MDTestValuesController

uint64_t FUN_0023e900(uint64_t param_1,int param_2)

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
LAB_0023e991:
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
        if (lVar3 == 0) goto LAB_0023e991;
      }
      else if (local_58 != '\0') goto LAB_0023e993;
      FUN_00d50b00();
    }
LAB_0023e993:
    FUN_019f7810();
    if ((plVar1 != (int64_t *)0x0) && (lVar3 != 0)) {
      FUN_00d50b20();
    }
    plVar1 = *(int64_t **)(this_ptr + 0x90);
    if (plVar1 == (int64_t *)0x0) {
LAB_0023ea1e:
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
        if (lVar3 == 0) goto LAB_0023ea1e;
      }
      else if (local_58 != '\0') goto LAB_0023ea21;
      FUN_00d50b00();
    }
LAB_0023ea21:
    FUN_019f77f0();
    if ((plVar1 != (int64_t *)0x0) && (lVar3 != 0)) {
      FUN_00d50b20();
    }
    lVar3 = g_026f6e18;
    if (g_026f6e18 != 0) {
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
LAB_0023eb2c:
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
      if (*(int64_t *)(this_ptr + 0x90) == 0) goto LAB_0023eb2c;
    }
    else {
      lVar3 = local_48;
      if (local_38[0] != '\0') goto LAB_0023eb2e;
    }
    FUN_00d50b00();
  }
LAB_0023eb2e:
  FUN_019f7810();
  FUN_01d66ab0();
  if ((plVar1 != (int64_t *)0x0) && (lVar3 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
    FUN_00d50b20();
  }
  return 1;
}

