// Function: FUN_006577f0
// Address: 006577f0
// Size: 639 bytes
// Class: MUMultiTrackView


/* WARNING: Removing unreachable block (ram,0x00657a1b) */
/* WARNING: Removing unreachable block (ram,0x00657a24) */

undefined8 * FUN_006577f0(void)

{
  longlong *plVar1;
  char cVar2;
  longlong **pplVar3;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  bool bVar4;
  longlong local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong *local_40;
  char local_38;
  
  FUN_0063f230();
  if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  FUN_01f27fe0();
  cVar2 = (**(code **)(*local_40 + 0x450))();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar2 == '\0') {
LAB_00657987:
    if (local_40 != (longlong *)0x0) {
      FUN_0021a630();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (local_40 != (longlong *)0x0) {
        FUN_0021a630();
        (**(code **)(*local_40 + 0xa00))();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_00657a41;
      }
    }
    (**(code **)(*unaff_RSI + 0x5e0))();
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
        goto LAB_00657a29;
      }
    }
    else if (local_40 != (longlong *)0x0) {
LAB_00657a29:
      FUN_00757c60();
      FUN_00d50b20();
      goto joined_r0x00657a6b;
    }
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    FUN_01e561b0();
    if (local_40 == (longlong *)0x0) {
      bVar4 = false;
    }
    else {
      FUN_01e561b0();
      pplVar3 = &local_68;
      FUN_01d8b220();
      plVar1 = local_68;
      FUN_000914a0();
      if (plVar1 == (longlong *)0x0) {
LAB_006578be:
        pplVar3 = (longlong **)&DAT_02802688;
      }
      else {
        (**(code **)(*plVar1 + 0x360))();
        cVar2 = FUN_00e85ea0();
        if (cVar2 == '\0') goto LAB_006578be;
      }
      bVar4 = false;
      if ((*pplVar3 != (longlong *)0x0) && (local_40 != (longlong *)0x0)) {
        FUN_0021a630();
        bVar4 = local_78 != 0;
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (!bVar4) goto LAB_00657987;
    FUN_0021a630();
    (**(code **)(*local_40 + 0xa00))();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
joined_r0x00657a6b:
  if (local_40 == (longlong *)0x0) {
    return unaff_RDI;
  }
LAB_00657a41:
  FUN_00d50b20();
  return unaff_RDI;
}


