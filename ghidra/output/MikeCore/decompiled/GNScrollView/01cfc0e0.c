// Function: FUN_01cfc0e0
// Address: 01cfc0e0
// Size: 572 bytes
// Class: GNScrollView


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cfc0e0(void)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *unaff_RDI;
  bool bVar5;
  undefined8 *local_38;
  char local_30;
  
  puVar4 = DAT_028b7918;
  if ((DAT_028b7918 == (undefined8 *)0x0) || (DAT_028b7921 == '\0')) {
    FUN_00e8cb50();
    lVar3 = DAT_027ef210;
    if (DAT_028b7918 == (undefined8 *)0x0) {
      if (DAT_027ef210 != 0) {
        FUN_00d50b00();
      }
      FUN_01cfb480();
      if (DAT_028b7918 != local_38) {
        puVar4 = DAT_028b7918;
        if (local_30 == '\0') {
          if (local_38 != (undefined8 *)0x0) {
            FUN_00d50b00();
            puVar4 = DAT_028b7918;
          }
        }
        else {
          local_30 = '\0';
        }
        DAT_028b7918 = local_38;
        if (puVar4 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
      }
      if ((local_38 != (undefined8 *)0x0) && (DAT_028b7920 == '\0')) {
        DAT_028b7920 = '\x01';
        FUN_00e8cb90();
      }
      if ((local_30 != '\0') && (local_38 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if (DAT_028b7918 == (undefined8 *)0x0) {
        puVar4 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar4 = &DAT_026792c0;
        puVar4[5] = 0;
        *(undefined8 *)((longlong)puVar4 + 0xc) = 0;
        *(undefined8 *)((longlong)puVar4 + 0x14) = 0;
        *(undefined8 *)((longlong)puVar4 + 0x19) = 0;
        FUN_00d500e0();
        if ((*(float *)(puVar4 + 2) != _DAT_0241febc) ||
           (NAN(*(float *)(puVar4 + 2)) || NAN(_DAT_0241febc))) {
          *(undefined4 *)(puVar4 + 2) = 0x3f2aaa3b;
          *(undefined1 *)((longlong)puVar4 + 0xe) = 0xaa;
        }
        if ((*(float *)((longlong)puVar4 + 0x14) != _DAT_0241febc) ||
           (NAN(*(float *)((longlong)puVar4 + 0x14)) || NAN(_DAT_0241febc))) {
          *(undefined4 *)((longlong)puVar4 + 0x14) = 0x3f2aaa3b;
          *(undefined1 *)((longlong)puVar4 + 0xd) = 0xaa;
        }
        if ((*(float *)(puVar4 + 3) != _DAT_0241febc) ||
           (NAN(*(float *)(puVar4 + 3)) || NAN(_DAT_0241febc))) {
          *(undefined4 *)(puVar4 + 3) = 0x3f2aaa3b;
          *(undefined1 *)((longlong)puVar4 + 0xc) = 0xaa;
        }
        if (DAT_028b7918 == puVar4) {
          bVar2 = false;
          bVar1 = false;
        }
        else {
          bVar2 = true;
          bVar1 = true;
          bVar5 = DAT_028b7918 != (undefined8 *)0x0;
          DAT_028b7918 = puVar4;
          if (bVar5) {
            FUN_00d50b20();
          }
        }
        if (DAT_028b7920 == '\0') {
          DAT_028b7920 = '\x01';
          FUN_00e8cb90();
          bVar1 = bVar2;
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
      }
      DAT_028b7921 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b7921 = '\x01';
      FUN_00e8cb70();
    }
    puVar4 = DAT_028b7918;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (puVar4 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_01cfc2fe;
    }
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  FUN_00d50b00();
LAB_01cfc2fe:
  *unaff_RDI = puVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


