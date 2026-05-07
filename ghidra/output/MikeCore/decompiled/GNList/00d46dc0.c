// Function: FUN_00d46dc0
// Address: 00d46dc0
// Size: 606 bytes
// Class: GNList


void FUN_00d46dc0(float param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 *unaff_RDI;
  bool bVar3;
  bool bVar4;
  
  if ((param_1 != 0.0) || (NAN(param_1))) {
    if ((param_1 != DAT_02390124) || (NAN(param_1) || NAN(DAT_02390124))) {
      puVar2 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar2 = &DAT_02575d80;
      FUN_00d500e0();
      *(undefined1 *)((longlong)puVar2 + 0xc) = 0x66;
      *(float *)(puVar2 + 2) = param_1;
      goto LAB_00d46fab;
    }
    if ((DAT_028a77a0 != (undefined8 *)0x0) && (puVar2 = DAT_028a77a0, DAT_028a77a9 != '\0'))
    goto LAB_00d46e38;
    FUN_00e8cb50();
    if (DAT_028a77a0 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar2 = &DAT_02575d80;
      FUN_00d500e0();
      if (DAT_028a77a0 == puVar2) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
        bVar4 = DAT_028a77a0 != (undefined8 *)0x0;
        DAT_028a77a0 = puVar2;
        if (bVar4) {
          FUN_00d50b20();
        }
      }
      if (DAT_028a77a8 == '\0') {
        DAT_028a77a8 = '\x01';
        FUN_00e8cb90();
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      puVar2 = DAT_028a77a0;
      *(undefined1 *)((longlong)DAT_028a77a0 + 0xc) = 0x66;
      *(undefined4 *)(puVar2 + 2) = 0x3f800000;
      DAT_028a77a9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028a77a9 = '\x01';
      FUN_00e8cb70();
    }
    puVar2 = DAT_028a77a0;
    *(undefined1 *)(unaff_RDI + 1) = 0;
joined_r0x00d47018:
    if (puVar2 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)0x0;
      goto LAB_00d46fab;
    }
  }
  else {
    if ((DAT_028a7790 == (undefined8 *)0x0) || (puVar2 = DAT_028a7790, DAT_028a7799 == '\0')) {
      FUN_00e8cb50();
      if (DAT_028a7790 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar2 = &DAT_02575d80;
        FUN_00d500e0();
        if (DAT_028a7790 == puVar2) {
          bVar4 = false;
          bVar1 = false;
        }
        else {
          bVar4 = true;
          bVar1 = true;
          bVar3 = DAT_028a7790 != (undefined8 *)0x0;
          DAT_028a7790 = puVar2;
          if (bVar3) {
            FUN_00d50b20();
          }
        }
        if (DAT_028a7798 == '\0') {
          DAT_028a7798 = '\x01';
          FUN_00e8cb90();
          bVar1 = bVar4;
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
        puVar2 = DAT_028a7790;
        *(undefined1 *)((longlong)DAT_028a7790 + 0xc) = 0x66;
        *(undefined4 *)(puVar2 + 2) = 0;
        DAT_028a7799 = '\x01';
        FUN_00e8cb70();
      }
      else {
        DAT_028a7799 = '\x01';
        FUN_00e8cb70();
      }
      puVar2 = DAT_028a7790;
      *(undefined1 *)(unaff_RDI + 1) = 0;
      goto joined_r0x00d47018;
    }
LAB_00d46e38:
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  FUN_00d50b00();
LAB_00d46fab:
  *unaff_RDI = puVar2;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


