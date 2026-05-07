// Function: FUN_00aaf336
// Address: 00aaf336
// Size: 970 bytes
// Class: GNString


int FUN_00aaf336(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  int local_38;
  short local_32;
  
  FUN_0088d1d0();
  uVar14 = 0;
  uVar15 = 0;
  uVar16 = 0;
  iVar1 = (**(code **)(*unaff_RSI + 200))();
  lVar6 = unaff_RDI + 0xa8;
  lVar7 = unaff_RDI + 0x90;
  lVar8 = unaff_RDI + 0x78;
  lVar9 = unaff_RDI + 0x60;
  lVar10 = unaff_RDI + 0x48;
  lVar11 = unaff_RDI + 0x30;
  lVar12 = unaff_RDI + 0x28;
  lVar13 = unaff_RDI + 8;
  while( true ) {
    psVar5 = &local_32;
    iVar2 = (**(code **)(*unaff_RSI + 0xd8))
                      (psVar5,&local_38,param_3,param_4,lVar6,lVar7,lVar8,lVar9,lVar10,lVar11,lVar12
                       ,lVar13,uVar14,uVar15,uVar16);
    if (local_38 == 0) break;
    switch(local_32) {
    case 1:
      if (local_38 == 0xc) {
        iVar3 = FUN_00aa9ade();
        *(undefined1 *)(unaff_RDI + 0x108) = 1;
      }
      else {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
      break;
    case 2:
      if (local_38 == 2) {
        iVar3 = (**(code **)(*unaff_RSI + 0x118))();
        *(undefined1 *)(unaff_RDI + 0x109) = 1;
      }
      else {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
      break;
    default:
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0xb:
      if (local_38 == 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x150))();
        *(undefined1 *)(unaff_RDI + 0x10a) = 1;
      }
      else {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
      break;
    case 0xc:
      if (local_38 == 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x150))();
        *(undefined1 *)(unaff_RDI + 0x10b) = 1;
      }
      else {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
      break;
    case 0xd:
      if (local_38 == 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x150))();
        *(undefined1 *)(unaff_RDI + 0x10c) = 1;
      }
      else {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
      break;
    case 0xe:
      if (local_38 == 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x150))();
        *(undefined1 *)(unaff_RDI + 0x10d) = 1;
      }
      else {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
      break;
    case 0xf:
      if (local_38 == 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x150))();
        *(undefined1 *)(unaff_RDI + 0x10e) = 1;
      }
      else {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
      break;
    case 0x10:
      if (local_38 == 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x150))();
        *(undefined1 *)(unaff_RDI + 0x10f) = 1;
      }
      else {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
      break;
    case 0x11:
      if (local_38 == 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x150))();
        *(undefined1 *)(unaff_RDI + 0x110) = 1;
      }
      else {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
      break;
    case 0x12:
      if (local_38 == 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x150))();
        *(undefined1 *)(unaff_RDI + 0x111) = 1;
      }
      else {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
      break;
    case 0x13:
      if (local_38 == 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x150))();
        *(undefined1 *)(unaff_RDI + 0x112) = 1;
      }
      else {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
    }
    iVar4 = (**(code **)(*unaff_RSI + 0xe0))();
    iVar1 = iVar3 + iVar2 + iVar1 + iVar4;
  }
  iVar3 = (**(code **)(*unaff_RSI + 0xd0))();
  if ((uVar14 & 1) != 0) {
    operator_delete(psVar5);
  }
  *(int *)(unaff_RSI + 3) = (int)unaff_RSI[3] + -1;
  return iVar3 + iVar2 + iVar1;
}


