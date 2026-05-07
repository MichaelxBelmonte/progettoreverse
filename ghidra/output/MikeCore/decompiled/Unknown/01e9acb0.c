// Function: FUN_01e9acb0
// Address: 01e9acb0
// Size: 2096 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01e9b49b) */
/* WARNING: Removing unreachable block (ram,0x01e9b4a7) */
/* WARNING: Removing unreachable block (ram,0x01e9b3fe) */
/* WARNING: Removing unreachable block (ram,0x01e9b40b) */
/* WARNING: Removing unreachable block (ram,0x01e9ae34) */
/* WARNING: Removing unreachable block (ram,0x01e9ae44) */
/* WARNING: Removing unreachable block (ram,0x01e9b2e6) */
/* WARNING: Removing unreachable block (ram,0x01e9b2cf) */
/* WARNING: Removing unreachable block (ram,0x01e9b1d5) */
/* WARNING: Removing unreachable block (ram,0x01e9ad04) */
/* WARNING: Removing unreachable block (ram,0x01e9ad0d) */
/* WARNING: Removing unreachable block (ram,0x01e9b200) */
/* WARNING: Removing unreachable block (ram,0x01e9b2c6) */
/* WARNING: Removing unreachable block (ram,0x01e9b4e4) */
/* WARNING: Removing unreachable block (ram,0x01e9b21a) */
/* WARNING: Removing unreachable block (ram,0x01e9b223) */
/* WARNING: Removing unreachable block (ram,0x01e9b2dd) */
/* WARNING: Removing unreachable block (ram,0x01e9b2eb) */
/* WARNING: Removing unreachable block (ram,0x01e9b3d2) */
/* WARNING: Removing unreachable block (ram,0x01e9b3db) */
/* WARNING: Removing unreachable block (ram,0x01e9b350) */
/* WARNING: Removing unreachable block (ram,0x01e9b358) */
/* WARNING: Removing unreachable block (ram,0x01e9b35b) */
/* WARNING: Removing unreachable block (ram,0x01e9b35f) */
/* WARNING: Removing unreachable block (ram,0x01e9b37c) */
/* WARNING: Removing unreachable block (ram,0x01e9b361) */
/* WARNING: Removing unreachable block (ram,0x01e9b37e) */
/* WARNING: Removing unreachable block (ram,0x01e9b381) */
/* WARNING: Removing unreachable block (ram,0x01e9b415) */
/* WARNING: Removing unreachable block (ram,0x01e9b43c) */
/* WARNING: Removing unreachable block (ram,0x01e9b444) */
/* WARNING: Removing unreachable block (ram,0x01e9b48d) */
/* WARNING: Removing unreachable block (ram,0x01e9b492) */
/* WARNING: Removing unreachable block (ram,0x01e9b4b1) */
/* WARNING: Removing unreachable block (ram,0x01e9b4b9) */
/* WARNING: Removing unreachable block (ram,0x01e9b398) */
/* WARNING: Removing unreachable block (ram,0x01e9b3bf) */
/* WARNING: Removing unreachable block (ram,0x01e9b3c4) */
/* WARNING: Removing unreachable block (ram,0x01e9b3b8) */
/* WARNING: Removing unreachable block (ram,0x01e9b3bd) */
/* WARNING: Removing unreachable block (ram,0x01e9b2b0) */
/* WARNING: Removing unreachable block (ram,0x01e9b2b9) */

ulonglong FUN_01e9acb0(undefined8 param_1,char param_2)

{
  bool bVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined8 unaff_RSI;
  longlong *unaff_RDI;
  ulonglong uVar6;
  longlong *local_58;
  char local_50;
  undefined7 uVar7;
  
  FUN_01ccad60();
  if (local_50 == '\0') {
    if (local_58 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_01e9ad12;
    }
LAB_01e9adfa:
    bVar1 = true;
LAB_01e9ae00:
    uVar5 = FUN_01d827c0();
    uVar6 = (ulonglong)uVar5;
LAB_01e9b4c3:
    if (bVar1) goto LAB_01e9b4cf;
  }
  else {
    if (local_58 == (longlong *)0x0) goto LAB_01e9adfa;
LAB_01e9ad12:
    FUN_01cae990();
    lVar2 = DAT_027fdca8;
    if (DAT_027fdca8 != 0) {
      FUN_00d50b00();
    }
    cVar3 = (**(code **)(*local_58 + 0x50))();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar3 == '\0') {
      bVar1 = false;
      goto LAB_01e9ae00;
    }
    uVar7 = (undefined7)((ulonglong)unaff_RSI >> 8);
    uVar6 = CONCAT71(uVar7,1);
    if (param_2 == '\0') {
LAB_01e9b4c1:
      bVar1 = false;
      goto LAB_01e9b4c3;
    }
    iVar4 = FUN_01d0a910();
    if (iVar4 == 0) {
      (**(code **)(*local_58 + 0x970))();
      lVar2 = DAT_027e7c20;
      if (local_50 == '\0') {
        if (local_58 != (longlong *)0x0) {
          FUN_00d50b00();
          lVar2 = DAT_027e7c20;
        }
      }
      else {
        local_50 = '\0';
      }
      DAT_027e7c20 = lVar2;
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*unaff_RDI + 0x4d0))();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if (local_58 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    iVar4 = FUN_01d0a910();
    if (iVar4 == 2) {
      FUN_01d0adc0();
      lVar2 = DAT_027e7c20;
      if (local_50 == '\0') {
        if (local_58 != (longlong *)0x0) {
          FUN_00d50b00();
          lVar2 = DAT_027e7c20;
        }
      }
      else {
        local_50 = '\0';
      }
      DAT_027e7c20 = lVar2;
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*unaff_RDI + 0x4d0))();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if (local_58 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    iVar4 = FUN_01d0a910();
    if ((iVar4 == 1) && (iVar4 = FUN_01d0aed0(), iVar4 != -1)) {
      FUN_01d0aed0();
      FUN_00d46530();
      lVar2 = DAT_027e7c20;
      if (local_50 == '\0') {
        if (local_58 != (longlong *)0x0) {
          FUN_00d50b00();
          lVar2 = DAT_027e7c20;
        }
      }
      else {
        local_50 = '\0';
      }
      DAT_027e7c20 = lVar2;
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*unaff_RDI + 0x4d0))();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if (local_58 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    iVar4 = FUN_01d0a910();
    lVar2 = DAT_027edfd8;
    if (iVar4 != 3) goto LAB_01e9b4c1;
    if (DAT_027edfd8 != 0) {
      FUN_00d50b00();
    }
    FUN_01ccaae0();
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    lVar2 = DAT_027fdc88;
    if (local_58 == (longlong *)0x0) {
      if (DAT_027fdc88 != 0) {
        FUN_00d50b00();
      }
      FUN_01ccaae0();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      goto LAB_01e9b4c1;
    }
    FUN_01d0b1d0();
    lVar2 = DAT_027edfd8;
    if ((local_50 == '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b00();
      lVar2 = DAT_027edfd8;
    }
    DAT_027edfd8 = lVar2;
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*unaff_RDI + 0x4d0))();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if (local_58 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    uVar6 = CONCAT71(uVar7,1);
  }
  FUN_00d50b20();
LAB_01e9b4cf:
  return uVar6 & 0xffffffff;
}


