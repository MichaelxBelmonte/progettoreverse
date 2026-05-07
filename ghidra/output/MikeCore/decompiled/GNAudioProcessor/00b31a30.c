// Function: FUN_00b31a30
// Address: 00b31a30
// Size: 556 bytes
// Class: GNAudioProcessor


void FUN_00b31a30(void)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  longlong local_70;
  char local_68;
  longlong local_40;
  char local_38;
  
  lVar2 = DAT_0275e470;
  plVar1 = (longlong *)*unaff_RSI;
  if (DAT_0275e470 != 0) {
    FUN_00d50b00();
  }
  iVar4 = (**(code **)(*plVar1 + 0x598))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = DAT_027637d0;
  if (iVar4 == 0) {
    plVar1 = (longlong *)*unaff_RSI;
    if (DAT_027637d0 != 0) {
      FUN_00d50b00();
    }
    iVar4 = (**(code **)(*plVar1 + 0x598))();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    iVar4 = (uint)(iVar4 == 3) * 3;
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x470))();
  lVar2 = unaff_RDI[6];
  if (lVar2 != local_40) {
    if (local_38 == '\0') {
      if (local_40 == 0) {
        unaff_RDI[6] = 0;
      }
      else {
        FUN_00d50b00();
        lVar2 = unaff_RDI[6];
        unaff_RDI[6] = local_40;
      }
    }
    else {
      local_38 = '\0';
      unaff_RDI[6] = local_40;
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x470))();
  lVar2 = unaff_RDI[7];
  if (lVar2 != local_40) {
    if (local_38 == '\0') {
      if (local_40 == 0) {
        unaff_RDI[7] = 0;
      }
      else {
        FUN_00d50b00();
        lVar2 = unaff_RDI[7];
        unaff_RDI[7] = local_40;
      }
    }
    else {
      local_38 = '\0';
      unaff_RDI[7] = local_40;
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  cVar3 = (**(code **)(*(longlong *)*unaff_RSI + 0x418))();
  if ((cVar3 != '\0') && (iVar5 = (**(code **)(*(longlong *)*unaff_RSI + 0x428))(), 0 < iVar5)) {
    iVar6 = 0;
    do {
      (**(code **)(*(longlong *)*unaff_RSI + 0x430))();
      (**(code **)(*unaff_RDI + 0x450))();
      iVar6 = iVar6 + 1;
    } while (iVar5 != iVar6);
  }
  if (((iVar4 == 3) && ((**(code **)(*(longlong *)*unaff_RSI + 0x470))(), local_68 != '\0')) &&
     (local_70 != 0)) {
    FUN_00d50b20();
  }
  return;
}


