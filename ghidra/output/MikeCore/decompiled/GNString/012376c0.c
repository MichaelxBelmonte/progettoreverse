// Function: FUN_012376c0
// Address: 012376c0
// Size: 703 bytes
// Class: GNString


void FUN_012376c0(undefined4 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong *unaff_RDI;
  double dVar5;
  undefined8 uVar6;
  longlong local_40;
  char local_38;
  
  if (unaff_RDI[0x1f] != 0) {
    FUN_01237550();
    lVar1 = unaff_RDI[0x1f];
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != local_40) {
      FUN_01237550();
      iVar4 = FUN_00b32020();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((int)unaff_RDI[0x1e] != iVar4) {
        *(int *)(unaff_RDI + 0x1e) = iVar4;
        plVar2 = (longlong *)unaff_RDI[0x1f];
        FUN_01237550();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        (**(code **)(*plVar2 + 0x4c0))();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    dVar5 = (double)(**(code **)(*unaff_RDI + 0x5b8))();
    if ((dVar5 != 0.0) || (NAN(dVar5))) {
      FUN_00b31a00();
      FUN_00bc4850(dVar5);
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00b31a00();
    (**(code **)(*unaff_RDI + 0x5e0))();
    FUN_00bc4820();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    uVar6 = (**(code **)(*unaff_RDI + 0x5f0))();
    FUN_00b31a00();
    *(undefined8 *)(local_40 + 0x58) = uVar6;
    if (local_38 != '\0') {
      FUN_00d50b20();
    }
    if ((unaff_RDI[0x20] != 0) && (cVar3 = (**(code **)(*unaff_RDI + 0x5e8))(), cVar3 != '\0')) {
      uVar6 = FUN_013fba80();
      FUN_011ee3f0(uVar6,param_1);
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*(longlong *)unaff_RDI[0x1f] + 0x400))(param_1,param_2);
    if ((unaff_RDI[0x21] != 0) && (cVar3 = (**(code **)(*unaff_RDI + 0x5e8))(), cVar3 != '\0')) {
      uVar6 = FUN_013fba80();
      FUN_011ee3f0(uVar6,param_1);
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  return;
}


