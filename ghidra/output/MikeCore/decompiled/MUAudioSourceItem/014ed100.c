// Function: FUN_014ed100
// Address: 014ed100
// Size: 528 bytes
// Class: MUAudioSourceItem


void FUN_014ed100(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong *unaff_RDI;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  int local_34;
  
  cVar1 = (**(code **)(*unaff_RDI + 1000))();
  local_34 = -1;
  iVar7 = -1;
  if (cVar1 != '\0') {
    lVar6 = **(longlong **)(unaff_RDI[0x21] + 0x10);
    iVar7 = -1;
    if (lVar6 != 0) {
      FUN_00d50b00();
      iVar7 = *(int *)(lVar6 + 0xc);
      FUN_00d50b20();
    }
  }
  cVar1 = (**(code **)(*unaff_RDI + 1000))();
  if ((cVar1 != '\0') && (lVar6 = **(longlong **)(unaff_RDI[0x21] + 0x10), lVar6 != 0)) {
    FUN_00d50b00();
    local_34 = *(int *)(lVar6 + 0xc);
    FUN_00d50b20();
  }
  uVar8 = param_2 - iVar7;
  iVar7 = *(int *)(unaff_RDI[0x21] + 0xc);
  if (((int)uVar8 < iVar7) && (param_1 = param_1 - local_34, -1 < param_1)) {
    uVar5 = 0;
    if (-1 < (int)uVar8) {
      uVar5 = uVar8;
    }
    iVar2 = iVar7 + -1;
    if (param_1 < iVar7) {
      iVar2 = param_1;
    }
    if ((int)uVar5 <= iVar2) {
      uVar3 = (ulonglong)(iVar2 + 1U);
      uVar4 = (ulonglong)uVar5 + 1;
      if (uVar4 != uVar3) {
        uVar8 = iVar2 + 1U + ~uVar5;
        if ((uVar8 & 3) != 0) {
          lVar6 = -((ulonglong)uVar8 & 3);
          do {
            uVar4 = uVar4 + 1;
            lVar6 = lVar6 + 1;
          } while (lVar6 != 0);
        }
        if (2 < (uVar3 - uVar5) - 2) {
          do {
            uVar4 = uVar4 + 4;
          } while (uVar3 != uVar4);
        }
      }
    }
  }
  return;
}


