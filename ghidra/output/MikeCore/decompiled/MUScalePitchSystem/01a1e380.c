// Function: FUN_01a1e380
// Address: 01a1e380
// Size: 534 bytes
// Class: MUScalePitchSystem


void FUN_01a1e380(void)

{
  bool bVar1;
  bool bVar2;
  longlong *plVar3;
  undefined8 *unaff_RDI;
  bool bVar4;
  undefined1 local_e0 [112];
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  plVar3 = DAT_028b2a00;
  if ((DAT_028b2a00 == (longlong *)0x0) || (DAT_028b2a09 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028b2a00 == (longlong *)0x0) {
      plVar3 = (longlong *)FUN_00e8fc40();
      FUN_001b9f00();
      (**(code **)(*plVar3 + 0x18))();
      if (DAT_028b2a00 == plVar3) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar4 = DAT_028b2a00 != (longlong *)0x0;
        DAT_028b2a00 = plVar3;
        if (bVar4) {
          FUN_00d50b20();
        }
      }
      if (DAT_028b2a08 == '\0') {
        DAT_028b2a08 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      FUN_01cfc6a0(DAT_0241c6cc);
      local_30 = 0;
      FUN_01cfc6a0(DAT_02390120);
      local_2c = 0x3dcccccd;
      FUN_01cfc6a0(DAT_02390120);
      local_28 = 0x3f666666;
      FUN_01cfc6a0(DAT_023b3888);
      local_24 = 0x3f800000;
      FUN_01ae52c0(&local_50,&local_30,&local_2c,&local_40);
      FUN_01f7ba60(0,local_e0);
      FUN_019fe220();
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      DAT_028b2a09 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b2a09 = '\x01';
      FUN_00e8cb70();
    }
    plVar3 = DAT_028b2a00;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (plVar3 == (longlong *)0x0) {
      plVar3 = (longlong *)0x0;
      goto LAB_01a1e579;
    }
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  FUN_00d50b00();
LAB_01a1e579:
  *unaff_RDI = plVar3;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


