// Function: FUN_01ea56e0
// Address: 01ea56e0
// Size: 844 bytes
// Class: GNFont


/* WARNING: Removing unreachable block (ram,0x01ea57d6) */
/* WARNING: Removing unreachable block (ram,0x01ea57df) */

void FUN_01ea56e0(void)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar6;
  undefined8 uVar7;
  longlong *local_80;
  char local_78;
  longlong *local_40;
  char local_38;
  
  FUN_01d48370();
  (**(code **)(*(longlong *)*unaff_RSI + 0x390))();
  lVar6 = unaff_RDI[0x27];
  if (lVar6 != 0) {
    FUN_00d50b00();
    FUN_01d488d0();
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    plVar2 = (longlong *)*unaff_RSI;
    FUN_01e3f820();
    (**(code **)(*plVar2 + 0x3b0))();
  }
  if ((int)unaff_RDI[0x28] != 0) {
    (**(code **)(*unaff_RDI + 0x640))();
    lVar6 = unaff_RDI[0x28];
    uVar7 = FUN_01e3f820();
    (**(code **)(*local_40 + 0x3c0))(uVar7,(int)lVar6);
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  uVar1 = *(uint *)(unaff_RDI[0x2b] + 0xc);
  if (0 < (int)uVar1) {
    iVar5 = 0;
    lVar6 = 0;
    while( true ) {
      cVar4 = FUN_00d054a0();
      if (cVar4 != '\0') {
        lVar3 = *(longlong *)(*(longlong *)(unaff_RDI[0x2b] + 0x10) + lVar6 * 8);
        if (lVar3 != 0) {
          FUN_00d50b00();
        }
        FUN_01ea4fa0();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
      }
      if ((ulonglong)uVar1 - 1 == lVar6) break;
      iVar5 = iVar5 + 1;
      if ((int)unaff_RDI[0x33] <= iVar5) {
        iVar5 = 0;
      }
      lVar6 = lVar6 + 1;
    }
  }
  if (*(char *)((longlong)unaff_RDI + 0x19e) != '\0') {
    FUN_01d48370();
    FUN_01d48b40();
    (**(code **)(*unaff_RDI + 0x640))();
    (**(code **)(*local_80 + 0x498))(1,0x17);
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01d488d0();
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    plVar2 = (longlong *)*unaff_RSI;
    FUN_01e436c0();
    (**(code **)(*plVar2 + 0x3b8))();
    FUN_01d48390();
  }
  FUN_01d48390();
  return;
}


