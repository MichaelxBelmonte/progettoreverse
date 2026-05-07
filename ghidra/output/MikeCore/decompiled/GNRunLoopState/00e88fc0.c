// Function: FUN_00e88fc0
// Address: 00e88fc0
// Size: 731 bytes
// Class: GNRunLoopState


undefined4 FUN_00e88fc0(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined4 uVar5;
  longlong unaff_RDI;
  char local_27;
  char local_26;
  char local_25;
  char local_24;
  char local_23;
  char local_22;
  char local_21;
  
  cVar4 = FUN_00dac2f0(0,6);
  lVar2 = DAT_02789438;
  lVar1 = DAT_02789428;
  if (cVar4 == '\0') {
    if (DAT_02789428 != 0) {
      FUN_00d50b00();
    }
    lVar2 = DAT_02789430;
    if (DAT_02789430 != 0) {
      FUN_00d50b00();
    }
    FUN_00e972c0();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  else if ((((local_27 == 'G') && (local_26 == 'N')) && (local_25 == 'B')) &&
          (((local_24 == 'C' && (local_23 == 'F')) && (local_22 == 'A')))) {
    cVar4 = FUN_00dabce0();
    if (cVar4 != '\0') {
      *(int *)(unaff_RDI + 0x20) = (int)local_21;
      lVar1 = DAT_02789438;
      if (local_21 == 1) {
        uVar5 = FUN_00dabce0();
        if ((char)uVar5 == '\0') {
          return uVar5;
        }
        FUN_00daa990();
        return uVar5;
      }
      if (DAT_02789438 != 0) {
        FUN_00d50b00();
      }
      lVar2 = DAT_02789448;
      if (DAT_02789448 != 0) {
        FUN_00d50b00();
      }
      lVar3 = DAT_027d2068;
      if (DAT_027d2068 != 0) {
        FUN_00d50b00();
        FUN_00d50b00();
      }
      FUN_00e972c0();
      if (lVar3 != 0) {
        FUN_00d50b20();
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
  }
  else {
    if (DAT_02789438 != 0) {
      FUN_00d50b00();
    }
    lVar1 = DAT_02789440;
    if (DAT_02789440 != 0) {
      FUN_00d50b00();
    }
    FUN_00e972c0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  return 0;
}


