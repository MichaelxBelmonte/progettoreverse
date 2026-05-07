// Function: FUN_0131e3c0
// Address: 0131e3c0
// Size: 1178 bytes
// Class: Unknown

void FUN_0131e3c0(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int64_t *arg1;
  int64_t *this_ptr;
  int iVar5;
  int64_t local_58;
  char local_50 [32];
  
  if (*arg1 != 0) {
    lVar1 = **(int64_t **)(this_ptr[0x20] + 0x10);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_00c9fe40();
    local_50[0x18] = local_50[0];
    pcVar4 = local_50;
    if (local_50[0] == '\0') {
      pcVar4 = local_50 + 0x18;
    }
    *pcVar4 = '\0';
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50[0x18] == '\0') && (local_58 != 0)) {
      FUN_00d50b00();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (local_58 != 0) {
      *(int *)(this_ptr + 0x1f) = (int)this_ptr[0x1f] + *(int *)(local_58 + 0xc);
      local_50[0] = '\0';
      FUN_00d214d0();
      if ((local_50[0] != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      lVar1 = **(int64_t **)(this_ptr[0x20] + 0x10);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      FUN_00ca13a0();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    lVar1 = *(int64_t *)(*(int64_t *)(this_ptr[0x20] + 0x10) + 8);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_00c9fe40();
    pcVar4 = local_50;
    if (local_50[0] == '\0') {
      pcVar4 = local_50 + 0x18;
    }
    local_50[0x18] = local_50[0];
    *pcVar4 = '\0';
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50[0x18] == '\0') && (local_58 != 0)) {
      FUN_00d50b00();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (local_58 != 0) {
      local_50[0] = '\0';
      FUN_00d214d0();
      if ((local_50[0] != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      lVar1 = *(int64_t *)(*(int64_t *)(this_ptr[0x20] + 0x10) + 8);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      FUN_00ca13a0();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
  }
  if (*param_2 != 0) {
    iVar3 = (int)this_ptr[0x1f];
    if (iVar3 < 2) {
      if (iVar3 != 1) {
        (**(code **)(*this_ptr + 0x660))();
      }
    }
    else {
      iVar2 = iVar3 + -1;
      if (*(int *)(this_ptr[0x21] + 0xc) < iVar3 + -1) {
        iVar2 = *(int *)(this_ptr[0x21] + 0xc);
      }
      iVar5 = iVar2;
      if (0 < iVar2) {
        do {
          iVar5 = iVar5 + -1;
          FUN_00d23340();
          local_50[0x10] = local_50[0];
          pcVar4 = local_50;
          if (local_50[0] == '\0') {
            pcVar4 = local_50 + 0x10;
          }
          *pcVar4 = '\0';
          if ((local_50[0] != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
          local_50[0x18] = local_50[0x10] != '\0';
          pcVar4 = local_50 + 0x10;
          if (!(bool)local_50[0x18]) {
            pcVar4 = local_50 + 0x18;
          }
          *pcVar4 = '\0';
          if ((local_50[0x10] != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
          if (local_58 != 0) {
            local_50[0] = '\0';
            FUN_00d21140();
            if ((local_50[0] != '\0') && (local_58 != 0)) {
              FUN_00d50b20();
            }
            FUN_00d23740();
          }
          FUN_00d23340();
          local_50[8] = local_50[0];
          pcVar4 = local_50;
          if (local_50[0] == '\0') {
            pcVar4 = local_50 + 8;
          }
          *pcVar4 = '\0';
          if ((local_50[0] != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
          local_50[0x10] = local_50[8] != '\0';
          pcVar4 = local_50 + 8;
          if (!(bool)local_50[0x10]) {
            pcVar4 = local_50 + 0x10;
          }
          *pcVar4 = '\0';
          if ((local_50[8] != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
          if (local_58 != 0) {
            local_50[0] = '\0';
            FUN_00d21140();
            if ((local_50[0] != '\0') && (local_58 != 0)) {
              FUN_00d50b20();
            }
            FUN_00d23740();
            if (local_50[0x10] != '\0') {
              FUN_00d50b20();
            }
          }
          if ((local_50[0x18] != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
        } while (iVar5 != 0);
        iVar3 = (int)this_ptr[0x1f];
      }
      *(int *)(this_ptr + 0x1f) = iVar3 - iVar2;
    }
  }
  return;
}

