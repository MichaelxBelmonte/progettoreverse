// Function: FUN_00930bc8
// Address: 00930bc8
// Size: 502 bytes
// Class: GNString


void FUN_00930bc8(undefined8 param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  longlong unaff_RSI;
  longlong lVar2;
  longlong unaff_RDI;
  undefined1 local_34 [4];
  
  param_2[1] = *param_2;
  if ((*(byte *)(unaff_RSI + 8) & 1) == 0) {
    lVar2 = unaff_RSI + 9;
    uVar1 = (ulonglong)(*(byte *)(unaff_RSI + 8) >> 1);
  }
  else {
    uVar1 = *(ulonglong *)(unaff_RSI + 0x10);
    lVar2 = *(longlong *)(unaff_RSI + 0x18);
  }
  FUN_0093838c(param_1,uVar1 + lVar2);
  FUN_00938486(*(undefined8 *)(unaff_RSI + 0x28),*(undefined8 *)(unaff_RSI + 0x20));
  FUN_00938486(*(undefined8 *)(unaff_RSI + 0x40),*(undefined8 *)(unaff_RSI + 0x38));
  FUN_009740dc();
  FUN_00a14dd0(&stack0xffffffffffffffd0,local_34);
  FUN_009740dc();
  FUN_00a14dd0(&stack0xffffffffffffffd0,local_34);
  FUN_009740dc();
  FUN_00a14dd0(&stack0xffffffffffffffd0,local_34);
  FUN_009740dc();
  FUN_00a14dd0(&stack0xffffffffffffffd0,local_34);
  FUN_009740dc();
  FUN_00a14dd0(&stack0xffffffffffffffd0,local_34);
  if ((*(byte *)(unaff_RDI + 8) & 1) == 0) {
    lVar2 = unaff_RDI + 9;
    uVar1 = (ulonglong)(*(byte *)(unaff_RDI + 8) >> 1);
  }
  else {
    uVar1 = *(ulonglong *)(unaff_RDI + 0x10);
    lVar2 = *(longlong *)(unaff_RDI + 0x18);
  }
  FUN_00938664(uVar1 + lVar2);
  FUN_00938486(*(undefined8 *)(unaff_RDI + 0x28),*(undefined8 *)(unaff_RDI + 0x20));
  FUN_00938486(*(undefined8 *)(unaff_RDI + 0x40),*(undefined8 *)(unaff_RDI + 0x38));
  FUN_00938486(*(undefined8 *)(unaff_RDI + 0x58),*(undefined8 *)(unaff_RDI + 0x50));
  FUN_009740dc();
  FUN_00a14dd0(&stack0xffffffffffffffd0,local_34);
  FUN_009740dc();
  FUN_00a14dd0(&stack0xffffffffffffffd0,local_34);
  FUN_009740dc();
  FUN_00a14dd0(&stack0xffffffffffffffd0,local_34);
  return;
}


