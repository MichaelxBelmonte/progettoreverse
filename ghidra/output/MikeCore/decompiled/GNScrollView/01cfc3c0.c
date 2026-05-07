// Function: FUN_01cfc3c0
// Address: 01cfc3c0
// Size: 572 bytes
// Class: GNScrollView


void FUN_01cfc3c0(void)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *unaff_RDI;
  bool bVar5;
  undefined8 *local_38;
  char local_30;
  
  puVar4 = DAT_028b7928;
  if ((DAT_028b7928 == (undefined8 *)0x0) || (DAT_028b7931 == '\0')) {
    FUN_00e8cb50();
    lVar3 = DAT_027ef218;
    if (DAT_028b7928 == (undefined8 *)0x0) {
      if (DAT_027ef218 != 0) {
        FUN_00d50b00();
      }
      FUN_01cfb480();
      if (DAT_028b7928 != local_38) {
        puVar4 = DAT_028b7928;
        if (local_30 == '\0') {
          if (local_38 != (undefined8 *)0x0) {
            FUN_00d50b00();
            puVar4 = DAT_028b7928;
          }
        }
        else {
          local_30 = '\0';
        }
        DAT_028b7928 = local_38;
        if (puVar4 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
      }
      if ((local_38 != (undefined8 *)0x0) && (DAT_028b7930 == '\0')) {
        DAT_028b7930 = '\x01';
        FUN_00e8cb90();
      }
      if ((local_30 != '\0') && (local_38 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if (DAT_028b7928 == (undefined8 *)0x0) {
        puVar4 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar4 = &DAT_026792c0;
        puVar4[5] = 0;
        *(undefined8 *)((longlong)puVar4 + 0xc) = 0;
        *(undefined8 *)((longlong)puVar4 + 0x14) = 0;
        *(undefined8 *)((longlong)puVar4 + 0x19) = 0;
        FUN_00d500e0();
        if ((*(float *)(puVar4 + 2) != DAT_0241b3d0) ||
           (NAN(*(float *)(puVar4 + 2)) || NAN(DAT_0241b3d0))) {
          *(undefined4 *)(puVar4 + 2) = 0x3eaaaa9f;
          *(undefined1 *)((longlong)puVar4 + 0xe) = 0x55;
        }
        if ((*(float *)((longlong)puVar4 + 0x14) != DAT_0241b3d0) ||
           (NAN(*(float *)((longlong)puVar4 + 0x14)) || NAN(DAT_0241b3d0))) {
          *(undefined4 *)((longlong)puVar4 + 0x14) = 0x3eaaaa9f;
          *(undefined1 *)((longlong)puVar4 + 0xd) = 0x55;
        }
        if ((*(float *)(puVar4 + 3) != DAT_0241b3d0) ||
           (NAN(*(float *)(puVar4 + 3)) || NAN(DAT_0241b3d0))) {
          *(undefined4 *)(puVar4 + 3) = 0x3eaaaa9f;
          *(undefined1 *)((longlong)puVar4 + 0xc) = 0x55;
        }
        if (DAT_028b7928 == puVar4) {
          bVar2 = false;
          bVar1 = false;
        }
        else {
          bVar2 = true;
          bVar1 = true;
          bVar5 = DAT_028b7928 != (undefined8 *)0x0;
          DAT_028b7928 = puVar4;
          if (bVar5) {
            FUN_00d50b20();
          }
        }
        if (DAT_028b7930 == '\0') {
          DAT_028b7930 = '\x01';
          FUN_00e8cb90();
          bVar1 = bVar2;
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
      }
      DAT_028b7931 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b7931 = '\x01';
      FUN_00e8cb70();
    }
    puVar4 = DAT_028b7928;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (puVar4 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_01cfc5de;
    }
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  FUN_00d50b00();
LAB_01cfc5de:
  *unaff_RDI = puVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


