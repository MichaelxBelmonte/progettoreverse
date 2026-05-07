// Function: FUN_00d140d0
// Address: 00d140d0
// Size: 863 bytes
// Class: GNList


int FUN_00d140d0(void)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined8 *unaff_RDI;
  
  lVar2 = DAT_0277cbb0;
  plVar1 = (longlong *)*unaff_RDI;
  if (DAT_0277cbb0 != 0) {
    FUN_00d50b00();
  }
  cVar3 = (**(code **)(*plVar1 + 0x50))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = DAT_0277cbb8;
  iVar5 = 0;
  if (cVar3 == '\0') {
    plVar1 = (longlong *)*unaff_RDI;
    if (DAT_0277cbb8 != 0) {
      FUN_00d50b00();
    }
    cVar3 = (**(code **)(*plVar1 + 0x50))();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    lVar2 = DAT_0277cbc0;
    iVar5 = 1;
    if (cVar3 == '\0') {
      plVar1 = (longlong *)*unaff_RDI;
      if (DAT_0277cbc0 != 0) {
        FUN_00d50b00();
      }
      cVar3 = (**(code **)(*plVar1 + 0x50))();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_0277cbc8;
      iVar5 = 2;
      if (cVar3 == '\0') {
        plVar1 = (longlong *)*unaff_RDI;
        if (DAT_0277cbc8 != 0) {
          FUN_00d50b00();
        }
        cVar3 = (**(code **)(*plVar1 + 0x50))();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0277cbd0;
        iVar5 = 3;
        if (cVar3 == '\0') {
          plVar1 = (longlong *)*unaff_RDI;
          if (DAT_0277cbd0 != 0) {
            FUN_00d50b00();
          }
          cVar3 = (**(code **)(*plVar1 + 0x50))();
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
          lVar2 = DAT_0277cbd8;
          iVar5 = 4;
          if (cVar3 == '\0') {
            plVar1 = (longlong *)*unaff_RDI;
            if (DAT_0277cbd8 != 0) {
              FUN_00d50b00();
            }
            cVar3 = (**(code **)(*plVar1 + 0x50))();
            if (lVar2 != 0) {
              FUN_00d50b20();
            }
            lVar2 = DAT_0277cbe0;
            iVar5 = 5;
            if (cVar3 == '\0') {
              plVar1 = (longlong *)*unaff_RDI;
              if (DAT_0277cbe0 != 0) {
                FUN_00d50b00();
              }
              cVar3 = (**(code **)(*plVar1 + 0x50))();
              if (lVar2 != 0) {
                FUN_00d50b20();
              }
              lVar2 = DAT_02704028;
              iVar5 = 6;
              if (cVar3 == '\0') {
                plVar1 = (longlong *)*unaff_RDI;
                if (DAT_02704028 != 0) {
                  FUN_00d50b00();
                }
                cVar3 = (**(code **)(*plVar1 + 0x50))();
                if (lVar2 != 0) {
                  FUN_00d50b20();
                }
                lVar2 = DAT_0277cbf0;
                iVar5 = 7;
                if (cVar3 == '\0') {
                  plVar1 = (longlong *)*unaff_RDI;
                  if (DAT_0277cbf0 != 0) {
                    FUN_00d50b00();
                  }
                  cVar3 = (**(code **)(*plVar1 + 0x50))();
                  if (lVar2 != 0) {
                    FUN_00d50b20();
                  }
                  lVar2 = DAT_0277cbf8;
                  iVar5 = 8;
                  if (cVar3 == '\0') {
                    plVar1 = (longlong *)*unaff_RDI;
                    if (DAT_0277cbf8 != 0) {
                      FUN_00d50b00();
                    }
                    uVar4 = (**(code **)(*plVar1 + 0x50))();
                    if (lVar2 != 0) {
                      FUN_00d50b20();
                    }
                    iVar5 = (uVar4 & 0xff) * 9;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return iVar5;
}


