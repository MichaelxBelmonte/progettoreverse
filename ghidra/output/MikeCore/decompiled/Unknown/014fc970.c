// Function: FUN_014fc970
// Address: 014fc970
// Size: 633 bytes
// Class: Unknown
// String references:
//   "PitchSystem %@ %@ (A=%.0f Hz):\n"
//   "%@ \t:%.0f cent (%.0f Hz)\n"


void FUN_014fc970(void)

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  undefined4 uVar5;
  undefined4 extraout_XMM0_Da;
  float fVar6;
  undefined1 local_a8 [8];
  longlong local_98;
  char local_90;
  undefined8 *local_78;
  undefined4 local_70;
  longlong local_68;
  char local_60;
  undefined4 local_58;
  float fStack_54;
  char local_50;
  undefined4 local_48;
  longlong local_40;
  char local_38;
  
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_025795a8;
  uVar5 = (*DAT_025795c0)();
  (**(code **)(*unaff_RSI + 0x428))(uVar5,(int)unaff_RSI[0xb]);
  (**(code **)(*unaff_RSI + 0x458))();
  FUN_00083ea0(3,local_a8);
  local_78 = (undefined8 *)&DAT_025e8cb0;
  local_48 = *(undefined4 *)((longlong)unaff_RSI + 0x5c);
  FUN_00d94d80(local_48,&local_78);
  local_78 = (undefined8 *)&DAT_0253d630;
  if ((local_50 != '\0') && (CONCAT44(fStack_54,local_58) != 0)) {
    FUN_00d50b20();
  }
  local_78 = &DAT_024c5048;
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  iVar4 = 0;
  do {
    cVar2 = (**(code **)(*unaff_RSI + 0x3b8))();
    if (cVar2 != '\0') {
      (**(code **)(*unaff_RSI + 0x460))(extraout_XMM0_Da,iVar4);
      uVar5 = (**(code **)(*unaff_RSI + 0x3a0))();
      fVar6 = (float)(**(code **)(*unaff_RSI + 0x3a0))();
      fVar6 = (float)_exp2f(fVar6 * DAT_023941f4);
      lVar1 = local_40;
      fVar6 = fVar6 * DAT_023941f8;
      local_70 = 3;
      local_78 = &DAT_024c5048;
      local_60 = 0;
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      local_68 = lVar1;
      local_60 = '\x01';
      local_78 = (undefined8 *)&DAT_025e8ce8;
      local_58 = uVar5;
      fStack_54 = fVar6;
      FUN_00d94d80(fVar6,&local_78);
      local_78 = &DAT_024c5048;
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0x7f);
  FUN_00d8c7d0();
  *unaff_RDI = puVar3;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


