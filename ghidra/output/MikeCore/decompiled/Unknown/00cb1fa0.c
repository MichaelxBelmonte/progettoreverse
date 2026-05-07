// Function: FUN_00cb1fa0
// Address: 00cb1fa0
// Size: 597 bytes
// Class: Unknown


void FUN_00cb1fa0(void)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  float fVar6;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  if (*(longlong *)(unaff_RDI + 0x30) != 0) {
    *(int *)(unaff_RDI + 0x138) = *(int *)(unaff_RDI + 0x138) + 1;
    plVar5 = (longlong *)*unaff_RSI;
    if (plVar5 != (longlong *)0x0) {
      FUN_00d50b00();
      (**(code **)(*plVar5 + 0x18))(0);
      if (unaff_RDI != 0) {
        FUN_00d50b20();
      }
    }
    local_34 = 0;
    local_3c = DAT_02394254;
    local_38 = 0;
    while ((*(longlong *)(unaff_RDI + 0x30) != 0 && (iVar2 = FUN_00c8d620(), iVar2 != 0))) {
      if ((*(longlong *)(unaff_RDI + 0x30) != 0) &&
         (FUN_00d50b00(), *(longlong *)(unaff_RDI + 0x30) != 0)) {
        *(undefined8 *)(unaff_RDI + 0x30) = 0;
        FUN_00d50b20();
      }
      iVar2 = FUN_00c8d620();
      iVar3 = FUN_00c8d620();
      local_38 = local_38 + iVar2;
      if (iVar3 < 1) {
        iVar3 = 0;
      }
      iVar2 = -1;
      while (iVar2 != iVar3 + -1) {
        iVar2 = iVar2 + 1;
        do {
          plVar5 = (longlong *)FUN_00c8df10();
        } while (plVar5 == (longlong *)0x0);
        if (*unaff_RSI != 0) {
          if (*(longlong *)(unaff_RDI + 0x30) == 0) {
            iVar4 = 0;
          }
          else {
            iVar4 = FUN_00c8d620();
          }
          fVar6 = (float)local_34 / (float)(iVar4 + local_38);
          if (local_3c <= fVar6) {
            plVar1 = (longlong *)*unaff_RSI;
            FUN_00d50b00();
            (**(code **)(*plVar1 + 0x18))(fVar6);
            if (unaff_RDI != 0) {
              FUN_00d50b20();
            }
            local_3c = fVar6 + DAT_02394254;
          }
          local_34 = local_34 + 1;
        }
        (**(code **)(*plVar5 + 0x1a0))();
      }
      FUN_00d50b20();
    }
    plVar5 = (longlong *)*unaff_RSI;
    if (plVar5 != (longlong *)0x0) {
      FUN_00d50b00();
      (**(code **)(*plVar5 + 0x18))(DAT_02390124);
      if (unaff_RDI != 0) {
        FUN_00d50b20();
      }
    }
    *(int *)(unaff_RDI + 0x138) = *(int *)(unaff_RDI + 0x138) + -1;
  }
  return;
}


