// Function: FUN_012a6fc0
// Address: 012a6fc0
// Size: 603 bytes
// Class: MUPulseAssignmentTarget


void FUN_012a6fc0(void)

{
  uint uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong unaff_RDI;
  double dVar5;
  double extraout_XMM0_Qa;
  
  uVar1 = FUN_00b33120();
  dVar5 = (double)FUN_00b335d0();
  iVar4 = 0x1000;
  if (DAT_0240d188 <= dVar5) {
    iVar4 = (uint)(DAT_0240d180 <= dVar5) * 0x2000 + 0x2000;
  }
  *(int *)(unaff_RDI + 0x158) = iVar4;
  *(int *)(unaff_RDI + 0x15c) = iVar4;
  uVar2 = FUN_00e83010();
  *(undefined8 *)(unaff_RDI + 0x150) = uVar2;
  uVar2 = FUN_00e83010();
  *(undefined8 *)(unaff_RDI + 0x1e0) = uVar2;
  uVar2 = FUN_00e83010();
  *(undefined8 *)(unaff_RDI + 0x1e8) = uVar2;
  uVar2 = FUN_00e83010();
  *(undefined8 *)(unaff_RDI + 0x298) = uVar2;
  uVar2 = FUN_00e83010();
  *(undefined8 *)(unaff_RDI + 0x170) = uVar2;
  uVar2 = FUN_00e83010();
  *(undefined8 *)(unaff_RDI + 0x178) = uVar2;
  uVar2 = FUN_00e83010();
  *(undefined8 *)(unaff_RDI + 0x180) = uVar2;
  uVar2 = FUN_00e83010();
  *(undefined8 *)(unaff_RDI + 0x188) = uVar2;
  uVar2 = FUN_00e83010();
  *(undefined8 *)(unaff_RDI + 0x198) = uVar2;
  uVar2 = FUN_00e83010();
  *(undefined8 *)(unaff_RDI + 0x1a0) = uVar2;
  uVar2 = FUN_00e83010();
  *(undefined8 *)(unaff_RDI + 400) = uVar2;
  if (0 < (int)uVar1) {
    uVar3 = 0;
    do {
      *(undefined8 *)(*(longlong *)(unaff_RDI + 0x150) + uVar3 * 8) = 0;
      *(undefined8 *)(*(longlong *)(unaff_RDI + 0x1e0) + uVar3 * 8) = 0;
      *(undefined8 *)(*(longlong *)(unaff_RDI + 0x1e8) + uVar3 * 8) = 0;
      *(undefined8 *)(*(longlong *)(unaff_RDI + 0x170) + uVar3 * 8) = 0;
      *(undefined8 *)(*(longlong *)(unaff_RDI + 0x178) + uVar3 * 8) = 0;
      *(undefined8 *)(*(longlong *)(unaff_RDI + 0x180) + uVar3 * 8) = 0;
      *(undefined8 *)(*(longlong *)(unaff_RDI + 0x188) + uVar3 * 8) = 0;
      *(undefined8 *)(*(longlong *)(unaff_RDI + 0x198) + uVar3 * 8) = 0;
      *(undefined8 *)(*(longlong *)(unaff_RDI + 0x1a0) + uVar3 * 8) = 0;
      *(undefined8 *)(*(longlong *)(unaff_RDI + 400) + uVar3 * 8) = 0;
      *(undefined8 *)(*(longlong *)(unaff_RDI + 0x298) + uVar3 * 8) = 0;
      uVar3 = uVar3 + 1;
    } while (uVar1 != uVar3);
  }
  uVar2 = FUN_00e83010();
  *(undefined8 *)(unaff_RDI + 0x1f0) = uVar2;
  uVar2 = FUN_00e83020();
  *(undefined8 *)(unaff_RDI + 0x1f8) = uVar2;
  uVar2 = FUN_00e83010();
  *(undefined8 *)(unaff_RDI + 0x200) = uVar2;
  if (0 < (int)uVar1) {
    dVar5 = dVar5 * DAT_0240d2e8;
    uVar3 = 0;
    do {
      uVar2 = FUN_00e83010(dVar5);
      *(undefined8 *)(*(longlong *)(unaff_RDI + 0x200) + uVar3 * 8) = uVar2;
      uVar3 = uVar3 + 1;
      dVar5 = extraout_XMM0_Qa;
    } while (uVar1 != uVar3);
  }
  return;
}


