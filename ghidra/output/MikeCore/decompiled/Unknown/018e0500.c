// Function: FUN_018e0500
// Address: 018e0500
// Size: 3141 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x018e109b) */
/* WARNING: Removing unreachable block (ram,0x018e10a4) */
/* WARNING: Removing unreachable block (ram,0x018e0ffb) */
/* WARNING: Removing unreachable block (ram,0x018e1004) */
/* WARNING: Removing unreachable block (ram,0x018e0f5b) */
/* WARNING: Removing unreachable block (ram,0x018e0f64) */
/* WARNING: Removing unreachable block (ram,0x018e0ebb) */
/* WARNING: Removing unreachable block (ram,0x018e0ec4) */
/* WARNING: Removing unreachable block (ram,0x018e0e1b) */
/* WARNING: Removing unreachable block (ram,0x018e0e24) */
/* WARNING: Removing unreachable block (ram,0x018e0d7b) */
/* WARNING: Removing unreachable block (ram,0x018e0d84) */
/* WARNING: Removing unreachable block (ram,0x018e0cdb) */
/* WARNING: Removing unreachable block (ram,0x018e0ce4) */
/* WARNING: Removing unreachable block (ram,0x018e0c3b) */
/* WARNING: Removing unreachable block (ram,0x018e0c44) */
/* WARNING: Removing unreachable block (ram,0x018e0b9b) */
/* WARNING: Removing unreachable block (ram,0x018e0ba4) */
/* WARNING: Removing unreachable block (ram,0x018e0afb) */
/* WARNING: Removing unreachable block (ram,0x018e0b04) */
/* WARNING: Removing unreachable block (ram,0x018e0a5b) */
/* WARNING: Removing unreachable block (ram,0x018e0a64) */
/* WARNING: Removing unreachable block (ram,0x018e09bb) */
/* WARNING: Removing unreachable block (ram,0x018e09c4) */
/* WARNING: Removing unreachable block (ram,0x018e091b) */
/* WARNING: Removing unreachable block (ram,0x018e0924) */
/* WARNING: Removing unreachable block (ram,0x018e087b) */
/* WARNING: Removing unreachable block (ram,0x018e0884) */
/* WARNING: Removing unreachable block (ram,0x018e07db) */
/* WARNING: Removing unreachable block (ram,0x018e07e4) */
/* WARNING: Removing unreachable block (ram,0x018e073b) */
/* WARNING: Removing unreachable block (ram,0x018e0744) */
/* WARNING: Removing unreachable block (ram,0x018e069b) */
/* WARNING: Removing unreachable block (ram,0x018e06a4) */
/* WARNING: Removing unreachable block (ram,0x018e05fb) */
/* WARNING: Removing unreachable block (ram,0x018e0604) */
/* WARNING: Removing unreachable block (ram,0x018e064b) */
/* WARNING: Removing unreachable block (ram,0x018e0654) */
/* WARNING: Removing unreachable block (ram,0x018e06eb) */
/* WARNING: Removing unreachable block (ram,0x018e06f4) */
/* WARNING: Removing unreachable block (ram,0x018e078b) */
/* WARNING: Removing unreachable block (ram,0x018e0794) */
/* WARNING: Removing unreachable block (ram,0x018e082b) */
/* WARNING: Removing unreachable block (ram,0x018e0834) */
/* WARNING: Removing unreachable block (ram,0x018e08cb) */
/* WARNING: Removing unreachable block (ram,0x018e08d4) */
/* WARNING: Removing unreachable block (ram,0x018e096b) */
/* WARNING: Removing unreachable block (ram,0x018e0974) */
/* WARNING: Removing unreachable block (ram,0x018e0a0b) */
/* WARNING: Removing unreachable block (ram,0x018e0a14) */
/* WARNING: Removing unreachable block (ram,0x018e0aab) */
/* WARNING: Removing unreachable block (ram,0x018e0ab4) */
/* WARNING: Removing unreachable block (ram,0x018e0b4b) */
/* WARNING: Removing unreachable block (ram,0x018e0b54) */
/* WARNING: Removing unreachable block (ram,0x018e0beb) */
/* WARNING: Removing unreachable block (ram,0x018e0bf4) */
/* WARNING: Removing unreachable block (ram,0x018e0c8b) */
/* WARNING: Removing unreachable block (ram,0x018e0c94) */
/* WARNING: Removing unreachable block (ram,0x018e0d2b) */
/* WARNING: Removing unreachable block (ram,0x018e0d34) */
/* WARNING: Removing unreachable block (ram,0x018e0dcb) */
/* WARNING: Removing unreachable block (ram,0x018e0dd4) */
/* WARNING: Removing unreachable block (ram,0x018e0e6b) */
/* WARNING: Removing unreachable block (ram,0x018e0e74) */
/* WARNING: Removing unreachable block (ram,0x018e0f0b) */
/* WARNING: Removing unreachable block (ram,0x018e0f14) */
/* WARNING: Removing unreachable block (ram,0x018e0fab) */
/* WARNING: Removing unreachable block (ram,0x018e0fb4) */
/* WARNING: Removing unreachable block (ram,0x018e104b) */
/* WARNING: Removing unreachable block (ram,0x018e1054) */
/* WARNING: Removing unreachable block (ram,0x018e10eb) */
/* WARNING: Removing unreachable block (ram,0x018e10f4) */

