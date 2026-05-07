// Function: FUN_01982510
// Address: 01982510
// Size: 1698 bytes
// Class: MUSpectrumShaper


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01982510(undefined8 param_1,undefined8 param_2,uint param_3)

{
  longlong *plVar1;
  bool bVar2;
  bool bVar3;
  undefined8 *puVar4;
  int in_EDX;
  undefined8 *unaff_RSI;
  bool bVar5;
  float fVar6;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  
  fVar6 = (float)((ulonglong)param_2 >> 0x20);
  if ((DAT_028b0f08 == (undefined8 *)0x0) || (DAT_028b0f11 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028b0f08 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &DAT_02680400;
      *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
      puVar4[6] = 0;
      puVar4[7] = 0;
      *(undefined8 *)((longlong)puVar4 + 0x39) = 0;
      *(undefined8 *)((longlong)puVar4 + 0x41) = 0;
      (*DAT_02680418)();
      if (DAT_028b0f08 == puVar4) {
        bVar3 = false;
        bVar2 = false;
      }
      else {
        bVar3 = true;
        bVar2 = true;
        bVar5 = DAT_028b0f08 != (undefined8 *)0x0;
        DAT_028b0f08 = puVar4;
        if (bVar5) {
          FUN_00d50b20();
        }
      }
      if (DAT_028b0f10 == '\0') {
        DAT_028b0f10 = '\x01';
        FUN_00e8cb90();
        bVar2 = bVar3;
      }
      if (!bVar2) {
        FUN_00d50b20();
      }
      FUN_01d39400(0,0);
      FUN_01d38ba0(DAT_023b1614,0);
      fVar6 = 0.0;
      FUN_01d38ba0(0,DAT_02390d2c);
      FUN_01d38b10();
      DAT_028b0f11 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b0f11 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((DAT_028b0f18 == (undefined8 *)0x0) || (DAT_028b0f21 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028b0f18 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &DAT_02680400;
      *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
      puVar4[6] = 0;
      puVar4[7] = 0;
      *(undefined8 *)((longlong)puVar4 + 0x39) = 0;
      *(undefined8 *)((longlong)puVar4 + 0x41) = 0;
      (*DAT_02680418)();
      if (DAT_028b0f18 == puVar4) {
        bVar3 = false;
        bVar2 = false;
      }
      else {
        bVar3 = true;
        bVar2 = true;
        bVar5 = DAT_028b0f18 != (undefined8 *)0x0;
        DAT_028b0f18 = puVar4;
        if (bVar5) {
          FUN_00d50b20();
        }
      }
      if (DAT_028b0f20 == '\0') {
        DAT_028b0f20 = '\x01';
        FUN_00e8cb90();
        bVar2 = bVar3;
      }
      if (!bVar2) {
        FUN_00d50b20();
      }
      FUN_01d39400(0,0);
      FUN_01d38ba0(DAT_023b1614,0);
      fVar6 = 0.0;
      FUN_01d38ba0(0,DAT_023b1614);
      FUN_01d38b10();
      DAT_028b0f21 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b0f21 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((DAT_028b0f28 == (undefined8 *)0x0) || (DAT_028b0f31 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028b0f28 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &DAT_02680400;
      *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
      puVar4[6] = 0;
      puVar4[7] = 0;
      *(undefined8 *)((longlong)puVar4 + 0x39) = 0;
      *(undefined8 *)((longlong)puVar4 + 0x41) = 0;
      (*DAT_02680418)();
      if (DAT_028b0f28 == puVar4) {
        bVar3 = false;
        bVar2 = false;
      }
      else {
        bVar3 = true;
        bVar2 = true;
        bVar5 = DAT_028b0f28 != (undefined8 *)0x0;
        DAT_028b0f28 = puVar4;
        if (bVar5) {
          FUN_00d50b20();
        }
      }
      if (DAT_028b0f30 == '\0') {
        DAT_028b0f30 = '\x01';
        FUN_00e8cb90();
        bVar2 = bVar3;
      }
      if (!bVar2) {
        FUN_00d50b20();
      }
      FUN_01d39400(0,0);
      FUN_01d38ba0(DAT_02390d2c,0);
      fVar6 = 0.0;
      FUN_01d38ba0(0,DAT_02390d2c);
      FUN_01d38b10();
      DAT_028b0f31 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b0f31 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((DAT_028b0f38 == (undefined8 *)0x0) || (DAT_028b0f41 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028b0f38 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &DAT_02680400;
      *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
      puVar4[6] = 0;
      puVar4[7] = 0;
      *(undefined8 *)((longlong)puVar4 + 0x39) = 0;
      *(undefined8 *)((longlong)puVar4 + 0x41) = 0;
      (*DAT_02680418)();
      if (DAT_028b0f38 == puVar4) {
        bVar3 = false;
        bVar2 = false;
      }
      else {
        bVar3 = true;
        bVar2 = true;
        bVar5 = DAT_028b0f38 != (undefined8 *)0x0;
        DAT_028b0f38 = puVar4;
        if (bVar5) {
          FUN_00d50b20();
        }
      }
      if (DAT_028b0f40 == '\0') {
        DAT_028b0f40 = '\x01';
        FUN_00e8cb90();
        bVar2 = bVar3;
      }
      if (!bVar2) {
        FUN_00d50b20();
      }
      FUN_01d39400(0,0);
      FUN_01d38ba0(DAT_02390d2c,0);
      fVar6 = 0.0;
      FUN_01d38ba0(0,DAT_023b1614);
      FUN_01d38b10();
      DAT_028b0f41 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b0f41 = '\x01';
      FUN_00e8cb70();
    }
  }
  FUN_01e3f820();
  FUN_01e3f820();
  fVar6 = fVar6 + extraout_XMM0_Db_00 + DAT_02390d00;
  if (in_EDX == 0) {
    (**(code **)(*(longlong *)*unaff_RSI + 0x370))(param_3,extraout_XMM0_Db);
    puVar4 = DAT_028b0f08;
    plVar1 = (longlong *)*unaff_RSI;
    if (DAT_028b0f08 != (undefined8 *)0x0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar1 + 0x3a0))();
    if (puVar4 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    (**(code **)(*(longlong *)*unaff_RSI + 0x370))(0,fVar6 - extraout_XMM0_Db);
    puVar4 = DAT_028b0f18;
    plVar1 = (longlong *)*unaff_RSI;
    if (DAT_028b0f18 != (undefined8 *)0x0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar1 + 0x3a0))();
    if (puVar4 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  else {
    if (in_EDX != 2) {
      return;
    }
    (**(code **)(*(longlong *)*unaff_RSI + 0x370))(param_3,extraout_XMM0_Db);
    puVar4 = DAT_028b0f28;
    plVar1 = (longlong *)*unaff_RSI;
    if (DAT_028b0f28 != (undefined8 *)0x0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar1 + 0x3a0))();
    if (puVar4 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    (**(code **)(*(longlong *)*unaff_RSI + 0x370))(0,fVar6 - extraout_XMM0_Db);
    puVar4 = DAT_028b0f38;
    plVar1 = (longlong *)*unaff_RSI;
    if (DAT_028b0f38 != (undefined8 *)0x0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar1 + 0x3a0))();
    if (puVar4 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x370))
            (param_3 ^ _DAT_023945e0,(uint)fVar6 ^ _DAT_023945e0);
  return;
}


