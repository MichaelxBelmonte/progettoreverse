// Function: FUN_00b7f240
// Address: 00b7f240
// Size: 820 bytes
// Class: GNFilePath


int FUN_00b7f240(void)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined8 *unaff_RDI;
  undefined8 local_30;
  undefined1 local_28;
  
  plVar1 = (longlong *)*unaff_RDI;
  FUN_00b7e000();
  if ((local_28 == '\0') && (local_30 != 0)) {
    FUN_00d50b00();
  }
  cVar2 = (**(code **)(*plVar1 + 0x50))();
  if (local_30 != 0) {
    FUN_00d50b20();
  }
  iVar4 = 5;
  if (cVar2 == '\0') {
    plVar1 = (longlong *)*unaff_RDI;
    FUN_00b7d310();
    if ((local_28 == '\0') && (local_30 != 0)) {
      FUN_00d50b00();
    }
    cVar2 = (**(code **)(*plVar1 + 0x50))();
    if (local_30 != 0) {
      FUN_00d50b20();
    }
    iVar4 = 2;
    if (cVar2 == '\0') {
      plVar1 = (longlong *)*unaff_RDI;
      FUN_00b7ce70();
      if ((local_28 == '\0') && (local_30 != 0)) {
        FUN_00d50b00();
      }
      cVar2 = (**(code **)(*plVar1 + 0x50))();
      if (local_30 != 0) {
        FUN_00d50b20();
      }
      iVar4 = 3;
      if (cVar2 == '\0') {
        plVar1 = (longlong *)*unaff_RDI;
        FUN_00b7ea30();
        if ((local_28 == '\0') && (local_30 != 0)) {
          FUN_00d50b00();
        }
        cVar2 = (**(code **)(*plVar1 + 0x50))();
        if (local_30 != 0) {
          FUN_00d50b20();
        }
        iVar4 = 6;
        if (cVar2 == '\0') {
          plVar1 = (longlong *)*unaff_RDI;
          FUN_00b7dcf0();
          if ((local_28 == '\0') && (local_30 != 0)) {
            FUN_00d50b00();
          }
          cVar2 = (**(code **)(*plVar1 + 0x50))();
          if (local_30 != 0) {
            FUN_00d50b20();
          }
          iVar4 = 7;
          if (cVar2 == '\0') {
            plVar1 = (longlong *)*unaff_RDI;
            FUN_00b7d850();
            if ((local_28 == '\0') && (local_30 != 0)) {
              FUN_00d50b00();
            }
            cVar2 = (**(code **)(*plVar1 + 0x50))();
            if (local_30 != 0) {
              FUN_00d50b20();
            }
            iVar4 = 1;
            if (cVar2 == '\0') {
              plVar1 = (longlong *)*unaff_RDI;
              FUN_00b7e620();
              if ((local_28 == '\0') && (local_30 != 0)) {
                FUN_00d50b00();
              }
              cVar2 = (**(code **)(*plVar1 + 0x50))();
              if (local_30 != 0) {
                FUN_00d50b20();
              }
              iVar4 = 4;
              if (cVar2 == '\0') {
                plVar1 = (longlong *)*unaff_RDI;
                FUN_00b7e310();
                if ((local_28 == '\0') && (local_30 != 0)) {
                  FUN_00d50b00();
                }
                uVar3 = (**(code **)(*plVar1 + 0x50))();
                if (local_30 != 0) {
                  FUN_00d50b20();
                }
                iVar4 = (uVar3 & 0xff) * 9;
              }
            }
          }
        }
      }
    }
  }
  return iVar4;
}


