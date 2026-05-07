// Function: FUN_01beaed0
// Address: 01beaed0
// Size: 501 bytes
// Class: MUHorizontalOverviewScroller


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01beaed0(void)

{
  longlong *unaff_RDI;
  undefined8 uVar1;
  undefined1 in_XMM1 [16];
  undefined1 auVar2 [16];
  longlong *local_38;
  char local_30;
  longlong *local_28;
  char local_20;
  
  if (unaff_RDI[0x36] != 0) {
    FUN_01beab60();
    if ((local_20 == '\0') && (local_28 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    (**(code **)(*local_28 + 0x4d8))();
    if ((int)unaff_RDI[0x3d] == 0) {
      uVar1 = FUN_01e3f820();
      auVar2 = blendps(in_XMM1,_DAT_0241e210,0xd);
      (**(code **)(*local_28 + 0x4d0))(uVar1,auVar2._0_8_);
      FUN_01d97870();
      FUN_01cf9ad0();
      if ((local_20 != '\0') && (local_28 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d97870();
      FUN_01cf3f20();
      if ((local_20 != '\0') && (local_28 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*unaff_RDI + 0x9a0))();
      FUN_01f27fe0();
      (**(code **)(*local_38 + 0x450))();
      FUN_01dce540();
      if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_20 != '\0') && (local_28 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_01e3f820();
      (**(code **)(*local_28 + 0x4d0))();
      FUN_01d97870();
      FUN_01cf9ad0();
      if ((local_20 != '\0') && (local_28 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d97870();
      FUN_01cf3f20();
      if ((local_20 != '\0') && (local_28 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*unaff_RDI + 0x9a0))();
      FUN_01dce540();
      if ((local_20 != '\0') && (local_28 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*local_28 + 0x928))();
    FUN_00d50b20();
  }
  return;
}


