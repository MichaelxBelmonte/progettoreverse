// Function: FUN_01431180
// Address: 01431180
// Size: 1765 bytes
// Class: MUSpectrumShaper


void FUN_01431180(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  int local_6c;
  longlong local_60;
  char local_58 [32];
  char local_38 [8];
  
  if (*unaff_RSI != 0) {
    lVar1 = **(longlong **)(unaff_RDI[0x21] + 0x10);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_00c9fe40();
    local_38[0] = local_58[0];
    pcVar3 = local_58;
    if (local_58[0] == '\0') {
      pcVar3 = local_38;
    }
    *pcVar3 = '\0';
    if ((local_58[0] != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] == '\0') && (local_60 != 0)) {
      FUN_00d50b00();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (local_60 != 0) {
      *(int *)(unaff_RDI + 0x20) = (int)unaff_RDI[0x20] + *(int *)(local_60 + 0xc);
      local_58[0] = '\0';
      FUN_00d214d0();
      if ((local_58[0] != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      lVar1 = **(longlong **)(unaff_RDI[0x21] + 0x10);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      FUN_00ca13a0();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    lVar1 = *(longlong *)(*(longlong *)(unaff_RDI[0x21] + 0x10) + 8);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_00c9fe40();
    local_38[0] = local_58[0];
    pcVar3 = local_58;
    if (local_58[0] == '\0') {
      pcVar3 = local_38;
    }
    *pcVar3 = '\0';
    if ((local_58[0] != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] == '\0') && (local_60 != 0)) {
      FUN_00d50b00();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (local_60 != 0) {
      local_58[0] = '\0';
      FUN_00d214d0();
      if ((local_58[0] != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      lVar1 = *(longlong *)(*(longlong *)(unaff_RDI[0x21] + 0x10) + 8);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      FUN_00ca13a0();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    lVar1 = *(longlong *)(*(longlong *)(unaff_RDI[0x21] + 0x10) + 0x10);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_00c9fe40();
    pcVar3 = local_58;
    if (local_58[0] == '\0') {
      pcVar3 = local_38;
    }
    local_38[0] = local_58[0];
    *pcVar3 = '\0';
    if ((local_58[0] != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] == '\0') && (local_60 != 0)) {
      FUN_00d50b00();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (local_60 != 0) {
      local_58[0] = '\0';
      FUN_00d214d0();
      if ((local_58[0] != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      lVar1 = *(longlong *)(*(longlong *)(unaff_RDI[0x21] + 0x10) + 0x10);
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
    iVar2 = FUN_014308d0();
    iVar5 = (int)unaff_RDI[0x20];
    iVar6 = iVar5 - iVar2;
    if (iVar6 == 0 || iVar5 < iVar2) {
      if (iVar5 < iVar2) {
        (**(code **)(*unaff_RDI + 0x660))();
      }
    }
    else {
      if (*(int *)(unaff_RDI[0x1f] + 0xc) < iVar6) {
        iVar6 = *(int *)(unaff_RDI[0x1f] + 0xc);
      }
      if (0 < iVar6) {
        pcVar3 = local_58 + 0x10;
        local_6c = iVar6;
        do {
          local_6c = local_6c + -1;
          FUN_00d23340();
          local_58[0x10] = local_58[0];
          pcVar4 = local_58;
          if (local_58[0] == '\0') {
            pcVar4 = pcVar3;
          }
          *pcVar4 = '\0';
          if ((local_58[0] != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          local_38[0] = local_58[0x10] != '\0';
          pcVar4 = pcVar3;
          if (!(bool)local_38[0]) {
            pcVar4 = local_38;
          }
          *pcVar4 = '\0';
          if ((local_58[0x10] != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          if (local_60 != 0) {
            local_58[0] = '\0';
            FUN_00d21140();
            if ((local_58[0] != '\0') && (local_60 != 0)) {
              FUN_00d50b20();
            }
            FUN_00d23740();
          }
          FUN_00d23340();
          local_58[0x18] = local_58[0];
          pcVar4 = local_58;
          if (local_58[0] == '\0') {
            pcVar4 = local_58 + 0x18;
          }
          *pcVar4 = '\0';
          if ((local_58[0] != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          local_58[0x10] = local_58[0x18] != '\0';
          pcVar4 = local_58 + 0x18;
          if (!(bool)local_58[0x10]) {
            pcVar4 = pcVar3;
          }
          *pcVar4 = '\0';
          if ((local_58[0x18] != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          if (local_60 != 0) {
            local_58[0] = '\0';
            FUN_00d21140();
            if ((local_58[0] != '\0') && (local_60 != 0)) {
              FUN_00d50b20();
            }
            FUN_00d23740();
          }
          FUN_00d23340();
          local_58[8] = local_58[0];
          pcVar4 = local_58;
          if (local_58[0] == '\0') {
            pcVar4 = local_58 + 8;
          }
          *pcVar4 = '\0';
          if ((local_58[0] != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          local_58[0x18] = local_58[8] != '\0';
          pcVar4 = local_58 + 8;
          if (!(bool)local_58[0x18]) {
            pcVar4 = local_58 + 0x18;
          }
          *pcVar4 = '\0';
          if ((local_58[8] != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          if (local_60 != 0) {
            local_58[0] = '\0';
            FUN_00d21140();
            if ((local_58[0] != '\0') && (local_60 != 0)) {
              FUN_00d50b20();
            }
            FUN_00d23740();
            if (local_58[0x18] != '\0') {
              FUN_00d50b20();
            }
          }
          if ((local_58[0x10] != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          if ((local_38[0] != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
        } while (local_6c != 0);
        iVar5 = (int)unaff_RDI[0x20];
      }
      *(int *)(unaff_RDI + 0x20) = iVar5 - iVar6;
    }
  }
  return;
}


