// Function: FUN_01cc4e70
// Address: 01cc4e70
// Size: 894 bytes
// Class: Unknown


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cc4e70(void)

{
  bool bVar1;
  bool bVar2;
  longlong *plVar3;
  undefined8 *unaff_RDI;
  bool bVar4;
  longlong local_40;
  char local_38;
  longlong *local_30;
  char local_28;
  
  plVar3 = DAT_028b73a0;
  if ((DAT_028b73a0 == (longlong *)0x0) || (DAT_028b73a9 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028b73a0 == (longlong *)0x0) {
      plVar3 = (longlong *)FUN_00e8fc40();
      FUN_00152930();
      (**(code **)(*plVar3 + 0x18))();
      if (DAT_028b73a0 == plVar3) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar4 = DAT_028b73a0 != (longlong *)0x0;
        DAT_028b73a0 = plVar3;
        if (bVar4) {
          FUN_00d50b20();
        }
      }
      if (DAT_028b73a8 == '\0') {
        DAT_028b73a8 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      FUN_01d4ed60(_DAT_0241f3e0);
      FUN_01d52700();
      FUN_01d52740();
      FUN_01cfbee0(DAT_02390124,0,0);
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01d488d0();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d52740();
      (**(code **)(*local_30 + 0x3c0))(_DAT_0241f3f0,DAT_023908d8);
      if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d52740();
      FUN_01cfbee0(DAT_02390124,DAT_02390124,DAT_02390124);
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01d488d0();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d52740();
      FUN_01d48b40(DAT_02390d34);
      if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d52740();
      (**(code **)(*local_30 + 0x3e0))(DAT_0241c3ec,DAT_02390d2c,DAT_0241c3ec,DAT_0241c3ec);
      if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d52740();
      (**(code **)(*local_30 + 0x3e0))(DAT_0241c3ec,DAT_023b36b0,DAT_0241c3ec,DAT_023908ec);
      if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d52770();
      DAT_028b73a9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b73a9 = '\x01';
      FUN_00e8cb70();
    }
    plVar3 = DAT_028b73a0;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (plVar3 == (longlong *)0x0) {
      plVar3 = (longlong *)0x0;
      goto LAB_01cc51d4;
    }
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  FUN_00d50b00();
LAB_01cc51d4:
  *unaff_RDI = plVar3;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