void FUN_018e0500(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *unaff_RDI;
  bool bVar3;
  
  puVar2 = DAT_028b0620;
  if ((DAT_028b0620 == (undefined8 *)0x0) || (DAT_028b0629 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028b0620 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar2 = &DAT_02572358;
      (*DAT_02572370)();
      bVar3 = DAT_028b0620 == (undefined8 *)0x0;
      DAT_028b0620 = puVar2;
      if (((bVar3) || (FUN_00d50b20(), lVar1 = DAT_027e2710, DAT_028b0620 != (undefined8 *)0x0)) &&
         (lVar1 = DAT_027e2710, DAT_028b0628 == '\0')) {
        DAT_028b0628 = '\x01';
        FUN_00e8cb90();
        lVar1 = DAT_027e2710;
      }
      DAT_027e2710 = lVar1;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_027c2110;
      if (DAT_027c2110 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_027c20d8;
      if (DAT_027c20d8 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_027c2118;
      if (DAT_027c2118 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_02781670;
      if (DAT_02781670 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_027c20e8;
      if (DAT_027c20e8 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_027c2120;
      if (DAT_027c2120 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_027c20f8;
      if (DAT_027c20f8 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_027c2128;
      if (DAT_027c2128 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_027ef820;
      if (DAT_027ef820 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_027c2130;
      if (DAT_027c2130 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0277d278;
      if (DAT_0277d278 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_027df908;
      if (DAT_027df908 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_027c20d0;
      if (DAT_027c20d0 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_027c20d8;
      if (DAT_027c20d8 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_027c20e0;
      if (DAT_027c20e0 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_027df910;
      if (DAT_027df910 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_027df918;
      if (DAT_027df918 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_027c20f0;
      if (DAT_027c20f0 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_027c20f8;
      if (DAT_027c20f8 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_027c2100;
      if (DAT_027c2100 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_027ef820;
      if (DAT_027ef820 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_027c2108;
      if (DAT_027c2108 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_027df920;
      if (DAT_027df920 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_027e2710;
      if (DAT_027e2710 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_027c20d0;
      if (DAT_027c20d0 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_027c20d8;
      if (DAT_027c20d8 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_027c20e0;
      if (DAT_027c20e0 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_02781670;
      if (DAT_02781670 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_027c20e8;
      if (DAT_027c20e8 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_027c20f0;
      if (DAT_027c20f0 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_027c20f8;
      if (DAT_027c20f8 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_027c2100;
      if (DAT_027c2100 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_027ef820;
      if (DAT_027ef820 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_027c2108;
      if (DAT_027c2108 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0277d278;
      if (DAT_0277d278 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      DAT_028b0629 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b0629 = '\x01';
      FUN_00e8cb70();
    }
    puVar2 = DAT_028b0620;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (puVar2 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)0x0;
      goto LAB_018e112b;
    }
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  FUN_00d50b00();
LAB_018e112b:
  *unaff_RDI = puVar2;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


