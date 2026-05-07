// Function: FUN_0191ce40
// Address: 0191ce40
// Size: 810 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x0191ceaf) */
/* WARNING: Removing unreachable block (ram,0x0191ceb8) */
/* WARNING: Removing unreachable block (ram,0x0191d132) */
/* WARNING: Removing unreachable block (ram,0x0191d13b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0191ce40(undefined4 param_1,float param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong *plVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  longlong **pplVar6;
  float fVar7;
  longlong *local_40;
  char local_38;
  
  FUN_01d48370();
  plVar5 = (longlong *)*unaff_RSI;
  FUN_01e3f820();
  (**(code **)(*plVar5 + 0x390))();
  FUN_01d77a60(param_1);
  FUN_01d48390();
  fVar7 = (float)FUN_01e3f820();
  if ((DAT_028b0a78 == (longlong *)0x0) || (DAT_028b0a81 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028b0a78 == (longlong *)0x0) {
      FUN_01cfbee0(DAT_0241af10,DAT_0241af10,DAT_0241af10);
      plVar5 = DAT_028b0a78;
      if (DAT_028b0a78 != local_40) {
        if (local_38 == '\0') {
          if (local_40 == (longlong *)0x0) {
            plVar5 = (longlong *)0x0;
          }
          else {
            FUN_00d50b00();
            plVar5 = local_40;
          }
        }
        else {
          local_38 = '\0';
          plVar5 = local_40;
        }
        bVar2 = DAT_028b0a78 != (longlong *)0x0;
        DAT_028b0a78 = plVar5;
        if (bVar2) {
          FUN_00d50b20();
          plVar5 = local_40;
        }
      }
      if ((plVar5 != (longlong *)0x0) && (DAT_028b0a80 == '\0')) {
        DAT_028b0a80 = '\x01';
        FUN_00e8cb90();
        plVar5 = local_40;
      }
      if ((local_38 != '\0') && (plVar5 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      DAT_028b0a81 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b0a81 = '\x01';
      FUN_00e8cb70();
    }
  }
  pplVar6 = &local_40;
  (**(code **)(*unaff_RDI + 0x640))();
  plVar5 = local_40;
  FUN_00209700();
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 != '\0') goto LAB_0191d015;
  }
  pplVar6 = (longlong **)&DAT_02802688;
LAB_0191d015:
  plVar5 = *pplVar6;
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar3 = DAT_028b0a78;
  if (plVar5 == (longlong *)0x0) {
    if (DAT_028b0a78 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    FUN_01d488d0();
    if (plVar3 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  else {
    (**(code **)(*unaff_RDI + 0x640))();
    lVar1 = local_40[0x11];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_01d488d0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*unaff_RDI + 0x640))();
  FUN_01cb3a30(fVar7 + param_2 + _DAT_023b5de0 + _DAT_0241af20,DAT_02394298);
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}


