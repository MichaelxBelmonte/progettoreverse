// Function: FUN_01ce4ab0
// Address: 01ce4ab0
// Size: 603 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x01ce4b07) */
/* WARNING: Removing unreachable block (ram,0x01ce4b10) */
/* WARNING: Removing unreachable block (ram,0x01ce4b6e) */
/* WARNING: Removing unreachable block (ram,0x01ce4b77) */

void FUN_01ce4ab0(undefined4 param_1,float param_2)

{
  float fVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined1 auVar5 [16];
  longlong *local_78;
  char local_70;
  longlong local_48;
  char local_40;
  undefined4 uVar4;
  
  lVar3 = unaff_RDI[0x3e];
  *(undefined4 *)(unaff_RDI + 0x3e) = 0x3f800000;
  FUN_01d91a10();
  *(int *)(unaff_RDI + 0x3e) = (int)lVar3;
  if ((char)unaff_RDI[0x40] != '\0') {
    *(float *)(unaff_RDI + 0x23) =
         *(float *)(unaff_RDI + 0x23) - *(float *)((longlong)unaff_RDI + 0x114);
  }
  FUN_01d91a10(param_1);
  if ((char)unaff_RDI[0x40] != '\0') {
    *(float *)(unaff_RDI + 0x23) =
         *(float *)((longlong)unaff_RDI + 0x114) + *(float *)(unaff_RDI + 0x23);
  }
  uVar2 = FUN_01e3f820();
  fVar1 = *(float *)(unaff_RDI + 0x23);
  lVar3 = unaff_RDI[0x40];
  FUN_01d48370();
  (**(code **)(*unaff_RDI + 0x640))();
  (**(code **)(*local_78 + 0x3a0))();
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  FUN_01d488d0();
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  param_2 = fVar1 - param_2;
  auVar5._8_4_ = extraout_XMM0_Dc;
  auVar5._0_8_ = uVar2;
  auVar5._12_4_ = extraout_XMM0_Dd;
  auVar5 = insertps(auVar5,ZEXT416((uint)param_2),0x10);
  uVar4 = auVar5._0_4_;
  if ((char)lVar3 == '\0') {
    auVar5 = insertps(auVar5,ZEXT416((uint)(fVar1 + param_2)),0x10);
    uVar4 = auVar5._0_4_;
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x368))(uVar4);
  (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
  (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
  FUN_01d48390();
  return;
}


