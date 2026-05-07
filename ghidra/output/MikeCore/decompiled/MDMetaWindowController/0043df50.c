// Function: FUN_0043df50
// Address: 0043df50
// Size: 601 bytes
// Class: MDMetaWindowController


/* WARNING: Removing unreachable block (ram,0x0043dffc) */
/* WARNING: Removing unreachable block (ram,0x0043e005) */
/* WARNING: Removing unreachable block (ram,0x0043df94) */
/* WARNING: Removing unreachable block (ram,0x0043df9d) */

void FUN_0043df50(undefined4 param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  longlong *local_30;
  char local_28;
  
  (**(code **)(*unaff_RDI + 0x640))();
  if ((local_28 == '\0') && (local_30 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  if ((char)unaff_RDI[0x27] != '\0') {
    FUN_01e3f820();
    (**(code **)(*local_30 + 0x3f0))(6,0x2e,1,1);
  }
  if (*(char *)((longlong)unaff_RDI + 0x13a) == '\0') goto LAB_0043e186;
  if ((DAT_028085a0 == (longlong *)0x0) || (DAT_028085a9 == '\0')) {
    FUN_00e8cb50();
    lVar2 = DAT_027058f0;
    if (DAT_028085a0 == (longlong *)0x0) {
      if (DAT_027058f0 != 0) {
        FUN_00d50b00();
      }
      FUN_01d51a40();
      plVar3 = DAT_028085a0;
      if (DAT_028085a0 != local_30) {
        if (local_28 == '\0') {
          if (local_30 == (longlong *)0x0) {
            plVar3 = (longlong *)0x0;
          }
          else {
            FUN_00d50b00();
            plVar3 = local_30;
          }
        }
        else {
          local_28 = '\0';
          plVar3 = local_30;
        }
        bVar1 = DAT_028085a0 != (longlong *)0x0;
        DAT_028085a0 = plVar3;
        if (bVar1) {
          FUN_00d50b20();
          plVar3 = local_30;
        }
      }
      if ((plVar3 != (longlong *)0x0) && (DAT_028085a8 == '\0')) {
        DAT_028085a8 = '\x01';
        FUN_00e8cb90();
        plVar3 = local_30;
      }
      if ((local_28 != '\0') && (plVar3 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      DAT_028085a9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028085a9 = '\x01';
      FUN_00e8cb70();
    }
    plVar3 = (longlong *)*unaff_RSI;
    if (DAT_028085a0 != (longlong *)0x0) goto LAB_0043e14e;
    plVar4 = (longlong *)0x0;
  }
  else {
    plVar3 = (longlong *)*unaff_RSI;
LAB_0043e14e:
    plVar4 = DAT_028085a0;
    FUN_00d50b00();
  }
  (**(code **)(*plVar3 + 0x400))(param_1);
  if (plVar4 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_0043e186:
  if (local_30 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


