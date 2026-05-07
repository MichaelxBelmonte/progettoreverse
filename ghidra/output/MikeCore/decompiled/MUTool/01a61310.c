// Function: FUN_01a61310
// Address: 01a61310
// Size: 602 bytes
// Class: MUTool


/* WARNING: Removing unreachable block (ram,0x01a61409) */
/* WARNING: Removing unreachable block (ram,0x01a61412) */
/* WARNING: Removing unreachable block (ram,0x01a61441) */
/* WARNING: Removing unreachable block (ram,0x01a6144a) */

void FUN_01a61310(void)

{
  undefined8 *unaff_RSI;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  longlong local_38;
  char local_30;
  
  FUN_01cfcdc0(DAT_02390124,DAT_0239011c,DAT_02394288,DAT_0239011c);
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  FUN_01d488d0();
  if (local_38 != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d48b40(DAT_023908d8);
  uVar1 = FUN_01a5ffc0();
  uVar2 = FUN_01a608f0();
  uVar3 = FUN_01e437f0(uVar1);
  uVar6 = (undefined4)((ulonglong)uVar3 >> 0x20);
  uVar4 = FUN_01e437f0(uVar2);
  fVar7 = (float)uVar4;
  fVar5 = (fVar7 - (float)uVar3) * DAT_02390118 + fVar7;
  uVar1 = extraout_XMM0_Dd;
  uVar2 = extraout_XMM0_Dc;
  (**(code **)(*(longlong *)*unaff_RSI + 0x4e0))();
  (**(code **)(*(longlong *)*unaff_RSI + 0x4f8))
            (fVar5,uVar6,fVar5,(int)((ulonglong)uVar4 >> 0x20),uVar6,uVar1,fVar7,uVar2);
  (**(code **)(*(longlong *)*unaff_RSI + 0x520))();
  FUN_01cfbee0(DAT_02390124,DAT_02390124,0);
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  FUN_01d488d0();
  if (local_38 != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d48b40(DAT_02390124);
  (**(code **)(*(longlong *)*unaff_RSI + 0x520))();
  return;
}


