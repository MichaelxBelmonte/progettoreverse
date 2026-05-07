// Function: FUN_0065f0d0
// Address: 0065f0d0
// Size: 667 bytes
// Class: Unknown


byte FUN_0065f0d0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  char *pcVar4;
  longlong unaff_RDI;
  byte bVar5;
  longlong lVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  longlong local_70;
  char local_68 [16];
  int local_58;
  undefined8 local_54;
  longlong local_48;
  char local_40;
  char local_38 [8];
  
  fVar9 = (float)((ulonglong)param_2 >> 0x20);
  fVar8 = (float)param_2;
  fVar10 = fVar9;
  FUN_006c5ea0();
  iVar1 = *(int *)(local_70 + 0xc);
  if (local_68[0] != '\0') {
    FUN_00d50b20();
  }
  if (iVar1 == 0) {
    bVar5 = 0;
  }
  else {
    FUN_006c5ea0();
    FUN_00d23310();
    pcVar4 = local_38;
    if (local_68[0] != '\0') {
      pcVar4 = local_68;
    }
    local_38[0] = local_68[0];
    *pcVar4 = '\0';
    if ((local_68[0] != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    FUN_00dd6ab0();
    if ((local_38[0] != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    bVar5 = -(fVar10 == fVar9) & fVar8 == (float)param_2;
  }
  FUN_006c5ea0();
  iVar1 = *(int *)(local_70 + 0xc);
  (**(code **)(**(longlong **)(unaff_RDI + 0x10) + 0x4a0))();
  iVar2 = *(int *)(local_48 + 0xc);
  if (local_40 != '\0') {
    FUN_00d50b20();
  }
  if ((local_68[0] != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (iVar1 + -1 == iVar2) {
    FUN_006c5ea0();
    iVar1 = *(int *)(local_70 + 0xc);
    if (local_68[0] != '\0') {
      FUN_00d50b20();
    }
    (**(code **)(**(longlong **)(unaff_RDI + 0x10) + 0x4a0))();
    iVar2 = *(int *)(local_70 + 0xc);
    if (local_68[0] != '\0') {
      FUN_00d50b20();
    }
    FUN_006c6060();
    if (iVar1 + -1 == iVar2) {
      (**(code **)(**(longlong **)(unaff_RDI + 0x10) + 0x4a0))();
      if (local_68[0] == '\0') {
        if (local_70 == 0) {
          return bVar5;
        }
        FUN_00d50b00();
        if ((local_68[0] != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
      }
      else if (local_70 == 0) {
        return bVar5;
      }
      local_68[0] = '\0';
      local_54 = 0;
      for (lVar6 = 0; local_58 = (int)lVar6, local_58 < *(int *)(local_70 + 0xc); lVar6 = lVar6 + 1)
      {
        plVar3 = *(longlong **)(*(longlong *)(local_70 + 0x10) + lVar6 * 8);
        FUN_006c5ea0();
        uVar7 = FUN_00dd6ab0();
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        (**(code **)(*plVar3 + 0x4d0))(uVar7);
      }
      FUN_000a9680();
      FUN_00d50b20();
      return bVar5;
    }
  }
  return 0;
}


