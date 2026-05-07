// Function: FUN_007efd50
// Address: 007efd50
// Size: 896 bytes
// Class: GNOperationProgressObserver


undefined8 FUN_007efd50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  char *pcVar2;
  longlong unaff_RDI;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong local_70;
  char local_68;
  undefined8 local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  uVar5 = FUN_01d384d0();
  local_70 = DAT_026fcec0;
  if (DAT_026fcec0 != 0) {
    uVar5 = FUN_00d50b00();
  }
  local_68 = '\x01';
  FUN_01cac990(uVar5,&local_70);
  lVar4 = local_48;
  if (local_40[0] == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_40[0] = '\0';
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  local_60 = 0;
  *(undefined8 *)(unaff_RDI + 0x30) = 0;
  if (lVar4 == 0) {
    uVar5 = 0;
  }
  else {
    if (0 < *(int *)(lVar4 + 0xc)) {
      FUN_00d23310();
      lVar4 = local_48;
      local_38[0] = local_40[0];
      pcVar2 = local_40;
      if (local_40[0] == '\0') {
        pcVar2 = local_38;
      }
      *pcVar2 = '\0';
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] == '\0') && (lVar4 != 0)) {
        FUN_00d50b00();
      }
      FUN_007f0230(unaff_RDI + 0x30,&local_60);
      lVar1 = local_58;
      lVar3 = *(longlong *)(unaff_RDI + 0x18);
      if (lVar3 == local_58) {
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        if ((local_50 == '\0') && (local_58 != 0)) {
          FUN_00d50b00();
          lVar3 = *(longlong *)(unaff_RDI + 0x18);
        }
        *(longlong *)(unaff_RDI + 0x18) = lVar1;
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
      }
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (*(longlong *)(unaff_RDI + 0x18) == 0) {
        uVar5 = FUN_00d23310();
        lVar4 = local_48;
        local_38[0] = local_40[0];
        pcVar2 = local_40;
        if (local_40[0] == '\0') {
          pcVar2 = local_38;
        }
        *pcVar2 = '\0';
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          uVar5 = FUN_00d50b20();
        }
        if ((local_38[0] == '\0') && (lVar4 != 0)) {
          uVar5 = FUN_00d50b00();
        }
        FUN_007f0a70(uVar5,&local_60);
        lVar1 = local_58;
        lVar3 = *(longlong *)(unaff_RDI + 0x20);
        if (lVar3 == local_58) {
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          if ((local_50 == '\0') && (local_58 != 0)) {
            FUN_00d50b00();
            lVar3 = *(longlong *)(unaff_RDI + 0x20);
          }
          *(longlong *)(unaff_RDI + 0x20) = lVar1;
          if (lVar3 != 0) {
            FUN_00d50b20();
          }
        }
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
        if ((*(longlong *)(unaff_RDI + 0x18) == 0) && (*(longlong *)(unaff_RDI + 0x20) == 0)) {
          uVar5 = FUN_00d23310();
          pcVar2 = local_40;
          if (local_40[0] == '\0') {
            pcVar2 = local_38;
          }
          local_38[0] = local_40[0];
          *pcVar2 = '\0';
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            uVar5 = FUN_00d50b20();
          }
          if ((local_38[0] == '\0') && (local_48 != 0)) {
            uVar5 = FUN_00d50b00();
          }
          FUN_007f0cf0(uVar5,&local_60,param_3,param_4,local_48,1);
          lVar4 = *(longlong *)(unaff_RDI + 0x28);
          if (lVar4 == local_58) {
            if ((local_50 != '\0') && (local_58 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            if ((local_50 == '\0') && (local_58 != 0)) {
              FUN_00d50b00();
              lVar4 = *(longlong *)(unaff_RDI + 0x28);
            }
            *(longlong *)(unaff_RDI + 0x28) = local_58;
            if (lVar4 != 0) {
              FUN_00d50b20();
            }
          }
          if (local_48 != 0) {
            FUN_00d50b20();
          }
        }
      }
    }
    uVar5 = local_60;
    FUN_00d50b20();
  }
  return uVar5;
}


